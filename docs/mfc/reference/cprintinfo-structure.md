---
title: "CPrintInfo Structure | Microsoft Docs"
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
  - "CPrintInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CPrintInfo structure"
ms.assetid: 0b3de849-d050-4386-9a14-f4c1a25684f7
caps.latest.revision: 21
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CPrintInfo Structure
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Archivia informazioni su un processo di anteprima di stampa o di stampa.  
  
## Sintassi  
  
```  
struct CPrintInfo  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPrintInfo::GetFromPage](../Topic/CPrintInfo::GetFromPage.md)|Restituisce il numero della prima pagina che viene stampata.|  
|[CPrintInfo::GetMaxPage](../Topic/CPrintInfo::GetMaxPage.md)|Restituisce il numero dell'ultima pagina del documento.|  
|[CPrintInfo::GetMinPage](../Topic/CPrintInfo::GetMinPage.md)|Restituisce il numero della prima pagina del documento.|  
|[CPrintInfo::GetOffsetPage](../Topic/CPrintInfo::GetOffsetPage.md)|Restituisce il numero di pagine che precede la prima pagina di un elemento di DocObject che viene formattato in un processo di stampa combinato di DocObject.|  
|[CPrintInfo::GetToPage](../Topic/CPrintInfo::GetToPage.md)|Restituisce il numero dell'ultima pagina che viene stampata.|  
|[CPrintInfo::SetMaxPage](../Topic/CPrintInfo::SetMaxPage.md)|Imposta il numero dell'ultima pagina del documento.|  
|[CPrintInfo::SetMinPage](../Topic/CPrintInfo::SetMinPage.md)|Imposta il numero della prima pagina del documento.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPrintInfo::m\_bContinuePrinting](../Topic/CPrintInfo::m_bContinuePrinting.md)|Contiene un flag che indica se il framework deve continuare il ciclo di stampa.|  
|[CPrintInfo::m\_bDirect](../Topic/CPrintInfo::m_bDirect.md)|Contiene un flag che indica se il documento eseguito direttamente \(senza visualizzare la finestra di dialogo di stampa\).|  
|[CPrintInfo::m\_bDocObject](../Topic/CPrintInfo::m_bDocObject.md)|Contiene un flag che indica se il documento che viene visualizzato è un DocObject.|  
|[CPrintInfo::m\_bPreview](../Topic/CPrintInfo::m_bPreview.md)|Contiene un flag che indica se il documento viene visualizzato in anteprima.|  
|[CPrintInfo::m\_dwFlags](../Topic/CPrintInfo::m_dwFlags.md)|Specifica le operazioni di stampa di DocObject.|  
|[CPrintInfo::m\_lpUserData](../Topic/CPrintInfo::m_lpUserData.md)|Contiene un puntatore a una struttura creata dall'utente.|  
|[CPrintInfo::m\_nCurPage](../Topic/CPrintInfo::m_nCurPage.md)|Identifica il numero di pagina attualmente viene stampata.|  
|[CPrintInfo::m\_nJobNumber](../Topic/CPrintInfo::m_nJobNumber.md)|Specifica il numero di processo assegnato dal sistema operativo per il processo di stampa corrente|  
|[CPrintInfo::m\_nNumPreviewPages](../Topic/CPrintInfo::m_nNumPreviewPages.md)|Identifica il numero di pagine visualizzate nella finestra di anteprima, 1 o 2.|  
|[CPrintInfo::m\_nOffsetPage](../Topic/CPrintInfo::m_nOffsetPage.md)|Specifica l'offset della prima pagina di un particolare DocObject in un processo di stampa combinato di DocObject.|  
|[CPrintInfo::m\_pPD](../Topic/CPrintInfo::m_pPD.md)|Contiene un puntatore all'oggetto `CPrintDialog` utilizzato per la finestra di dialogo di stampa.|  
|[CPrintInfo::m\_rectDraw](../Topic/CPrintInfo::m_rectDraw.md)|Specifica un rettangolo che definisce l'area utilizzabile corrente della pagina.|  
|[CPrintInfo::m\_strPageDesc](../Topic/CPrintInfo::m_strPageDesc.md)|Contiene una stringa di formato per la visualizzazione dei numeri di pagina.|  
  
## Note  
 `CPrintInfo` è una struttura e non dispone di una classe base.  
  
 Il framework crea un oggetto `CPrintInfo` ogni volta il comando di anteprima di stampa o di stampa è scelto e lo elimina quando il comando viene completato.  
  
 `CPrintInfo` contiene informazioni sul processo di stampa corrente, come intervallo di pagine essere stampato che lo stato corrente del processo di stampa, come la pagina attualmente viene stampata.  Alcune informazioni vengono archiviate in un oggetto collegato [CPrintDialog](../../mfc/reference/cprintdialog-class.md) ; questo oggetto contiene i valori immessi dall'utente nella finestra di dialogo stampa.  
  
 Un oggetto `CPrintInfo` viene passato dal framework e la classe di visualizzazione durante il processo di stampa e utilizzato per lo scambio di dati tra i due.  Ad esempio, il framework alla classe di visualizzazione alla pagina del documento da stampare assegnare un valore al membro `m_nCurPage``CPrintInfo`; la classe di visualizzazione recupera il valore ed esegue l'effettiva stampa della pagina specifica.  
  
 Un altro esempio è il caso in cui la lunghezza del documento non è nota fino a stamparla.  In questa situazione, di classe di visualizzazione della fine del documento quando una pagina viene stampata.  Al termine viene raggiunta, la classe di visualizzazione imposta il membro `m_bContinuePrinting``CPrintInfo` a **FALSE**; rende il framework per interrompere il ciclo di stampa.  
  
 `CPrintInfo` viene utilizzato dalle funzioni membro `CView` elencata sotto "vedere anche." Per ulteriori informazioni sull'architettura di stampa fornita dalla libreria MFC, vedere [Applicazioni utilizzano](../../mfc/frame-windows.md) e [L'architettura documento\/visualizzazione](../../mfc/document-view-architecture.md) e gli articoli [stampa](../../mfc/printing.md) e [stampa: documenti a più pagine](../../mfc/multipage-documents.md).  
  
## Gerarchia di ereditarietà  
 `CPrintInfo`  
  
## Requisiti  
 **Header:** afxext.h  
  
## Vedere anche  
 [MFC campione DIBLOOK](../../top/visual-cpp-samples.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CView::OnBeginPrinting](../Topic/CView::OnBeginPrinting.md)   
 [CView::OnEndPrinting](../Topic/CView::OnEndPrinting.md)   
 [CView::OnEndPrintPreview](../Topic/CView::OnEndPrintPreview.md)   
 [CView::OnPrepareDC](../Topic/CView::OnPrepareDC.md)   
 [CView::OnPreparePrinting](../Topic/CView::OnPreparePrinting.md)   
 [CView::OnPrint](../Topic/CView::OnPrint.md)