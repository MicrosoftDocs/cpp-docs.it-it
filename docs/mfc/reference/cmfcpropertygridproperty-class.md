---
title: "CMFCPropertyGridProperty Class | Microsoft Docs"
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
  - "CMFCPropertyGridProperty"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCPropertyGridProperty class"
ms.assetid: 36f3fabe-0efe-468b-8a0b-5a7956db38a2
caps.latest.revision: 35
caps.handback.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCPropertyGridProperty Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un oggetto `CMFCPropertyGridProperty` rappresenta un elemento di elenco in un controllo dell'elenco.  
  
## Sintassi  
  
```  
class CMFCPropertyGridProperty : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCPropertyGridProperty::CMFCPropertyGridProperty](../Topic/CMFCPropertyGridProperty::CMFCPropertyGridProperty.md)|Costruisce un oggetto `CMFCPropertyGridProperty`.|  
|`CMFCPropertyGridProperty::~CMFCPropertyGridProperty`|Distruttore|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCPropertyGridProperty::AddOption](../Topic/CMFCPropertyGridProperty::AddOption.md)|Aggiungere un nuovo elemento di elenco a un controllo dell'elenco.|  
|[CMFCPropertyGridProperty::AddSubItem](../Topic/CMFCPropertyGridProperty::AddSubItem.md)|Aggiunge un elemento figlio a una proprietà.|  
|[CMFCPropertyGridProperty::AdjustButtonRect](../Topic/CMFCPropertyGridProperty::AdjustButtonRect.md)|Chiamato dal controllo padre dell'elenco di proprietà per impostare una proprietà di ridimensionare il rettangolo di delimitazione di un pulsante incorporato.|  
|[CMFCPropertyGridProperty::AdjustInPlaceEditRect](../Topic/CMFCPropertyGridProperty::AdjustInPlaceEditRect.md)|Recupera i limiti della casella di testo e del controllo facoltativo pulsante di selezione utilizzati per impostare un valore di proprietà.|  
|[CMFCPropertyGridProperty::AllowEdit](../Topic/CMFCPropertyGridProperty::AllowEdit.md)|Genera una proprietà modificabile o di sola lettura.|  
|[CMFCPropertyGridProperty::CreateInPlaceEdit](../Topic/CMFCPropertyGridProperty::CreateInPlaceEdit.md)|Chiamato dal framework per creare un controllo modificabile per una proprietà.|  
|[CMFCPropertyGridProperty::CreateSpinControl](../Topic/CMFCPropertyGridProperty::CreateSpinControl.md)|Chiamato dal framework per creare un controllo modificabile del pulsante di selezione.|  
|[CMFCPropertyGridProperty::Enable](../Topic/CMFCPropertyGridProperty::Enable.md)|Abilita o disabilita una proprietà.|  
|[CMFCPropertyGridProperty::EnableSpinControl](../Topic/CMFCPropertyGridProperty::EnableSpinControl.md)|Abilita o disabilita un controllo pulsante di selezione utilizzato per modificare il valore della proprietà.|  
|[CMFCPropertyGridProperty::Expand](../Topic/CMFCPropertyGridProperty::Expand.md)|Espandere o comprimere una proprietà che contiene le proprietà secondaria.|  
|[CMFCPropertyGridProperty::FormatProperty](../Topic/CMFCPropertyGridProperty::FormatProperty.md)|Formatta la rappresentazione di testo di un valore di proprietà.|  
|[CMFCPropertyGridProperty::GetData](../Topic/CMFCPropertyGridProperty::GetData.md)|Recupera il valore `DWORD` associato a una proprietà.|  
|[CMFCPropertyGridProperty::GetDescription](../Topic/CMFCPropertyGridProperty::GetDescription.md)|Recupera una descrizione della proprietà.|  
|[CMFCPropertyGridProperty::GetExpandedSubItems](../Topic/CMFCPropertyGridProperty::GetExpandedSubItems.md)|Recupera il numero di elementi secondari espansi.|  
|[CMFCPropertyGridProperty::GetHierarchyLevel](../Topic/CMFCPropertyGridProperty::GetHierarchyLevel.md)|Recupera l'indice in base zero del livello della gerarchia della proprietà.|  
|[CMFCPropertyGridProperty::GetName](../Topic/CMFCPropertyGridProperty::GetName.md)|Recupera il nome della proprietà.|  
|[CMFCPropertyGridProperty::GetNameTooltip](../Topic/CMFCPropertyGridProperty::GetNameTooltip.md)|Chiamato dal framework per visualizzare il nome della proprietà in una descrizione comando.|  
|[CMFCPropertyGridProperty::GetOption](../Topic/CMFCPropertyGridProperty::GetOption.md)|Recupera il testo dell'opzione specificata da un indice.|  
|[CMFCPropertyGridProperty::GetOptionCount](../Topic/CMFCPropertyGridProperty::GetOptionCount.md)|Recupera il numero delle opzioni che appartengono a una proprietà.|  
|[CMFCPropertyGridProperty::GetOriginalValue](../Topic/CMFCPropertyGridProperty::GetOriginalValue.md)|Recupera il valore iniziale della proprietà corrente.|  
|[CMFCPropertyGridProperty::GetParent](../Topic/CMFCPropertyGridProperty::GetParent.md)|Recupera un puntatore a una proprietà padre.|  
|[CMFCPropertyGridProperty::GetRect](../Topic/CMFCPropertyGridProperty::GetRect.md)|Recupera il rettangolo di delimitazione di una proprietà.|  
|[CMFCPropertyGridProperty::GetSubItem](../Topic/CMFCPropertyGridProperty::GetSubItem.md)|Recupera una proprietà secondarie identificata da un indice a base zero.|  
|[CMFCPropertyGridProperty::GetSubItemsCount](../Topic/CMFCPropertyGridProperty::GetSubItemsCount.md)|Recupera il numero di elementi secondari.|  
|`CMFCPropertyGridProperty::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo della classe.|  
|[CMFCPropertyGridProperty::GetValue](../Topic/CMFCPropertyGridProperty::GetValue.md)|Recupera il valore della proprietà.|  
|[CMFCPropertyGridProperty::GetValueTooltip](../Topic/CMFCPropertyGridProperty::GetValueTooltip.md)|Chiamato dal framework per recuperare la rappresentazione di testo del valore della proprietà che viene visualizzata in una descrizione comando.|  
|[CMFCPropertyGridProperty::HitTest](../Topic/CMFCPropertyGridProperty::HitTest.md)|Punta alla proprietà dell'oggetto che corrisponde all'elemento di un elenco di proprietà che corrisponde a un punto.|  
|[CMFCPropertyGridProperty::IsAllowEdit](../Topic/CMFCPropertyGridProperty::IsAllowEdit.md)|Indica se una proprietà è modificabile.|  
|[CMFCPropertyGridProperty::IsEnabled](../Topic/CMFCPropertyGridProperty::IsEnabled.md)|Indica se una proprietà è abilitata o disabilitata.|  
|[CMFCPropertyGridProperty::IsExpanded](../Topic/CMFCPropertyGridProperty::IsExpanded.md)|Indica se una proprietà viene espansa o compressa.|  
|[CMFCPropertyGridProperty::IsGroup](../Topic/CMFCPropertyGridProperty::IsGroup.md)|Indica se la proprietà corrente rappresenta un gruppo.|  
|[CMFCPropertyGridProperty::IsInPlaceEditing](../Topic/CMFCPropertyGridProperty::IsInPlaceEditing.md)|Indica se la proprietà corrente è modificabile.|  
|[CMFCPropertyGridProperty::IsModified](../Topic/CMFCPropertyGridProperty::IsModified.md)|Indica se la proprietà corrente viene modificata.|  
|[CMFCPropertyGridProperty::IsParentExpanded](../Topic/CMFCPropertyGridProperty::IsParentExpanded.md)|Indica se il padre della proprietà corrente vengono espansi.|  
|[CMFCPropertyGridProperty::IsSelected](../Topic/CMFCPropertyGridProperty::IsSelected.md)|Indica se la proprietà corrente è selezionata.|  
|[CMFCPropertyGridProperty::IsVisible](../Topic/CMFCPropertyGridProperty::IsVisible.md)|Indica se la proprietà corrente è visibile.|  
|[CMFCPropertyGridProperty::OnClickButton](../Topic/CMFCPropertyGridProperty::OnClickButton.md)|Chiamato dal framework quando l'utente fa clic su un pulsante contenuto in una proprietà.|  
|[CMFCPropertyGridProperty::OnClickName](../Topic/CMFCPropertyGridProperty::OnClickName.md)|Chiamato da un controllo padre dell'elenco di proprietà quando l'utente fa clic sul campo del nome di una proprietà.|  
|[CMFCPropertyGridProperty::OnClickValue](../Topic/CMFCPropertyGridProperty::OnClickValue.md)|Chiamato da un controllo padre dell'elenco di proprietà quando l'utente fa clic sul campo del valore di una proprietà.|  
|[CMFCPropertyGridProperty::OnCloseCombo](../Topic/CMFCPropertyGridProperty::OnCloseCombo.md)|Chiamato dal framework quando una casella combinata contenuta in una proprietà viene chiusa.|  
|[CMFCPropertyGridProperty::OnDblClk](../Topic/CMFCPropertyGridProperty::OnDblClk.md)|Chiamato dal framework quando l'utente fa doppio clic su una proprietà.|  
|[CMFCPropertyGridProperty::OnDrawButton](../Topic/CMFCPropertyGridProperty::OnDrawButton.md)|Chiamato dal framework per disegnare un pulsante contenuto in una proprietà.|  
|[CMFCPropertyGridProperty::OnDrawDescription](../Topic/CMFCPropertyGridProperty::OnDrawDescription.md)|Chiamato dal framework per visualizzare la descrizione della proprietà.|  
|[CMFCPropertyGridProperty::OnDrawExpandBox](../Topic/CMFCPropertyGridProperty::OnDrawExpandBox.md)|Chiamato dal framework per disegnare un controllo casella di espansione a una proprietà che contiene le proprietà secondaria.|  
|[CMFCPropertyGridProperty::OnDrawName](../Topic/CMFCPropertyGridProperty::OnDrawName.md)|Chiamato dal framework per visualizzare il nome della proprietà.|  
|[CMFCPropertyGridProperty::OnDrawValue](../Topic/CMFCPropertyGridProperty::OnDrawValue.md)|Chiamato dal framework per visualizzare il valore della proprietà.|  
|[CMFCPropertyGridProperty::OnEdit](../Topic/CMFCPropertyGridProperty::OnEdit.md)|Chiamato dal framework quando l'utente sta per modificare un valore di proprietà.|  
|[CMFCPropertyGridProperty::OnEndEdit](../Topic/CMFCPropertyGridProperty::OnEndEdit.md)|Chiamato dal framework quando l'utente termina che modifica il valore della proprietà.|  
|[CMFCPropertyGridProperty::OnKillSelection](../Topic/CMFCPropertyGridProperty::OnKillSelection.md)||  
|[CMFCPropertyGridProperty::OnPosSizeChanged](../Topic/CMFCPropertyGridProperty::OnPosSizeChanged.md)||  
|[CMFCPropertyGridProperty::OnRClickName](../Topic/CMFCPropertyGridProperty::OnRClickName.md)|Chiamato dal framework quando l'utente sceglie il pulsante destro del mouse nell'area nome proprietà.|  
|[CMFCPropertyGridProperty::OnRClickValue](../Topic/CMFCPropertyGridProperty::OnRClickValue.md)|Chiamato dal framework quando l'utente sceglie il pulsante destro del mouse nell'area del valore della proprietà.|  
|[CMFCPropertyGridProperty::OnSelectCombo](../Topic/CMFCPropertyGridProperty::OnSelectCombo.md)|Chiamato dal framework quando l'utente seleziona un elemento dalla casella combinata modificabile.|  
|[CMFCPropertyGridProperty::OnSetCursor](../Topic/CMFCPropertyGridProperty::OnSetCursor.md)|Chiamato dal framework quando il puntatore del mouse viene spostato su un elemento proprietà.|  
|[CMFCPropertyGridProperty::OnSetSelection](../Topic/CMFCPropertyGridProperty::OnSetSelection.md)||  
|[CMFCPropertyGridProperty::OnUpdateValue](../Topic/CMFCPropertyGridProperty::OnUpdateValue.md)|Chiamato dal framework quando il valore di una proprietà modificabile è stato modificato.|  
|[CMFCPropertyGridProperty::PushChar](../Topic/CMFCPropertyGridProperty::PushChar.md)|Chiamato dal controllo dell'elenco di proprietà quando la proprietà è selezionata e dall'utente immette un carattere.|  
|[CMFCPropertyGridProperty::Redraw](../Topic/CMFCPropertyGridProperty::Redraw.md)|Ridisegna la proprietà.|  
|[CMFCPropertyGridProperty::RemoveAllOptions](../Topic/CMFCPropertyGridProperty::RemoveAllOptions.md)|Rimuove tutte le opzioni \(elementi\) da una proprietà.|  
|[CMFCPropertyGridProperty::RemoveSubItem](../Topic/CMFCPropertyGridProperty::RemoveSubItem.md)|Consente di eliminare un elemento specificato.|  
|[CMFCPropertyGridProperty::ResetOriginalValue](../Topic/CMFCPropertyGridProperty::ResetOriginalValue.md)|È possibile ripristinare il valore originale di una proprietà modificata.|  
|[CMFCPropertyGridProperty::SetData](../Topic/CMFCPropertyGridProperty::SetData.md)|Associa un valore `DWORD` con una proprietà.|  
|[CMFCPropertyGridProperty::SetDescription](../Topic/CMFCPropertyGridProperty::SetDescription.md)|Specifica il testo che descrive la proprietà corrente.|  
|[CMFCPropertyGridProperty::SetName](../Topic/CMFCPropertyGridProperty::SetName.md)|Imposta il nome di una proprietà.|  
|[CMFCPropertyGridProperty::SetOriginalValue](../Topic/CMFCPropertyGridProperty::SetOriginalValue.md)|Imposta il valore originale di una proprietà modificabile.|  
|[CMFCPropertyGridProperty::SetValue](../Topic/CMFCPropertyGridProperty::SetValue.md)|Imposta il valore di una proprietà della griglia delle proprietà.|  
|[CMFCPropertyGridProperty::Show](../Topic/CMFCPropertyGridProperty::Show.md)|Mostra o nasconde una proprietà.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCPropertyGridProperty::CreateCombo](../Topic/CMFCPropertyGridProperty::CreateCombo.md)|Chiamato dal framework per aggiungere una casella combinata a una proprietà.|  
|[CMFCPropertyGridProperty::HasButton](../Topic/CMFCPropertyGridProperty::HasButton.md)|Indica se una proprietà contiene un pulsante.|  
|[CMFCPropertyGridProperty::Init](../Topic/CMFCPropertyGridProperty::Init.md)|Chiamato dal framework per inizializzare un oggetto della proprietà.|  
|[CMFCPropertyGridProperty::IsSubItem](../Topic/CMFCPropertyGridProperty::IsSubItem.md)|Indica se la proprietà specificata è un elemento secondario di proprietà corrente.|  
|[CMFCPropertyGridProperty::IsValueChanged](../Topic/CMFCPropertyGridProperty::IsValueChanged.md)|Indica se il valore della proprietà corrente è stato modificato.|  
|[CMFCPropertyGridProperty::OnCtlColor](../Topic/CMFCPropertyGridProperty::OnCtlColor.md)|Chiamato dal framework quando deve recuperare un pennello per riempire il colore di sfondo di una proprietà.|  
|[CMFCPropertyGridProperty::OnDestroyWindow](../Topic/CMFCPropertyGridProperty::OnDestroyWindow.md)|Chiamato dal framework quando una proprietà viene eliminato o quando viene completata la modifica.|  
|[CMFCPropertyGridProperty::OnKillFocus](../Topic/CMFCPropertyGridProperty::OnKillFocus.md)|Chiamato dal framework quando la proprietà perde lo stato attivo per l'input.|  
  
### Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCPropertyGridProperty::m\_strFormatDouble](../Topic/CMFCPropertyGridProperty::m_strFormatDouble.md)|Stringa di formato per un valore del doppio del tipo.|  
|[CMFCPropertyGridProperty::m\_strFormatFloat](../Topic/CMFCPropertyGridProperty::m_strFormatFloat.md)|Stringa di formato per un valore float del tipo.|  
|[CMFCPropertyGridProperty::m\_strFormatLong](../Topic/CMFCPropertyGridProperty::m_strFormatLong.md)|Stringa di formato per un valore di tipo long.|  
|[CMFCPropertyGridProperty::m\_strFormatShort](../Topic/CMFCPropertyGridProperty::m_strFormatShort.md)|Stringa di formato per un valore di tipo breve.|  
  
## Note  
 Utilizzare un oggetto `CMFCPropertyGridProperty` per rappresentare una proprietà, che viene aggiunta a un controllo dell'elenco.  Per ulteriori informazioni, vedere [CMFCPropertyGridCtrl Class](../../mfc/reference/cmfcpropertygridctrl-class.md).  
  
 Un oggetto di proprietà può rappresentare i tipi di dati come stringhe, date e booleano o valori Integer.  Può contenere le proprietà figlio, oppure può contenere un controllo come una casella combinata o un pulsante.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come costruire un oggetto `CMFCPropertyGridProperty`.  Viene inoltre illustrato come utilizzare i vari metodi della classe `CMFCPropertyGridProperty` per aggiungere un'opzione, aggiungere un elemento secondario, per consentire una proprietà e per visualizzare una proprietà.  Questo esempio fa parte [Nuovo esempio di controlli](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls#27](../../mfc/reference/codesnippet/CPP/cmfcpropertygridproperty-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCPropertyGridProperty](../../mfc/reference/cmfcpropertygridproperty-class.md)  
  
## Requisiti  
 **intestazione:** afxpropertygridctrl.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCPropertyGridCtrl Class](../../mfc/reference/cmfcpropertygridctrl-class.md)