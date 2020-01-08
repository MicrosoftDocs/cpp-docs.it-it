---
title: Funzioni _spawn, _wspawn
ms.date: 11/04/2016
api_location:
- msvcr80.dll
- msvcr110_clr0400.dll
- msvcr110.dll
- msvcrt.dll
- msvcr120.dll
- msvcr100.dll
- msvcr90.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _spawn
- _tspawnlp
- _tspawnlpe
- _tspawnve
- _tspawnvp
- _tspawnvpe
- _tspawnl
- spawn
- _tspawnv
- _tspawnle
- wspawn
helpviewer_keywords:
- _tspawnve function
- _spawn functions
- _tspawnlpe function
- tspawnvpe function
- processes, creating
- tspawnve function
- _tspawnvp function
- spawn functions
- tspawnl function
- tspawnlp function
- _tspawnvpe function
- _tspawnl function
- tspawnvp function
- tspawnv function
- processes, executing new
- _tspawnv function
- tspawnle function
- process creation
- _tspawnlp function
- tspawnlpe function
- _tspawnle function
ms.assetid: bb47c703-5216-4e09-8023-8cf25bbf2cf9
ms.openlocfilehash: 81f4bf6c60a0c0e4011536e8d3bc104bbc33e04f
ms.sourcegitcommit: a5fa9c6f4f0c239ac23be7de116066a978511de7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75301704"
---
# <a name="_spawn-_wspawn-functions"></a>Funzioni _spawn, _wspawn

Ognuna delle funzioni `_spawn` crea ed esegue un nuovo processo:

|||
|-|-|
|[_spawnl, _wspawnl](../c-runtime-library/reference/spawnl-wspawnl.md)|[_spawnv, _wspawnv](../c-runtime-library/reference/spawnv-wspawnv.md)|
|[_spawnle, _wspawnle](../c-runtime-library/reference/spawnle-wspawnle.md)|[_spawnve, _wspawnve](../c-runtime-library/reference/spawnve-wspawnve.md)|
|[_spawnlp, _wspawnlp](../c-runtime-library/reference/spawnlp-wspawnlp.md)|[_spawnvp, _wspawnvp](../c-runtime-library/reference/spawnvp-wspawnvp.md)|
|[_spawnlpe, _wspawnlpe](../c-runtime-library/reference/spawnlpe-wspawnlpe.md)|[_spawnvpe, _wspawnvpe](../c-runtime-library/reference/spawnvpe-wspawnvpe.md)|

La lettera alla fine del nome della funzione determina la variazione.

|Lettera|Variante|
|-|-|
| `e`  | `envp`, matrice di puntatori alle impostazioni d'ambiente, viene passata al nuovo processo.  |
| `l`  | Gli argomenti della riga di comando vengono passati singolarmente alla funzione `_spawn`. Il suffisso viene utilizzato in genere quando un numero di parametri per un nuovo processo è noto in anticipo.  |
| `p`  | Per trovare il file da eseguire viene usata la variabile di ambiente `PATH`.  |
| `v`  | `argv`, matrice di puntatori agli argomenti della riga di comando, viene passata alla funzione `_spawn`. Il suffisso viene utilizzato in genere quando un numero di parametri per un nuovo processo è variabile.  |

## <a name="remarks"></a>Note

Le funzioni `_spawn` creano ed eseguono un nuovo processo. Gestiscono automaticamente gli argomenti stringa di caratteri multibyte in base alle esigenze, riconoscendo le sequenze di caratteri multibyte in base alla tabella codici multibyte attualmente in uso. Le funzioni `_wspawn` sono versioni a caratteri wide delle funzioni `_spawn`; non gestiscono le stringhe di caratteri multibyte. In caso contrario, le funzioni `_wspawn` si comportano in modo identico alle controparti `_spawn`.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|`_tspawnl`|`_spawnl`|`_spawnl`|`_wspawnl`|
|`_tspawnle`|`_spawnle`|`_spawnle`|`_wspawnle`|
|`_tspawnlp`|`_spawnlp`|`_spawnlp`|`_wspawnlp`|
|`_tspawnlpe`|`_spawnlpe`|`_spawnlpe`|`_wspawnlpe`|
|`_tspawnv`|`_spawnv`|`_spawnv`|`_wspawnv`|
|`_tspawnve`|`_spawnve`|`_spawnve`|`_wspawnve`|
|`_tspawnvp`|`_spawnvp`|`_spawnvp`|`_wspawnvp`|
|`_tspawnvpe`|`_spawnvpe`|`_spawnvpe`|`_wspawnvpe`|

