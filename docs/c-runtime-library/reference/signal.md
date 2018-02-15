---
title: signal | Microsoft Docs
ms.custom: 
ms.date: 02/12/2018
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- signal
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
- signal
dev_langs:
- C++
helpviewer_keywords:
- signal function
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 23eae404bf5f8e2227d68189938defb2308f5e6b
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="signal"></a>signal

Imposta la gestione del segnale di interrupt.

> [!IMPORTANT]
> Non utilizzare questo metodo per arrestare un'app Store di Microsoft, ad eccezione di testing o scenari di debug. Modalità a livello di codice o dell'interfaccia utente per chiudere un'app di Store non sono consentiti in base al [criteri di Microsoft Store](http://go.microsoft.com/fwlink/?LinkId=865936). Per ulteriori informazioni, vedere [ciclo di vita app UWP](http://go.microsoft.com/fwlink/p/?LinkId=865934).

## <a name="syntax"></a>Sintassi

```C
void __cdecl *signal(int sig, int (*func)(int, int));
```

### <a name="parameters"></a>Parametri
_sig_  
Valore del segnale.

_func_  
Il secondo parametro è un puntatore alla funzione da eseguire. Il primo parametro è un valore di segnale e il secondo parametro è un codice secondario che può essere usato quando il primo parametro è SIGFPE.

## <a name="return-value"></a>Valore restituito

`signal` Restituisce il valore precedente della funzione associata a segnale specifico. Ad esempio, se il valore precedente della _func_ stato `SIG_IGN`, anche il valore restituito è `SIG_IGN`. Un valore restituito di `SIG_ERR` indica un errore; in tal caso `errno` è impostato su `EINVAL`.

Per altre informazioni sui codici restituiti, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

La funzione `signal` consente a un processo di scegliere uno dei vari modi per gestire un segnale di interrupt proveniente dal sistema operativo. Il _sig_ argomento è l'interrupt a cui `signal` risponde; deve essere una delle seguenti costanti manifesto, definite in SIGNAL. H.

|_SIG_ valore|Descrizione|
|-----------------|-----------------|
|`SIGABRT`|Terminazione anomala|
|`SIGFPE`|Errore di virgola mobile|
|`SIGILL`|Istruzione non valida|
|`SIGINT`|Segnale CTRL+C|
|`SIGSEGV`|Accesso all'archiviazione non valido|
|`SIGTERM`|Richiesta di terminazione|

Se _sig_ non è uno dei valori specificati sopra, viene richiamato il gestore di parametri non validi, come definito in [convalida dei parametri](../../c-runtime-library/parameter-validation.md) . Se l'esecuzione può continuare, la funzione imposta `errno` su`EINVAL` e restituisce `SIG_ERR`.

Per impostazione predefinita, `signal` termina il programma chiamante con codice di uscita 3, indipendentemente dal valore di _sig_.

> [!NOTE]
> `SIGINT` non è supportato per le applicazioni Win32. Quando si verifica un interrupt CTRL+C, i sistemi operativi Win32 generare un nuovo thread per gestire in maniera specifica l'interrupt. Ciò può far sì che un'applicazione a thread singolo, come una in UNIX, diventi multithreading e causi un comportamento imprevisto.

Il _func_ argomento è un indirizzo di un gestore di segnale scritto o su una delle costanti predefinite `SIG_DFL` o `SIG_IGN`, che sono definiti anche nel segnale. H. Se _func_ è una funzione, viene installato come il gestore di segnale per segnale specifico. Prototipo del gestore di segnale richiede un argomento formale, _sig_, di tipo `int`. Il sistema operativo fornisce l'argomento effettivo tramite _sig_ quando si verifica un interrupt; l'argomento è il segnale che ha generato l'interrupt. Pertanto, è possibile utilizzare le sei costanti manifesto (elencate nella tabella precedente) nel gestore di segnale per determinare quale interrupt si è verificato ed eseguire l'azione appropriata. Ad esempio, è possibile chiamare `signal` due volte per assegnare lo stesso gestore a due segnali diversi e il test di _sig_ argomento nel gestore per eseguire azioni diverse in base al segnale ricevuto.

Se si sta testando per le eccezioni a virgola mobile (`SIGFPE`), _func_ punta a una funzione che accetta un secondo argomento facoltativo che è una delle costanti manifesto diversi, definiti in FLOAT. H, nel formato `FPE_xxx`. Quando si verifica un segnale `SIGFPE`, è possibile testare il valore del secondo argomento per determinare il tipo di eccezione a virgola mobile e quindi eseguire l'azione appropriata. Questo argomento e i relativi valori possibili sono estensioni Microsoft.

