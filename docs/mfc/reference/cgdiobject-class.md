---
title: "CGdiObject Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CGdiObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pennelli, base class for"
  - "CGdiObject class"
  - "tipi di carattere, base class for"
  - "oggetti GDI, base class for"
  - "tavolozze, base class for"
  - "penne, base class for"
  - "aree, base class for"
ms.assetid: 1cba3ba5-3d49-4e43-8293-209299f2f6f4
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# CGdiObject Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce una classe base per diversi tipi di oggetti di \(GDI\) \(application programming Interface\) Windows come bitmap, le aree, pennelli, penne, le tavolozze e i tipi di carattere.  
  
## Sintassi  
  
```  
class CGdiObject : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CGdiObject::CGdiObject](../Topic/CGdiObject::CGdiObject.md)|Costruisce un oggetto `CGdiObject`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CGdiObject::Attach](../Topic/CGdiObject::Attach.md)|Associa un oggetto Windows GDI a un oggetto `CGdiObject`.|  
|[CGdiObject::CreateStockObject](../Topic/CGdiObject::CreateStockObject.md)|Recupera l'handle a una delle penne, pennelli, o tipi di carattere predefiniti predefiniti Windows.|  
|[CGdiObject::DeleteObject](../Topic/CGdiObject::DeleteObject.md)|Elimina l'oggetto Windows GDI connesso all'oggetto `CGdiObject` dalla memoria liberando qualsiasi archiviazione del sistema associata all'oggetto.|  
|[CGdiObject::DeleteTempMap](../Topic/CGdiObject::DeleteTempMap.md)|Elimina tutti gli oggetti temporanei `CGdiObject` creati da `FromHandle`.|  
|[CGdiObject::Detach](../Topic/CGdiObject::Detach.md)|Rimuove un oggetto Windows GDI da un oggetto `CGdiObject` e restituisce l'handle per l'oggetto Windows GDI.|  
|[CGdiObject::FromHandle](../Topic/CGdiObject::FromHandle.md)|Restituisce un puntatore a un oggetto `CGdiObject` fornito un handle a un oggetto Windows GDI.|  
|[CGdiObject::GetObject](../Topic/CGdiObject::GetObject.md)|Inserisce un buffer di dati che descrivono l'oggetto Windows GDI connesso all'oggetto `CGdiObject`.|  
|[CGdiObject::GetObjectType](../Topic/CGdiObject::GetObjectType.md)|Recupera il tipo di oggetto GDI.|  
|[CGdiObject::GetSafeHandle](../Topic/CGdiObject::GetSafeHandle.md)|Restituisce `m_hObject` a meno che `this` sia `NULL`, nel qual caso `NULL` viene restituito.|  
|[CGdiObject::UnrealizeObject](../Topic/CGdiObject::UnrealizeObject.md)|Reimposta l'origine di un pennello o reimpostare una tavolozza logica.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CGdiObject::operator \!\=](../Topic/CGdiObject::operator%20!=.md)|Determina se due oggetti GDI non logicamente sono uguali.|  
|[CGdiObject::operator \=\=](../Topic/CGdiObject::operator%20==.md)|Determina se due oggetti GDI logicamente sono uguali.|  
|[CGdiObject::operator HGDIOBJ](../Topic/CGdiObject::operator%20HGDIOBJ.md)|Recupera `HANDLE` all'oggetto Windows GDI associato.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CGdiObject::m\_hObject](../Topic/CGdiObject::m_hObject.md)|`HANDLE` contenente `HBITMAP`, `HPALETTE`, `HRGN`, `HBRUSH`, `HPEN`, o `HFONT` associato a questo oggetto.|  
  
## Note  
 Non creare mai direttamente `CGdiObject`.  Invece, si crea un oggetto da una delle relative classi derivate, come `CPen` o `CBrush`.  
  
 Per ulteriori informazioni su `CGdiObject`, vedere [Oggetti grafici](../../mfc/graphic-objects.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CGdiObject`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CBitmap Class](../../mfc/reference/cbitmap-class.md)   
 [CBrush Class](../../mfc/reference/cbrush-class.md)   
 [CFont Class](../../mfc/reference/cfont-class.md)   
 [CPalette Class](../../mfc/reference/cpalette-class.md)   
 [CPen Class](../../mfc/reference/cpen-class.md)   
 [Classe CRgn](../../mfc/reference/crgn-class.md)