Deve essere disponibile memoria sufficiente per il caricamento e l'esecuzione del nuovo processo. L'argomento `mode` determina l'azione eseguita dal processo chiamante prima e durante `_spawn`. I valori seguenti per `mode` sono definiti in Process.h:

|||
|-|-|
| `_P_OVERLAY`  | Sovrappone un processo chiamante con un nuovo processo, distruggendo il processo chiamante (lo stesso effetto delle chiamate `_exec`).  |
| `_P_WAIT`  | Sospende un thread chiamante finché l'esecuzione del nuovo processo non è stata completata (`_spawn` sincrono).  |
| `_P_NOWAIT` o `_P_NOWAITO`  | Continua ad eseguire un processo chiamante contemporaneamente al nuovo processo (`_spawn` asincrono).  |
| `_P_DETACH`  | Continua l'esecuzione del processo chiamante; il nuovo processo viene eseguito in background senza accesso alla console o alla tastiera. Le chiamate a `_cwait` rispetto al nuovo processo non vengono eseguite (`_spawn` asincrono).  |

L'argomento `cmdname` specifica il file che viene eseguito come nuovo processo e può specificare un percorso completo (dalla radice), un percorso parziale (dalla cartella di lavoro corrente) o, semplicemente, un nome file. Se `cmdname` non presenta un'estensione del nome file o non termina con un punto (.), la funzione `_spawn` tenta, innanzitutto, l'estensione del nome file .com, quindi l'estensione del nome file .exe, l'estensione del nome file .bat e, infine, l'estensione del nome file .cmd.

Se `cmdname` ha un'estensione del nome file, viene utilizzata solo tale estensione. Se `cmdname` termina con un punto, la chiamata `_spawn` cerca `cmdname` senza estensioni del nome file. Le funzioni `_spawnlp`, `_spawnlpe`, `_spawnvp` e `_spawnvpe` cercano `cmdname` (usando le stesse procedure) nella directory specificata dalla variabile di ambiente `PATH`.

Se `cmdname` contiene un identificatore di unità o delle barre (ovvero se si tratta di un percorso relativo), la chiamata `_spawn` cerca soltanto il file specificato; il percorso non viene cercato.

In passato, alcune di queste funzioni impostavano `errno` su zero in caso di esito positivo; il comportamento corrente è di non modificare `errno` in caso di esito positivo, come specificato dallo standard C. Se è necessario emulare il comportamento precedente, impostare `errno` su zero prima di chiamare queste funzioni.

> [!NOTE]
>  Per garantire l'inizializzazione e terminazione sovrapposta appropriata, non utilizzare la funzione `setjmp` o `longjmp` per immettere o lasciare una routine sovrapposta.

## <a name="arguments-for-the-spawned-process"></a>Argomenti per il processo generato

Per passare argomenti al nuovo processo, specificare uno o più puntatori alle stringhe di caratteri come argomenti nella chiamata `_spawn`. Queste stringhe di caratteri formano un elenco di argomenti per il processo generato. La lunghezza combinata delle stringhe che compongono l'elenco di argomenti per il nuovo processo non deve superare i 1024 byte. Il carattere di terminazione null ('\0') per ogni stringa non è incluso nel conteggio, ma i caratteri di spazio (inseriti automaticamente per separare gli argomenti) sono inclusi.

> [!NOTE]
>  La presenza di spazi incorporati nelle stringhe può causare comportamenti imprevisti; ad esempio, passare a `_spawn` la stringa `"hi there"` comporterà la presenza nel nuovo processo di due argomenti, `"hi"` e `"there"`. Se lo scopo è quello di far aprire al nuovo processo un file denominato "hi there", il processo avrà esito negativo. Per evitarlo, racchiudere la stringa tra virgolette doppie: `"\"hi there\""`.