Per le eccezioni a virgola mobile, il valore di _func_ non viene reimpostato quando viene ricevuto il segnale. Per risolvere eccezioni a virgola mobile, utilizzare le clausole try/except per racchiudere le operazioni a virgola mobile. È anche possibile ricorrere a [setjmp](../../c-runtime-library/reference/setjmp.md) con [longjmp](../../c-runtime-library/reference/longjmp.md). In entrambi i casi, il processo chiamante riprende l'esecuzione e lascia che lo stato del processo a virgola mobile sia indefinito.

Se il gestore del segnale restituisce il controllo, il processo chiamante riprende l'esecuzione subito dopo il punto in cui ha ricevuto il segnale di interrupt. Ciò si verifica indipendentemente dal tipo di segnale o dalla modalità operativa.

Prima che venga eseguita la funzione specificata, il valore di _func_ è impostato su `SIG_DFL`. Il segnale di interrupt successivo viene gestito come descritto per `SIG_DFL`, se non specificato diversamente da una chiamata intermedia a `signal`. È possibile utilizzare questa funzionalità per reimpostare i segnali della funzione chiamata.

Dato che le routine del gestore di segnale vengono in genere chiamate in modo asincrono quando si verifica un'interrupt, la funzione del gestore di segnale può ottenere il controllo quando un'operazione di runtime è incompleta e in uno stato sconosciuto. Nell'elenco seguente sono riepilogate le restrizioni che determinano quali funzioni è possibile utilizzare nelle routine del gestore di segnale.

- Non eseguire le routine STDIO.H I/O o di basso livello (ad esempio, `printf` o `fread`).

- Non chiamare le routine dell'heap o qualsiasi routine che utilizzi le routine dell'heap, ad esempio `malloc`, `_strdup` o `_putenv`. Per altre informazioni, vedere [malloc](../../c-runtime-library/reference/malloc.md).

- Non utilizzare le funzioni che generano una chiamata di sistema (ad esempio, `_getcwd` o `time`).

- Non utilizzare `longjmp` , a meno che l'interrupt è causato da un'eccezione a virgola mobile (vale a dire _sig_ è `SIGFPE`). In questo caso, bisogna prima di tutto reinizializzare il pacchetto a virgola mobile utilizzando una chiamata a `_fpreset`.

- Non usare routine sostitutive.

Un programma deve contenere codice a virgola mobile se prevede di intercettare l'eccezione `SIGFPE` utilizzando la funzione. Se il programma non dispone di codice a virgola mobile e richiede il codice di gestione di segnale della libreria di runtime, è sufficiente dichiarare un double volatile e inizializzarlo su zero:

`volatile double d = 0.0f;`

I segnali `SIGILL` e `SIGTERM` non vengono generati in Windows. Sono incluso per compatibilità con ANSI. È pertanto possibile impostare gestori di segnale per questi segnali usando `signal` e anche generare in modo esplicito questi segnali chiamando [raise](../../c-runtime-library/reference/raise.md).

Le impostazioni del segnale non vengono mantenute nei processi generati che sono stati creati dalle chiamate alle funzioni `_exec` o `_spawn`. Le impostazioni del segnale del nuovo processo vengono reimpostate sui valori predefiniti.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|`signal`|\<signal.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato l'utilizzo di `signal` per aggiungere un comportamento personalizzato al segnale `SIGABRT`. Per altre informazioni sul comportamento delle interruzioni, vedere [_set_abort_behavior](../../c-runtime-library/reference/set-abort-behavior.md).

```C
// crt_signal.c
// compile with: /EHsc /W4
// Use signal to attach a signal handler to the abort routine
#include <stdlib.h>
#include <signal.h>
#include <tchar.h>

void SignalHandler(int signal)
{
    if (signal == SIGABRT) {
        // abort signal handler code
    } else {
        // ...
    }
}

int main()
{
    typedef void (*SignalHandlerPointer)(int);

    SignalHandlerPointer previousHandler;
    previousHandler = signal(SIGABRT, SignalHandler);

    abort();
}
```

```Output
This application has requested the Runtime to terminate it in an unusual way.
Please contact the application's support team for more information.
```

## <a name="see-also"></a>Vedere anche

[Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)  
[abort](../../c-runtime-library/reference/abort.md)  
[Funzioni _exec, _wexec](../../c-runtime-library/exec-wexec-functions.md)  
[exit, _Exit, _exit](../../c-runtime-library/reference/exit-exit-exit.md)  
[_fpreset](../../c-runtime-library/reference/fpreset.md)  
[Funzioni _spawn, _wspawn](../../c-runtime-library/spawn-wspawn-functions.md)  
