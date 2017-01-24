---
title: "CRichEditCntrItem Class | Microsoft Docs"
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
  - "CRichEditCntrItem"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CRichEditCntrItem class"
  - "OLE items, in rich edit views"
  - "Rich Edit (controlli), OLE items"
  - "Rich Edit (controlli), utilizzo"
ms.assetid: 6c0b4efe-0fb8-4621-b5e1-fdcb8ec48c3b
caps.latest.revision: 24
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CRichEditCntrItem Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Con [CRichEditView](../../mfc/reference/cricheditview-class.md) e [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md), fornisce funzionalità del controllo Rich Edit nel contesto dell'architettura di visualizzazione del documento MFC.  
  
## Sintassi  
  
```  
class CRichEditCntrItem : public COleClientItem  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRichEditCntrItem::CRichEditCntrItem](../Topic/CRichEditCntrItem::CRichEditCntrItem.md)|Costruisce un oggetto `CRichEditCntrItem`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRichEditCntrItem::SyncToRichEditObject](../Topic/CRichEditCntrItem::SyncToRichEditObject.md)|Attiva l'elemento come altro tipo.|  
  
## Note  
 "Un controllo Rich Edit" è una finestra in cui l'utente può immettere e modificare testo.  Il testo può essere assegnato il carattere e la formattazione dei paragrafi e può includere oggetti OLE incorporati.  i controlli Rich Edit forniscono un'interfaccia di programmazione per formattare il testo.  Tuttavia, un'applicazione deve implementare tutti i componenti dell'interfaccia utente necessarie per rendere disponibili le operazioni di formattazione dell'utente.  
  
 `CRichEditView` gestisce il testo e formattare specifici di testo.  `CRichEditDoc` gestisce l'elenco di elementi client OLE presenti nella visualizzazione.  `CRichEditCntrItem` fornisce accesso di contenitore\- side all'elemento client OLE.  
  
 Questo controllo comune di Windows \(e quindi [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md) e le classi correlate\) è disponibile solo per i programmi in esecuzione in Windows 95\/98 e Windows NT versione 3,51 e successive.  
  
 Per un esempio di utilizzo degli elementi Rich Edit contenitore in un'applicazione MFC, vedere l'applicazione di esempio [WORDPAD](../../top/visual-cpp-samples.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CDocItem](../../mfc/reference/cdocitem-class.md)  
  
 [COleClientItem](../../mfc/reference/coleclientitem-class.md)  
  
 `CRichEditCntrItem`  
  
## Requisiti  
 **Header:** afxrich.h  
  
## Vedere anche  
 [Esempio WORDPAD MFC](../../top/visual-cpp-samples.md)   
 [COleClientItem Class](../../mfc/reference/coleclientitem-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CRichEditDoc Class](../../mfc/reference/cricheditdoc-class.md)   
 [CRichEditView Class](../../mfc/reference/cricheditview-class.md)