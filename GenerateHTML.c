#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning (disable:4996)

void generateHTMLgrn()
{
	FILE* nf = fopen("indexgrn.html", "w");
	fputs("<html>\n", nf);
	fgets();
	if (fgets(str, 60, fp) != NULL) {
		/* writing content to stdout */
		puts(str);
	}

}


void generateHTMLT()
{
	FILE* nf = fopen("indexT.html","w");
	fputs("<html>\n", nf);
	fputs("<head>\n", nf);
	fputs("<title>\n", nf);
	fputs("</title>\n", nf);
	fputs("</head>\n", nf);
	fputs("<body>\n", nf);
	fputs("<table border=""1"">\n", nf);
	fputs("<tr>\n", nf);
	fputs("<td>1</td>\n", nf);
	fputs("<td>2</td>\n", nf);
	fputs("</tr>\n", nf);
	fputs("</table>\n", nf);
	for (int i = 0; i < 20; i++)
	{
		fputs("<img src=\"C:\\Users\\nyvl8\\source\\repos\\GenerateHTML\\johnwick.png\"/>\n", nf);
	}
	
	fputs("</body>\n", nf);
	fputs("</html>\n", nf);	
}
fclose();

int mainGenerateHTML()
{
	generateHTMLT();
	return 0;

}