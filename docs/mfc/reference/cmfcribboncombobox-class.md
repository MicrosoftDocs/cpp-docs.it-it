---
title: "CMFCRibbonComboBox Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCRibbonComboBox"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCRibbonComboBox class"
ms.assetid: 9b29a6a4-cf17-4152-9b13-0bf90784b30d
caps.latest.revision: 35
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 37
---
# CMFCRibbonComboBox Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCRibbonComboBox` implementa un controllo combobox da aggiungere a una barra multifunzione, a un pannello della barra multifunzione, o un menu di scelta rapida della barra multifunzione.  
  
## Sintassi  
  
```  
class CMFCRibbonComboBox : public CMFCRibbonEdit  
```  
  
## Membri  
  
### Costruttori  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonComboBox::CMFCRibbonComboBox](../Topic/CMFCRibbonComboBox::CMFCRibbonComboBox.md)|Costruisce un oggetto di CMFCRibbonComboBox.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonComboBox::AddItem](../Topic/CMFCRibbonComboBox::AddItem.md)|Aggiunge un elemento univoco alla casella di riepilogo.|  
|[CMFCRibbonComboBox::DeleteItem](../Topic/CMFCRibbonComboBox::DeleteItem.md)|Rimuove un elemento specificato dalla casella di riepilogo.|  
|[CMFCRibbonComboBox::EnableDropDownListResize](../Topic/CMFCRibbonComboBox::EnableDropDownListResize.md)|Specifica se la casella di riepilogo può modificare la dimensione quando il menu a discesa.|  
|[CMFCRibbonComboBox::FindItem](../Topic/CMFCRibbonComboBox::FindItem.md)|Restituisce l'indice del primo elemento della casella di riepilogo che corrisponde a una stringa specificata.|  
|[CMFCRibbonComboBox::GetCount](../Topic/CMFCRibbonComboBox::GetCount.md)|Restituisce il numero di elementi della casella di riepilogo.|  
|[CMFCRibbonComboBox::GetCurSel](../Topic/CMFCRibbonComboBox::GetCurSel.md)|Ottiene l'indice dell'elemento attualmente selezionato nella casella di riepilogo.|  
|[CMFCRibbonComboBox::GetDropDownHeight](../Topic/CMFCRibbonComboBox::GetDropDownHeight.md)|Ottiene l'altezza della casella di riepilogo quando la casella di riepilogo viene rilasciata verso il basso.|  
|[CMFCRibbonComboBox::GetIntermediateSize](../Topic/CMFCRibbonComboBox::GetIntermediateSize.md)|Restituisce la dimensione della casella combinata come visualizzato in modalità intermedia.|  
|[CMFCRibbonComboBox::GetItem](../Topic/CMFCRibbonComboBox::GetItem.md)|Restituisce la stringa associata a un elemento a un indice specificato nella casella di riepilogo.|  
|[CMFCRibbonComboBox::GetItemData](../Topic/CMFCRibbonComboBox::GetItemData.md)|Restituisce i dati associati a un elemento a un indice specificato nella casella di riepilogo.|  
|[CMFCRibbonComboBox::HasEditBox](../Topic/CMFCRibbonComboBox::HasEditBox.md)|Indica se il controllo contiene una casella di modifica.|  
|[CMFCRibbonComboBox::IsResizeDropDownList](../Topic/CMFCRibbonComboBox::IsResizeDropDownList.md)|Indica se la casella di riepilogo può essere ridimensionata.|  
|[CMFCRibbonComboBox::OnSelectItem](../Topic/CMFCRibbonComboBox::OnSelectItem.md)|Chiamato dal framework quando l'utente seleziona un elemento nella casella di riepilogo.|  
|[CMFCRibbonComboBox::RemoveAllItems](../Topic/CMFCRibbonComboBox::RemoveAllItems.md)|Rimuove tutti gli elementi dalla casella di riepilogo e deselezionare la casella di modifica.|  
|[CMFCRibbonComboBox::SelectItem](../Topic/CMFCRibbonComboBox::SelectItem.md)|Selezionare un elemento nella casella di riepilogo.|  
|[CMFCRibbonComboBox::SetDropDownHeight](../Topic/CMFCRibbonComboBox::SetDropDownHeight.md)|L'altezza della casella di riepilogo quando viene rilasciata verso il basso.|  
  
## Note  
 La casella combinata della barra multifunzione è costituito da una casella di riepilogo combinata con un'etichetta statica o l'etichetta che possono essere modificate dall'utente.  È necessario specificare che si desidera digitare quando si crea la casella combinata della barra multifunzione.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come costruire un oggetto con la classe `CMFCRibbonComboBox`, aggiungere un elemento alla casella combinata, selezionare un elemento nella casella combinata e aggiungere una casella combinata in un pannello.  
  
 [!code-cpp[NVC_MFC_RibbonApp#11](../../mfc/reference/codesnippet/CPP/cmfcribboncombobox-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)  
  
 [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md)  
  
 [CMFCRibbonComboBox](../../mfc/reference/cmfcribboncombobox-class.md)  
  
## Requisiti  
 **intestazione:** afxribboncombobox.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCRibbonEdit Class](../../mfc/reference/cmfcribbonedit-class.md)