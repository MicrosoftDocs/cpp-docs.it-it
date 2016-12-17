---
title: "_pipe | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_pipe"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-stdio-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "pipe"
  - "_pipe"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_pipe (funzione)"
  - "pipe (funzione)"
  - "pipe"
  - "pipe, creazione"
ms.assetid: 8d3e9800-4041-44b5-9e93-2df0b0354a75
caps.latest.revision: 20
caps.handback.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _pipe
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Crea una pipe per la lettura e la scrittura.  
  
> [!IMPORTANT]
>  Questa API non può essere utilizzata nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
  
      int _pipe(  
int *pfds,  
unsigned int psize,  
int textmode   
);  
```  
  
#### Parametri  
 `pfds`\[2\]  
 L'array da utilizzare legge e scrive descrittori di file.  
  
 `psize`  
 Quantità di memoria da riservare.  
  
 `textmode`  
 Modalità file.  
  
## Valore restituito  
 Restituisce 0 in caso di esito positivo.  Restituisce –1 per indicare un errore.  Sull'errore, `errno` è impostata su uno dei valori seguenti:  
  
-   `EMFILE`, che indica che non vi sono ulteriori descrittori di file disponibili.  
  
-   `ENFILE`, che indica un overflow di sistema\-file\-tabella.  
  
-   `EINVAL`, che indica che l'array `pfds` è un puntatore a null o che un valore non valido è stato passato a `textmode`.  
  
 Per ulteriori informazioni su questi e altri codici restituiti, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 La funzione `_pipe` crea una *pipe*, ovvero un canale I\/O artificiale che un programma utilizza per passare informazioni ad altri programmi.  Una pipe è simile ad un file in quanto contiene un puntatore ad un file, un descrittore di file, o entrambi, e può essere letto o scritto utilizzando le funzioni di input e output della libreria Standard.  Tuttavia, una pipe non rappresentano uno specifico file o un dispositivo.  Invece, rappresenta uno spazio di memoria temporaneo che è indipendente dalla memoria riservata al programma e che è controllata completamente dal sistema operativo.  
  
 `_pipe` è simile a `_open` ma apre la pipe per la lettura e la scrittura e restituisce due descrittori del file anziché uno.  Il programma può utilizzare entrambi i lati della pipe o chiudere quello che non è necessario.  Ad esempio, il processore dei comandi di Windows crea una pipe quando si esegue un comando come `PROGRAM1 | PROGRAM2`.  
  
 Il descrittore dell'output standard di `PROGRAM1` è collegato al descrittore di scrittura della pipe.  Il descrittore di input standard di `PROGRAM2` è connesso al descrittore di lettura della pipe.  In questo modo si evita di dover creare file temporanei per passare informazioni ad altri programmi.  
  
 La funzione `_pipe` restituisce due descrittori del file alle pipe nell'argomento `pfds`.  L'elemento `pfds`\[0\] contiene il descrittore di lettura, l'elemento `pfds`\[1\] contiene il descrittore di scrittura.  I descrittori del file della pipe vengono utilizzati come gli altri descrittori del file. \(Le funzioni di input e di output di basso livello `_read` e `_write` possono leggere e scrivere le pipe\). Per rilevare la fine della pipe, verificare che la funzione `_read` restituisca 0 come numero di byte letti.  
  
 L'argomento `psize` specifica la quantità di memoria, in byte, da riservare alla pipe.  L'argomento `textmode` specifica la modalità di traduzione della pipe.  La costante manifesto `_O_TEXT` specifica una conversione del testo e, la costante `_O_BINARY` specifica la conversione binaria. \(Vedere [fopen, \_wfopen](../../c-runtime-library/reference/fopen-wfopen.md) per una descrizione del testo e della modalità binaria.\) Se l'argomento `textmode` è 0, `_pipe` utilizza la modalità di traduzione predefinita specificata dalla variabile di modalità predefinita [\_fmode](../../c-runtime-library/fmode.md).  
  
 Nei programmi multithread, non viene eseguito alcun blocco.  I descrittori del file restituiti sono già aperti e non dovrebbero essere utilizzati da alcun thread prima che la chiamata a `_pipe` sia stata completata.  
  
 Per utilizzare la funzione `_pipe` per comunicare tra un processo padre e un processo figlio, ogni processo deve disporre di un unico descrittore aperto sulla pipe.  I descrittori devono essere opposti: se il padre dispone di un descrittore di lettura aperto, il figlio deve disporre di un descrittore di scrittura aperto.  Il modo più semplice per ottenere questo risultato consiste nel fare `OR` \(  `|`\) il flag `_O_NOINHERIT` con `textmode`.  Quindi, utilizzare `_dup` o `_dup2` per creare una copia ereditabile del descrittore della pipe da passare al figlio.  Chiudere il descrittore originale e quindi generare il processo figlio.  Una volta terminata la chiamata alla funzione di generazione del processo figlio, chiudere il descrittore duplicato nel processo padre.  Per ulteriori informazioni, vedere l'esempio 2 più avanti in questo articolo.  
  
 Nel sistema operativo Windows, una pipe viene distrutta quando tutti i suoi descrittori sono stati chiusi. \(Se tutti i descrittori di lettura sulla pipe sono stati scritti, allora scrivere sulla pipe causa un errore.\) Tutte le operazioni di scrittura e di lettura su una pipe attendono finché vi sono dati sufficienti o spazio sufficiente nel buffer per completare la richiesta di I\/O.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|-------------------------------|------------------------------|  
|`_pipe`|\<io.h\>|\<fcntl.h\>,1 \<errno.h\>2|  
  
 1 Per le definizioni di `_O_BINARY` e `_O_TEXT`.  
  
 2 definizioni `errno`.  
  
 Per ulteriori informazioni di compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio 1  
  
```  
// crt_pipe.c  
/* This program uses the _pipe function to pass streams of  
 * text to spawned processes.  
 */  
  
