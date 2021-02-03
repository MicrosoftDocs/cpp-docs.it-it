---
title: Gestione e notifica degli errori
description: 'Altre informazioni su: gestione degli errori di caricamento ritardato DLL e notifica'
ms.date: 01/19/2021
helpviewer_keywords:
- error handling, and notification
ms.openlocfilehash: efff7ba9956bee8fe6ccf1df96a3f4b49852ce43
ms.sourcegitcommit: c20734f18d3d49bb38b1628c68b53b54b3eeeb03
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/03/2021
ms.locfileid: "99522560"
---
# <a name="error-handling-and-notification"></a>Gestione e notifica degli errori

Se il programma usa le dll a caricamento ritardato, deve gestire gli errori in tutta affidabilità, poiché gli errori che si verificano durante l'esecuzione del programma provocheranno eccezioni non gestite. La gestione degli errori è costituita da due parti: il recupero tramite un hook e la creazione di report tramite un'eccezione.

Per ulteriori informazioni sulla gestione e sulla notifica degli errori di caricamento ritardato della DLL, vedere [comprendere la funzione di supporto](understanding-the-helper-function.md).

Per ulteriori informazioni sulle funzioni hook, vedere la pagina relativa alle [definizioni di struttura e costante](understanding-the-helper-function.md#structure-and-constant-definitions).

## <a name="recovery-through-a-hook"></a>Ripristino tramite hook

È possibile che il codice debba essere ripristinato in caso di errore o per fornire una libreria o una routine alternativa. È possibile specificare un hook per la funzione di supporto in grado di fornire il codice alternativo o risolvere il problema. La routine hook deve restituire un valore appropriato, in modo che l'elaborazione possa continuare ( `HINSTANCE` o `FARPROC` ). In alternativa, può restituire 0 per indicare che deve essere generata un'eccezione. Potrebbe anche generare un'eccezione o un'eccezione `longjmp` . Sono presenti hook di notifica e hook di errore. Per entrambe le operazioni è possibile utilizzare la stessa routine.

## <a name="notification-hooks"></a><a name="notification-hooks"></a> Hook di notifica

Gli hook di notifica del caricamento ritardato vengono chiamati poco prima che vengano eseguite le azioni seguenti nella routine di supporto:

- L'handle archiviato per la libreria viene controllato per verificare se è già stato caricato.

- `LoadLibrary` viene chiamato per tentare il caricamento della DLL.

- `GetProcAddress` viene chiamato per tentare di ottenere l'indirizzo della routine.

- Tornare al thunk di caricamento dell'importazione ritardata.

L'hook di notifica è abilitato:

- Fornendo una nuova definizione del puntatore `__pfnDliNotifyHook2` inizializzato in modo da puntare alla propria funzione che riceve le notifiche.

   \-oppure-

- Impostando il puntatore sulla `__pfnDliNotifyHook2` funzione hook prima di qualsiasi chiamata alla dll che il programma sta caricando in ritardo.

Se la notifica è `dliStartProcessing` , la funzione hook può restituire:

- `NULL`

   L'helper predefinito gestisce il caricamento della DLL. È utile chiamare solo a scopo informativo.

- puntatore a funzione

   Ignorare la gestione predefinita del caricamento ritardato. Consente di specificare un gestore di carico personalizzato.

Se la notifica è `dliNotePreLoadLibrary` , la funzione hook può restituire:

- 0, se si desiderano solo le notifiche informative.

- Oggetto `HMODULE` per la dll caricata, se è stata caricata la dll.

Se la notifica è `dliNotePreGetProcAddress` , la funzione hook può restituire:

- 0, se si desiderano solo le notifiche informative.

- Indirizzo della funzione importata, se la funzione hook Ottiene l'indirizzo stesso.

Se la notifica è `dliNoteEndProcessing` , il valore restituito della funzione hook viene ignorato.

Se il puntatore viene inizializzato (diverso da zero), l'helper di caricamento ritardato richiama la funzione in determinati punti di notifica durante l'esecuzione. Il puntatore a funzione presenta la definizione seguente:

```C
// The "notify hook" gets called for every call to the
// delay load helper.  This allows a user to hook every call and
// skip the delay load helper entirely.
//
// dliNotify == {
//  dliStartProcessing |
//  dliNotePreLoadLibrary  |
//  dliNotePreGetProc |
//  dliNoteEndProcessing}
//  on this call.
//
ExternC
PfnDliHook   __pfnDliNotifyHook2;

// This is the failure hook, dliNotify = {dliFailLoadLib|dliFailGetProc}
ExternC
PfnDliHook   __pfnDliFailureHook2;
```

Le notifiche passano una `DelayLoadInfo` struttura alla funzione hook insieme al valore di notifica. Questi dati sono identici ai dati usati dalla routine di supporto per il caricamento ritardato. Il valore di notifica sarà uno dei valori definiti in [struttura e definizioni di costanti](understanding-the-helper-function.md#structure-and-constant-definitions).

## <a name="failure-hooks"></a><a name="failure-hooks"></a> Hook di errore

L'hook di errore viene abilitato in modo analogo all' [hook di notifica](#notification-hooks). La routine hook deve restituire un valore appropriato in modo che l'elaborazione possa continuare (an `HINSTANCE` o `FARPROC` ) oppure 0 per indicare che deve essere generata un'eccezione.

La variabile puntatore che fa riferimento alla funzione definita dall'utente è:

```C
// This is the failure hook, dliNotify = {dliFailLoadLib|dliFailGetProc}
ExternC
PfnDliHook   __pfnDliFailureHook2;
```

La **`DelayLoadInfo`** struttura contiene tutti i dati pertinenti necessari per la segnalazione dettagliata dell'errore, incluso il valore di `GetLastError` .

Se la notifica è **`dliFailLoadLib`** , la funzione hook può restituire:

- 0, se non è in grado di gestire l'errore.

- Un oggetto `HMODULE` , se l'hook di errore ha risolto il problema e ha caricato la libreria stessa.

Se la notifica è **`dliFailGetProc`** , la funzione hook può restituire:

- 0, se non è in grado di gestire l'errore.

- Un indirizzo proc (Import Function Address) valido se l'hook di errore riesce a ottenere l'indirizzo stesso.

## <a name="report-by-using-an-exception"></a>Report tramite un'eccezione

Se tutto ciò che è necessario per gestire l'errore è interrompere la procedura, non è necessario alcun hook, purché il codice utente possa gestire l'eccezione.

## <a name="delay-load-exception-codes"></a><a name="delay-load-exception-codes"></a> Codici di eccezione per il caricamento ritardato

I codici di eccezione strutturati possono essere generati quando si verificano errori durante un caricamento ritardato. I valori di eccezione vengono specificati tramite una `VcppException` macro:

```C
//
// Exception information
//
#define FACILITY_VISUALCPP  ((LONG)0x6d)
#define VcppException(sev,err)  ((sev) | (FACILITY_VISUALCPP<<16) | err)
```

Per un `LoadLibrary` errore, `VcppException(ERROR_SEVERITY_ERROR, ERROR_MOD_NOT_FOUND)` viene generata l'eccezione standard. Per un `GetProcAddress` errore, l'errore generato è `VcppException(ERROR_SEVERITY_ERROR, ERROR_PROC_NOT_FOUND)` . L'eccezione passa un puntatore a una `DelayLoadInfo` struttura. Si trova nel `LPDWORD` valore recuperato da `GetExceptionInformation` dalla [`EXCEPTION_RECORD`](/windows/win32/api/winnt/ns-winnt-exception_record) struttura, nel `ExceptionInformation[0]` campo.

Se nel campo sono impostati bit non corretti `grAttrs` , `ERROR_INVALID_PARAMETER` viene generata l'eccezione. Questa eccezione è, per tutte le finalità e, fatale.

Per altre informazioni, vedere [struttura e definizioni di costanti](understanding-the-helper-function.md#structure-and-constant-definitions).

## <a name="see-also"></a>Vedi anche

[Supporto per le DLL a caricamento ritardato nel linker](linker-support-for-delay-loaded-dlls.md)
