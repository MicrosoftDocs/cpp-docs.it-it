---
description: 'Altre informazioni su: hook di errore di caricamento ritardato'
title: Hook di errore
ms.date: 01/19/2021
helpviewer_keywords:
- delayed loading of DLLs, failure hooks
ms.openlocfilehash: 46cec6c66169ebe589bb5f0c912b2d8239e69da1
ms.sourcegitcommit: 3d9cfde85df33002e3b3d7f3509ff6a8dc4c0a21
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/21/2021
ms.locfileid: "98667193"
---
# <a name="failure-hooks"></a>Hook di errore

L'hook di errore viene abilitato in modo analogo all' [hook di notifica](notification-hooks.md). La routine hook deve restituire un valore appropriato in modo che l'elaborazione possa continuare (an `HINSTANCE` o `FARPROC` ) oppure 0 per indicare che deve essere generata un'eccezione.

La variabile puntatore che fa riferimento alla funzione definita dall'utente è:

```C
// This is the failure hook, dliNotify = {dliFailLoadLib|dliFailGetProc}
ExternC
PfnDliHook   __pfnDliFailureHook2;
```

La **`DelayLoadInfo`** struttura contiene tutti i dati pertinenti necessari per la creazione di report accurati dell'errore, incluso il valore da `GetLastError` .

Se la notifica è **`dliFailLoadLib`** , la funzione hook può restituire:

- 0, se non è in grado di gestire l'errore.

- Un oggetto `HMODULE` , se l'hook di errore ha risolto il problema e ha caricato la libreria stessa.

Se la notifica è **`dliFailGetProc`** , la funzione hook può restituire:

- 0, se non è in grado di gestire l'errore.

- Un indirizzo proc (Import Function Address) valido se l'hook di errore riesce a ottenere l'indirizzo stesso.

## <a name="see-also"></a>Vedi anche

[Gestione e notifica degli errori](error-handling-and-notification.md)
