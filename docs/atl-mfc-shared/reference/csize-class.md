---
title: "CSize Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CSize"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSize class"
  - "dimensioni"
  - "dimensioni, MFC"
  - "SIZE"
ms.assetid: fb2cf85a-0bc1-46f8-892b-309c108b52ae
caps.latest.revision: 20
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CSize Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Simile alla struttura di Windows [DIMENSIONE](http://msdn.microsoft.com/library/windows/desktop/dd145106), che implementa una coordinata relativa o un percorso.  
  
## Sintassi  
  
```  
class CSize : public tagSIZE  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSize::CSize](../Topic/CSize::CSize.md)|Costruisce un oggetto `CSize`.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSize::operator \-](../Topic/CSize::operator%20-.md)|Sottrae due dimensioni.|  
|[CSize::operator \!\=](../Topic/CSize::operator%20!=.md)|Controlli disuguaglianza tra `CSize` e una dimensione.|  
|[CSize::operator \+](../Topic/CSize::operator%20+.md)|Aggiunge due dimensioni.|  
|[CSize::operator \+\=](../Topic/CSize::operator%20+=.md)|Aggiunge una dimensione a `CSize`.|  
|[CSize::operator \-\=](../Topic/CSize::operator%20-=.md)|Sottrae una dimensione da `CSize`.|  
|[CSize::operator \=\=](../Topic/CSize::operator%20==.md)|Verificare l'uguaglianza tra `CSize` e una dimensione.|  
  
## Note  
 Questa classe è derivata dalla struttura **SIZE**.  Ciò significa che è possibile passare `CSize` in un parametro che richiede **SIZE** e che i membri dati della struttura **SIZE** sono accessibili membri dati `CSize`.  
  
 I membri **cy** e **cxSIZE** e `CSize`\) sono pubblici.  Inoltre, `CSize` implementa le funzioni membro per modificare la struttura **SIZE**.  
  
> [!NOTE]
>  Per ulteriori informazioni sulle classi di utilità condivisi \(come `CSize`\), vedere [classi condivise](../../atl-mfc-shared/atl-mfc-shared-classes.md).  
  
## Gerarchia di ereditarietà  
 `tagSIZE`  
  
 `CSize`  
  
## Requisiti  
 **Header:** atltypes.h  
  
## Vedere anche  
 [MFC esempi MDI](../../top/visual-cpp-samples.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CRect Class](../../atl-mfc-shared/reference/crect-class.md)   
 [CPoint Class](../../atl-mfc-shared/reference/cpoint-class.md)