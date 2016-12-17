---
title: "Gestione e notifica degli errori | Microsoft Docs"
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
  - "gestione errori, e notifica"
ms.assetid: b621cf60-d869-451a-b05e-dc86d78addaa
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Gestione e notifica degli errori
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Per ulteriori informazioni sulla gestione e la notifica degli errori, vedere [Informazioni sulla funzione di supporto](http://msdn.microsoft.com/it-it/6279c12c-d908-4967-b0b3-cabfc3e91d3d).  
  
 Per ulteriori informazioni sulle funzioni hook, vedere [Struttura e definizioni di costanti](../../build/reference/structure-and-constant-definitions.md).  
  
 È necessario che in tutti i programmi in cui vengono utilizzate le DLL a caricamento ritardato, la gestione degli errori venga eseguita in maniera affidabile dal momento che gli errori che si verificano durante l'esecuzione del programma genereranno eccezioni non gestite.  La gestione degli errori comprende due fasi:  
  
 Recupero mediante un hook.  
 Se il codice deve essere ripristinato o deve fornire una libreria e\/o una routine alternativa in caso di errore, è possibile fornire un hook alla funzione di supporto in modo da rendere disponibile la libreria e\/o la routine necessaria oppure correggere la situazione.  La routine di hook deve restituire un valore appropriato per consentire il proseguimento dell'esecuzione \(HINSTANCE o FARPROC\) oppure 0, per indicare la necessità di generare un'eccezione.  Essa può anche generare una propria eccezione oppure **longjmp** all'esterno dell'hook.  Sono disponibili hook di notifica e hook di errore.  
  
 Creazione di report mediante un'eccezione.  
 Se per gestire l'errore è sufficiente interrompere la routine, non sono necessari hook, purché sia possibile gestire l'eccezione con il codice utente.  
  
 Nei seguenti argomenti vengono esaminate la gestione e la notifica degli errori:  
  
-   [Hook di notifica](../../build/reference/notification-hooks.md)  
  
-   [Hook di errore](../../build/reference/failure-hooks.md)  
  
-   [Eccezioni](../../build/reference/exceptions-c-cpp.md)  
  
## Vedere anche  
 [Supporto per le DLL a caricamento ritardato nel linker](../../build/reference/linker-support-for-delay-loaded-dlls.md)