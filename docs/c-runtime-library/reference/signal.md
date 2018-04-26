---
title: signal | Microsoft Docs
ms.custom: ''
ms.date: 04/12/2018
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
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
ms.openlocfilehash: fc6ed4c1af9e746a4e4b20c72d69f0700597b665
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
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

*sig*<br/>
Valore del segnale.

*func*<br/>
Il secondo parametro è un puntatore alla funzione da eseguire. Il primo parametro è un valore di segnale e il secondo parametro è un codice secondario che può essere usato quando il primo parametro è SIGFPE.

## <a name="return-value"></a>Valore restituito

**segnale** restituisce il valore precedente di func associata segnale specifico. Ad esempio, se il valore precedente della *func* era **SIG_IGN**, il valore restituito è anche **SIG_IGN**. Valore restituito di **SIG_ERR** indica un errore; in tal caso, **errno** è impostato su **EINVAL**.

Per altre informazioni sui codici restituiti, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **segnale** funzione consente a un processo di scegliere uno dei diversi modi per gestire un segnale di interrupt proveniente dal sistema operativo. Il *sig* l'argomento è l'interrupt a cui **segnale** risponde; deve essere una delle seguenti costanti manifesto, definite in SIGNAL. H.

|*SIG* valore|Descrizione|
|-----------------|-----------------|
|**SIGABRT**|Terminazione anomala|
|**SIGFPE**|Errore di virgola mobile|
|**SIGILL**|Istruzione non valida|
|**SIGINT**|Segnale CTRL+C|
|**SIGSEGV**|Accesso all'archiviazione non valido|
|**SIGTERM**|Richiesta di terminazione|

Se *sig* non è uno dei valori specificati sopra, viene richiamato il gestore di parametri non validi, come definito in [convalida dei parametri](../../c-runtime-library/parameter-validation.md) . Se l'esecuzione può continuare, la funzione imposta **errno** alla **EINVAL** e restituisce **SIG_ERR**.

Per impostazione predefinita **segnale** termina il programma chiamante con codice di uscita 3, indipendentemente dal valore di *sig*.

> [!NOTE]
> **SIGINT** non è supportato per qualsiasi applicazione Win32. Quando si verifica un interrupt CTRL+C, i sistemi operativi Win32 generare un nuovo thread per gestire in maniera specifica l'interrupt. Ciò può far sì che un'applicazione a thread singolo, come una in UNIX, diventi multithreading e causi un comportamento imprevisto.

Il *func* l'argomento è un indirizzo per un gestore di segnale scritto o a una delle costanti predefinite **SIG_DFL** oppure **SIG_IGN**, che sono definiti anche nel segnale. H. Se *func* è una funzione, viene installato come il gestore di segnale per segnale specifico. Prototipo del gestore di segnale richiede un argomento formale *sig*, di tipo **int**. Il sistema operativo fornisce l'argomento effettivo attraverso *sig* quando si verifica un interrupt; l'argomento è il segnale che ha generato l'interrupt. Pertanto, è possibile utilizzare le sei costanti manifesto (elencate nella tabella precedente) nel gestore di segnale per determinare quale interrupt si è verificato ed eseguire l'azione appropriata. Ad esempio, è possibile chiamare **segnale** due volte per assegnare lo stesso gestore a due segnali diversi, quindi testare il *sig* argomento nel gestore per eseguire azioni diverse in base al segnale ricevuto.

Se si sta testando per le eccezioni a virgola mobile (**SIGFPE**), *func* punta a una funzione che accetta un secondo argomento facoltativo che fa parte di più costanti manifesto, definite in FLOAT. H, nel formato **FPE_xxx**. Quando un **SIGFPE** segnale si verifica, è possibile testare il valore del secondo argomento per determinare il tipo di eccezione a virgola mobile e quindi intraprendere l'azione appropriata. Questo argomento e i relativi valori possibili sono estensioni Microsoft.

