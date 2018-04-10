---
title: Errore di hook | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-tools
ms.tgt_pltfrm: ''
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- delayed loading of DLLs, failure hooks
ms.assetid: 12bb303b-ffe6-4471-bffe-9ef4f8bb2d30
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 1609b713fef253e8beab270ee2ed048466da6504
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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