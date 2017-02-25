---
title: "Accesso alla libreria dei tipi | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.macros"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "librerie dei tipi, accesso"
ms.assetid: a03fa7f0-86c2-4119-bf81-202916fb74b3
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 15
---
# Accesso alla libreria dei tipi
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le librerie dei tipi espongono le interfacce di un controllo OLE ad altre applicazioni con OLE.  Ogni controllo OLE deve avere una libreria dei tipi se una o più interfacce devono essere esposte.  
  
 Le seguenti macro consentono di un controllo OLE fornisca accesso alla propria libreria dei tipi:  
  
### Accesso alla libreria dei tipi  
  
|||  
|-|-|  
|[DECLARE\_OLETYPELIB](../Topic/DECLARE_OLETYPELIB.md)|Dichiara una funzione membro di `GetTypeLib` di un controllo OLE \(deve essere utilizzato nella dichiarazione di classe\).|  
|[IMPLEMENT\_OLETYPELIB](../Topic/IMPLEMENT_OLETYPELIB.md)|Implementa una funzione membro di `GetTypeLib` di un controllo OLE \(che sarà utilizzato nell'implementazione della classe.|  
  
## Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)