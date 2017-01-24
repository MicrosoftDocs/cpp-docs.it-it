---
title: "CFont Class | Microsoft Docs"
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
  - "CFont"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CFont class"
  - "tipi di carattere, MFC classes"
  - "GDI, font classes"
ms.assetid: 3fad6bfe-d6ce-4ab9-967a-5ce0aa102800
caps.latest.revision: 23
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CFont Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Incapsula un tipo di carattere di \(GDI\) \(application programming Interface\) Windows e fornisce funzioni membro per modificare il tipo di carattere.  
  
## Sintassi  
  
```  
class CFont : public CGdiObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFont::CFont](../Topic/CFont::CFont.md)|Costruisce un oggetto `CFont`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFont::CreateFont](../Topic/CFont::CreateFont.md)|Inizializza `CFont` con le caratteristiche specificate.|  
|[CFont::CreateFontIndirect](../Topic/CFont::CreateFontIndirect.md)|Inizializza un oggetto `CFont` con le caratteristiche fornite una struttura `LOGFONT`.|  
|[CFont::CreatePointFont](../Topic/CFont::CreatePointFont.md)|Inizializza `CFont` con l'altezza specificata, misurata nei decimi di un punto e il carattere tipografico.|  
|[CFont::CreatePointFontIndirect](../Topic/CFont::CreatePointFontIndirect.md)|Stesso `CreateFontIndirect` ad eccezione dell'altezza del tipo è espresso nei decimi di un punto anziché le unità logiche.|  
|[CFont::FromHandle](../Topic/CFont::FromHandle.md)|Restituisce un puntatore a un oggetto `CFont` una volta fornito Windows **HFONT**.|  
|[CFont::GetLogFont](../Topic/CFont::GetLogFont.md)|Inserisce `LOGFONT` di informazioni sul tipo di carattere logica associata all'oggetto `CFont`.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFont::operator HFONT](../Topic/CFont::operator%20HFONT.md)|Restituisce l'handle del tipo di Windows GDI incluse nell'oggetto `CFont`.|  
  
## Note  
 Per utilizzare un oggetto `CFont`, costruire un oggetto `CFont` e associare un tipo di carattere di Windows con [CreateFont](../Topic/CFont::CreateFont.md), [CreateFontIndirect](../Topic/CFont::CreateFontIndirect.md), [CreatePointFont](../Topic/CFont::CreatePointFont.md), o [CreatePointFontIndirect](../Topic/CFont::CreatePointFontIndirect.md)quindi utilizzare le funzioni membro dell'oggetto per modificare il tipo di carattere.  
  
 Le funzioni `CreatePointFontIndirect` e `CreatePointFont` sono spesso più semplice utilizzo che `CreateFont` o `CreateFontIndirect` poiché effettua la conversione per l'altezza di carattere da una dimensione in punti alle unità logiche automaticamente.  
  
 Per ulteriori informazioni su `CFont`, vedere [oggetti grafici](../../mfc/graphic-objects.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CGdiObject](../../mfc/reference/cgdiobject-class.md)  
  
 `CFont`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [MFC campione HIERSVR](../../top/visual-cpp-samples.md)   
 [CGdiObject Class](../../mfc/reference/cgdiobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)