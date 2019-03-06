---
title: Hook di errore
ms.date: 11/04/2016
helpviewer_keywords:
- delayed loading of DLLs, failure hooks
ms.assetid: 12bb303b-ffe6-4471-bffe-9ef4f8bb2d30
ms.openlocfilehash: 2cd691ed4514ac4073f90691ed731670fbd22477
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57417944"
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
