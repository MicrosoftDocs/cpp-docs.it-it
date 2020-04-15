---
title: _pipe
ms.date: 4/2/2020
api_name:
- _pipe
- _o__pipe
api_location:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-stdio-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- pipe
- _pipe
helpviewer_keywords:
- pipes, creating
- _pipe function
- pipes
- pipe function
ms.assetid: 8d3e9800-4041-44b5-9e93-2df0b0354a75
ms.openlocfilehash: 5bac435bed26decee0069f5814d1f3d25a54470a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81338493"
---
# <a name="_pipe"></a>_pipe

Crea un pipe per la lettura e la scrittura.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
int _pipe(
   int *pfds,
   unsigned int psize,
   int textmode
);
```

### <a name="parameters"></a>Parametri

*pfds*<br/>
Puntatore a una matrice di due **int** per contenere i descrittori di file di lettura e scrittura.

*psize*<br/>
Quantità di memoria da riservare.

*Textmode*<br/>
Modalità file.

## <a name="return-value"></a>Valore restituito

Restituisce 0 in caso di esito positivo. Restituisce -1 per indicare un errore. In caso di errore, **errno** è impostato su uno dei seguenti valori:

- **EMFILE**, che indica che non sono disponibili altri descrittori di file.

- **ENFILE**, che indica un overflow della tabella dei file di sistema.

- **EINVAL**, che indica che la matrice *pfds* è un puntatore null o che è stato passato un valore non valido per *textmode.*

Per altre informazioni su questi e altri codici restituiti, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

La funzione **_pipe** crea una *pipe*, ovvero un canale I/O artificiale utilizzato da un programma per passare informazioni ad altri programmi. Una pipe è simile a un file perché ha un puntatore di file, un descrittore di file o entrambi, e può essere letta o scritta tramite le funzioni di input e output della libreria standard. Tuttavia, una pipe non rappresenta un file o un dispositivo specifico. Rappresenta invece uno spazio di archiviazione temporaneo in memoria, indipendente della memoria propria del programma e interamente controllato dal sistema operativo.

**_pipe** è simile a **_open** ma apre la pipe per la lettura e la scrittura e restituisce due descrittori di file anziché uno. Il programma può usare entrambi i lati della pipe o chiudere quello non necessario. Ad esempio, il processore dei comandi in Windows crea una pipe quando esegue un comando, ad esempio **PROGRAMMA1** | **PROGRAM2**.

Il descrittore di output standard di **PROGRAM1** è collegato al descrittore di scrittura della pipe. Il descrittore di input standard di **PROGRAM2** è collegato al descrittore di lettura della pipe. Viene così eliminata la necessità di creare file temporanei per il passaggio di informazioni ad altri programmi.

La funzione **_pipe** restituisce due descrittori di file alla pipe nell'argomento *pfds.* L'elemento *pfds*[0] contiene il descrittore di lettura e l'elemento *pfds*[1] contiene il descrittore di scrittura. I descrittori di file della pipe vengono usato nello stesso modo di altri descrittori di file. Le funzioni di input e output di basso livello **_read** e **_write** possono leggere e scrivere in una pipe. Per rilevare la condizione di fine pipe, verificare la presenza di una **richiesta di _read** che restituisce 0 come numero di byte letti.

L'argomento *psize* specifica la quantità di memoria, in byte, da riservare per la pipe. L'argomento *textmode* specifica la modalità di conversione per la pipe. La costante manifesto **_O_TEXT** specifica una traduzione di testo e la costante **_O_BINARY** specifica la conversione binaria. (Vedere [fopen, _wfopen](fopen-wfopen.md) per una descrizione delle modalità testo e binarie.) Se l'argomento *textmode* è 0, **_pipe** utilizza la modalità di conversione predefinita specificata dalla variabile default-mode [_fmode](../../c-runtime-library/fmode.md).

Nei programmi multithreading, non viene eseguito alcun blocco. I descrittori di file restituiti sono appena aperti e non devono fare riferimento a alcun thread fino al termine della chiamata **al _pipe.**

Per utilizzare la funzione **_pipe** per comunicare tra un processo padre e un processo figlio, ogni processo deve avere un solo descrittore aperto sulla pipe. I descrittori devono essere opposti: se il padre ha un descrittore di lettura aperto, il figlio deve avere un descrittore di scrittura aperto. Il modo più semplice per eseguire questa**|** operazione consiste nell'utilizzare bit per bit o ( ) il **flag di _O_NOINHERIT** con *textmode*. Quindi, utilizzare **_dup** o **_dup2** per creare una copia ereditabile del descrittore di pipe che si desidera passare all'elemento figlio. Chiudere il descrittore originale e quindi generare il processo figlio. Al completamento della chiamata di generazione, chiudere il descrittore duplicato nel processo padre. Per altre informazioni, vedere l'esempio 2 in questo articolo.

Nel sistema operativo Windows, una pipe viene eliminata quando tutti i relativi descrittori sono stati chiusi. Se tutti i descrittori di lettura sulla pipe sono stati chiusi, la scrittura nella pipe genera un errore. Tutte le operazioni di lettura e scrittura sulla pipe attendono fino a quando non vi è sufficiente spazio nel buffer per completare la richiesta di I/O.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_pipe**|\<io.h>|\<fcntl.h>,1 \<errno.h>2|

1 Per le definizioni **di _O_BINARY** e **_O_TEXT.**

2 **definizioni errate.**

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="example-1"></a>Esempio 1

```C
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

```Output
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

## <a name="example-2"></a>Esempio 2

Questa è una semplice applicazione di filtro. Genera crt_pipe_beeper per l'applicazione dopo la creazione di una pipe che indirizza stdout dell'applicazione generata al filtro. Il filtro rimuove i caratteri ASCII 7 (campanello).

```C
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

Applicazione di filtro effettiva:

```C
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

```Output
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

## <a name="see-also"></a>Vedere anche

[Process and Environment Control](../../c-runtime-library/process-and-environment-control.md) (Controllo processo e ambiente)<br/>
[_open, _wopen](open-wopen.md)<br/>
