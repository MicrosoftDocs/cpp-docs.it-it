---
title: "CRichEditDoc Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CRichEditDoc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CRichEditDoc class"
  - "document/view architecture, Rich Edit (controlli)"
  - "documenti, rich edit"
  - "OLE containers, rich edit"
  - "Rich Edit (controlli), OLE container"
ms.assetid: c936ec18-d516-49d4-b7fb-c9aa0229eddc
caps.latest.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 26
---
# CRichEditDoc Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Con [CRichEditView](../../mfc/reference/cricheditview-class.md) e [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md), fornisce funzionalità del controllo Rich Edit nel contesto dell'architettura di visualizzazione del documento MFC.  
  
## Sintassi  
  
```  
  
class CRichEditDoc : public COleServerDoc  
  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRichEditDoc::CreateClientItem](../Topic/CRichEditDoc::CreateClientItem.md)|Chiamato per eseguire pulizia di documento.|  
|[CRichEditDoc::GetStreamFormat](../Topic/CRichEditDoc::GetStreamFormat.md)|Indica se l'input e l'output di flusso devono includere informazioni di formattazione.|  
|[CRichEditDoc::GetView](../Topic/CRichEditDoc::GetView.md)|Recupera l'oggetto asssociated [CRichEditView](../../mfc/reference/cricheditview-class.md).|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRichEditDoc::m\_bRTF](../Topic/CRichEditDoc::m_bRTF.md)|Indica se il flusso I\/O deve includere la formattazione.|  
  
## Note  
 "Un controllo Rich Edit" è una finestra in cui l'utente può immettere e modificare testo.  Il testo può essere assegnato il carattere e la formattazione dei paragrafi e può includere oggetti OLE incorporati.  i controlli Rich Edit forniscono un'interfaccia di programmazione per formattare il testo.  Tuttavia, un'applicazione deve implementare tutti i componenti dell'interfaccia utente necessarie per rendere disponibili le operazioni di formattazione dell'utente.  
  
 `CRichEditView` gestisce il testo e formattare specifici di testo.  `CRichEditDoc` gestisce l'elenco di elementi client presenti nella visualizzazione.  `CRichEditCntrItem` fornisce accesso di contenitore\- side agli elementi client OLE.  
  
 Questo controllo comune di Windows \(e quindi [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md) e le classi correlate\) è disponibile solo per i programmi in esecuzione in Windows 95\/98 e Windows NT versione 3,51 e successive.  
  
 Per un esempio di utilizzo di un documento Rich Edit in un'applicazione MFC, vedere l'applicazione di esempio [WORDPAD](../../top/visual-cpp-samples.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CDocument](../../mfc/reference/cdocument-class.md)  
  
 [COleDocument](../../mfc/reference/coledocument-class.md)  
  
 [COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md)  
  
 [COleServerDoc](../../mfc/reference/coleserverdoc-class.md)  
  
 `CRichEditDoc`  
  
## Requisiti  
 **Header:** afxrich.h  
  
## Vedere anche  
 [Esempio WORDPAD MFC](../../top/visual-cpp-samples.md)   
 [COleServerDoc Class](../../mfc/reference/coleserverdoc-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CRichEditView Class](../../mfc/reference/cricheditview-class.md)   
 [CRichEditCntrItem Class](../../mfc/reference/cricheditcntritem-class.md)   
 [COleDocument Class](../../mfc/reference/coledocument-class.md)   
 [CRichEditCtrl Class](../../mfc/reference/cricheditctrl-class.md)