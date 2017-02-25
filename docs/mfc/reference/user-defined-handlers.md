---
title: "Gestori definiti dall&#39;utente | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.handlers"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ON_MESSAGE (macro)"
  - "ON_REGISTERED_MESSAGE (macro)"
  - "gestori definiti dall'utente"
ms.assetid: 99478294-bef0-4ba7-a369-25a6abdcdb62
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Gestori definiti dall&#39;utente
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le voci della mappa corrispondono ai prototipi di funzione.  
  
|Voce di mapping|Prototipo di funzione|  
|---------------------|---------------------------|  
|ON\_MESSAGE \( \<messaggio\>, \<memberFxn\> \)|memberFxn di afx\_msg LRESULT \(WPARAM, LPARAM\);|  
|ON\_REGISTERED\_MESSAGE \( \<nMessageVariable\>, \<memberFxn\> \)|memberFxn di afx\_msg LRESULT \(WPARAM, LPARAM\);|  
|ON\_THREAD\_MESSAGE \( \<messaggio\>, \<memberFxn\> \)|memberFxn void afx\_msg \(WPARAM, LPARAM\);|  
|ON\_REGISTERED\_THREAD\_MESSAGE \( \<nMessageVariable\>, \<memberFxn\> \)|memberFxn void afx\_msg \(WPARAM, LPARAM\);|  
  
## Vedere anche  
 [Mappe messaggi](../../mfc/reference/message-maps-mfc.md)   
 [Gestori per messaggi WM\_](../../mfc/reference/handlers-for-wm-messages.md)