---
description: 'Altre informazioni su: Signal'
title: signal
ms.date: 04/12/2018
api_name:
- signal
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
- api-ms-win-crt-runtime-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- signal
helpviewer_keywords:
- signal function
ms.openlocfilehash: 601e8108f7078356cdd1c6642deb05762b970e00
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97303453"
---
# <a name="signal"></a>signal

Imposta la gestione del segnale di interrupt.

> [!IMPORTANT]
> Non usare questo metodo per arrestare un'app Microsoft Store, tranne che negli scenari di test o di debug. I metodi a livello di codice o dell'interfaccia utente per chiudere un'app dello Store non sono consentiti in base ai [criteri Microsoft Store](/legal/windows/agreements/store-policies). Per altre informazioni, vedere ciclo di vita dell' [app UWP](/windows/uwp/launch-resume/app-lifecycle).

## <a name="syntax"></a>Sintassi

```C
void __cdecl *signal(int sig, int (*func)(int, int));
```

### <a name="parameters"></a>Parametri

*Sig*<br/>
Valore del segnale.

*func*<br/>
Il secondo parametro è un puntatore alla funzione da eseguire. Il primo parametro è un valore di segnale e il secondo parametro è un codice secondario che può essere usato quando il primo parametro è SIGFPE.

## <a name="return-value"></a>Valore restituito

**Signal** restituisce il valore precedente di Func associato al segnale specificato. Se ad esempio il valore precedente di *Func* è **SIG_IGN**, viene **SIG_IGN** anche il valore restituito. Un valore restituito di **SIG_ERR** indica un errore. in tal caso, **errno** viene impostato su **EINVAL**.

Per altre informazioni sui codici restituiti, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Commenti

La funzione **Signal** consente a un processo di scegliere uno dei diversi modi per gestire un segnale di interrupt dal sistema operativo. L'argomento *sig* è l'interrupt a cui risponde il **segnale** . deve corrispondere a una delle costanti manifeste seguenti, definite in SIGNAL. H.

|valore *sig*|Description|
|-----------------|-----------------|
|**SIGABRT**|Terminazione anomala|
|**SIGFPE**|Errore di virgola mobile|
|**SIGILL**|Istruzione non valida|
|**SIGINT**|Segnale CTRL+C|
|**SIGSEGV**|Accesso all'archiviazione non valido|
|**SIGTERM**|Richiesta di terminazione|

Se *sig* non è uno dei valori sopra indicati, viene richiamato il gestore di parametri non validi, come definito in [convalida dei parametri](../../c-runtime-library/parameter-validation.md) . Se l'esecuzione può continuare, questa funzione imposta **errno** su **EINVAL** e restituisce **SIG_ERR**.

Per impostazione predefinita, **Signal** termina il programma chiamante con codice di uscita 3, indipendentemente dal valore di *sig*.

> [!NOTE]
> **SIGINT** non è supportato per le applicazioni Win32. Quando si verifica un interrupt CTRL+C, i sistemi operativi Win32 generare un nuovo thread per gestire in maniera specifica l'interrupt. Ciò può far sì che un'applicazione a thread singolo, come una in UNIX, diventi multithreading e causi un comportamento imprevisto.

L'argomento *Func* è un indirizzo per un gestore di segnale scritto dall'utente o per una delle costanti predefinite **SIG_DFL** o **SIG_IGN**, anch ' esse definite in Signal. H. Se *Func* è una funzione, viene installato come gestore di segnale per il segnale specificato. Il prototipo del gestore di segnale richiede un argomento formale, *sig*, di tipo **`int`** . Il sistema operativo fornisce l'argomento effettivo tramite *sig* quando si verifica un interrupt. l'argomento è il segnale che ha generato l'interrupt. Pertanto, è possibile utilizzare le sei costanti manifesto (elencate nella tabella precedente) nel gestore di segnale per determinare quale interrupt si è verificato ed eseguire l'azione appropriata. Ad esempio, è possibile chiamare due volte **Signal** per assegnare lo stesso gestore a due segnali diversi, quindi testare l'argomento *sig* nel gestore per eseguire azioni diverse in base al segnale ricevuto.

Se si esegue il test per le eccezioni a virgola mobile (**SIGFPE**), *Func* punta a una funzione che accetta un secondo argomento facoltativo che corrisponde a una delle numerose costanti manifesto, definite in float. H, nel formato **FPE_xxx**. Quando si verifica un segnale **SIGFPE** , è possibile testare il valore del secondo argomento per determinare il tipo di eccezione a virgola mobile e quindi intraprendere l'azione appropriata. Questo argomento e i relativi valori possibili sono estensioni Microsoft.

