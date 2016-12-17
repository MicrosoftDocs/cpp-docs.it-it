---
title: "Can I Reuse a Host Window? | Microsoft Docs"
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
  - "host windows"
ms.assetid: bcd08ab1-cfcf-49e3-b4e8-ac134d141005
caps.latest.revision: 12
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Can I Reuse a Host Window?
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Non è consigliabile riutilizzare le finestre host.  Per assicurare l'affidabilità del codice, sarà necessario bloccare la durata della finestra host alla durata di un singolo controllo.  
  
## Vedere anche  
 [Domande frequenti sul contenimento di controlli](../atl/atl-control-containment-faq.md)