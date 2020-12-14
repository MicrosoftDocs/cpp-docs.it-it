---
description: 'Altre informazioni su: hook di errore'
title: Hook di errore
ms.date: 11/04/2016
helpviewer_keywords:
- delayed loading of DLLs, failure hooks
ms.assetid: 12bb303b-ffe6-4471-bffe-9ef4f8bb2d30
ms.openlocfilehash: a0e74e3413fc81505941dd6f4545988a0d39436f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97200728"
---
# <a name="failure-hooks"></a>Hook di errore

L'hook di errore viene abilitato in modo analogo all' [hook di notifica](notification-hooks.md). La routine hook deve restituire un valore appropriato in modo che l'elaborazione possa continuare (HINSTANCE o FARPROC) o 0 per indicare che deve essere generata un'eccezione.

La variabile puntatore che fa riferimento alla funzione definita dall'utente è:

```
// This is the failure hook, dliNotify = {dliFailLoadLib|dliFailGetProc}
ExternC
PfnDliHook   __pfnDliFailureHook2;
```

La struttura **DelayLoadInfo** contiene tutti i dati pertinenti necessari per la creazione di report accurati dell'errore, incluso il valore di `GetLastError` .

Se la notifica è **dliFailLoadLib**, la funzione hook può restituire:

- 0, se non è in grado di gestire l'errore.

- Un HMODULE, se l'hook di errore ha risolto il problema e ha caricato la libreria stessa.

Se la notifica è **dliFailGetProc**, la funzione hook può restituire:

- 0, se non è in grado di gestire l'errore.

- Un indirizzo proc (Import Function Address) valido se l'hook di errore riesce a ottenere l'indirizzo stesso.

## <a name="see-also"></a>Vedi anche

[Gestione e notifica degli errori](error-handling-and-notification.md)
