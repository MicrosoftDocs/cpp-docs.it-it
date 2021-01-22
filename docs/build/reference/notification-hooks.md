---
description: 'Altre informazioni su: hook di notifica di caricamento ritardato'
title: Hook di notifica
ms.date: 01/19/2021
helpviewer_keywords:
- delayed loading of DLLs, notification hooks
ms.openlocfilehash: 401ae9099afcf00dc280bb4f9e5f7016a4cbc640
ms.sourcegitcommit: 3d9cfde85df33002e3b3d7f3509ff6a8dc4c0a21
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/21/2021
ms.locfileid: "98667539"
---
# <a name="notification-hooks"></a>Hook di notifica

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

Le notifiche passano una `DelayLoadInfo` struttura alla funzione hook insieme al valore di notifica. Questi dati sono identici ai dati usati dalla routine di supporto per il caricamento ritardato. Il valore di notifica sarà uno dei valori definiti in [struttura e definizioni di costanti](structure-and-constant-definitions.md).

## <a name="see-also"></a>Vedi anche

[Gestione e notifica degli errori](error-handling-and-notification.md)