Per le eccezioni a virgola mobile, il valore di *func* non viene reimpostato quando viene ricevuto il segnale. Per risolvere eccezioni a virgola mobile, utilizzare le clausole try/except per racchiudere le operazioni a virgola mobile. È anche possibile ricorrere a [setjmp](setjmp.md) con [longjmp](longjmp.md). In entrambi i casi, il processo chiamante riprende l'esecuzione e lascia che lo stato del processo a virgola mobile sia indefinito.

Se il gestore del segnale restituisce il controllo, il processo chiamante riprende l'esecuzione subito dopo il punto in cui ha ricevuto il segnale di interrupt. Ciò si verifica indipendentemente dal tipo di segnale o dalla modalità operativa.

Prima che venga eseguita la funzione specificata, il valore di *func* è impostata su **SIG_DFL**. Il segnale di interruzione successivo viene considerato come descritto per **SIG_DFL**, a meno che una nuova chiamata a **segnale** specifichi diversamente. È possibile utilizzare questa funzionalità per reimpostare i segnali della funzione chiamata.

Dato che le routine del gestore di segnale vengono in genere chiamate in modo asincrono quando si verifica un'interrupt, la funzione del gestore di segnale può ottenere il controllo quando un'operazione di runtime è incompleta e in uno stato sconosciuto. Nell'elenco seguente sono riepilogate le restrizioni che determinano quali funzioni è possibile utilizzare nelle routine del gestore di segnale.

- Eseguire operazioni non problema di basso livello o STDIO. Routine i/o H (ad esempio **printf** oppure **fread**).

- Non chiamare routine dello heap o qualsiasi routine che utilizzi le routine dell'heap (ad esempio **malloc**, **StrDup**, o **putenv**). Per altre informazioni, vedere [malloc](malloc.md).

- Non utilizzare le funzioni che generano una chiamata di sistema (ad esempio **getcwd** oppure **tempo**).

- Non usare **longjmp** a meno che l'interrupt è causato da un'eccezione a virgola mobile (vale a dire *sig* è **SIGFPE**). In questo caso, prima di tutto reinizializzare il pacchetto a virgola mobile utilizzando una chiamata a **fpreset**.

- Non usare routine sostitutive.

Un programma deve contenere codice a virgola mobile se prevede di intercettare il **SIGFPE** eccezione tramite la funzione. Se il programma non dispone di codice a virgola mobile e richiede il codice di gestione di segnale della libreria di runtime, è sufficiente dichiarare un double volatile e inizializzarlo su zero:

```C
volatile double d = 0.0f;
```

Il **SIGILL** e **SIGTERM** segnali non vengono generati in Windows. Sono incluso per compatibilità con ANSI. Pertanto, è possibile impostare gestori di segnale per questi segnali utilizzando **segnale**, e anche in modo esplicito, è possibile generare questi segnali chiamando [generare](raise.md).

Le impostazioni del segnale non vengono mantenute nei processi generati che vengono creati dalle chiamate a [Exec](../../c-runtime-library/exec-wexec-functions.md) oppure [spawn](../../c-runtime-library/spawn-wspawn-functions.md) funzioni. Le impostazioni del segnale del nuovo processo vengono reimpostate sui valori predefiniti.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**signal**|\<signal.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare **segnale** per aggiungere un comportamento personalizzato per il **SIGABRT** segnale. Per altre informazioni sul comportamento delle interruzioni, vedere [_set_abort_behavior](set-abort-behavior.md).

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

[Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[abort](abort.md)<br/>
[Funzioni _exec, _wexec](../../c-runtime-library/exec-wexec-functions.md)<br/>
[exit, _Exit, _exit](exit-exit-exit.md)<br/>
[_fpreset](fpreset.md)<br/>
[Funzioni _spawn, _wspawn](../../c-runtime-library/spawn-wspawn-functions.md)<br/>
