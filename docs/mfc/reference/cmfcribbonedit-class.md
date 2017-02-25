---
title: "CMFCRibbonEdit Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCRibbonEdit"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCRibbonEdit class"
ms.assetid: 9b85f1f2-446b-454e-9af9-104fdad8a897
caps.latest.revision: 25
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 27
---
# CMFCRibbonEdit Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa un controllo di modifica che si trova in una barra multifunzione.  
  
## Sintassi  
  
```  
class CMFCRibbonEdit : public CMFCRibbonButton  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonEdit::CMFCRibbonEdit](../Topic/CMFCRibbonEdit::CMFCRibbonEdit.md)|Costruisce un oggetto `CMFCRibbonEdit`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonEdit::CanBeStretched](../Topic/CMFCRibbonEdit::CanBeStretched.md)|Indica se l'altezza del controllo `CMFCRibbonEdit` può aumentare in verticale all'altezza di una riga della barra multifunzione.|  
|[CMFCRibbonEdit::CMFCRibbonEdit](../Topic/CMFCRibbonEdit::CMFCRibbonEdit.md)|Costruisce un oggetto `CMFCRibbonEdit`.|  
|[CMFCRibbonEdit::CopyFrom](../Topic/CMFCRibbonEdit::CopyFrom.md)|Copiare lo stato dell'oggetto specificato `CMFCRibbonEdit` dell'oggetto corrente `CMFCRibbonEdit`.|  
|[CMFCRibbonEdit::CreateEdit](../Topic/CMFCRibbonEdit::CreateEdit.md)|Crea una nuova casella di testo per l'oggetto `CMFCRibbonEdit`.|  
|[CMFCRibbonEdit::DestroyCtrl](../Topic/CMFCRibbonEdit::DestroyCtrl.md)|Elimina l'oggetto `CMFCRibbonEdit`.|  
|[CMFCRibbonEdit::DropDownList](../Topic/CMFCRibbonEdit::DropDownList.md)|Menu a discesa di una casella di riepilogo.|  
|[CMFCRibbonEdit::EnableSpinButtons](../Topic/CMFCRibbonEdit::EnableSpinButtons.md)|Abilita e imposta l'intervallo del pulsante di selezione della casella di testo.|  
|[CMFCRibbonEdit::GetCompactSize](../Topic/CMFCRibbonEdit::GetCompactSize.md)|Recupera la dimensione compressa dell'oggetto `CFMCRibbonEdit`.|  
|[CMFCRibbonEdit::GetEditText](../Topic/CMFCRibbonEdit::GetEditText.md)|Recupera il testo nella casella di testo.|  
|[CMFCRibbonEdit::GetIntermediateSize](../Topic/CMFCRibbonEdit::GetIntermediateSize.md)|Recupera la dimensione intermedia dell'oggetto `CMFCRibbonEdit`.|  
|[CMFCRibbonEdit::GetTextAlign](../Topic/CMFCRibbonEdit::GetTextAlign.md)|Recupera l'allineamento del testo nella casella di testo.|  
|[CMFCRibbonEdit::GetWidth](../Topic/CMFCRibbonEdit::GetWidth.md)|Recupera la larghezza, in pixel, del controllo `CMFCRibbonEdit`.|  
|[CMFCRibbonEdit::HasCompactMode](../Topic/CMFCRibbonEdit::HasCompactMode.md)|Indica se le dimensioni di visualizzazione per il controllo `CMFCRibbonEdit` possono essere compresse.|  
|[CMFCRibbonEdit::HasFocus](../Topic/CMFCRibbonEdit::HasFocus.md)|Indica se il controllo `CMFCRIbbonEdit` ha lo stato attivo.|  
|[CMFCRibbonEdit::HasLargeMode](../Topic/CMFCRibbonEdit::HasLargeMode.md)|Indica se le dimensioni di visualizzazione per il controllo `CMFCRibbonEdit` possono essere estesi.|  
|[CMFCRibbonEdit::HasSpinButtons](../Topic/CMFCRibbonEdit::HasSpinButtons.md)|Indica se la casella di testo contiene un pulsante di selezione.|  
|[CMFCRibbonEdit::IsHighlighted](../Topic/CMFCRibbonEdit::IsHighlighted.md)|Indica se il controllo `CMFCRibbonEdit` è evidenziato.|  
|[CMFCRibbonEdit::OnAfterChangeRect](../Topic/CMFCRibbonEdit::OnAfterChangeRect.md)|Chiamato dal framework quando le dimensioni del rettangolo visualizzato per le modifiche di controllo `CMFCRibbonEdit`.|  
|[CMFCRibbonEdit::OnDraw](../Topic/CMFCRibbonEdit::OnDraw.md)|Chiamato dal framework per disegnare il controllo `CMFCRibbonEdit`.|  
|[CMFCRibbonEdit::OnDrawLabelAndImage](../Topic/CMFCRibbonEdit::OnDrawLabelAndImage.md)|Chiamato dal framework per applicare l'etichetta e l'immagine dal controllo `CMFCRibbonEdit`.|  
|[CMFCRibbonEdit::OnDrawOnList](../Topic/CMFCRibbonEdit::OnDrawOnList.md)|Chiamato dal framework per disegnare il controllo `CMFCRibbonEdit` in una casella di riepilogo dei controlli.|  
|[CMFCRibbonEdit::OnEnable](../Topic/CMFCRibbonEdit::OnEnable.md)|Chiamato dal framework per abilitare o disabilitare il controllo `CMFCRibbonEdit`.|  
|[CMFCRibbonEdit::OnHighlight](../Topic/CMFCRibbonEdit::OnHighlight.md)|Chiamato dal framework quando il puntatore fornisce o ai limiti del controllo `CMFCRibbonEdit`.|  
|[CMFCRibbonEdit::OnKey](../Topic/CMFCRibbonEdit::OnKey.md)|Chiamato dal framework quando l'utente preme un keytip e il controllo `CMFCRibbonEdit` ha lo stato attivo.|  
|[CMFCRibbonEdit::OnLButtonDown](../Topic/CMFCRibbonEdit::OnLButtonDown.md)|Chiamato dal framework per aggiornare il controllo `CMFCRibbonEdit` quando viene premuto il pulsante sinistro del mouse sul controllo.|  
|[CMFCRibbonEdit::OnLButtonUp](../Topic/CMFCRibbonEdit::OnLButtonUp.md)|Chiamato dal framework quando l'utente rilascia il pulsante sinistro del mouse.|  
|[CMFCRibbonEdit::OnRTLChanged](../Topic/CMFCRibbonEdit::OnRTLChanged.md)|Chiamato dal framework per aggiornare il controllo `CMFCRibbonEdit` quando il layout modifica la direzione.|  
|[CMFCRibbonEdit::OnShow](../Topic/CMFCRibbonEdit::OnShow.md)|Chiamato dal framework per visualizzare o nascondere il controllo `CMFCRibbonEdit`.|  
|[CMFCRibbonEdit::Redraw](../Topic/CMFCRibbonEdit::Redraw.md)|Aggiorna la visualizzazione del controllo `CMFCRibbonEdit`.|  
|[CMFCRibbonEdit::SetACCData](../Topic/CMFCRibbonEdit::SetACCData.md)|Imposta i dati di accessibilità per l'oggetto `CMFCRibbonEdit`.|  
|[CMFCRibbonEdit::SetEditText](../Topic/CMFCRibbonEdit::SetEditText.md)|Imposta il testo nella casella di testo.|  
|[CMFCRibbonEdit::SetTextAlign](../Topic/CMFCRibbonEdit::SetTextAlign.md)|Impostato l'allineamento del testo nella casella di testo.|  
|[CMFCRibbonEdit::SetWidth](../Topic/CMFCRibbonEdit::SetWidth.md)|Impostare la larghezza della casella di testo per il controllo `CMFCRibbonEdit`.|  
  
## Note  
  
## Esempio  
 Nell'esempio seguente viene illustrato come costruire un oggetto `CMFCRibbonEdit`, i pulsanti di selezione accanto al controllo di modifica e imposta il testo del controllo di modifica.  Questo frammento di codice fa parte [Esempio 2007 demo di MS Office](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_MSOffice2007Demo#7](../../mfc/reference/codesnippet/CPP/cmfcribbonedit-class_1.cpp)]  
  
## Requisiti  
 **intestazione:** afxRibbonEdit.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCRibbonButton Class](../../mfc/reference/cmfcribbonbutton-class.md)   
 [CMFCRibbonBar Class](../../mfc/reference/cmfcribbonbar-class.md)