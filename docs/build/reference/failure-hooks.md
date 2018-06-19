---
title: Errore di hook | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- delayed loading of DLLs, failure hooks
ms.assetid: 12bb303b-ffe6-4471-bffe-9ef4f8bb2d30
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: be598a77ca48eeee03360a3b598b0567abc6ee4b
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32371785"
---
# <a name="failure-hooks"></a>Hook di errore
Hook di errore è abilitata in modo analogo la [hook di notifica](../../build/reference/notification-hooks.md). La routine di hook deve restituire un valore appropriato in modo che l'elaborazione può continuare (HINSTANCE o FARPROC) oppure 0 per indicare che deve essere generata un'eccezione.  
  
 La variabile del puntatore che fa riferimento alla funzione definita dall'utente è:  
  
```  
// This is the failure hook, dliNotify = {dliFailLoadLib|dliFailGetProc}  
ExternC  
PfnDliHook   __pfnDliFailureHook2;  
```  
  
 Il **DelayLoadInfo** struttura contiene tutti i dati pertinenti necessari per report accurato degli errori, compreso il valore di `GetLastError`.  
  
 Se la notifica è **dliFailLoadLib**, la funzione hook può restituire:  
  
-   0 se non è possibile gestire l'errore.  
  
-   Un modulo HMODULE, se l'hook di errore viene risolto e caricata la libreria.  
  
 Se la notifica è **dliFailGetProc**, la funzione hook può restituire:  
  
-   0 se non è possibile gestire l'errore.  
  
-   Un indirizzo valido proc (indirizzo della funzione import), se l'errore hook è riuscito a ottenere l'indirizzo.  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione e notifica degli errori](../../build/reference/error-handling-and-notification.md)