> [!IMPORTANT]
>  Non passare input utente a `_spawn` senza verificarne esplicitamente il contenuto. `_spawn` determinerà una chiamata a [CreateProcess](/windows/win32/api/processthreadsapi/nf-processthreadsapi-createprocessw), per cui è bene tenere presente che i nomi di percorsi non qualificati possono creare vulnerabilità a livello di sicurezza.

È possibile passare i puntatori dell'argomento come argomenti separati (in `_spawnl`, `_spawnle`, `_spawnlp` e `_spawnlpe`) o come una matrice di puntatori (in `_spawnv`, `_spawnve`, `_spawnvp` e `_spawnvpe`). È necessario passare almeno un argomento, `arg0` o `argv`[0], al processo generato. Per convenzione, questo argomento è il nome del programma che si digiterebbe sulla riga di comando. Un valore diverso non produce un errore.

Le chiamate `_spawnl`, `_spawnle`, `_spawnlp` e `_spawnlpe` in genere vengono utilizzate nei casi in cui il numero di argomenti è noto in anticipo. L'argomento `arg0` è solitamente un puntatore a `cmdname`. Gli argomenti da `arg1` a `argn` sono puntatori alle stringhe di caratteri che costituiscono il nuovo elenco di argomenti. Dopo `argn`, ci deve essere un puntatore **NULL** per contrassegnare la fine dell'elenco di argomenti.

Le chiamate `_spawnv`, `_spawnve`, `_spawnvp` e `_spawnvpe` sono utili quando esiste un numero variabile di argomenti al nuovo processo. I puntatori agli argomenti vengono passati come matrice, `argv` *.* L'argomento `argv`[0] è in genere un puntatore a un percorso in modalità reale o al nome del programma in modalità protetta e `argv`[1] con `argv`[`n`] sono puntatori alle stringhe di caratteri che costituiscono il nuovo elenco di argomenti. L'argomento `argv`[`n` +1] deve essere un puntatore **NULL** per contrassegnare la fine dell'elenco di argomenti.

## <a name="environment-of-the-spawned-process"></a>Ambiente del processo generato

