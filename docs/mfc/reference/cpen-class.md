---
title: "CPen Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "HPEN"
  - "CPen"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CPen class"
  - "HPEN"
  - "penne, MFC"
ms.assetid: 93175a3a-d46c-4768-be8d-863254f97a5f
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# CPen Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Incapsula una penna di \(GDI\) \(application programming Interface\) di Windows.  
  
## Sintassi  
  
```  
class CPen : public CGdiObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPen::CPen](../Topic/CPen::CPen.md)|Costruisce un oggetto `CPen`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPen::CreatePen](../Topic/CPen::CreatePen.md)|Crea un cosmetico logico o una penna geometrica con lo stile, la larghezza e gli attributi specificati pennello e allegarlo all'oggetto `CPen`.|  
|[CPen::CreatePenIndirect](../Topic/CPen::CreatePenIndirect.md)|Crea una penna con lo stile, la larghezza e il colore specificato in una struttura [LOGPEN](http://msdn.microsoft.com/library/windows/desktop/dd145041) e allegarlo all'oggetto `CPen`.|  
|[CPen::FromHandle](../Topic/CPen::FromHandle.md)|Restituisce un puntatore a un oggetto `CPen` una volta fornito Windows `HPEN`.|  
|[CPen::GetExtLogPen](../Topic/CPen::GetExtLogPen.md)|Ottiene [EXTLOGPEN](http://msdn.microsoft.com/library/windows/desktop/dd162711) alla struttura sottostante.|  
|[CPen::GetLogPen](../Topic/CPen::GetLogPen.md)|Ottiene l'oggetto a [LOGPEN](http://msdn.microsoft.com/library/windows/desktop/dd145041) la struttura sottostante.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPen::operator HPEN](../Topic/CPen::operator%20HPEN.md)|Restituisce un handle di Windows incluse nell'oggetto `CPen`.|  
  
## Note  
 Per ulteriori informazioni su l `CPen`, vedere [oggetti grafici](../../mfc/graphic-objects.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CGdiObject](../../mfc/reference/cgdiobject-class.md)  
  
 `CPen`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [CGdiObject Class](../../mfc/reference/cgdiobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CBrush Class](../../mfc/reference/cbrush-class.md)