#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

void read_process_name_from_ID(pid_t pid, char **process_name){

    
    size_t path_length = snprintf(NULL,0,"/proc/%d/cmdline",pid) + 1;
    char *path = (char *)malloc(path_length);
    if (path == NULL){
        printf("memory allocation fail \n");
        return;
    }

    snprintf(path,path_length,"/proc/%d/cmdline",pid);

    FILE *file = fopen(path,"r");
    if (file ==NULL){
        printf("open file at the path %s fail \n",path);
        free(path);
        return;
    }

    *process_name=(char *)malloc(50);

    if (fscanf(file,"%49s",*process_name) != 1) {
        
        //printf("process with ID %d is with no name",pid);
        sprintf(*process_name,"with no name");
    }    
    fclose(file);
    free(path);

    return;
}


// int main(){

//     char *process_name = NULL;
//     pid_t pid;
//     char again ='y';
    

//     printf("please enter a process ID: ");
//     while (again == 'y')
//     {
//         /* code */
//         scanf("%d \n",&pid);

//         //read_process_name_from_ID(pid,**process_name);
//         read_process_name_from_ID(pid,&process_name);

//         printf("process with ID %d is %s",pid,process_name);

//         //free(*process_name);
//         free(process_name);

//         printf("do you want to continue to check: \n");
//         while (1){
            
//             scanf("%s",&again);
//             if ((again != 'n') & (again != 'y')){
//                 printf("please enter y or n , thank! \n");
//             } else break;
//         }

//     }
    
    

//     return 0;

// }
