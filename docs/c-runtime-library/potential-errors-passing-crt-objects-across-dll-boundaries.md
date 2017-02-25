---
title: "Potenziali errori di passaggio di oggetti CRT attraverso i limiti DLL | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "conflitti DLL [C++]"
ms.assetid: c217ffd2-5d9a-4678-a1df-62a637a96460
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Potenziali errori di passaggio di oggetti CRT attraverso i limiti DLL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si passano oggetti di runtime del linguaggio C \(CRT\) come un handle di file, impostazioni locali e variabili di ambiente in o da una DLL \(chiamate di funzione attraverso il limite della DLL\) può verificarsi un comportamento imprevisto se la DLL, nonché i file chiamati nella DLL, utilizza copie diverse delle librerie CRT.  
  
 Un problema correlato può verificarsi quando viene allocata memoria \(in modo esplicito con `new` o `malloc`, o in modo implicito con `strdup`, `strstreambuf::str` e così via\) e quindi viene passato un puntatore oltre un limite della DLL da liberare.  Questo può comportare una violazione di accesso alla memoria o corruzione della memoria heap se la DLL e gli utenti utilizzano copie diverse delle librerie CRT.  
  
 Un altro sintomo di questo problema può essere un errore nella finestra output durante il debug come:  
  
 HEAP\[\]: Indirizzo non valido specificato a RtlValidateHeap\(\#,\#\)  
  
## Cause  
 Ogni copia della libreria CRT ha uno stato separato e distinto.  Di conseguenza, gli oggetti CRT come gli handle di file, le variabili di ambiente e le impostazioni locali sono validi solo per la copia di CRT in cui questi oggetti vengono allocati o impostati.  Quando una DLL e gli utenti utilizzano copie diverse della libreria CRT, non è possibile passare questi oggetti CRT attraverso il limite di DLL e aspettarsi di eseguirli correttamente dall'altra parte.  
  
 Inoltre, poiché ogni copia della libreria CRT dispone di un proprio gestore dell'heap, allocando in memoria in una libreria CRT e passando il puntatore oltre i limiti di una DLL da liberare da una copia diversa della libreria CRT è potenzialmente causa del danneggiamento della memoria heap.  
  
 Se si progetta la DLL in modo che passi gli oggetti CRT oltre il limite o che allochi memoria e si lo aspetti da liberare al di fuori della DLL, si limitano gli utenti della DLL ad usare la stessa copia della libreria CRT della DLL.  La DLL e gli utenti utilizzano la stessa copia della libreria CRT solo se entrambi sono collegati con la stessa versione della DLL CRT.  Potrebbe esserci un problema se si combinano le applicazioni compilate con Visual C\+\+ 5.0 con le DLL compilate da Visual C\+\+ 4.1 o versioni precedenti.  Poiché la versione DLL della libreria CRT utilizzata da Visual C\+\+ 4.1 è msvcrt40.dll e quello utilizzato da Visual 5.0 è msvcrt.dll, non è possibile compilare l'applicazione per utilizzare la stessa copia della libreria CRT di queste DLL.  
  
 Esiste tuttavia una eccezione.  Nella versione Inglese US e alcune altre versioni localizzate di Windows 2000, ad esempio francese, tedesco e ceco, viene fornita una versione più recente di msvcrt40.dll \(versione 4.20\).  Di conseguenza, anche se la DLL è collegata con msvcrt40.dll e il relativo utente è collegato con msvcrt.dll, si utilizza ancora la stessa copia della libreria CRT perché tutte le chiamate effettuate a msvcrt40.dll sono inoltrate a msvcrt.dll.  
  
 Tuttavia questa versione del server di inoltro di msvcrt40.dll non è disponibile in alcune versioni localizzate di Windows 2000, ad esempio il giapponese, il coreano e il cinese.  Quindi, se l'applicazione è destinata a questi sistemi operativi, è necessario disporre di una versione aggiornata della DLL che non si basa su msvcrt40.dll o che modifichi l'applicazione per non basarsi sull'utilizzo della stessa copia delle librerie CRT.  Se si è sviluppata la DLL, questo significa ricompilarla con Visual C\+\+ 4.2 o con una versione più recente.  Se è una DLL di terze parti, è necessario contattare il fornitore per un aggiornamento.  
  
 Si noti che questa versione della DLL del server di inoltro di msvcrt40.dll \(versione 4.20\) non può essere ridistribuita.  
  
## Esempio  
  
### Descrizione  
 In questo esempio viene passato un handle di file attraverso i limiti di una DLL.  
  
 I file DLL e .exe sono compilati con \/MD, in modo che condividono una sola copia di CRT.  
  
 Se si ricompila con \/MT in modo che vengano utilizzate copie separate di CRT, l'esecuzione di test1Main.exe genera una violazione di accesso.  
  
### Codice  
  
```  
// test1Dll.cpp  
// compile with: /MD /LD  
#include <stdio.h>  
__declspec(dllexport) void writeFile(FILE *stream)  
{  
   char   s[] = "this is a string\n";  
   fprintf( stream, "%s", s );  
   fclose( stream );  
}  
```  
  
### Codice  
  
```  
// test1Main.cpp  
// compile with: /MD test1dll.lib  
#include <stdio.h>  
#include <process.h>  
void writeFile(FILE *stream);  
  
int main(void)  
{  
   FILE  * stream;  
   errno_t err = fopen_s( &stream, "fprintf.out", "w" );  
   writeFile(stream);  
   system( "type fprintf.out" );  
}  
```  
  
### Output  
  
```  
this is a string  
```  
  
## Esempio  
  
### Descrizione  
 In questo esempio vengono passate le variabili di ambiente oltre i limiti di una DLL.  
  
### Codice  
  
```  
// test2Dll.cpp  
// compile with: /MT /LD  
#include <stdio.h>  
#include <stdlib.h>  
  
__declspec(dllexport) void readEnv()  
{  
   char *libvar;  
   size_t libvarsize;  
  
   /* Get the value of the MYLIB environment variable. */   
   _dupenv_s( &libvar, &libvarsize, "MYLIB" );  
  
   if( libvar != NULL )  
      printf( "New MYLIB variable is: %s\n", libvar);  
   else  
      printf( "MYLIB has not been set.\n");  
   free( libvar );  
}  
```  
  
### Codice  
  
```  
// test2Main.cpp  
// compile with: /MT /link test2dll.lib  
#include <stdlib.h>  
#include <stdio.h>  
  
void readEnv();  
  
int main( void )  
{  
   _putenv( "MYLIB=c:\\mylib;c:\\yourlib" );  
   readEnv();  
}  
```  
  
### Output  
  
```  
MYLIB has not been set.  
```  
  
 Se la DLL e il file .exe sono compilati con \/MD in modo che solo una copia di CRT venga utilizzata, il programma viene eseguito correttamente e produce l'output seguente:  
  
```  
New MYLIB variable is: c:\mylib;c:\yourlib  
```  
  
## Vedere anche  
 [Funzionalità libreria CRT](../c-runtime-library/crt-library-features.md)