---
title: "CRichEditView Class | Microsoft Docs"
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
  - "CRichEditView"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CRichEditView class"
  - "document/view architecture, Rich Edit (controlli)"
  - "OLE containers, rich edit"
  - "Rich Edit (controlli), OLE container"
ms.assetid: bd576b10-4cc0-4050-8f76-e1a0548411e4
caps.latest.revision: 25
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CRichEditView Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Con [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md) e [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md), fornisce funzionalità del controllo Rich Edit nel contesto dell'architettura di visualizzazione del documento MFC.  
  
## Sintassi  
  
```  
  
class CRichEditView : public CCtrlView  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRichEditView::CRichEditView](../Topic/CRichEditView::CRichEditView.md)|Costruisce un oggetto `CRichEditView`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRichEditView::AdjustDialogPosition](../Topic/CRichEditView::AdjustDialogPosition.md)|Sposta una finestra di dialogo in modo che non nasconda la selezione corrente.|  
|[CRichEditView::CanPaste](../Topic/CRichEditView::CanPaste.md)|Indica se gli Appunti contengono dati che possono essere incollati nella visualizzazione rich edit.|  
|[CRichEditView::DoPaste](../Topic/CRichEditView::DoPaste.md)|Incollare un elemento OLE in questa visualizzazione Rich Edit.|  
|[CRichEditView::FindText](../Topic/CRichEditView::FindText.md)|Cerca il testo specificato, richiamando il cursore di attesa.|  
|[CRichEditView::FindTextSimple](../Topic/CRichEditView::FindTextSimple.md)|Cerca il testo specificato.|  
|[CRichEditView::GetCharFormatSelection](../Topic/CRichEditView::GetCharFormatSelection.md)|Recupera gli attributi di formattazione dei caratteri per la selezione corrente.|  
|[CRichEditView::GetDocument](../Topic/CRichEditView::GetDocument.md)|Recupera un puntatore a [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md)correlato.|  
|[CRichEditView::GetInPlaceActiveItem](../Topic/CRichEditView::GetInPlaceActiveItem.md)|Recupera l'elemento OLE attualmente attivo sul posto nella visualizzazione Rich Edit.|  
|[CRichEditView::GetMargins](../Topic/CRichEditView::GetMargins.md)|Recupera i margini per questa visualizzazione rich edit.|  
|[CRichEditView::GetPageRect](../Topic/CRichEditView::GetPageRect.md)|Recupera il rettangolo della pagina per questa visualizzazione Rich Edit.|  
|[CRichEditView::GetPaperSize](../Topic/CRichEditView::GetPaperSize.md)|Recupera il formato di carta per questa visualizzazione Rich Edit.|  
|[CRichEditView::GetParaFormatSelection](../Topic/CRichEditView::GetParaFormatSelection.md)|Recupera gli attributi di formattazione dei paragrafi per la selezione corrente.|  
|[CRichEditView::GetPrintRect](../Topic/CRichEditView::GetPrintRect.md)|Recupera il rettangolo di stampa per questa visualizzazione Rich Edit.|  
|[CRichEditView::GetPrintWidth](../Topic/CRichEditView::GetPrintWidth.md)|Recupera la larghezza di stampa per questa visualizzazione Rich Edit.|  
|[CRichEditView::GetRichEditCtrl](../Topic/CRichEditView::GetRichEditCtrl.md)|Recupera il controllo Rich Edit.|  
|[CRichEditView::GetSelectedItem](../Topic/CRichEditView::GetSelectedItem.md)|Recupera l'elemento selezionato dalla visualizzazione Rich Edit.|  
|[CRichEditView::GetTextLength](../Topic/CRichEditView::GetTextLength.md)|Recupera la lunghezza del testo nella visualizzazione Rich Edit.|  
|[CRichEditView::GetTextLengthEx](../Topic/CRichEditView::GetTextLengthEx.md)|Recupera il numero di caratteri o di byte nella visualizzazione rich edit.  Elenco di flag espanso per il metodo di determinazione della lunghezza.|  
|[CRichEditView::InsertFileAsObject](../Topic/CRichEditView::InsertFileAsObject.md)|Inserisce un file come elemento OLE.|  
|[CRichEditView::InsertItem](../Topic/CRichEditView::InsertItem.md)|Inserisce un nuovo elemento come elemento OLE.|  
|[CRichEditView::IsRichEditFormat](../Topic/CRichEditView::IsRichEditFormat.md)|Indica se gli Appunti contengono dati in un rich edit o in un formato testo.|  
|[CRichEditView::OnCharEffect](../Topic/CRichEditView::OnCharEffect.md)|Passa la formattazione carattere per la selezione corrente.|  
|[CRichEditView::OnParaAlign](../Topic/CRichEditView::OnParaAlign.md)|Modificare l'allineamento dei paragrafi.|  
|[CRichEditView::OnUpdateCharEffect](../Topic/CRichEditView::OnUpdateCharEffect.md)|Aggiornare l'interfaccia utente del comando per funzioni membro pubbliche del carattere.|  
|[CRichEditView::OnUpdateParaAlign](../Topic/CRichEditView::OnUpdateParaAlign.md)|Aggiornare l'interfaccia utente del comando per funzioni membro pubbliche di paragrafo.|  
|[CRichEditView::PrintInsideRect](../Topic/CRichEditView::PrintInsideRect.md)|Formattare il testo specificato all'interno del rettangolo specificato.|  
|[CRichEditView::PrintPage](../Topic/CRichEditView::PrintPage.md)|Formattare il testo specificato nella pagina specificata.|  
|[CRichEditView::SetCharFormat](../Topic/CRichEditView::SetCharFormat.md)|Imposta gli attributi di formattazione dei caratteri per la selezione corrente.|  
|[CRichEditView::SetMargins](../Topic/CRichEditView::SetMargins.md)|Impostare i margini per questa visualizzazione rich edit.|  
|[CRichEditView::SetPaperSize](../Topic/CRichEditView::SetPaperSize.md)|Imposta il formato di carta per questa visualizzazione Rich Edit.|  
|[CRichEditView::SetParaFormat](../Topic/CRichEditView::SetParaFormat.md)|Imposta gli attributi di formattazione dei paragrafi per la selezione corrente.|  
|[CRichEditView::TextNotFound](../Topic/CRichEditView::TextNotFound.md)|Ripristinare lo stato interno di ricerca del controllo.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRichEditView::GetClipboardData](../Topic/CRichEditView::GetClipboardData.md)|Recupera un oggetto degli Appunti per un intervallo in questa visualizzazione Rich Edit.|  
|[CRichEditView::GetContextMenu](../Topic/CRichEditView::GetContextMenu.md)|Recupera un menu di scelta rapida per utilizzare su un pulsante destro del mouse.|  
|[CRichEditView::IsSelected](../Topic/CRichEditView::IsSelected.md)|Indica se l'elemento OLE specificato viene selezionato o meno.|  
|[CRichEditView::OnFindNext](../Topic/CRichEditView::OnFindNext.md)|Consente di trovare l'occorrenza successiva di una sottostringa.|  
|[CRichEditView::OnInitialUpdate](../Topic/CRichEditView::OnInitialUpdate.md)|Aggiorna una visualizzazione quando viene prima associata a un documento.|  
|[CRichEditView::OnPasteNativeObject](../Topic/CRichEditView::OnPasteNativeObject.md)|Recupera i dati nativi da un elemento OLE.|  
|[CRichEditView::OnPrinterChanged](../Topic/CRichEditView::OnPrinterChanged.md)|Imposta le funzionalità di stampa al dispositivo specificato.|  
|[CRichEditView::OnReplaceAll](../Topic/CRichEditView::OnReplaceAll.md)|Sostituisce tutte le occorrenze di una stringa specificata con una nuova stringa.|  
|[CRichEditView::OnReplaceSel](../Topic/CRichEditView::OnReplaceSel.md)|Sostituisce la selezione corrente.|  
|[CRichEditView::OnTextNotFound](../Topic/CRichEditView::OnTextNotFound.md)|Gestire la notifica dell'utente che il testo richiesto non è stato trovato.|  
|[CRichEditView::QueryAcceptData](../Topic/CRichEditView::QueryAcceptData.md)|Query da visualizzare sui dati su `IDataObject`.|  
|[CRichEditView::WrapChanged](../Topic/CRichEditView::WrapChanged.md)|Regola il dispositivo di output di output di destinazione per questa visualizzazione Rich Edit, in base al valore `m_nWordWrap`.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRichEditView::m\_nBulletIndent](../Topic/CRichEditView::m_nBulletIndent.md)|Indica la quantità di rientro per gli elenchi dei punti elenco.|  
|[CRichEditView::m\_nWordWrap](../Topic/CRichEditView::m_nWordWrap.md)|Indica i vincoli di ritorno a capo automatico.|  
  
## Note  
 "Un controllo Rich Edit" è una finestra in cui l'utente può immettere e modificare testo.  Il testo può essere assegnato il carattere e la formattazione dei paragrafi e può includere oggetti OLE incorporati.  i controlli Rich Edit forniscono un'interfaccia di programmazione per formattare il testo.  Tuttavia, un'applicazione deve implementare tutti i componenti dell'interfaccia utente necessarie per rendere disponibili le operazioni di formattazione dell'utente.  
  
 `CRichEditView` gestisce il testo e formattare specifici di testo.  `CRichEditDoc` gestisce l'elenco di elementi client OLE presenti nella visualizzazione.  `CRichEditCntrItem` fornisce accesso di contenitore\- side all'elemento client OLE.  
  
 Questo controllo comune di Windows \(e quindi [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md) e le classi correlate\) è disponibile solo per i programmi in esecuzione in Windows 95\/98 e Windows NT versione 3,51 e successive.  
  
 Per un esempio di utilizzo di una visualizzazione Rich Edit in un'applicazione MFC, vedere l'applicazione di esempio [WORDPAD](../../top/visual-cpp-samples.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CView](../../mfc/reference/cview-class.md)  
  
 [CCtrlView](../../mfc/reference/cctrlview-class.md)  
  
 `CRichEditView`  
  
## Requisiti  
 **Header:** afxrich.h  
  
## Vedere anche  
 [MFC campione WORDPAD](../../top/visual-cpp-samples.md)   
 [CCtrlView Class](../../mfc/reference/cctrlview-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CRichEditDoc Class](../../mfc/reference/cricheditdoc-class.md)   
 [CRichEditCntrItem Class](../../mfc/reference/cricheditcntritem-class.md)