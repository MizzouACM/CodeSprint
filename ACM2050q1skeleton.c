 /*Challenge
 * Write a program that prints out all the words in a string in reverse order
 * For this challenge, a word is defined to be anything delimited by whitespace
 * I.E. "Hello World!" Hello and World! are the two words. & the output should be World! Hello
 * Note, the program should preserve the same amount of white space
 * I.E. "h   i" is different from "h i"
 */
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

    #define MAX_LINE 100

    typedef struct list{
        char data[MAX_LINE + 1];
        struct list *next;
    }ListT;

    //Linked List Utility Functions
	/*Note the parameters and be sure to pass by ref and val when appropriate */
    void pop( ListT **head );
    void push( ListT **head, char *data );
	void popTail( ListT **head);
	void pushTail( ListT **head, char *data );
    void printList( ListT *head );

    int main ( void ){

	/* Variable Declarations, You can have as many as you'd like */
		/* do not change this assignment */
		const char *myString = "winner! the are You";
      
    
    printf("\nReverse the following string:\n\n%s \n\n", myString);

	/* Code for challenge goes here */
	

	
	
	
	
	
	/* End code for challenge */
    
    printf("\n\n\n");
     
        return 0;
    }



    void pop( ListT **head ){

        //Temp variable used for node deletion.
        ListT *temp = NULL;
		
		//Check to see if list is empty
		if( *head == NULL) return;

        //Set the temp variable equal to the head and the head equal to its .next field.
        temp = *head;
        *head = (*head)->next;

        //Print and free the previous head.
        printf("%s", temp->data);
        free(temp);

        return;
    }

    void push( ListT **head, char *data ){

        //Malloc space for the new node to be inserted.
        ListT * newNode = malloc(sizeof(struct list));

        //Copy data into the new node's data field, and set its .next field to NULL.
        strcpy(newNode->data, data);
        newNode->next = NULL;

        //If the list is empty, set the head equal to the new node.
        if( *head == NULL ){
            *head = newNode;
            return;
        }

        //Insert the new node into the front of the list.
        newNode->next = *head;
        *head = newNode;

        return;

    }
	
	void pushTail( ListT **head, char *data ){
		
		ListT * currentNode = ( *head );
		
		//Malloc space for the new node
		ListT * newNode = malloc(sizeof(struct list));
		
		//Copy data into th enew node's data feild and set its .next field to NULL
		strcpy(newNode->data, data);
		newNode->next = NULL;
		
		//If the list is empty, set the head equal to the new node.
		if( *head == NULL ){
			*head = newNode;
			return;
		}
		
		//Iterate to the end of the list
		//When the end is reached, append the new node
		while( currentNode->next != NULL ) 
			currentNode = currentNode->next;
			
		currentNode->next = newNode;
		
		return;

	}
	
	void popTail( ListT **head){
	
		//Temp variable used for node deletion & current variable for iteration.
        ListT * temp = NULL;
		ListT * currentNode = *head;
		ListT * previousNode = NULL;
		
		//If the list is empty
		if( *head == NULL ) return;
		
		//If the list consist of only the head
		if( (*head)->next == NULL ){
			printf("%s" ,(*head)->data);
			*head = NULL;
			return;
		}
		
		//Set previous to head since it was already checked
		//Set current to head->next
		previousNode = *head;
		currentNode = (*head)->next;
		
		
		//Iterate to the end of the list
		while( currentNode->next != NULL ){
			previousNode = currentNode;
			currentNode = currentNode->next;
		}
		
		//free the current node and set the previous .next field to NULL
		temp = currentNode;
		previousNode->next = NULL;
        printf("%s", temp->data);
        free(temp);
	
	}
	

    void printList( ListT *head ){

        while(head != NULL){
            printf("%s\n", head->data);
            head = head->next;
        }

        return;

    }