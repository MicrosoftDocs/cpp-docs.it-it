---
title: "Cast di tipo degli oggetti classe MFC | Microsoft Docs"
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
  - "vc.mfc.macros.classes"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "cast di tipi"
  - "macro, cast di puntatori"
  - "macro, tipo (cast)"
  - "puntatori, tipo (cast)"
  - "tipo (cast)"
ms.assetid: e138465e-c35f-4e84-b788-bd200ccf2f0e
caps.latest.revision: 15
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Cast di tipo degli oggetti classe MFC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le macro di cast di tipo consentono di eseguire il cast specificato un puntatore a un puntatore che indica un oggetto di classe specifica, con o senza verificare che il cast sia valido.  
  
 Nella tabella seguente sono elencate le macro di cast di tipo MFC.  
  
### Le macro che eseguono il cast dei puntatori agli oggetti MFC classe  
  
|||  
|-|-|  
|[DYNAMIC\_DOWNCAST](../Topic/DYNAMIC_DOWNCAST.md)|Esegue il cast di un puntatore a un puntatore all'oggetto classe come controllato per verificare se il cast non è valido.|  
|[STATIC\_DOWNCAST](../Topic/STATIC_DOWNCAST.md)|Esegue il cast di un puntatore a un oggetto da una classe in un puntatore a un tipo correlato.  In una build di debug, consente **ASSERT** se l'oggetto non è un "tipo" tipo di destinazione.|  
  
## Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)