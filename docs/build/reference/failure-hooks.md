---
title: Hook di errore
ms.date: 11/04/2016
helpviewer_keywords:
- delayed loading of DLLs, failure hooks
ms.assetid: 12bb303b-ffe6-4471-bffe-9ef4f8bb2d30
ms.openlocfilehash: 2bda1d34c85b1e88c7d278816e30e76537a7523b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50463610"
---
# <a name="failure-hooks"></a>Hook di errore

L'hook di errore è abilitata in modo analogo i [hook di notifica](../../build/reference/notification-hooks.md). La routine di hook deve restituire un valore appropriato in modo che l'elaborazione può continuare (HINSTANCE o FARPROC) oppure 0 per indicare che deve essere generata un'eccezione.

La variabile puntatore che fa riferimento alla funzione definita dall'utente è:

```
// This is the failure hook, dliNotify = {dliFailLoadLib|dliFailGetProc}
ExternC
PfnDliHook   __pfnDliFailureHook2;
```

Il **DelayLoadInfo** struttura contiene tutti i dati pertinenti necessari per la segnalazione accurata dell'errore, incluso il valore da `GetLastError`.

Se la notifica viene **dliFailLoadLib**, la funzione hook può restituire:

- 0 se non è possibile gestire l'errore.

- Un HMODULE se hook di errore risolto il problema e caricata la libreria stessa.

Se la notifica viene **dliFailGetProc**, la funzione hook può restituire:

- 0 se non è possibile gestire l'errore.

- Un indirizzo valido proc (importazione funzione indirizzo), se l'errore collegata è riuscita a ottenere l'indirizzo di se stesso.

## <a name="see-also"></a>Vedere anche

[Gestione e notifica degli errori](../../build/reference/error-handling-and-notification.md)