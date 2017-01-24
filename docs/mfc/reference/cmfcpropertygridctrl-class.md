---
title: "CMFCPropertyGridCtrl Class | Microsoft Docs"
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
  - "CMFCPropertyGridCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCPropertyGridCtrl class"
  - "CMFCPropertyGridCtrl::accHitTest method"
  - "CMFCPropertyGridCtrl::accLocation method"
  - "CMFCPropertyGridCtrl::get_accChild method"
  - "CMFCPropertyGridCtrl::get_accDefaultAction method"
  - "CMFCPropertyGridCtrl::get_accDescription method"
  - "CMFCPropertyGridCtrl::get_accName method"
  - "CMFCPropertyGridCtrl::get_accRole method"
  - "CMFCPropertyGridCtrl::get_accState method"
  - "CMFCPropertyGridCtrl::get_accValue method"
  - "CMFCPropertyGridCtrl::PreTranslateMessage method"
ms.assetid: 95877cae-2311-4a2a-9031-0c8c3cf0a5f9
caps.latest.revision: 35
caps.handback.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCPropertyGridCtrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

[!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
 Supporta un controllo griglia modificabile della proprietà che può visualizzare le proprietà in ordine alfabetico o gerarchico.  
  
## Sintassi  
  
```  
class CMFCPropertyGridCtrl : public CWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCPropertyGridCtrl::CMFCPropertyGridCtrl](../Topic/CMFCPropertyGridCtrl::CMFCPropertyGridCtrl.md)|Costruisce un oggetto `CMFCPropertyGridCtrl`.|  
|`CMFCPropertyGridCtrl::~CMFCPropertyGridCtrl`|Distruttore|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCPropertyGridCtrl::accHitTest`|Chiamato dal framework per recuperare l'elemento figlio o l'oggetto figlio in un determinato punto dello schermo.  \(Override [CWnd::accHitTest](../Topic/CWnd::accHitTest.md)\).|  
|`CMFCPropertyGridCtrl::accLocation`|Chiamato dal framework per recuperare la posizione corrente dello schermo dell'oggetto specificato.  \(Override [CWnd::accLocation](../Topic/CWnd::accLocation.md)\).|  
|[CMFCPropertyGridCtrl::accSelect](../Topic/CMFCPropertyGridCtrl::accSelect.md)|Chiamato dal framework per modificare la selezione o spostare lo stato attivo dell'oggetto specificato.  \(Override [CWnd::accSelect](../Topic/CWnd::accSelect.md)\).|  
|[CMFCPropertyGridCtrl::AddProperty](../Topic/CMFCPropertyGridCtrl::AddProperty.md)|Aggiunge una nuova proprietà a un controllo griglia delle proprietà.|  
|[CMFCPropertyGridCtrl::AlwaysShowUserToolTip](../Topic/CMFCPropertyGridCtrl::AlwaysShowUserToolTip.md)||  
|[CMFCPropertyGridCtrl::CloseColorPopup](../Topic/CMFCPropertyGridCtrl::CloseColorPopup.md)|Chiudere la finestra di dialogo di selezione di colori.|  
|[CMFCPropertyGridCtrl::Create](../Topic/CMFCPropertyGridCtrl::Create.md)|Crea un controllo griglia delle proprietà e lo aggiunge all'oggetto del controllo griglia delle proprietà.|  
|[CMFCPropertyGridCtrl::DeleteProperty](../Topic/CMFCPropertyGridCtrl::DeleteProperty.md)|Elimina la proprietà specificata dal controllo griglia delle proprietà.|  
|[CMFCPropertyGridCtrl::DrawControlBarColors](../Topic/CMFCPropertyGridCtrl::DrawControlBarColors.md)||  
|[CMFCPropertyGridCtrl::EnableDescriptionArea](../Topic/CMFCPropertyGridCtrl::EnableDescriptionArea.md)|Abilita o disabilita l'area di descrizione visualizzati sotto l'elenco delle proprietà.|  
|[CMFCPropertyGridCtrl::EnableHeaderCtrl](../Topic/CMFCPropertyGridCtrl::EnableHeaderCtrl.md)|Abilita o disabilita il controllo intestazione all'inizio del controllo griglia delle proprietà.|  
|[CMFCPropertyGridCtrl::EnsureVisible](../Topic/CMFCPropertyGridCtrl::EnsureVisible.md)|Scorre un controllo griglia delle proprietà ed espandere gli elementi della proprietà che la proprietà specificata non sia visibile.|  
|[CMFCPropertyGridCtrl::ExpandAll](../Topic/CMFCPropertyGridCtrl::ExpandAll.md)|Espandere o comprimere tutti i nodi del controllo griglia delle proprietà.|  
|[CMFCPropertyGridCtrl::FindItemByData](../Topic/CMFCPropertyGridCtrl::FindItemByData.md)|Recupera la proprietà associata a un valore definito dall'utente `DWORD`.|  
|`CMFCPropertyGridCtrl::get_accChild`|Chiamato dal framework per recuperare l'indirizzo di un'interfaccia `IDispatch` per il figlio specificato.  \(Override [CWnd::get\_accChild](../Topic/CWnd::get_accChild.md)\).|  
|[CMFCPropertyGridCtrl::get\_accChildCount](../Topic/CMFCPropertyGridCtrl::get_accChildCount.md)|Chiamato dal framework per recuperare il numero di elementi figlio che appartengono a questo oggetto.  \(Override [CWnd::get\_accChildCount](../Topic/CWnd::get_accChildCount.md)\).|  
|`CMFCPropertyGridCtrl::get_accDefaultAction`|Chiamato dal framework per recuperare una stringa che descrive l'azione predefinita dell'oggetto.  \(Override [CWnd::get\_accDefaultAction](../Topic/CWnd::get_accDefaultAction.md)\).|  
|`CMFCPropertyGridCtrl::get_accDescription`|Chiamato dal framework per recuperare una stringa che descrive l'aspetto visivo dell'oggetto specificato.  \(Override [CWnd::get\_accDescription](../Topic/CWnd::get_accDescription.md)\).|  
|[CMFCPropertyGridCtrl::get\_accFocus](../Topic/CMFCPropertyGridCtrl::get_accFocus.md)|Chiamato dal framework per recuperare l'oggetto che ha lo stato attivo.  \(Override [CWnd::get\_accFocus](../Topic/CWnd::get_accFocus.md)\).|  
|[CMFCPropertyGridCtrl::get\_accHelp](../Topic/CMFCPropertyGridCtrl::get_accHelp.md)|Chiamato dal framework per recuperare la stringa della proprietà `Help` di un oggetto.  \(Override [CWnd::get\_accHelp](../Topic/CWnd::get_accHelp.md)\).|  
|[CMFCPropertyGridCtrl::get\_accHelpTopic](../Topic/CMFCPropertyGridCtrl::get_accHelpTopic.md)|Chiamato dal framework per recuperare il percorso completo del file `WinHelp`associato all'oggetto specificato e l'identificatore dell'argomento appropriato all'interno del file.  \(Override [CWnd::get\_accHelpTopic](../Topic/CWnd::get_accHelpTopic.md)\).|  
|[CMFCPropertyGridCtrl::get\_accKeyboardShortcut](../Topic/CMFCPropertyGridCtrl::get_accKeyboardShortcut.md)|Chiamato dal framework per recuperare il tasto di scelta rapida o il tasto di scelta dell'oggetto specificato.  \(Override [CWnd::get\_accKeyboardShortcut](../Topic/CWnd::get_accKeyboardShortcut.md)\).|  
|`CMFCPropertyGridCtrl::get_accName`|Chiamato dal framework per recuperare il nome dell'oggetto specificato.  \(Override [CWnd::get\_accName](../Topic/CWnd::get_accName.md)\).|  
|`CMFCPropertyGridCtrl::get_accRole`|Chiamato dal framework per recuperare informazioni che descrivono il ruolo dell'oggetto specificato.  \(Override [CWnd::get\_accRole](../Topic/CWnd::get_accRole.md)\).|  
|[CMFCPropertyGridCtrl::get\_accSelection](../Topic/CMFCPropertyGridCtrl::get_accSelection.md)|Chiamato dal framework per recupero di elementi selezionati di questo oggetto.  \(Override [CWnd::get\_accSelection](../Topic/CWnd::get_accSelection.md)\).|  
|`CMFCPropertyGridCtrl::get_accState`|Chiamato dal framework per recuperare lo stato corrente dell'oggetto specificato.  \(Override [CWnd::get\_accState](../Topic/CWnd::get_accState.md)\).|  
|`CMFCPropertyGridCtrl::get_accValue`|Chiamato dal framework per recuperare il valore dell'oggetto specificato.  \(Override [CWnd::get\_accValue](../Topic/CWnd::get_accValue.md)\).|  
|[CMFCPropertyGridCtrl::GetBkColor](../Topic/CMFCPropertyGridCtrl::GetBkColor.md)|Recupera il colore di sfondo del controllo griglia corrente della proprietà.|  
|[CMFCPropertyGridCtrl::GetBoldFont](../Topic/CMFCPropertyGridCtrl::GetBoldFont.md)|Recupera il tipo di Windows che di testo nel controllo griglia corrente della proprietà dello stile grassetto.|  
|[CMFCPropertyGridCtrl::GetCurSel](../Topic/CMFCPropertyGridCtrl::GetCurSel.md)|Recupera la proprietà selezionata.|  
|[CMFCPropertyGridCtrl::GetCustomColors](../Topic/CMFCPropertyGridCtrl::GetCustomColors.md)|Recupera i colori personalizzati che attualmente definiti per gli elementi di controllo griglia delle proprietà.|  
|[CMFCPropertyGridCtrl::GetDescriptionHeight](../Topic/CMFCPropertyGridCtrl::GetDescriptionHeight.md)|Recupera l'altezza dell'area di descrizione ha individuato nella parte inferiore del controllo griglia delle proprietà.|  
|[CMFCPropertyGridCtrl::GetDescriptionRows](../Topic/CMFCPropertyGridCtrl::GetDescriptionRows.md)|Recupera il numero di righe dell'area di descrizione del controllo griglia corrente della proprietà.|  
|[CMFCPropertyGridCtrl::GetHeaderCtrl](../Topic/CMFCPropertyGridCtrl::GetHeaderCtrl.md)|Recupera l'oggetto interno [CMFCHeaderCtrl](../../mfc/reference/cmfcheaderctrl-class.md) che il framework per visualizzare il controllo griglia corrente della proprietà.|  
|[CMFCPropertyGridCtrl::GetHeaderHeight](../Topic/CMFCPropertyGridCtrl::GetHeaderHeight.md)|Recupera l'altezza dell'intestazione del controllo griglia delle proprietà.|  
|[CMFCPropertyGridCtrl::GetLeftColumnWidth](../Topic/CMFCPropertyGridCtrl::GetLeftColumnWidth.md)|Recupera la larghezza della colonna sinistra del controllo griglia corrente della proprietà, che contiene il nome di ogni proprietà.|  
|[CMFCPropertyGridCtrl::GetListRect](../Topic/CMFCPropertyGridCtrl::GetListRect.md)|Recupera il rettangolo di delimitazione del controllo griglia delle proprietà.|  
|[CMFCPropertyGridCtrl::GetProperty](../Topic/CMFCPropertyGridCtrl::GetProperty.md)|Recupera un puntatore all'oggetto della proprietà che corrisponde all'indice specificato di un elemento del controllo griglia delle proprietà.|  
|[CMFCPropertyGridCtrl::GetPropertyColumnWidth](../Topic/CMFCPropertyGridCtrl::GetPropertyColumnWidth.md)|Recupera la larghezza della colonna corrente contenente i valori della proprietà.|  
|[CMFCPropertyGridCtrl::GetPropertyCount](../Topic/CMFCPropertyGridCtrl::GetPropertyCount.md)|Recupera il numero di proprietà in un controllo griglia delle proprietà.|  
|[CMFCPropertyGridCtrl::GetRowHeight](../Topic/CMFCPropertyGridCtrl::GetRowHeight.md)|Recupera l'altezza di una riga del controllo griglia delle proprietà.|  
|[CMFCPropertyGridCtrl::GetScrollBarCtrl](../Topic/CMFCPropertyGridCtrl::GetScrollBarCtrl.md)|Recupera un puntatore al controllo barra di scorrimento nel controllo griglia delle proprietà.  \(Override [CWnd::GetScrollBarCtrl](../Topic/CWnd::GetScrollBarCtrl.md)\).|  
|[CMFCPropertyGridCtrl::GetTextColor](../Topic/CMFCPropertyGridCtrl::GetTextColor.md)|Recupera il colore del testo degli elementi della proprietà nel controllo griglia corrente della proprietà.|  
|`CMFCPropertyGridCtrl::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo della classe.|  
|[CMFCPropertyGridCtrl::HitTest](../Topic/CMFCPropertyGridCtrl::HitTest.md)|Recupera un puntatore all'oggetto della proprietà che corrisponde a un elemento del controllo griglia delle proprietà se un punto specificato consiste nell'elemento.  Questo metodo indica l'area nel controllo griglia delle proprietà che contiene il punto.|  
|[CMFCPropertyGridCtrl::InitHeader](../Topic/CMFCPropertyGridCtrl::InitHeader.md)|Inizializza l'oggetto interno [CMFCHeaderCtrl](../../mfc/reference/cmfcheaderctrl-class.md) che il framework per visualizzare il controllo griglia corrente della proprietà.|  
|[CMFCPropertyGridCtrl::IsAlphabeticMode](../Topic/CMFCPropertyGridCtrl::IsAlphabeticMode.md)|Indica se un controllo griglia della proprietà è in modalità alfabetico.|  
|[CMFCPropertyGridCtrl::IsAlwaysShowUserToolTip](../Topic/CMFCPropertyGridCtrl::IsAlwaysShowUserToolTip.md)||  
|[CMFCPropertyGridCtrl::IsDescriptionArea](../Topic/CMFCPropertyGridCtrl::IsDescriptionArea.md)|Indica se l'area di descrizione del controllo griglia della proprietà di.|  
|[CMFCPropertyGridCtrl::IsGroupNameFullWidth](../Topic/CMFCPropertyGridCtrl::IsGroupNameFullWidth.md)|Indica se ogni nome di un gruppo di proprietà visualizzato tramite la larghezza del controllo griglia corrente della proprietà.|  
|[CMFCPropertyGridCtrl::IsHeaderCtrl](../Topic/CMFCPropertyGridCtrl::IsHeaderCtrl.md)|Indica se il controllo intestazione visualizzato.|  
|[CMFCPropertyGridCtrl::IsMarkModifiedProperties](../Topic/CMFCPropertyGridCtrl::IsMarkModifiedProperties.md)|Indica come il controllo griglia delle proprietà vengono visualizzate le proprietà modificate.|  
|[CMFCPropertyGridCtrl::IsShowDragContext](../Topic/CMFCPropertyGridCtrl::IsShowDragContext.md)|Indica se il framework ridisegna il nome e le colonne di valori di controllo grid corrente della proprietà quando l'utente ridimensiona le colonne.|  
|[CMFCPropertyGridCtrl::IsVSDotNetLook](../Topic/CMFCPropertyGridCtrl::IsVSDotNetLook.md)|Indica se l'aspetto del controllo griglia delle proprietà dello stile è utilizzato da FAR il .NET.|  
|[CMFCPropertyGridCtrl::MarkModifiedProperties](../Topic/CMFCPropertyGridCtrl::MarkModifiedProperties.md)|Specifica come visualizzare le proprietà modificate.|  
|`CMFCPropertyGridCtrl::PreTranslateMessage`|Utilizzato da [CWinApp](../../mfc/reference/cwinapp-class.md) classe per convertire i messaggi della finestra prima che vengano inviati alle funzioni Windows [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) e [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955).  \(Override [CWnd::PreTranslateMessage](../Topic/CWnd::PreTranslateMessage.md)\).|  
|[CMFCPropertyGridCtrl::RemoveAll](../Topic/CMFCPropertyGridCtrl::RemoveAll.md)|Rimuove tutti gli oggetti della proprietà da un controllo griglia delle proprietà.|  
|[CMFCPropertyGridCtrl::ResetOriginalValues](../Topic/CMFCPropertyGridCtrl::ResetOriginalValues.md)|È possibile ripristinare il valore originale di tutte le proprietà.|  
|[CMFCPropertyGridCtrl::SetAlphabeticMode](../Topic/CMFCPropertyGridCtrl::SetAlphabeticMode.md)|Imposta la modalità o alfabetico di reimpostato.|  
|[CMFCPropertyGridCtrl::SetBoolLabels](../Topic/CMFCPropertyGridCtrl::SetBoolLabels.md)|Specifica il testo delle etichette booleane.|  
|[CMFCPropertyGridCtrl::SetCurSel](../Topic/CMFCPropertyGridCtrl::SetCurSel.md)|Selezionare una proprietà in un controllo griglia delle proprietà.|  
|[CMFCPropertyGridCtrl::SetCustomColors](../Topic/CMFCPropertyGridCtrl::SetCustomColors.md)|Specifica i colori personalizzati per diversi elementi di controllo griglia delle proprietà.|  
|[CMFCPropertyGridCtrl::SetDescriptionRows](../Topic/CMFCPropertyGridCtrl::SetDescriptionRows.md)|Specifica il numero di righe da visualizzare nella sezione descrizione del controllo griglia corrente della proprietà.|  
|[CMFCPropertyGridCtrl::SetGroupNameFullWidth](../Topic/CMFCPropertyGridCtrl::SetGroupNameFullWidth.md)|Specifica se visualizzare la larghezza intera il nome della categoria per un gruppo di proprietà nel controllo griglia corrente della proprietà.|  
|[CMFCPropertyGridCtrl::SetListDelimiter](../Topic/CMFCPropertyGridCtrl::SetListDelimiter.md)|Definisce un carattere che verrà utilizzato come delimitatore in un elenco di valori di proprietà.|  
|[CMFCPropertyGridCtrl::SetShowDragContext](../Topic/CMFCPropertyGridCtrl::SetShowDragContext.md)|Specifica se il framework ridisegna il nome e le colonne di valori di controllo grid corrente della proprietà quando l'utente ridimensiona le colonne.|  
|[CMFCPropertyGridCtrl::SetVSDotNetLook](../Topic/CMFCPropertyGridCtrl::SetVSDotNetLook.md)|Imposta l'aspetto del controllo griglia della proprietà sullo stile è utilizzato in VS il .NET.|  
|[CMFCPropertyGridCtrl::UpdateColor](../Topic/CMFCPropertyGridCtrl::UpdateColor.md)|Imposta il valore del colore della proprietà color attualmente selezionata.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCPropertyGridCtrl::AdjustLayout](../Topic/CMFCPropertyGridCtrl::AdjustLayout.md)|Ridisegna il controllo griglia delle proprietà e le relative proprietà.|  
|[CMFCPropertyGridCtrl::CompareProps](../Topic/CMFCPropertyGridCtrl::CompareProps.md)|Chiamato dal controllo griglia delle proprietà per ordinare le proprietà.|  
|[CMFCPropertyGridCtrl::EditItem](../Topic/CMFCPropertyGridCtrl::EditItem.md)|Chiamato dal framework quando l'utente inizia per modificare una proprietà.|  
|[CMFCPropertyGridCtrl::EndEditItem](../Topic/CMFCPropertyGridCtrl::EndEditItem.md)|Chiamato dal framework quando l'utente smette di modificare una proprietà.|  
|[CMFCPropertyGridCtrl::Init](../Topic/CMFCPropertyGridCtrl::Init.md)|Chiamato dal framework per inizializzare un controllo griglia delle proprietà.|  
|[CMFCPropertyGridCtrl::OnChangeSelection](../Topic/CMFCPropertyGridCtrl::OnChangeSelection.md)|Chiamato dal framework quando la selezione corrente viene modificata.|  
|[CMFCPropertyGridCtrl::OnClickButton](../Topic/CMFCPropertyGridCtrl::OnClickButton.md)|Chiamato dal framework quando un pulsante della proprietà è fatto clic.|  
|[CMFCPropertyGridCtrl::OnDrawBorder](../Topic/CMFCPropertyGridCtrl::OnDrawBorder.md)|Chiamato dal framework per creare un bordo intorno al controllo griglia delle proprietà.|  
|[CMFCPropertyGridCtrl::OnDrawDescription](../Topic/CMFCPropertyGridCtrl::OnDrawDescription.md)|Chiamato dal framework per disegnare l'area di descrizione e visualizzare il testo di descrizione.|  
|[CMFCPropertyGridCtrl::OnDrawList](../Topic/CMFCPropertyGridCtrl::OnDrawList.md)|Chiamato dal framework per visualizzare l'elenco delle proprietà nel controllo griglia delle proprietà.|  
|[CMFCPropertyGridCtrl::OnDrawProperty](../Topic/CMFCPropertyGridCtrl::OnDrawProperty.md)|Chiamato dal framework per visualizzare una proprietà.|  
|[CMFCPropertyGridCtrl::OnPropertyChanged](../Topic/CMFCPropertyGridCtrl::OnPropertyChanged.md)|Chiamato dal framework quando il valore di una proprietà viene modificato.|  
|[CMFCPropertyGridCtrl::OnSelectCombo](../Topic/CMFCPropertyGridCtrl::OnSelectCombo.md)|Chiamato dal framework quando una proprietà contenente un controllo casella combinata viene selezionata.|  
|[CMFCPropertyGridCtrl::ValidateItemData](../Topic/CMFCPropertyGridCtrl::ValidateItemData.md)|Chiamato dal framework per convalidare i dati della proprietà.|  
  
## Note  
 Le visualizzazioni di classe `CMFCPropertyGridCtrl` un controllo griglia delle proprietà che contiene le proprietà modificabili derivate dalla classe [CMFCPropertyGridProperty](../../mfc/reference/cmfcpropertygridproperty-class.md).  Ogni proprietà può rappresentare un tipo e può contenere elementi secondari.  Il controllo griglia della proprietà supporta un'area ridimensionabile alla fine che può visualizzare la descrizione di una proprietà selezionata.  
  
 Per utilizzare un controllo griglia delle proprietà, costruire un oggetto `CMFCPropertyGridCtrl` quindi chiamare il metodo [CMFCPropertyGridCtrl::Create](../Topic/CMFCPropertyGridCtrl::Create.md).  Utilizzare il metodo [CMFCPropertyGridCtrl::AddProperty](../Topic/CMFCPropertyGridCtrl::AddProperty.md) per aggiungere proprietà all'elenco.  
  
## Proprietà di selezione  
 Anziché la rappresentazione del valore, un elemento proprietà può avviare una finestra di dialogo che consente all'utente di selezionare un colore, un file, oppure un tipo di carattere.  
  
 Nella tabella seguente sono elencati i quattro tipi di proprietà di selezione:  
  
|Classe|Descrizione|  
|------------|-----------------|  
|[CMFCPropertyGridProperty Class](../../mfc/reference/cmfcpropertygridproperty-class.md)|Una proprietà di utilizzo generale che viene utilizzata per specificare il valore di stringhe, valori booleani, date e così via.|  
|[CMFCPropertyGridColorProperty Class](../../mfc/reference/cmfcpropertygridcolorproperty-class.md)|Una proprietà utilizzata per selezionare un valore di colore.|  
|[CMFCPropertyGridFileProperty Class](../../mfc/reference/cmfcpropertygridfileproperty-class.md)|Una proprietà utilizzata per selezionare un file.|  
|[CMFCPropertyGridFontProperty Class](../../mfc/reference/cmfcpropertygridfontproperty-class.md)|Una proprietà utilizzata per selezionare un tipo di carattere.|  
  
## Illustrazioni  
 Le seguenti illustrazioni rappresenta un controllo griglia delle proprietà tale proprietà presenti in due modi.  La prima figura visualizzazione gerarchica in ordine alfabetico le proprietà e nel secondo proprietà delle visualizzazioni.  
  
 ![Elenco di proprietà PropertySheet](../../mfc/reference/media/proplist.png "PropList")  
  
## Esempio  
 Nell'esempio seguente viene illustrato come configurare un oggetto controllo griglia delle proprietà utilizzando i diversi metodi nella classe `CMFCPropertyGridCtrl`.  Nell'esempio viene illustrato come abilitare il controllo intestazione, consente all'area di descrizione e imposta l'aspetto del controllo griglia delle proprietà.  Nell'esempio viene inoltre illustrato come impostare la modalità alfabetico per il controllo a cui il controllo ordina tutte le proprietà che contiene il relativo nome proprietà e come impostare colori personalizzati per diversi elementi del controllo griglia delle proprietà.  Questo esempio fa parte [Nuovo esempio di controlli](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls#14](../../mfc/reference/codesnippet/CPP/cmfcpropertygridctrl-class_1.h)]  
[!code-cpp[NVC_MFC_NewControls#16](../../mfc/reference/codesnippet/CPP/cmfcpropertygridctrl-class_2.cpp)]  
[!code-cpp[NVC_MFC_NewControls#20](../../mfc/reference/codesnippet/CPP/cmfcpropertygridctrl-class_3.cpp)]  
[!code-cpp[NVC_MFC_NewControls#21](../../mfc/reference/codesnippet/CPP/cmfcpropertygridctrl-class_4.cpp)]  
[!code-cpp[NVC_MFC_NewControls#24](../../mfc/reference/codesnippet/CPP/cmfcpropertygridctrl-class_5.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CMFCPropertyGridCtrl](../../mfc/reference/cmfcpropertygridctrl-class.md)  
  
## Requisiti  
 **intestazione:** afxpropertygridctrl.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)