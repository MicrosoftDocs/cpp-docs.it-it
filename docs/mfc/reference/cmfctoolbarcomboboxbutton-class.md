---
title: "CMFCToolBarComboBoxButton Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCToolBarComboBoxButton"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCToolBarComboBoxButton class"
ms.assetid: 32fa39f7-8e4e-4f0a-a31d-7b540d969a6c
caps.latest.revision: 30
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 32
---
# CMFCToolBarComboBoxButton Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un pulsante della barra degli strumenti contenente un controllo casella combinata \([CComboBox Class](../../mfc/reference/ccombobox-class.md)\).  
  
## Sintassi  
  
```  
class CMFCToolBarComboBoxButton : public CMFCToolBarButton  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarComboBoxButton::CMFCToolBarComboBoxButton](../Topic/CMFCToolBarComboBoxButton::CMFCToolBarComboBoxButton.md)|Costruisce un oggetto `CMFCToolBarComboBoxButton`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarComboBoxButton::AddItem](../Topic/CMFCToolBarComboBoxButton::AddItem.md)|Aggiunge un elemento alla fine dell'elenco della casella combinata.|  
|[CMFCToolBarComboBoxButton::AddSortedItem](../Topic/CMFCToolBarComboBoxButton::AddSortedItem.md)|Aggiungere un elemento all'elenco della casella combinata.  L'ordine degli elementi nell'elenco è specificato da `Compare`.|  
|[CMFCToolBarComboBoxButton::Compare](../Topic/CMFCToolBarComboBoxButton::Compare.md)|Confronta due elementi.  Chiamato per ordinare gli elementi che `AddSortedItems` aggiunto all'elenco della casella combinata.|  
|[CMFCToolBarComboBoxButton::CreateEdit](../Topic/CMFCToolBarComboBoxButton::CreateEdit.md)|Crea un nuovo controllo di modifica per il pulsante della casella combinata.|  
|[CMFCToolBarComboBoxButton::DeleteItem](../Topic/CMFCToolBarComboBoxButton::DeleteItem.md)|Rimuove un elemento dall'elenco della casella combinata.|  
|[CMFCToolBarComboBoxButton::FindItem](../Topic/CMFCToolBarComboBoxButton::FindItem.md)|Restituisce l'indice dell'elemento contenente la stringa specificata.|  
|[CMFCToolBarComboBoxButton::GetByCmd](../Topic/CMFCToolBarComboBoxButton::GetByCmd.md)|Restituisce un puntatore al pulsante della casella combinata con un ID di comando|  
|[CMFCToolBarComboBoxButton::GetComboBox](../Topic/CMFCToolBarComboBoxButton::GetComboBox.md)|Restituisce un puntatore al controllo casella combinata incorporato nel pulsante della casella combinata.|  
|[CMFCToolBarComboBoxButton::GetCount](../Topic/CMFCToolBarComboBoxButton::GetCount.md)|Restituisce il numero di elementi nell'elenco della casella combinata.|  
|[CMFCToolBarComboBoxButton::GetCountAll](../Topic/CMFCToolBarComboBoxButton::GetCountAll.md)|Cerca il pulsante della casella combinata con un ID di comando  Restituisce il numero di elementi nell'elenco della casella combinata del pulsante.|  
|[CMFCToolBarComboBoxButton::GetCurSel](../Topic/CMFCToolBarComboBoxButton::GetCurSel.md)|Restituisce l'indice dell'elemento selezionato nell'elenco della casella combinata.|  
|[CMFCToolBarComboBoxButton::GetCurSelAll](../Topic/CMFCToolBarComboBoxButton::GetCurSelAll.md)|Cerca il pulsante della casella combinata con un ID di comando specificato e restituisce l'indice dell'elemento selezionato nell'elenco della casella combinata del pulsante.|  
|[CMFCToolBarComboBoxButton::GetEditCtrl](../Topic/CMFCToolBarComboBoxButton::GetEditCtrl.md)|Restituisce un puntatore al controllo di modifica che è incorporato nel pulsante della casella combinata.|  
|[CMFCToolBarComboBoxButton::GetItem](../Topic/CMFCToolBarComboBoxButton::GetItem.md)|Restituisce la stringa associata a un indice specificato nell'elenco della casella combinata.|  
|[CMFCToolBarComboBoxButton::GetItemAll](../Topic/CMFCToolBarComboBoxButton::GetItemAll.md)|Cerca il pulsante della casella combinata con un ID di comando specificato e restituisce la stringa associata a un indice nell'elenco della casella combinata del pulsante.|  
|[CMFCToolBarComboBoxButton::GetItemData](../Topic/CMFCToolBarComboBoxButton::GetItemData.md)|Restituisce il valore a 32 bit associato a un indice specificato nell'elenco della casella combinata.|  
|[CMFCToolBarComboBoxButton::GetItemDataAll](../Topic/CMFCToolBarComboBoxButton::GetItemDataAll.md)|Cerca il pulsante della casella combinata con un ID di comando specificato e restituisce il valore a 32 bit associato a un indice nell'elenco della casella combinata del pulsante.|  
|[CMFCToolBarComboBoxButton::GetItemDataPtrAll](../Topic/CMFCToolBarComboBoxButton::GetItemDataPtrAll.md)|Cerca il pulsante della casella combinata con un ID di comando  Recupera il valore a 32 bit associato un indice nell'elenco della casella combinata del pulsante e restituisce il valore a 32 bit come puntatore.|  
|[CMFCToolBarComboBoxButton::GetText](../Topic/CMFCToolBarComboBoxButton::GetText.md)|Restituisce il testo dal controllo di modifica della casella combinata.|  
|[CMFCToolBarComboBoxButton::GetTextAll](../Topic/CMFCToolBarComboBoxButton::GetTextAll.md)|Cerca il pulsante della casella combinata con un ID di comando specificato e restituisce il testo dal controllo di modifica di tale pulsante.|  
|[CMFCToolBarComboBoxButton::IsCenterVert](../Topic/CMFCToolBarComboBoxButton::IsCenterVert.md)|Determina se i pulsanti della casella combinata nell'applicazione sono centrati o allineati alla parte superiore della barra degli strumenti.|  
|[CMFCToolBarComboBoxButton::IsFlatMode](../Topic/CMFCToolBarComboBoxButton::IsFlatMode.md)|Determina se i pulsanti della casella combinata nell'applicazione presentano un aspetto piano.|  
|[CMFCToolBarComboBoxButton::RemoveAllItems](../Topic/CMFCToolBarComboBoxButton::RemoveAllItems.md)|Rimuove tutti gli elementi dalla casella di riepilogo e dal controllo di modifica della casella combinata.|  
|[CMFCToolBarComboBoxButton::SelectItem](../Topic/CMFCToolBarComboBoxButton::SelectItem.md)|Selezionare un elemento nella casella combinata in base al relativo indice, valore a 32 bit, o stringa e notifica al controllo casella combinata sulla selezione.|  
|[CMFCToolBarComboBoxButton::SelectItemAll](../Topic/CMFCToolBarComboBoxButton::SelectItemAll.md)|Cerca il pulsante della casella combinata con un ID di comando  Chiama `SelectItem` per selezionare un elemento nella casella combinata del pulsante mediante la relativa stringa, indice, o valore a 32 bit.|  
|[CMFCToolBarComboBoxButton::SetCenterVert](../Topic/CMFCToolBarComboBoxButton::SetCenterVert.md)|Specifica se i pulsanti della casella combinata nell'applicazione sono centrati o verticalmente sono allineati alla parte superiore della barra degli strumenti.|  
|[CMFCToolBarComboBoxButton::SetDropDownHeight](../Topic/CMFCToolBarComboBoxButton::SetDropDownHeight.md)|L'altezza dell'elenco a discesa.|  
|[CMFCToolBarComboBoxButton::SetFlatMode](../Topic/CMFCToolBarComboBoxButton::SetFlatMode.md)|Specifica se i pulsanti della casella combinata nell'applicazione presentano un aspetto piano.|  
  
## Note  
 Per aggiungere un pulsante della casella combinata nella barra degli strumenti, seguire questi passaggi:  
  
 1.  Riservare un ID di risorsa fittizio al pulsante nella risorsa padre della barra degli strumenti.  
  
 2.  Costruire un oggetto `CMFCToolBarComboBoxButton`.  
  
 3.  Nel gestore di messaggi che elabora il messaggio `AFX_WM_RESETTOOLBAR`, sostituire il pulsante fittizio con il nuovo pulsante della casella combinata utilizzando [CMFCToolBar::ReplaceButton](../Topic/CMFCToolBar::ReplaceButton.md).  
  
 Per ulteriori informazioni, vedere [Procedura dettagliata: inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md).  Per un esempio di un pulsante della barra degli strumenti della casella combinata, vedere il progetto di esempio VisualStudioDemo.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i vari metodi della classe `CMFCToolBarComboBoxButton`.  L'esempio mostra come abilitare la modifica e caselle combinate, impostare la posizione verticale dei pulsanti della casella combinata nell'applicazione, impostare l'altezza della casella di riepilogo quando viene rilasciata verso il basso, per impostare l'aspetto piano di stile dei pulsanti della casella combinata nell'applicazione e impostare il testo nella casella di modifica del pulsante della casella combinata.  Questo frammento di codice fa parte [Esempio demo di Visual Studio](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#36](../../mfc/codesnippet/CPP/cmfctoolbarcomboboxbutton-class_1.cpp)]  
[!code-cpp[NVC_MFC_VisualStudioDemo#37](../../mfc/codesnippet/CPP/cmfctoolbarcomboboxbutton-class_2.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)  
  
 [CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md)  
  
## Requisiti  
 **intestazione:** afxtoolbarcomboboxbutton.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCToolBarButton Class](../../mfc/reference/cmfctoolbarbutton-class.md)   
 [CComboBox Class](../../mfc/reference/ccombobox-class.md)   
 [CMFCToolBar::ReplaceButton](../Topic/CMFCToolBar::ReplaceButton.md)   
 [Procedura dettagliata: inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md)