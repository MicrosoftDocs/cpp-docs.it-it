---
title: abort | Microsoft Docs
ms.custom: ''
ms.date: 1/02/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- aborting current process
- abort function
- processes, aborting
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d55f3066f2c42737170bdd8d87df95a8ad4a22d0
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46078088"
---
# <a name="abort"></a>abort

Interrompe il processo corrente e restituisce un codice di errore.

> [!NOTE]
> Non utilizzare questo metodo per arrestare un'app di Microsoft Store o app Universal Windows Platform (UWP), ad eccezione di test o gli scenari di debug. Modalità dell'interfaccia utente o a livello di codice per chiudere un'app di Store non sono consentiti in base al [i criteri di Microsoft Store](/legal/windows/agreements/store-policies). Per altre informazioni, vedere [ciclo di vita app UWP](/windows/uwp/launch-resume/app-lifecycle).

## <a name="syntax"></a>Sintassi

```C
void abort( void );
```

## <a name="return-value"></a>Valore restituito

**Interrompi** non restituisce il controllo al processo chiamante. Per impostazione predefinita, cerca un gestore di segnale di interruzione e genera `SIGABRT` se ne è stato impostato uno. Quindi **abort** termina il processo corrente e restituisce un codice di uscita per il processo padre.

## <a name="remarks"></a>Note

**Sezione specifica Microsoft**

Per impostazione predefinita, quando si crea un'app con la libreria di runtime di debug, il **abort** routine consente di visualizzare un messaggio di errore prima `SIGABRT` viene generato. Per le app della console eseguite in modalità console, il messaggio viene inviato a `STDERR`. Le app desktop e le app console di Windows eseguite in modalità finestra visualizzano il messaggio in una finestra di messaggio. Per eliminare il messaggio, usare [_set_abort_behavior](set-abort-behavior.md) per cancellare il flag `_WRITE_ABORT_MSG`. Il messaggio visualizzato varia a seconda della versione dell'ambiente di runtime usato. Per le applicazioni compilate usando le versioni più recenti di Visual C++, il messaggio è simile a questo:

> R6010 - è stato chiamato Abort)

Nelle versioni precedenti della libreria di runtime C, veniva visualizzato il messaggio seguente:

> Questa applicazione ha richiesto al Runtime di terminarlo in modo anomalo. Per altre informazioni, contattare il team di supporto dell'applicazione.

Quando il programma viene compilato in modalità debug, la finestra di messaggio visualizza le opzioni **Interrompi**, **Riprova** o **Ignora**. Se l'utente sceglie **Interrompi**, il programma viene immediatamente terminato e viene restituito un codice di uscita 3. Se l'utente sceglie **Riprova**, viene richiamato un debugger per il debug JIT, se disponibile. Se l'utente sceglie **Ignore**, **abort** continua l'elaborazione normale.

Nelle build di distribuzione e di debug **abort** verifica quindi se è impostato un gestore di segnale di interruzione. Se è impostato un gestore del segnale non predefinito, **abort** chiamate `raise(SIGABRT)`. Usare la funzione [signal](signal.md) per associare un gestore di segnale di interruzione al segnale `SIGABRT`. È possibile eseguire azioni personalizzate, ad esempio pulire le risorse o le informazioni di registro, e terminare l'app con il proprio codice di errore nella funzione del gestore. Se non è definito alcun gestore di segnale personalizzato, **abort** non genera il `SIGABRT` segnale.

Per impostazione predefinita, nelle compilazioni non di debug delle App desktop o console, **abort** richiama quindi il meccanismo di servizio di segnalazione errori Windows (precedentemente noto come ripristino di emergenza. Watson) per segnalare gli errori a Microsoft. Questo comportamento può essere abilitato o disabilitato chiamando `_set_abort_behavior` e impostando o eseguendo il mascheramento del flag `_CALL_REPORTFAULT`. Quando il flag è impostato, Windows visualizza una finestra di messaggio contenente un testo simile a "Si è verificato un problema che impedisce il funzionamento corretto del programma". L'utente può scegliere di richiamare un debugger con un pulsante **Debug** oppure scegliere il pulsante **Chiudi programma** per terminare l'app con un codice di errore definito dal sistema operativo.

Se il gestore di segnalazione errori di Windows non viene richiamato, quindi **abort** chiamate [Exit](exit-exit-exit.md) per terminare il processo con codice di uscita 3 e restituisce controllo al processo padre o il sistema operativo. `_exit` non scarica i buffer di flusso e non esegue l'elaborazione `atexit`/`_onexit`.

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