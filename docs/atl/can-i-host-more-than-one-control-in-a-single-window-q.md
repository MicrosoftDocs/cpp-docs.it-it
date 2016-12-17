---
title: "Can I Host More Than One Control in a Single Window? | Microsoft Docs"
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
  - "controlli [ATL], hosting multiple"
  - "windows [C++], hosting multiple controls"
ms.assetid: 3a967a1a-7e7e-42e3-8eed-f7bde912363f
caps.latest.revision: 10
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Can I Host More Than One Control in a Single Window?
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Non è possibile ospitare più controlli in una singola finestra host ATL.  Ogni finestra host è progettata per utilizzare esattamente un controllo alla volta \(questa eccezione consente di utilizzare un meccanismo semplice per gestire le proprietà di ambiente reflection e per il singolo controllo di messaggio\).  Tuttavia, se è necessario disporre dell'utente di visualizzare più controlli in una singola finestra, è importante la creazione di finestre host più come figlio di tale finestra.  
  
## Vedere anche  
 [Domande frequenti sul contenimento di controlli](../atl/atl-control-containment-faq.md)