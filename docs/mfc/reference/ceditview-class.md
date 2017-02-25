---
title: "CEditView Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CEditView"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CEditView class"
  - "edit controls, classi"
  - "text editors"
  - "text editors, CEditView class"
  - "visualizzazioni, classi"
ms.assetid: bf38255c-fcbe-450c-95b2-3c5e35f86c37
caps.latest.revision: 25
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 27
---
# CEditView Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un tipo di classe di visualizzazione disponibile la funzionalità di un controllo di modifica di Windows e può essere utilizzata per implementare la funzionalità semplice dell'editor di testo.  
  
## Sintassi  
  
```  
class CEditView : public CCtrlView  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CEditView::CEditView](../Topic/CEditView::CEditView.md)|Crea un oggetto con tipo `CEditView`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CEditView::FindText](../Topic/CEditView::FindText.md)|Cerca una stringa all'interno del testo.|  
|[CEditView::GetBufferLength](../Topic/CEditView::GetBufferLength.md)|Ottiene la lunghezza del buffer di caratteri.|  
|[CEditView::GetEditCtrl](../Topic/CEditView::GetEditCtrl.md)|Fornisce l'accesso alla parte `CEdit` di oggetto `CEditView` \(il controllo di modifica di Windows.|  
|[CEditView::GetPrinterFont](../Topic/CEditView::GetPrinterFont.md)|Recupera il tipo di stampa corrente.|  
|[CEditView::GetSelectedText](../Topic/CEditView::GetSelectedText.md)|Recupera la selezione del testo.|  
|[CEditView::LockBuffer](../Topic/CEditView::LockBuffer.md)|Blocca il buffer.|  
|[CEditView::PrintInsideRect](../Topic/CEditView::PrintInsideRect.md)|Esegue il rendering del testo interno di un rettangolo specificato.|  
|[CEditView::SerializeRaw](../Topic/CEditView::SerializeRaw.md)|Serializza un oggetto `CEditView` su disco come testo non elaborato.|  
|[CEditView::SetPrinterFont](../Topic/CEditView::SetPrinterFont.md)|Imposta una nuova carattere della stampante.|  
|[CEditView::SetTabStops](../Topic/CEditView::SetTabStops.md)|Imposta le tabulazioni per sia la visualizzazione sia la stampa.|  
|[CEditView::UnlockBuffer](../Topic/CEditView::UnlockBuffer.md)|Sblocca il buffer.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CEditView::OnFindNext](../Topic/CEditView::OnFindNext.md)|Occorrenza successiva preleva di una stringa di testo.|  
|[CEditView::OnReplaceAll](../Topic/CEditView::OnReplaceAll.md)|Sostituisce tutte le occorrenze di una stringa specificata con una nuova stringa.|  
|[CEditView::OnReplaceSel](../Topic/CEditView::OnReplaceSel.md)|Sostituisce la selezione corrente.|  
|[CEditView::OnTextNotFound](../Topic/CEditView::OnTextNotFound.md)|Chiamato quando un'operazione di ricerca non riesce a corrispondere a qualsiasi ulteriormente il testo.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CEditView::dwStyleDefault](../Topic/CEditView::dwStyleDefault.md)|Stile predefinito per oggetti di tipo **CEditView.**|  
  
## Note  
 La classe `CEditView` svolge le seguenti funzioni aggiuntive:  
  
-   Stampa.  
  
-   Cercare e sostituire.  
  
 Poiché la classe `CEditView` è un derivato di classe `CView`, gli oggetti di classe `CEditView` possono essere utilizzati con documenti e modelli di documento.  
  
 Il testo di ogni controllo `CEditView` si trova nel relativo oggetto di memoria globale.  L'applicazione può avere un numero qualsiasi di oggetti `CEditView`.  
  
 Creare gli oggetti di tipo `CEditView` se si desidera una finestra di modifica alla funzionalità aggiunte elencata in precedenza, o se si desidera utilizzare la funzionalità semplice dell'editor di testo.  Un oggetto `CEditView` può occupare l'intera area client di una finestra.  Derivare classi personalizzate da `CEditView` per aggiungere o modificare la funzionalità di base, o per dichiarare le classi che possono essere aggiunti a un modello di documento.  
  
 L'implementazione predefinita della classe `CEditView` gestisce i seguenti comandi: **ID\_EDIT\_SELECT\_ALL**, **ID\_EDIT\_FIND**, **ID\_EDIT\_REPLACE**, **ID\_EDIT\_REPEAT**e **ID\_FILE\_PRINT**.  
  
 Il limite predefinito del carattere per `CEditView` è \(1024 \* 1024 \- 1 \= 1048575\).  Ciò può essere modificata chiama la funzione **EM\_LIMITTEXT** del controllo di modifica sottostante.  Tuttavia, i limiti sono diversi a seconda del sistema operativo e il tipo di controllo edit \(singola o su più righe\).  Per ulteriori informazioni su questi limiti, vedere [EM\_LIMITTEXT](http://msdn.microsoft.com/library/windows/desktop/bb761607).  
  
 Per modificare questo limite nel controllo, eseguire l'override della funzione `OnCreate()` per la classe `CEditView` e inserire la seguente riga di codice:  
  
 [!code-cpp[NVC_MFCDocView#65](../../mfc/codesnippet/CPP/ceditview-class_1.cpp)]  
  
 Oggetti di tipo `CEditView` o di tipi derivati da `CEditView`\) verificano le seguenti limitazioni:  
  
-   `CEditView` non implementa true quanto visibile è quello che si ottiene la modifica di \(WYSIWYG\).  Dove esiste una scelta tra la lettura dello schermo e l'output formattato corrispondente, `CEditView` opta per la lettura dello schermo.  
  
-   `CEditView` può visualizzare testo solo in una singola carattere.  Nessuna formattazione carattere speciale è supportata.  Vedere la classe [CRichEditView](../../mfc/reference/cricheditview-class.md) per più funzionalità.  
  
-   La quantità di testo che `CEditView` può contenere è limitata.  i limiti sono gli stessi di per il controllo `CEdit`.  
  
 Per ulteriori informazioni su `CEditView`, vedere [classi di visualizzazione derivate disponibili in MFC](../../mfc/derived-view-classes-available-in-mfc.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CView](../../mfc/reference/cview-class.md)  
  
 [CCtrlView](../../mfc/reference/cctrlview-class.md)  
  
 `CEditView`  
  
## Requisiti  
 **Header:** afxext.h  
  
## Vedere anche  
 [Esempio SUPERPAD MFC](../../top/visual-cpp-samples.md)   
 [CCtrlView Class](../../mfc/reference/cctrlview-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CEdit Class](../../mfc/reference/cedit-class.md)   
 [CDocument Class](../../mfc/reference/cdocument-class.md)   
 [CDocTemplate Class](../../mfc/reference/cdoctemplate-class.md)   
 [CCtrlView Class](../../mfc/reference/cctrlview-class.md)   
 [CRichEditView Class](../../mfc/reference/cricheditview-class.md)