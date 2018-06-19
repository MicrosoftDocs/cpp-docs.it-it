---
title: Funzioni _exec, _wexec | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
apilocation:
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr90.dll
- msvcrt.dll
- msvcr100.dll
- msvcr110.dll
- msvcr80.dll
apitype: DLLExport
f1_keywords:
- _texecve
- texecl
- _texeclpe
- texecve
- texecv
- texeclp
- texecle
- exec
- texeclpe
- _texecvp
- _texecl
- _texecle
- wexec
- _exec
- _texeclp
- _texecvpe
- texecvpe
- _texecv
- _wexec
dev_langs:
- C++
helpviewer_keywords:
- _texecle function
- _texecv function
- texeclpe function
- texecle function
- _texecl function
- texecv function
- _texeclp function
- _texecve function
- texecl function
- texecve function
- exec function
- texeclp function
- texecvp function
- texecvpe function
- processes, executing new
- _texecvp function
- _texeclpe function
- _wexec functions
- wexec functions
- _exec function
- _texecvpe function
ms.assetid: a261df93-206a-4fdc-b8ac-66aa7db83bc6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 728c4878736d2e0cafc94660db3d9a709f87715f
ms.sourcegitcommit: 6e3cf8df676d59119ce88bf5321d063cf479108c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/22/2018
ms.locfileid: "34451524"
---
# <a name="exec-wexec-functions"></a>Funzioni _exec, _wexec
Ogni funzione in questa famiglia carica ed esegue un nuovo processo:  
  
|||  
|-|-|  
|[_execl, _wexecl](../c-runtime-library/reference/execl-wexecl.md)|[_execv, _wexecv](../c-runtime-library/reference/execv-wexecv.md)|  
|[_execle, _wexecle](../c-runtime-library/reference/execle-wexecle.md)|[_execve, _wexecve](../c-runtime-library/reference/execve-wexecve.md)|  
|[_execlp, _wexeclp](../c-runtime-library/reference/execlp-wexeclp.md)|[_execvp, _wexecvp](../c-runtime-library/reference/execvp-wexecvp.md)|  
|[_execlpe, _wexeclpe](../c-runtime-library/reference/execlpe-wexeclpe.md)|[_execvpe, _wexecvpe](../c-runtime-library/reference/execvpe-wexecvpe.md)|  
  
 La lettera alla fine del nome della funzione identifica la modifica.  
  
|Suffisso _exec della funzione|Descrizione|  
|----------------------------|-----------------|  
|`e`|`envp`, matrice di puntatori alle impostazioni di ambiente, viene passato al nuovo processo.|  
|`l`|Gli argomenti della riga di comando vengono passati singolarmente alla funzione `_exec`. Si usa in genere quando il numero di parametri per il nuovo processo è noto a priori.|  
|`p`|Per trovare il file da eseguire viene usata la variabile di ambiente `PATH`.|  
|`v`|`argv`, matrice di puntatori agli argomenti della riga di comando, viene passato a `_exec`. Si usa in genere quando il numero di parametri per il nuovo processo è variabile.|  
  
