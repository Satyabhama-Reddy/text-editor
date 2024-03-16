struct dll               
{
	char s[200];                    
	int index;
	struct dll*prev,*next;         
};
                  
void addline(struct dll *temp);
void inp(void);

void editcommands(void); 
void edit(void);

void addnode(char t[],struct dll *q);
void delnode(struct dll *p);
void editnode(struct dll *p);
void clealist(void);
void printlist(void);

void save(void);
void closer(void);