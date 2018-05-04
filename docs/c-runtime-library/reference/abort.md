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
ms.openlocfilehash: 943faab6b13f3d07b2ca19d78c555973149aa4b0
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="abort"></a>abort

Interrompe il processo corrente e restituisce un codice di errore.

> [!NOTE]
> Non utilizzare questo metodo per arrestare un'app di Microsoft Store o Windows piattaforma UWP (Universal), ad eccezione di testing o scenari di debug. Modalità a livello di codice o dell'interfaccia utente per chiudere un'app di Store non sono consentiti in base al [criteri di Microsoft Store](/legal/windows/agreements/store-policies). Per ulteriori informazioni, vedere [ciclo di vita app UWP](/windows/uwp/launch-resume/app-lifecycle).

## <a name="syntax"></a>Sintassi

```c
void abort( void );
```

## <a name="return-value"></a>Valore restituito

**interrompere** non restituisce il controllo al processo chiamante. Per impostazione predefinita, la presenza di un gestore di segnale di interruzione e genera **SIGABRT** se uno è impostato. Quindi **abort** termina il processo corrente e restituisce un codice di uscita al processo padre.

## <a name="remarks"></a>Note

**Sezione specifica Microsoft**

Per impostazione predefinita, quando un'app viene compilata con la libreria di runtime di debug, il **abort** routine consente di visualizzare un messaggio di errore prima **SIGABRT** viene generato. Per le applicazioni console in esecuzione in modalità console, il messaggio viene inviato a **STDERR**. Le app desktop e le app console di Windows eseguite in modalità finestra visualizzano il messaggio in una finestra di messaggio. Per eliminare il messaggio, usare [set_abort_behavior](set-abort-behavior.md) per cancellare il **_WRITE_ABORT_MSG** flag. Il messaggio visualizzato varia a seconda della versione dell'ambiente di runtime usato. Per le applicazioni compilate utilizzando le versioni più recenti di Visual C++, il messaggio è simile a questo:

> R6010 - è stato chiamato Abort)

Nelle versioni precedenti della libreria di runtime C, veniva visualizzato il messaggio seguente:

> Questa applicazione ha richiesto al Runtime di terminarlo in modo anomalo. Per altre informazioni, contattare il team di supporto dell'applicazione.

Quando il programma viene compilato in modalità debug, la finestra di messaggio visualizza le opzioni **Interrompi**, **Riprova** o **Ignora**. Se l'utente sceglie **Interrompi**, il programma viene immediatamente terminato e viene restituito un codice di uscita 3. Se l'utente sceglie **Riprova**, viene richiamato un debugger per il debug JIT, se disponibile. Se l'utente sceglie **Ignore**, **abort** continua l'elaborazione normale.

Nelle build di vendita al dettaglio e di debug **abort** quindi controlla se un gestore di segnale di interruzione è impostato. Se è impostato un gestore di segnale non predefinito, **abort** chiamate `raise(SIGABRT)`. Usare la [segnale](signal.md) funzione per associare una funzione del gestore di segnale di interruzione con il **SIGABRT** segnale. È possibile eseguire azioni personalizzate, ad esempio pulire le risorse o le informazioni di registro, e terminare l'app con il proprio codice di errore nella funzione del gestore. Se non è definito alcun gestore di segnale personalizzato, **abort** non genera la **SIGABRT** segnale.

Per impostazione predefinita, nelle compilazioni non di debug delle App desktop o della console, **abort** richiama quindi il meccanismo di servizio Segnalazione errori Windows (precedentemente noto come ripristino di emergenza. Watson) per segnalare gli errori a Microsoft. Questo comportamento può essere abilitato o disabilitato chiamando **set_abort_behavior** e l'impostazione o maschera la **_CALL_REPORTFAULT** flag. Quando il flag è impostato, Windows visualizza una finestra di messaggio contenente un testo simile a "Si è verificato un problema che impedisce il funzionamento corretto del programma". L'utente può scegliere di richiamare un debugger con un pulsante **Debug** oppure scegliere il pulsante **Chiudi programma** per terminare l'app con un codice di errore definito dal sistema operativo.

Se l'errore Windows reporting gestore non viene richiamato, quindi **abort** chiamate [Exit](exit-exit-exit.md) per terminare il processo di uscita 3 e restituisce il controllo del codice per il processo padre o del sistema operativo. **Exit** lo scaricamento dei buffer di flusso o eseguire **atexit**/**OnExit** l'elaborazione.

Per ulteriori informazioni sul debug CRT, vedere [Tecniche di debug CRT](/visualstudio/debugger/crt-debugging-techniques).

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
[_set_abort_behavior](set-abort-behavior.md)<br/>