Per le eccezioni a virgola mobile, il valore di *Func* non viene reimpostato quando viene ricevuto il segnale. Per risolvere eccezioni a virgola mobile, utilizzare le clausole try/except per racchiudere le operazioni a virgola mobile. È anche possibile ricorrere a [setjmp](setjmp.md) con [longjmp](longjmp.md). In entrambi i casi, il processo chiamante riprende l'esecuzione e lascia che lo stato del processo a virgola mobile sia indefinito.

Se il gestore del segnale restituisce il controllo, il processo chiamante riprende l'esecuzione subito dopo il punto in cui ha ricevuto il segnale di interrupt. Ciò si verifica indipendentemente dal tipo di segnale o dalla modalità operativa.

Prima che venga eseguita la funzione specificata, il valore di *Func* viene impostato su **SIG_DFL**. Il segnale di interruzione successivo viene considerato come descritto per **SIG_DFL**, a meno che non venga specificata una chiamata a **Signal** corrispondente. È possibile utilizzare questa funzionalità per reimpostare i segnali della funzione chiamata.

Dato che le routine del gestore di segnale vengono in genere chiamate in modo asincrono quando si verifica un'interrupt, la funzione del gestore di segnale può ottenere il controllo quando un'operazione di runtime è incompleta e in uno stato sconosciuto. Nell'elenco seguente sono riepilogate le restrizioni che determinano quali funzioni è possibile utilizzare nelle routine del gestore di segnale.

- Non eseguire STDIO di basso livello o STDIO. Routine di I/O H (ad esempio, **printf** o **fread**).

- Non chiamare le routine dell'heap o qualsiasi routine che usi le routine dell'heap, ad esempio **malloc**, **_strdup** o **_putenv**. Per altre informazioni, vedere [malloc](malloc.md).

- Non usare funzioni che generano una chiamata di sistema, ad esempio **_getcwd** o **Time**.

- Non usare **longjmp** , a meno che l'interrupt non sia causato da un'eccezione a virgola mobile (ovvero, *sig* è **SIGFPE**). In questo caso, reinizializzare prima il pacchetto a virgola mobile utilizzando una chiamata a **_fpreset**.

- Non usare routine sostitutive.

Un programma deve contenere codice a virgola mobile se è necessario intercettare l'eccezione **SIGFPE** usando la funzione. Se il programma non dispone di codice a virgola mobile e richiede il codice di gestione di segnale della libreria di runtime, è sufficiente dichiarare un double volatile e inizializzarlo su zero:

```C
volatile double d = 0.0f;
```

I segnali **SIGILL** e **SIGTERM** non vengono generati in Windows. Sono incluso per compatibilità con ANSI. Pertanto, è possibile impostare i gestori di segnale per questi segnali usando **Signal** ed è anche possibile generare questi segnali in modo esplicito chiamando [Raise](raise.md).

Le impostazioni del segnale non vengono mantenute nei processi generati che vengono creati dalle chiamate alle funzioni [_exec](../../c-runtime-library/exec-wexec-functions.md) o [_spawn](../../c-runtime-library/spawn-wspawn-functions.md) . Le impostazioni del segnale del nuovo processo vengono reimpostate sui valori predefiniti.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**signal**|\<signal.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare **Signal** per aggiungere un comportamento personalizzato al segnale **SIGABRT** . Per altre informazioni sul comportamento delle interruzioni, vedere [_set_abort_behavior](set-abort-behavior.md).

```C
// crt_signal.c
// compile with: /EHsc /W4
// Use signal to attach a signal handler to the abort routine
#include <stdlib.h>
#include <signal.h>

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

L'output dipende dalla versione del runtime usata, dal fatto che l'app sia una console o un'app di Windows e le impostazioni del registro di sistema di Windows. Per un'app console, potrebbe essere inviato a stderr un messaggio simile al seguente:

```Output
Debug Error!

Program: c:\Projects\crt_signal\Debug\crt_signal.exe

R6010

- abort() has been called
```

## <a name="see-also"></a>Vedi anche

[Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[interruzione](abort.md)<br/>
[_exec, funzioni _wexec](../../c-runtime-library/exec-wexec-functions.md)<br/>
[exit, _Exit, _exit](exit-exit-exit.md)<br/>
[_fpreset](fpreset.md)<br/>
[_spawn, funzioni _wspawn](../../c-runtime-library/spawn-wspawn-functions.md)<br/>
