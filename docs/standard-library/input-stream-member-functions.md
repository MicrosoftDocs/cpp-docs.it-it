---
title: "Funzioni membro del flusso di input | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "flusso di input (oggetti)"
  - "flussi di input, funzioni membro"
ms.assetid: b4b9465d-0da9-4ccf-859d-72a68418982e
caps.latest.revision: 7
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Funzioni membro del flusso di input
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le funzioni membro flusso di input vengono utilizzate per l'input del disco.  Le funzioni membro includono:  
  
-   [La funzione open per flussi di input](#vclrftheopenfunctionforinputstreamsanchor11)  
  
-   [La funzione get](#vclrfthegetfunctionanchor12)  
  
-   [La funzione di getline](#vclrfthegetlinefunctionanchor13)  
  
-   [La funzione lettura](#vclrfthereadfunctionanchor14)  
  
-   [Le funzioni di tellg e di seekg](#vclrftheseekgandtellgfunctionsanchor7)  
  
-   [La funzione close per flussi di input](#vclrftheclosefunctionforinputstreamsanchor15)  
  
##  <a name="vclrftheopenfunctionforinputstreamsanchor11"></a> La funzione open per flussi di input  
 Se si utilizza un flusso del file di input \(ifstream\), è necessario associare il flusso con un file su disco specifico.  È possibile eseguire questa operazione nel costruttore, oppure utilizzare la funzione di **apri**.  In entrambi i casi, gli argomenti sono uguali.  
  
 In genere si specifica un flag di [ios\_base::openmode](../Topic/ios_base::openmode.md) quando si apre il file associato a un flusso di input \(predefinita è **ios::in**\).  Per un elenco di flag di **open\_mode**, vedere [La funzione open](#vclrftheopenfunctionforinputstreamsanchor11).  I contrassegni possono essere combinati con OR bit per bit \( &#124; operatore\).  
  
 Per leggere un file, è necessario utilizzare la funzione membro di **non riuscito** per determinare se esiste:  
  
```  
istream ifile( "FILENAME" );  
if ( ifile.fail() )  
// The file does not exist ...  
```  
  
##  <a name="vclrfthegetfunctionanchor12"></a> La funzione get  
 Funziona senza formato di funzione membro di **get** come operatore di **\>\>** con due eccezioni.  Innanzitutto, la funzione di **get** include spazi vuoti, mentre estrattore esclude spazi vuoti quando il flag di [skipws](../Topic/skipws.md) è impostato su \(impostazione predefinita\).  In secondo luogo, la funzione di **get** è meno probabile che un flusso di output associato \(`cout`, ad esempio per essere arrossitoe.  
  
 Una variazione della funzione di **get** specifica un indirizzo del buffer e il numero massimo di caratteri da leggere.  Ciò è utile per limitare il numero di caratteri inviato a una variabile specifica, poiché in questo esempio seguente:  
  
```  
// ioo_get_function.cpp  
// compile with: /EHsc  
// Type up to 24 characters and a terminating character.   
// Any remaining characters can be extracted later.  
#include <iostream>  
using namespace std;  
  
int main()  
{  
   char line[25];  
   cout << " Type a line terminated by carriage return\n>";  
   cin.get( line, 25 );  
   cout << line << endl;  
}  
```  
  
### Input  
  
```  
1234  
```  
  
### Esempio di output  
  
```  
1234  
```  
  
##  <a name="vclrfthegetlinefunctionanchor13"></a> La funzione di getline  
 La funzione membro di **getline** è simile alla funzione di **get**.  Entrambe le funzioni consentono un terzo argomento che specifica il carattere di terminazione di input.  Il valore predefinito è il carattere di nuova riga.  Entrambe le funzioni riserva un carattere al carattere di terminazione obbligatorio.  Tuttavia, **get** del carattere di terminazione nel flusso e **getline** rimuove il carattere di terminazione.  
  
 Nell'esempio seguente viene specificato un carattere di terminazione per il flusso di input:  
  
```  
// getline_func.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
int main( )  
{  
   char line[100];  
   cout << " Type a line terminated by 't'" << endl;  
   cin.getline( line, 100, 't' );  
   cout << line;  
}  
```  
  
### Input  
  
```  
test  
```  
  
##  <a name="vclrfthereadfunctionanchor14"></a> La funzione lettura  
 La funzione membro di **leggere** legge i byte da un file in una determinata area di memoria.  L'argomento di lunghezza determina il numero di byte letti.  Se non si include tale argomento, leggere si arresta quando il fine del file fisico viene raggiunto o, nel caso di un file di " text\-mode ", quando un carattere incorporato di `EOF` viene letto.  
  
 In questo esempio vengono letti un record binario da un file payroll in una struttura:  
  
```  
#include <fstream>  
#include <iostream>  
using namespace std;  
  
int main()  
{  
   struct  
   {  
      double salary;  
      char name[23];  
   } employee;  
  
   ifstream is( "payroll" );  
   if( is ) {  // ios::operator void*()  
      is.read( (char *) &employee, sizeof( employee ) );  
      cout << employee.name << ' ' << employee.salary << endl;  
   }  
   else {  
      cout << "ERROR: Cannot open file 'payroll'." << endl;  
   }  
}  
```  
  
 Il programma si presuppone che i record di dati vengano formattati esattamente come specificato dalla struttura senza il ritorno a capo di terminazione o i caratteri di avanzamento riga.  
  
##  <a name="vclrftheseekgandtellgfunctionsanchor7"></a> Le funzioni di tellg e di seekg  
 I flussi di file di input è previsto un puntatore interno al percorso nel file in cui i dati devono essere letti avanti.  Impostare questo puntatore alla funzione di `seekg`, come illustrato di seguito:  
  
```  
#include <iostream>  
#include <fstream>  
using namespace std;  
  
int main( )  
{  
   char ch;  
  
   ifstream tfile( "payroll" );  
   if( tfile ) {  
      tfile.seekg( 8 );        // Seek 8 bytes in (past salary)  
      while ( tfile.good() ) { // EOF or failure stops the reading  
         tfile.get( ch );  
         if( !ch ) break;      // quit on null  
         cout << ch;  
      }  
   }  
   else {  
      cout << "ERROR: Cannot open file 'payroll'." << endl;  
   }  
}  
```  
  
 Per utilizzare `seekg` per implementare sistemi di gestione dati orientati a record, multiply il formato dei record a lunghezza fissa per il numero di record per ottenere la posizione di byte relativo alla fine del file e quindi utilizzare l'oggetto di **get** per leggere il record.  
  
 La funzione membro di `tellg` restituisce la posizione corrente del file per leggere.  Questo valore è di tipo `streampos`, `typedef` definito \<in iostream\>.  Nell'esempio seguente viene letto un file e visualizzare i messaggi che mostrano le posizioni degli spazi.  
  
```  
#include <fstream>  
#include <iostream>  
using namespace std;  
  
int main( )  
{  
   char ch;  
   ifstream tfile( "payroll" );  
   if( tfile ) {  
       while ( tfile.good( ) ) {  
          streampos here = tfile.tellg();  
          tfile.get( ch );  
          if ( ch == ' ' )  
             cout << "\nPosition " << here << " is a space";  
       }  
   }  
   else {  
      cout << "ERROR: Cannot open file 'payroll'." << endl;  
   }  
}  
```  
  
##  <a name="vclrftheclosefunctionforinputstreamsanchor15"></a> La funzione close per flussi di input  
 La funzione membro di **chiudi** chiude il file su disco associato a un flusso del file di input e libera l'handle di file del sistema operativo.  Il distruttore di [ifstream](../standard-library/basic-ifstream-class.md) chiude il file automaticamente, ma è possibile utilizzare la funzione di **chiudi** se è necessario aprire un altro file per lo stesso oggetto flusso.  
  
## Vedere anche  
 [Flussi di input](../standard-library/input-streams.md)