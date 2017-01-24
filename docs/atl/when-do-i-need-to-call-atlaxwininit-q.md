---
title: "When Do I Need to Call AtlAxWinInit? | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "AtlAxWinInit"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AtlAxWinInit method"
ms.assetid: 080b9cfe-d85a-4439-a9e9-ab3966ebaa8e
caps.latest.revision: 11
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# When Do I Need to Call AtlAxWinInit?
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

[AtlAxWinInit](../Topic/AtlAxWinInit.md) registra la classe della finestra **"AtlAxWin80"** \(più una coppia di messaggi personalizzati della finestra\) in modo da questa funzione deve essere chiamata prima di provare a creare una finestra host.  Tuttavia, non è sempre necessario chiamare questa funzione in modo esplicito, poiché le API di hosting \(e le classi che li utilizzano spesso\) chiama la funzione per l'utente.  Non esiste solo nel chiamare questa funzione più volte.  Per ulteriori informazioni, vedere [Qual è il controllo API di Hosting ATL?](../atl/what-is-the-atl-control-hosting-api-q.md).  
  
## Vedere anche  
 [When Do I Need to Call AtlAxWinTerm?](../atl/when-do-i-need-to-call-atlaxwinterm-q.md)   
 [Domande frequenti sul contenimento di controlli](../atl/atl-control-containment-faq.md)