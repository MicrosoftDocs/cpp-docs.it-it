---
title: abort
ms.date: 01/02/2018
apiname:
- abort
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
- api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- Abort
helpviewer_keywords:
- aborting current process
- abort function
- processes, aborting
ms.openlocfilehash: ee07e50504b53e9e363f8b4fc5e9f4414637c449
ms.sourcegitcommit: effb516760c0f956c6308eeded48851accc96b92
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70927469"
---
# <a name="abort"></a>abort

Interrompe il processo corrente e restituisce un codice di errore.

> [!NOTE]
> Non usare questo metodo per arrestare un'app Microsoft Store o un piattaforma UWP (Universal Windows Platform) (UWP), tranne che negli scenari di test o di debug. I metodi a livello di codice o dell'interfaccia utente per chiudere un'app dello Store non sono consentiti in base ai [criteri Microsoft Store](/legal/windows/agreements/store-policies). Per altre informazioni, vedere ciclo di vita dell' [app UWP](/windows/uwp/launch-resume/app-lifecycle).

## <a name="syntax"></a>Sintassi

```C
void abort( void );
```

## <a name="return-value"></a>Valore restituito

**Abort** non restituisce il controllo al processo chiamante. Per impostazione predefinita, cerca un gestore di segnale di interruzione e genera `SIGABRT` se ne è stato impostato uno. Quindi **Abort** termina il processo corrente e restituisce un codice di uscita al processo padre.

## <a name="remarks"></a>Note

**Sezione specifica Microsoft**

Per impostazione predefinita, quando un'app viene compilata con la libreria di runtime di debug, la routine Abort `SIGABRT` Visualizza un messaggio di errore prima che venga generato. Per le app della console eseguite in modalità console, il messaggio viene inviato a `STDERR`. Le app desktop e le app console di Windows eseguite in modalità finestra visualizzano il messaggio in una finestra di messaggio. Per eliminare il messaggio, usare [_set_abort_behavior](set-abort-behavior.md) per cancellare il flag `_WRITE_ABORT_MSG`. Il messaggio visualizzato varia a seconda della versione dell'ambiente di runtime usato. Per le applicazioni compilate usando le versioni più recenti C++di Visual, il messaggio è simile al seguente:

> R6010-Abort () è stato chiamato

Nelle versioni precedenti della libreria di runtime C, veniva visualizzato il messaggio seguente:

> Questa applicazione ha richiesto al Runtime di terminarlo in modo anomalo. Per altre informazioni, contattare il team di supporto dell'applicazione.

Quando il programma viene compilato in modalità debug, la finestra di messaggio visualizza le opzioni **Interrompi**, **Riprova** o **Ignora**. Se l'utente sceglie **Interrompi**, il programma viene immediatamente terminato e viene restituito un codice di uscita 3. Se l'utente sceglie **Riprova**, viene richiamato un debugger per il debug JIT, se disponibile. Se l'utente sceglie **Ignora**, **Interrompi** continua l'elaborazione normale.

Nelle compilazioni finali e di debug, **Interrompi** verifica se è impostato un gestore di segnale di interruzione. Se viene impostato un gestore di segnale non predefinito, **Interrompi** chiama `raise(SIGABRT)`. Usare la funzione [signal](signal.md) per associare un gestore di segnale di interruzione al segnale `SIGABRT`. È possibile eseguire azioni personalizzate, ad esempio pulire le risorse o le informazioni di registro, e terminare l'app con il proprio codice di errore nella funzione del gestore. Se non viene definito alcun gestore di segnale personalizzato, **Abort** non genera `SIGABRT` il segnale.

Per impostazione predefinita, nelle compilazioni non di debug delle app desktop o console, **Abort** richiama quindi il meccanismo di servizio Segnalazione errori Windows (noto in precedenza come ripristino di emergenza. Watson) per segnalare gli errori a Microsoft. Questo comportamento può essere abilitato o disabilitato chiamando `_set_abort_behavior` e impostando o eseguendo il mascheramento del flag `_CALL_REPORTFAULT`. Quando il flag è impostato, Windows visualizza una finestra di messaggio contenente un testo simile a "Si è verificato un problema che impedisce il funzionamento corretto del programma". L'utente può scegliere di richiamare un debugger con un pulsante **Debug** oppure scegliere il pulsante **Chiudi programma** per terminare l'app con un codice di errore definito dal sistema operativo.

Se il gestore di segnalazione errori Windows non viene richiamato, **Abort** chiama [_exit](exit-exit-exit.md) per terminare il processo con il codice di uscita 3 e restituisce il controllo al processo padre o al sistema operativo. `_exit` non scarica i buffer di flusso e non esegue l'elaborazione `atexit`/`_onexit`.

Per altre informazioni sul debug CRT, vedere [CRT Debugging Techniques](/visualstudio/debugger/crt-debugging-techniques) (Tecniche di debug CRT).

**Fine sezione specifica Microsoft**

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**abort**|\<process.h> o \<stdlib.h>|

## <a name="example"></a>Esempio

Il programma seguente tenta di aprire un file e viene interrotto se il tentativo non riesce.

```C
// crt_abort.c
// compile with: /TC
// This program demonstrates the use of
// the abort function by attempting to open a file
// and aborts if the attempt fails.

#include  <stdio.h>
#include  <stdlib.h>

int main( void )
{
    FILE    *stream = NULL;
    errno_t err = 0;

    err = fopen_s(&stream, "NOSUCHF.ILE", "r" );
    if ((err != 0) || (stream == NULL))
    {
        perror( "File could not be opened" );
        abort();
    }
    else
    {
        fclose( stream );
    }
}
```

```Output
File could not be opened: No such file or directory
```

## <a name="see-also"></a>Vedere anche

[Uso di abort](../../cpp/using-abort.md)<br/>
[Funzione abort](../../c-language/abort-function-c.md)<br/>
[Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[Funzioni _exec, _wexec](../../c-runtime-library/exec-wexec-functions.md)<br/>
[exit, _Exit, _exit](exit-exit-exit.md)<br/>
[raise](raise.md)<br/>
[signal](signal.md)<br/>
[Funzioni _spawn, _wspawn](../../c-runtime-library/spawn-wspawn-functions.md)<br/>
[_DEBUG](../../c-runtime-library/debug.md)<br/>
[_set_abort_behavior](set-abort-behavior.md)