I file che vengono aperti quando viene effettuata una chiamata `_spawn` rimangono aperti nel nuovo processo. Nelle chiamate `_spawnl`, `_spawnlp`, `_spawnv` e `_spawnvp`, il nuovo processo eredita l'ambiente del processo chiamante. È possibile utilizzare le chiamate `_spawnle`, `_spawnlpe`, `_spawnve` e `_spawnvpe` per modificare l'ambiente per il nuovo processo passando un elenco delle impostazioni di ambiente tramite l'argomento `envp`. L'argomento `envp` è una matrice di puntatori a caratteri, ogni elemento della matrice (ad eccezione dell'elemento finale) punta alla stringa di terminazione null che definisce una variabile di ambiente. Tale stringa è in genere in formato `NAME`=`value`, dove `NAME` è il nome di una variabile di ambiente e `value` è il valore stringa su cui è impostata la variabile. Si noti che `value` non è racchiuso tra virgolette doppie. L'elemento finale della matrice di `envp` deve essere **null**. Quando la stessa `envp` è **NULL**, il processo generato eredita le impostazioni di ambiente del processo padre.

Le funzioni `_spawn` possono passare tutte le informazioni sui file aperti, inclusa la modalità di traduzione, al nuovo processo. Queste informazioni vengono passate in modalità reale tramite la voce `C_FILE_INFO` nell'ambiente. Il codice di avvio in genere elabora questa voce, quindi la elimina dall'ambiente. Tuttavia, se una funzione `_spawn` genera un processo non C, questa voce rimane nell'ambiente. La stampa dell'ambiente indica i caratteri grafici nella stringa di definizione per la voce poiché le informazioni sull'ambiente vengono passate in forma binaria in modalità reale. Non dovrebbe avere altri effetti sulle operazioni normali. In modalità protetta, le informazioni sull'ambiente vengono passate in forma di testo e pertanto non contengono caratteri grafici.

È necessario svuotare o chiudere in modo esplicito qualsiasi flusso (utilizzando `fflush` o `_flushall`) prima di chiamare una funzione `_spawn`.

I nuovi processi creati dalle chiamate alle routine `_spawn` non mantengono le impostazioni del segnale. Al contrario, il processo generato reimposta le impostazioni del segnale ai valori predefiniti.

## <a name="redirecting-output"></a>Reindirizzamento dell'output

Se si chiama `_spawn` da un'applicazione DLL o GUI e si desidera reindirizzare l'output a una pipe, sono disponibili due opzioni:

- Usare l'API Win32 per creare una pipe, quindi chiamare [AllocConsole](/windows/console/allocconsole), impostare i valori di handle nella struttura di avvio e chiamare [CreateProcess](/windows/win32/api/processthreadsapi/nf-processthreadsapi-createprocessw).

- Chiamare [_popen, _wpopen](../c-runtime-library/reference/popen-wpopen.md) che creerà una pipe e richiamerà l'app con **cmd.exe /c** (o **command.exe /c**).

## <a name="example"></a>Esempio

```c
// crt_spawn.c
// This program accepts a number in the range
// 1-8 from the command line. Based on the number it receives,
// it executes one of the eight different procedures that
// spawn the process named child. For some of these procedures,
// the CHILD.EXE file must be in the same directory; for
// others, it only has to be in the same path.
//

#include <stdio.h>
#include <process.h>

char *my_env[] =
{
   "THIS=environment will be",
   "PASSED=to child.exe by the",
   "_SPAWNLE=and",
   "_SPAWNLPE=and",
   "_SPAWNVE=and",
   "_SPAWNVPE=functions",
   NULL
};

int main( int argc, char *argv[] )
{
   char *args[4];

   // Set up parameters to be sent:
   args[0] = "child";
   args[1] = "spawn??";
   args[2] = "two";
   args[3] = NULL;

   if (argc <= 2)
   {
      printf( "SYNTAX: SPAWN <1-8> <childprogram>\n" );
      exit( 1 );
   }

   switch (argv[1][0])   // Based on first letter of argument
   {
   case '1':
      _spawnl( _P_WAIT, argv[2], argv[2], "_spawnl", "two", NULL );
      break;
   case '2':
      _spawnle( _P_WAIT, argv[2], argv[2], "_spawnle", "two",
               NULL, my_env );
      break;
   case '3':
      _spawnlp( _P_WAIT, argv[2], argv[2], "_spawnlp", "two", NULL );
      break;
   case '4':
      _spawnlpe( _P_WAIT, argv[2], argv[2], "_spawnlpe", "two",
                NULL, my_env );
      break;
   case '5':
      _spawnv( _P_OVERLAY, argv[2], args );
      break;
   case '6':
      _spawnve( _P_OVERLAY, argv[2], args, my_env );
      break;
   case '7':
      _spawnvp( _P_OVERLAY, argv[2], args );
      break;
   case '8':
      _spawnvpe( _P_OVERLAY, argv[2], args, my_env );
      break;
   default:
      printf( "SYNTAX: SPAWN <1-8> <childprogram>\n" );
      exit( 1 );
   }
   printf( "from SPAWN!\n" );
}
```

```Output
child process output
from SPAWN!
```

## <a name="see-also"></a>Vedere anche

[Controllo di processi e ambiente](../c-runtime-library/process-and-environment-control.md)<br/>
[abort](../c-runtime-library/reference/abort.md)<br/>
[atexit](../c-runtime-library/reference/atexit.md)<br/>
[Funzioni _exec, _wexec](../c-runtime-library/exec-wexec-functions.md)<br/>
[exit, _Exit, _exit](../c-runtime-library/reference/exit-exit-exit.md)<br/>
[_flushall](../c-runtime-library/reference/flushall.md)<br/>
[_getmbcp](../c-runtime-library/reference/getmbcp.md)<br/>
[_onexit, _onexit_m](../c-runtime-library/reference/onexit-onexit-m.md)<br/>
[_setmbcp](../c-runtime-library/reference/setmbcp.md)<br/>
[system, _wsystem](../c-runtime-library/reference/system-wsystem.md)
