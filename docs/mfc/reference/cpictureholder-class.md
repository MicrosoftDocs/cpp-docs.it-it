---
title: "CPictureHolder Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "Picture"
  - "CPictureHolder"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "controlli [MFC], OLE"
  - "CPictureHolder class"
  - "OLE (controlli), immagine"
  - "Picture property"
ms.assetid: a4f59775-704a-41dd-b5bd-2e531c95127a
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# CPictureHolder Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa una proprietà dell'immagine, che consente all'utente di visualizzare un'immagine nel controllo.  
  
## Sintassi  
  
```  
class CPictureHolder  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPictureHolder::CPictureHolder](../Topic/CPictureHolder::CPictureHolder.md)|Costruisce un oggetto `CPictureHolder`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPictureHolder::CreateEmpty](../Topic/CPictureHolder::CreateEmpty.md)|Crea un insieme `CPictureHolder` vuoto.|  
|[CPictureHolder::CreateFromBitmap](../Topic/CPictureHolder::CreateFromBitmap.md)|Crea un oggetto `CPictureHolder` da una bitmap.|  
|[CPictureHolder::CreateFromIcon](../Topic/CPictureHolder::CreateFromIcon.md)|Crea un oggetto `CPictureHolder` da un'icona.|  
|[CPictureHolder::CreateFromMetafile](../Topic/CPictureHolder::CreateFromMetafile.md)|Crea un oggetto `CPictureHolder` da un metafile.|  
|[CPictureHolder::GetDisplayString](../Topic/CPictureHolder::GetDisplayString.md)|Recuperare la stringa viene visualizzata nel Visualizzatore proprietà di un contenitore di controlli.|  
|[CPictureHolder::GetPictureDispatch](../Topic/CPictureHolder::GetPictureDispatch.md)|Restituisce l'interfaccia `IDispatch` dell'oggetto `CPictureHolder`.|  
|[CPictureHolder::GetType](../Topic/CPictureHolder::GetType.md)|Indica se l'oggetto `CPictureHolder` è una bitmap, metafile, o un'icona.|  
|[CPictureHolder::Render](../Topic/CPictureHolder::Render.md)|Esegue il rendering dell'immagine.|  
|[CPictureHolder::SetPictureDispatch](../Topic/CPictureHolder::SetPictureDispatch.md)|Imposta l'interfaccia `IDispatch` dell'oggetto `CPictureHolder`.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPictureHolder::m\_pPict](../Topic/CPictureHolder::m_pPict.md)|Un puntatore a un oggetto immagine.|  
  
## Note  
 `CPictureHolder` non dispone di una classe base.  
  
 Con la proprietà predefinita dell'immagine, lo sviluppatore può specificare una bitmap, un'icona o, metafile per la visualizzazione.  
  
 Per informazioni sulla creazione di proprietà personalizzate dell'immagine, vedere l'articolo [Controlli ActiveX MFC: Utilizzo di immagini in un controllo ActiveX](../../mfc/mfc-activex-controls-using-pictures-in-an-activex-control.md).  
  
## Gerarchia di ereditarietà  
 `CPictureHolder`  
  
## Requisiti  
 **Header:** afxctl.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CFontHolder Class](../../mfc/reference/cfontholder-class.md)