## <a name="remarks"></a>Note  
 Ogni funzione `_exec` carica ed esegue un nuovo processo. Tutte le funzioni `_exec` usano la stessa funzione di sistema operativo ([CreateProcess](http://msdn.microsoft.com/library/windows/desktop/ms682425.aspx)). La funzione `_exec` gestisce automaticamente gli argomenti della stringa con caratteri multibyte in base alle esigenze, riconoscendo le sequenze di caratteri multibyte in base alla tabella codici multibyte attualmente in uso. Le funzioni `_wexec` sono versioni a caratteri wide delle funzioni `_exec`. Le funzioni `_wexec` si comportano in modo identico alle corrispondenti della famiglia `_exec`, ma non gestiscono le stringhe di caratteri multibyte.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_texecl`|`_execl`|`_execl`|`_wexecl`|  
|`_texecle`|`_execle`|`_execle`|`_wexecle`|  
|`_texeclp`|`_execlp`|`_execlp`|`_wexeclp`|  
|`_texeclpe`|`_execlpe`|`_execlpe`|`_wexeclpe`|  
|`_texecv`|`_execv`|`_execv`|`_wexecv`|  
|`_texecve`|`_execve`|`_execve`|`_wexecve`|  
|`_texecvp`|`_execvp`|`_execvp`|`_wexecvp`|  
|`_texecvpe`|`_execvpe`|`_execvpe`|`_wexecvpe`|  
  
 Il parametro `cmdname` specifica il file da eseguire come nuovo processo. È possibile specificare un percorso completo (dalla radice), un percorso parziale (dalla cartella di lavoro corrente), oppure un nome di file. Se `cmdname` non presenta un'estensione di file o non termina con un punto (.), la funzione `_exec` cerca il file denominato. Se la ricerca ha esito negativo, prova nuovamente con lo stesso nome di base e con l'estensione di file .com e successivamente con .exe, .bat e .cmd. Se `cmdname` possiede un estensione di file, nella ricerca viene usata solo l'estensione. Se `cmdname` termina con un punto, la funzione `_exec` cerca `cmdname` senza estensione di file. `_execlp`, `_execlpe`, `_execvp` e `_execvpe` cercano `cmdname` (usando le stesse procedure) nella directory specificata dalla variabile di ambiente `PATH`. Se `cmdname` contiene un identificatore di unità o delle barre (ovvero se si tratta di un percorso relativo), la chiamata a `_exec` cerca soltanto il file specificato; il percorso non viene cercato.  
  
 I parametri vengono passati al nuovo processo specificando uno o più puntatori alle stringhe di caratteri come parametri nella chiamata `_exec`. Queste stringhe di caratteri formano l'elenco dei parametri per il nuovo processo. La lunghezza combinata delle impostazioni di ambiente ereditate e delle stringhe che compongono l'elenco dei parametri del nuovo processo non deve superare i 32 KB. Il carattere di terminazione null ('\0') per ogni stringa non è incluso nel conteggio, ma gli spazi (inseriti automaticamente per separare i parametri) vengono contati.  
  
> [!NOTE]
>  La presenza di spazi incorporati nelle stringhe può causare comportamenti imprevisti; ad esempio, passare a `_exec` la stringa `"hi there"` comporterà la presenza nel nuovo processo di due argomenti, `"hi"` e `"there"`. Se lo scopo è quello di far aprire al nuovo processo un file denominato "hi there", il processo avrà esito negativo. Per evitarlo, racchiudere la stringa tra virgolette doppie: `"\"hi there\""`.  
  
> [!IMPORTANT]
>  Non passare input utente a `_exec` senza verificarne esplicitamente il contenuto. `_exec` determinerà una chiamata a [CreateProcess](http://msdn.microsoft.com/library/windows/desktop/ms682425.aspx), per cui è bene tenere presente che i nomi di percorsi non qualificati possono creare vulnerabilità a livello di sicurezza.  
  
 Le funzioni `_exec` convalidano i propri parametri. Se i parametri previsti sono puntatori Null, stringhe vuote oppure sono omessi, le funzioni `_exec` richiamano il gestore di parametri non validi come descritto in [Convalida dei parametri](../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano `errno` su `EINVAL` e restituiscono -1. Non viene eseguito alcun nuovo processo.  
  
 Gli argomenti di tipo puntatore possono essere passati come parametri separati (in `_execl`, `_execle`, `_execlp` e `_execlpe`) o come o matrice di puntatori (in `_execv`, `_execve`, `_execvp` e `_execvpe`). Almeno un parametro, `arg0`, deve essere passato al nuovo processo; questo parametro è `argv`[0] del nuovo processo. In genere, questo parametro è una copia di `cmdname`. (Un valore diverso non produce un errore.)  
  
 Le chiamate `_execl`, `_execle`, `_execlp` e `_execlpe` vengono in genere usate quando il numero di parametri è noto a priori. Il parametro `arg0` è generalmente un puntatore a `cmdname`. I parametri da `arg1` a `argn` puntano alle stringhe di caratteri che costituiscono il nuovo elenco di parametri. Un puntatore null deve seguire `argn` per contrassegnare la fine dell'elenco di parametri.  
  
 Le chiamate `_execv`, `_execve`, `_execvp` e `_execvpe` sono utili quando il numero di parametri per il nuovo processo è variabile. I puntatori ai parametri vengono passati come matrice, `argv`. Il parametro `argv`[0] è generalmente un puntatore a `cmdname`. I parametri da `argv`[1] a `argv`[`n`] puntano alle stringhe di caratteri che costituiscono il nuovo elenco di parametri. Il parametro `argv`[`n`+1] deve essere un puntatore **NULL** per contrassegnare la fine dell'elenco dei parametri.  
  
 I file che vengono aperti quando viene effettuata una chiamata `_exec` rimangono aperti nel nuovo processo. Nelle chiamate `_execl`, `_execlp`, `_execv` e `_execvp` il nuovo processo eredita l'ambiente del processo chiamante. Le chiamate `_execle`, `_execlpe`, `_execve` e `_execvpe` alterano l'ambiente del nuovo processo passando un elenco delle impostazioni di ambiente tramite il parametro `envp`. `envp` è una matrice di puntatori a caratteri, ogni elemento della matrice (ad eccezione dell'elemento finale) punta alla stringa di terminazione null che definisce una variabile di ambiente. Tale stringa è in genere in formato `NAME`=`value`, dove `NAME` è il nome di una variabile di ambiente e `value` è il valore stringa su cui è impostata la variabile. (Notare che `value` non è racchiuso tra virgolette doppie.) L'elemento finale della matrice `envp` deve essere **NULL**. Quando `envp` stesso è **NULL**, il nuovo processo eredita le impostazioni di ambiente del processo chiamante.  
  
 Un programma eseguito tramite una delle funzioni `_exec` viene sempre caricato in memoria come se il campo di allocazione massima nell'intestazione del file .exe fosse stato impostato sul valore predefinito 0xFFFFH.  
  
 Le chiamate `_exec` non mantengono le modalità di conversione dei file aperti. Se il nuovo processo deve usare file ereditati dal processo chiamante, usare la routine [_setmode](../c-runtime-library/reference/setmode.md) per impostare la modalità di traduzione di questi file desiderata. È necessario scaricare (usando `fflush` o `_flushall`) o chiudere esplicitamente qualsiasi flusso prima della chiamata di funzione `_exec`. Le impostazioni dei segnali non vengono mantenute nei nuovi processi creati dalle chiamate alle routine `_exec`. Le impostazioni dei segnali del nuovo processo vengono reimpostate sui valori predefiniti.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_args.c  
// Illustrates the following variables used for accessing  
// command-line arguments and environment variables:  
// argc  argv  envp  
// This program will be executed by crt_exec which follows.  
  
#include <stdio.h>  
  
int main( int argc,  // Number of strings in array argv  
 char *argv[],       // Array of command-line argument strings  
 char **envp )       // Array of environment variable strings  
{  
    int count;  
  
    // Display each command-line argument.  
    printf( "\nCommand-line arguments:\n" );  
    for( count = 0; count < argc; count++ )  
        printf( "  argv[%d]   %s\n", count, argv[count] );  
  
    // Display each environment variable.   
    printf( "\nEnvironment variables:\n" );  
    while( *envp != NULL )  
        printf( "  %s\n", *(envp++) );  
  
    return;  
}  
```  
  
 Eseguire il programma seguente per eseguire Crt_args.exe:  
  
```  
// crt_exec.c  
// Illustrates the different versions of exec, including  
//      _execl          _execle          _execlp          _execlpe  
//      _execv          _execve          _execvp          _execvpe  
//  
// Although CRT_EXEC.C can exec any program, you can verify how   
// different versions handle arguments and environment by   
// compiling and specifying the sample program CRT_ARGS.C. See   
// "_spawn, _wspawn Functions" for examples of the similar spawn   
// functions.  
  
#include <stdio.h>  
#include <conio.h>  
#include <process.h>  
  
char *my_env[] =     // Environment for exec?e  
{  
   "THIS=environment will be",  
   "PASSED=to new process by",  
   "the EXEC=functions",  
   NULL  
};  
  
int main( int ac, char* av[] )  
{  
   char *args[4];  
   int ch;  
   if( ac != 3 ){  
      fprintf( stderr, "Usage: %s <program> <number (1-8)>\n", av[0] );  
      return;  
   }  
  
   // Arguments for _execv?   
   args[0] = av[1];  
   args[1] = "exec??";  
   args[2] = "two";  
   args[3] = NULL;  
  
   switch( atoi( av[2] ) )  
   {  
   case 1:  
      _execl( av[1], av[1], "_execl", "two", NULL );  
      break;  
   case 2:  
      _execle( av[1], av[1], "_execle", "two", NULL, my_env );  
      break;  
   case 3:  
      _execlp( av[1], av[1], "_execlp", "two", NULL );  
      break;  
   case 4:  
      _execlpe( av[1], av[1], "_execlpe", "two", NULL, my_env );  
      break;  
   case 5:  
      _execv( av[1], args );  
      break;  
   case 6:  
      _execve( av[1], args, my_env );  
      break;  
   case 7:  
      _execvp( av[1], args );  
      break;  
   case 8:  
      _execvpe( av[1], args, my_env );  
      break;  
   default:  
      break;  
   }  
  
   // This point is reached only if exec fails.   
   printf( "\nProcess was not execed." );  
   exit( 0 );  
}  
```  
  
## <a name="requirements"></a>Requisiti  
  
 **Intestazione:** process.h  
  
## <a name="see-also"></a>Vedere anche  
 [Controllo processo e ambiente](../c-runtime-library/process-and-environment-control.md)   
 [abort](../c-runtime-library/reference/abort.md)   
 [atexit](../c-runtime-library/reference/atexit.md)   
 [exit, _Exit, _exit](../c-runtime-library/reference/exit-exit-exit.md)   
 [_onexit, _onexit_m](../c-runtime-library/reference/onexit-onexit-m.md)   
 [Funzioni _spawn, _wspawn](../c-runtime-library/spawn-wspawn-functions.md)   
 [system, _wsystem](../c-runtime-library/reference/system-wsystem.md)