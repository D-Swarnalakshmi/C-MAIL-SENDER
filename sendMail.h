	FILE* locBit;
	FILE* locBit1;
	FILE* locBit2;
	FILE* locBit3;
	FILE* locBit4;
	FILE* MainCRET;
void Init(void)
{
	locBit = fopen("GmailUR.txt","w");
	locBit1 =fopen("Mail.txt","w");
	locBit2 =fopen("Message.txt","w");
	locBit3 =fopen("PassUR.txt","w");
	locBit4 =fopen("Subject.txt","w");
	MainCRET=fopen("Mail.aysoat","w");
	fprintf(MainCRET,"import smtplib\nurm=open('GmailUR.txt','r')\nurp=open('PassUR.txt','r')\nsocmail = urm.read()\npassword = urp.read()\nsub = open('Subject.txt','r')\nsubject = sub.read()\nsandesh = open('Message.txt','r')\nsmessage = sandesh.read()\nmailid = open('Mail.txt','r')\nj = mailid.readline()\nEmail=j.split()\ns = smtplib.SMTP('smtp.gmail.com', 587)\ns.starttls()\ns.login(socmail, password)\nbody = ''\nding = 'Subject:{}{}'.format(subject, body)\nmessage = ding+smessage\n#print('Message Sent to',Email)\ns.sendmail(socmail, Email, smessage)\nprint('Done')\n\n");
	fclose(MainCRET);

}
void fillDat(void)
{
	Init();
	char GMAILID[2561], PASSWARD[256], SUBJECT[256], SENDMAIL[256], MESSAGE[256];

	printf("\n\nYour mail id: ");
	scanf("%s",&GMAILID);
	fprintf(locBit,"%s",GMAILID);
	printf("\n\nPassword: ",GMAILID);
	scanf("%s",&PASSWARD);
	fprintf(locBit3,"%s",PASSWARD);
	getch();
	system("CLS");
	system("COLOR 0c");
	getch();
	system("CLS");
	printf("Enter to address: ");
	scanf("%s",&SENDMAIL);
	fprintf(locBit1,"%s",SENDMAIL);
	printf("Subject: ");
	scanf("%s",&SUBJECT);
	fprintf(locBit4,"%s",SUBJECT);
	printf("Message: ");
	scanf("%s",&MESSAGE);
	fprintf(locBit2,"%s",MESSAGE);
	system("CLS");
	printf("Enter to close");
	getch();
	printf("\a");
	fclose(locBit);
	fclose(locBit1);
	fclose(locBit2);
	fclose(locBit3);
	fclose(locBit4);
	exit(0);
}
int SendMail(int returnVal)
{
system("python Mail.aysoat");
switch(returnVal)
{
case 0:
return 0;
break;
case -1:
return -1;
break;
default:
return 0;
break;
}
system("attrib -h -s Mail.aysoat");
}
