---
title: "Hook di errore | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "caricamento ritardato di DLL, errore di hook"
ms.assetid: 12bb303b-ffe6-4471-bffe-9ef4f8bb2d30
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Hook di errore
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'hook di errore viene attivato in maniera analoga all'[hook di notifica](../../build/reference/notification-hooks.md).  È necessario che il valore restituito dalla routine di hook sia appropriato per consentire il proseguimento dell'esecuzione \(HINSTANCE o FARPROC\) oppure corrisponda a 0 per indicare che deve essere generata un'eccezione.  
  
 La variabile puntatore che fa riferimento alla funzione definita dall'utente è:  
  
```  
// This is the failure hook, dliNotify = {dliFailLoadLib|dliFailGetProc}  
ExternC  
PfnDliHook   __pfnDliFailureHook2;  
```  
  
 La struttura **DelayLoadInfo** contiene tutti i dati pertinenti necessari alla creazione di accurati report degli errori, compreso il valore di `GetLastError`.  
  
 Se la notifica è **dliFailLoadLib**, il valore restituito dalla funzione hook può essere:  
  
-   0 se non è possibile gestire l'errore.  
  
-   Un HMODULE se mediante l'hook di errore è stato corretto il problema e caricata la libreria.  
  
 Se la notifica è **dliFailGetProc**, il valore della funzione hook può essere:  
  
-   0 se non è possibile gestire l'errore.  
  
-   Un indirizzo di routine valido \(indirizzo della funzione di importazione\), se è stato possibile ottenerlo grazie all'hook di errore.  
  
## Vedere anche  
 [Gestione e notifica degli errori](../../build/reference/error-handling-and-notification.md)