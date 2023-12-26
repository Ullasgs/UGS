temp = head;
    while(temp->link!=NULL){
        temp=temp->link;
    }
    temp->link = new;