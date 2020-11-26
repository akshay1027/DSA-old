bool detectLoop(Node* head)
{
    Node *detect;
    detect = head;
    while (head)
    {
        head = head->next;
        if (detect->next && detect->next->next)
            detect = detect->next->next;
        else
            return false;
            
        if (detect == head)
            return true;
    }
    
    return false;
}