#include <stdlib.h>  
#include <stdio.h>  
#include <io.h>  
#include <fcntl.h>  
#include <process.h>  
#include <math.h>  
  
enum PIPES { READ, WRITE }; /* Constants 0 and 1 for READ and WRITE */  
#define NUMPROBLEM 8  
  
int main( int argc, char *argv[] )  
{  
  
   int fdpipe[2];  
   char hstr[20];  
   int pid, problem, c;  
   int termstat;  
  
   /* If no arguments, this is the spawning process */  
   if( argc == 1 )  
   {  
  
      setvbuf( stdout, NULL, _IONBF, 0 );  
  
      /* Open a set of pipes */  
      if( _pipe( fdpipe, 256, O_BINARY ) == -1 )  
          exit( 1 );  
  
      /* Convert pipe read descriptor to string and pass as argument   
       * to spawned program. Program spawns itself (argv[0]).  
       */  
      _itoa_s( fdpipe[READ], hstr, sizeof(hstr), 10 );  
      if( ( pid = _spawnl( P_NOWAIT, argv[0], argv[0],   
            hstr, NULL ) ) == -1 )  
          printf( "Spawn failed" );  
  
      /* Put problem in write pipe. Since spawned program is   
       * running simultaneously, first solutions may be done   
       * before last problem is given.  
       */  
      for( problem = 1000; problem <= NUMPROBLEM * 1000; problem += 1000)  
      {  
  
         printf( "Son, what is the square root of %d?\n", problem );  
         _write( fdpipe[WRITE], (char *)&problem, sizeof( int ) );  
  
      }  
  
      /* Wait until spawned program is done processing. */  
      _cwait( &termstat, pid, WAIT_CHILD );  
      if( termstat & 0x0 )  
         printf( "Child failed\n" );  
  
      _close( fdpipe[READ] );  
      _close( fdpipe[WRITE] );  
  
   }  
  
   /* If there is an argument, this must be the spawned process. */  
   else  
   {  
  
      /* Convert passed string descriptor to integer descriptor. */  
      fdpipe[READ] = atoi( argv[1] );  
  
      /* Read problem from pipe and calculate solution. */  
      for( c = 0; c < NUMPROBLEM; c++ )  
      {  
  
        _read( fdpipe[READ], (char *)&problem, sizeof( int ) );  
        printf( "Dad, the square root of %d is %3.2f.\n",  
                 problem, sqrt( ( double )problem ) );  
  
      }  
   }  
}  
```  
  
## Esempio di output  
  
```  
Son, what is the square root of 1000?  
Son, what is the square root of 2000?  
Son, what iDad, the square root of 1000 is 31.62.  
Dad, the square root of 2000 is 44.72.  
s the square root of 3000?  
Dad, the square root of 3000 is 54.77.  
Son, what is the square root of 4000?  
Dad, the square root of 4000 is 63.25.  
Son, what is the square root of 5000?  
Dad, the square root of 5000 is 70.71.  
Son, what is the square root of 6000?  
SonDad, the square root of 6000 is 77.46.  
, what is the square root of 7000?  
Dad, the square root of 7000 is 83.67.  
Son, what is the square root of 8000?  
Dad, the square root of 8000 is 89.44.  
```  
  
## Esempio 2  
 Si tratta di un'applicazione base di filtraggio.  Genera l'applicazione crt\_pipe\_beeper dopo aver creato una pipe che ridireziona l'stdout dell'applicazione generata verso il filtro.  Il filtro rimuove i caratteri ASCII 7 \(beep\).  
  
```  
// crt_pipe_beeper.c  
  
