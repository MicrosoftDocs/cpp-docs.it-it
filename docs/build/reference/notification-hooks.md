---
title: Hook di notifica | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- delayed loading of DLLs, notification hooks
ms.assetid: e9c291ed-2f2d-4319-a171-09800625256f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 97e471e2de1ecb6ec6664658a2f1c5df09bc8079
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45700622"
---
# <a name="notification-hooks"></a>Hook di notifica

L'hook di notifica vengono chiamati subito prima nella routine di supporto vengono eseguite le azioni seguenti:

- L'handle memorizzato alla libreria viene controllato per verificare se è già stato caricato.

- **LoadLibrary** viene chiamato per tentativi di caricamento della DLL.

- **GetProcAddress** viene chiamato per tentare di ottenere l'indirizzo della routine.

- Torna all'importazione di ritardo di caricare il thunk.

L'hook di notifica è abilitata:

- Specificando una nuova definizione dell'indicatore di misura **pfnDliNotifyHook2** che viene inizializzato in modo da puntare alla funzione che riceve le notifiche.

   \-o -

- Impostando il puntatore del mouse **pfnDliNotifyHook2** alla funzione hook prima tutte le chiamate alla DLL che il programma è ritardare il caricamento.

Se la notifica viene **dliStartProcessing**, la funzione hook può restituire:

- NULL

   L'helper predefinita gestisce il caricamento della DLL. Ciò è utile per essere chiamato solo per scopi informativi.

- Puntatore a funzione

   La gestione del caricamento ritardato predefinite da ignorare. Ciò consente di fornire un gestore di caricamento.

Se la notifica viene **dliNotePreLoadLibrary**, la funzione hook può restituire:

- 0, se vuole semplicemente notifiche informative.

- HMODULE per la DLL caricata, se caricato la DLL.

Se la notifica viene **dliNotePreGetProcAddress**, la funzione hook può restituire:

- 0, se vuole semplicemente notifiche informative.

- Indirizzo della funzione importata, se la funzione hook Ottiene l'indirizzo di se stesso.

Se la notifica viene **dliNoteEndProcessing**, valore restituito della funzione hook viene ignorato.

Se questo puntatore viene inizializzato (diverso da zero), helper a caricamento ritardato richiamerà la funzione in determinati momenti di notifica durante l'esecuzione. Puntatore a funzione presenta la seguente definizione:

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

Le notifiche di passare un **DelayLoadInfo** struttura alla funzione hook insieme al valore di notifica. Questi dati sono identici a quella usata dalla routine dell'helper carico ritardo. Il valore di notifica sarà uno dei valori definiti nella [struttura e definizioni costanti](../../build/reference/structure-and-constant-definitions.md).

## <a name="see-also"></a>Vedere anche

[Gestione e notifica degli errori](../../build/reference/error-handling-and-notification.md)