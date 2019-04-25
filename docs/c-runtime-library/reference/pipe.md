---
title: _pipe
ms.date: 11/04/2016
apiname:
- _pipe
apilocation:
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
apitype: DLLExport
f1_keywords:
- pipe
- _pipe
helpviewer_keywords:
- pipes, creating
- _pipe function
- pipes
- pipe function
ms.assetid: 8d3e9800-4041-44b5-9e93-2df0b0354a75
ms.openlocfilehash: c5db59fecd84ae291e5651b1cec1be31c815e53a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62155973"
---
# <a name="pipe"></a>_pipe

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
Puntatore a una matrice di due **int** a contenere lettura e scrittura di descrittori di file.

*psize*<br/>
Quantità di memoria da riservare.

*textmode*<br/>
Modalità file.

## <a name="return-value"></a>Valore restituito

Restituisce 0 in caso di esito positivo. Restituisce -1 per indicare un errore. In caso di errore **errno** è impostato su uno dei valori seguenti:

- **EMFILE**, che indica che nessun altri descrittori di file sono disponibili.

- **/EnFile**, che indica un overflow della tabella dei file di sistema.

- **EINVAL**, che indica che la matrice *PFD* è un puntatore null o che un valore non valido per *textmode* è stata passata.

Per altre informazioni su questi e altri codici restituiti, vedere [errno, _doserrno, _sys_errlist, e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **pipe** funzione crea un *pipe*, ovvero un canale dei / o artificiale un programma viene utilizzato per passare informazioni ad altri programmi. Una pipe è simile a un file perché ha un puntatore di file, un descrittore di file o entrambi, e può essere letta o scritta tramite le funzioni di input e output della libreria standard. Tuttavia, una pipe non rappresenta un file o un dispositivo specifico. Rappresenta invece uno spazio di archiviazione temporaneo in memoria, indipendente della memoria propria del programma e interamente controllato dal sistema operativo.

**pipe** è simile **Open** ma apre la pipe per lettura e scrittura e restituisce due descrittori di file invece uno. Il programma può usare entrambi i lati della pipe o chiudere quello non necessario. Ad esempio, il processore dei comandi di Windows crea una pipe quando esegue un comando, ad esempio **PROGRAM1** | **PROGRAM2**.

Descrittore di output standard **PROGRAM1** viene collegato al descrittore di scrittura della pipe. Il descrittore di input standard del **PROGRAM2** viene collegato al descrittore di lettura della pipe. Viene così eliminata la necessità di creare file temporanei per il passaggio di informazioni ad altri programmi.

Il **pipe** funzione restituisce due descrittori di file alla pipe nel *PFD* argomento. L'elemento *PFD*[0] contiene il descrittore di lettura e l'elemento *PFD*[1] contiene il descrittore di scrittura. I descrittori di file della pipe vengono usato nello stesso modo di altri descrittori di file. (Le funzioni di output e input di basso livello **Read** e **Write** può leggere e scrivere in una pipe.) Per rilevare la condizione di fine della pipe, verificare la presenza di un **Read** richiesta che restituisce 0 come numero di byte letti.

Il *psize* argomento specifica la quantità di memoria, in byte, da riservare per la pipe. Il *textmode* argomento specifica la modalità di conversione per la pipe. La costante manifesto **o_text** specifica una conversione di testo e la costante **O_BINARY** Specifica traduzione binaria. (Per una descrizione delle modalità testo e binaria, vedere [fopen, _wfopen](fopen-wfopen.md).) Se il *textmode* l'argomento è 0, **pipe** Usa la modalità di conversione predefinita specificata dalla variabile di modalità predefinita [fmode](../../c-runtime-library/fmode.md).

Nei programmi multithreading, non viene eseguito alcun blocco. I descrittori di file restituiti sono appena aperto e non dovrebbe essere specificati da qualsiasi thread fino a dopo il **pipe** chiamata è stata completata.

Usare la **pipe** funzione per la comunicazione tra un processo padre e un processo figlio, ogni processo deve avere un solo descrittore aperto sulla pipe. I descrittori devono essere opposti: se il padre ha un descrittore di lettura aperto, il figlio deve avere un descrittore di scrittura aperto. Il modo più semplice per eseguire questa operazione viene a bit per bit o (**|**) le **O_NOINHERIT** flag con *textmode*. Quindi, usare **dup** oppure **_dup2** per creare una copia ereditabile del descrittore della pipe che si desidera passare all'elemento figlio. Chiudere il descrittore originale e quindi generare il processo figlio. Al completamento della chiamata di generazione, chiudere il descrittore duplicato nel processo padre. Per altre informazioni, vedere l'esempio 2 in questo articolo.

Nel sistema operativo Windows, una pipe viene eliminata quando tutti i relativi descrittori sono stati chiusi. (Se sono stati chiusi tutti i descrittori di lettura della pipe, la scrittura sulla pipe causa un errore.) Tutte operazioni lettura e scrittura sulla pipe attendono che siano disponibili dati sufficienti o spazio sufficiente nel buffer per completare la richiesta di I/O.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_pipe**|\<io.h>|\<fcntl.h>,1 \<errno.h>2|

1 per **O_BINARY** e **o_text** definizioni.

2 **errno** definizioni.

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

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

[Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