#include <stdio.h>  
#include <string.h>  
  
int main()  
{  
   int   i;  
   for(i=0;i<10;++i)  
      {  
         printf("This is speaker beep number %d...\n\7", i+1);  
      }  
   return 0;  
}  
```  
  
 L'applicazione di filtro attuale:  
  
```  
// crt_pipe_BeepFilter.C  
// arguments: crt_pipe_beeper.exe  
  
#include <windows.h>  
#include <process.h>  
#include <memory.h>  
#include <string.h>  
#include <stdio.h>  
#include <fcntl.h>  
#include <io.h>  
  
#define   OUT_BUFF_SIZE 512  
#define   READ_FD 0  
#define   WRITE_FD 1  
#define   BEEP_CHAR 7  
  
char szBuffer[OUT_BUFF_SIZE];  
  
int Filter(char* szBuff, ULONG nSize, int nChar)  
{  
   char* szPos = szBuff + nSize -1;  
   char* szEnd = szPos;  
   int nRet = nSize;  
  
   while (szPos > szBuff)  
   {  
      if (*szPos == nChar)  
         {  
            memmove(szPos, szPos+1, szEnd - szPos);  
            --nRet;  
         }  
      --szPos;  
   }  
   return nRet;  
}  
  
int main(int argc, char** argv)  
{  
   int nExitCode = STILL_ACTIVE;  
   if (argc >= 2)  
   {  
      HANDLE hProcess;  
      int fdStdOut;  
      int fdStdOutPipe[2];  
  
      // Create the pipe  
      if(_pipe(fdStdOutPipe, 512, O_NOINHERIT) == -1)  
         return   1;  
  
      // Duplicate stdout file descriptor (next line will close original)  
      fdStdOut = _dup(_fileno(stdout));  
  
      // Duplicate write end of pipe to stdout file descriptor  
      if(_dup2(fdStdOutPipe[WRITE_FD], _fileno(stdout)) != 0)  
         return   2;  
  
      // Close original write end of pipe  
      _close(fdStdOutPipe[WRITE_FD]);  
  
      // Spawn process  
      hProcess = (HANDLE)_spawnvp(P_NOWAIT, argv[1],   
       (const char* const*)&argv[1]);  
  
      // Duplicate copy of original stdout back into stdout  
      if(_dup2(fdStdOut, _fileno(stdout)) != 0)  
         return   3;  
  
      // Close duplicate copy of original stdout  
      _close(fdStdOut);  
  
      if(hProcess)  
      {  
         int nOutRead;  
         while   (nExitCode == STILL_ACTIVE)  
         {  
            nOutRead = _read(fdStdOutPipe[READ_FD],   
             szBuffer, OUT_BUFF_SIZE);  
            if(nOutRead)  
            {  
               nOutRead = Filter(szBuffer, nOutRead, BEEP_CHAR);  
               fwrite(szBuffer, 1, nOutRead, stdout);  
            }  
  
            if(!GetExitCodeProcess(hProcess,(unsigned long*)&nExitCode))  
               return 4;  
         }  
      }  
   }  
   return nExitCode;  
}  
```  
  
## Output  
  
```  
This is speaker beep number 1...  
This is speaker beep number 2...  
This is speaker beep number 3...  
This is speaker beep number 4...  
This is speaker beep number 5...  
This is speaker beep number 6...  
This is speaker beep number 7...  
This is speaker beep number 8...  
This is speaker beep number 9...  
This is speaker beep number 10...  
```  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [\_open, \_wopen](../../c-runtime-library/reference/open-wopen.md)