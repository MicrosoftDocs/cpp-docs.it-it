---
title: Classe CMFCToolBarComboBoxButton | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMFCToolBarComboBoxButton
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::CMFCToolBarComboBoxButton
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::AddItem
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::AddSortedItem
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::Compare
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::CreateEdit
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::DeleteItem
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::FindItem
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::GetByCmd
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::GetComboBox
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::GetCount
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::GetCountAll
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::GetCurSel
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::GetCurSelAll
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::GetEditCtrl
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::GetItem
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::GetItemAll
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::GetItemData
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::GetItemDataAll
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::GetItemDataPtrAll
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::GetText
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::GetTextAll
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::IsCenterVert
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::IsFlatMode
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::RemoveAllItems
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::SelectItem
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::SelectItemAll
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::SetCenterVert
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::SetDropDownHeight
- AFXTOOLBARCOMBOBOXBUTTON/CMFCToolBarComboBoxButton::SetFlatMode
dev_langs:
- C++
helpviewer_keywords:
- CMFCToolBarComboBoxButton [MFC], CMFCToolBarComboBoxButton
- CMFCToolBarComboBoxButton [MFC], AddItem
- CMFCToolBarComboBoxButton [MFC], AddSortedItem
- CMFCToolBarComboBoxButton [MFC], Compare
- CMFCToolBarComboBoxButton [MFC], CreateEdit
- CMFCToolBarComboBoxButton [MFC], DeleteItem
- CMFCToolBarComboBoxButton [MFC], FindItem
- CMFCToolBarComboBoxButton [MFC], GetByCmd
- CMFCToolBarComboBoxButton [MFC], GetComboBox
- CMFCToolBarComboBoxButton [MFC], GetCount
- CMFCToolBarComboBoxButton [MFC], GetCountAll
- CMFCToolBarComboBoxButton [MFC], GetCurSel
- CMFCToolBarComboBoxButton [MFC], GetCurSelAll
- CMFCToolBarComboBoxButton [MFC], GetEditCtrl
- CMFCToolBarComboBoxButton [MFC], GetItem
- CMFCToolBarComboBoxButton [MFC], GetItemAll
- CMFCToolBarComboBoxButton [MFC], GetItemData
- CMFCToolBarComboBoxButton [MFC], GetItemDataAll
- CMFCToolBarComboBoxButton [MFC], GetItemDataPtrAll
- CMFCToolBarComboBoxButton [MFC], GetText
- CMFCToolBarComboBoxButton [MFC], GetTextAll
- CMFCToolBarComboBoxButton [MFC], IsCenterVert
- CMFCToolBarComboBoxButton [MFC], IsFlatMode
- CMFCToolBarComboBoxButton [MFC], RemoveAllItems
- CMFCToolBarComboBoxButton [MFC], SelectItem
- CMFCToolBarComboBoxButton [MFC], SelectItemAll
- CMFCToolBarComboBoxButton [MFC], SetCenterVert
- CMFCToolBarComboBoxButton [MFC], SetDropDownHeight
- CMFCToolBarComboBoxButton [MFC], SetFlatMode
ms.assetid: 32fa39f7-8e4e-4f0a-a31d-7b540d969a6c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ffb17f8f38e83399ec32b792338f818cc06215dc
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45703781"
---
# <a name="cmfctoolbarcomboboxbutton-class"></a>Classe CMFCToolBarComboBoxButton
Un pulsante della barra degli strumenti contenente un controllo casella combinata ( [classe CComboBox](../../mfc/reference/ccombobox-class.md)).  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCToolBarComboBoxButton : public CMFCToolBarButton  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarComboBoxButton::CMFCToolBarComboBoxButton](#cmfctoolbarcomboboxbutton)|Costruisce un oggetto `CMFCToolBarComboBoxButton`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarComboBoxButton::AddItem](#additem)|Aggiunge un elemento alla fine dell'elenco della casella combinata.|  
|[CMFCToolBarComboBoxButton::AddSortedItem](#addsorteditem)|Aggiunge un elemento all'elenco della casella combinata. Viene specificato l'ordine degli elementi nell'elenco da `Compare`.|  
|[CMFCToolBarComboBoxButton::Compare](#compare)|Confronta due elementi. Chiamato per ordinare gli elementi che `AddSortedItems` aggiunge all'elenco della casella combinata.|  
|[CMFCToolBarComboBoxButton::CreateEdit](#createedit)|Crea un nuovo controllo di modifica per il pulsante della casella combinata.|  
|[CMFCToolBarComboBoxButton::DeleteItem](#deleteitem)|Elimina un elemento dall'elenco della casella combinata.|  
|[CMFCToolBarComboBoxButton::FindItem](#finditem)|Restituisce l'indice dell'elemento che contiene una stringa specificata.|  
|[CMFCToolBarComboBoxButton::GetByCmd](#getbycmd)|Restituisce un puntatore al pulsante della casella combinata con un ID di comando specificato.|  
|[CMFCToolBarComboBoxButton::GetComboBox](#getcombobox)|Restituisce un puntatore per il controllo casella combinata che viene incorporato nel pulsante della casella combinata.|  
|[CMFCToolBarComboBoxButton::GetCount](#getcount)|Restituisce il numero di elementi nella casella combinata finestra elenco.|  
|[CMFCToolBarComboBoxButton::GetCountAll](#getcountall)|Consente di trovare la combinazione di pulsante della finestra che ha un ID di comando specificato. Restituisce il numero di elementi nella casella combinata finestra elenco di tale pulsante.|  
|[CMFCToolBarComboBoxButton::GetCurSel](#getcursel)|Restituisce l'indice dell'elemento selezionato nella casella combinata finestra elenco.|  
|[CMFCToolBarComboBoxButton::GetCurSelAll](#getcurselall)|Consente di trovare la combinazione di pulsante della finestra che ha un ID di comando specificato e restituisce l'indice dell'elemento selezionato nella casella combinata elenco della casella di tale pulsante.|  
|[CMFCToolBarComboBoxButton::GetEditCtrl](#geteditctrl)|Restituisce un puntatore al controllo di modifica che viene incorporato nel pulsante della casella combinata.|  
|[CMFCToolBarComboBoxButton::GetItem](#getitem)|Restituisce la stringa associata a un indice specificato nella casella combinata elenco della casella.|  
|[CMFCToolBarComboBoxButton::GetItemAll](#getitemall)|Consente di trovare la combinazione di pulsante della finestra che ha un ID di comando specificato e restituisce la stringa associata a un indice nell'elenco della casella combinata di tale pulsante.|  
|[CMFCToolBarComboBoxButton::GetItemData](#getitemdata)|Restituisce il valore a 32 bit associato a un indice specificato nella casella combinata elenco della casella.|  
|[CMFCToolBarComboBoxButton::GetItemDataAll](#getitemdataall)|Consente di trovare la combinazione di pulsante della finestra che ha un ID di comando specificato e restituisce il valore a 32 bit associato a un indice nell'elenco della casella combinata di tale pulsante.|  
|[CMFCToolBarComboBoxButton::GetItemDataPtrAll](#getitemdataptrall)|Consente di trovare la combinazione di pulsante della finestra che ha un ID di comando specificato. Recupera il valore a 32 bit che è associato un indice nell'elenco della casella combinata di tale pulsante e restituisce 32 bit di valore come indicatore di misura.|  
|[CMFCToolBarComboBoxButton::GetText](#gettext)|Restituisce il testo dal controllo di modifica della casella combinata.|  
|[CMFCToolBarComboBoxButton::GetTextAll](#gettextall)|Consente di trovare la combinazione di pulsante della finestra che ha un ID di comando specificato e restituisce il testo dal controllo di modifica di tale pulsante.|  
|[CMFCToolBarComboBoxButton::IsCenterVert](#iscentervert)|Determina se i pulsanti della casella combinata nell'applicazione sono centrati o allineati alla parte superiore della barra degli strumenti.|  
|[CMFCToolBarComboBoxButton::IsFlatMode](#isflatmode)|Determina se i pulsanti della casella combinata nell'applicazione hanno un aspetto bidimensionale.|  
|[CMFCToolBarComboBoxButton::RemoveAllItems](#removeallitems)|Rimuove tutti gli elementi dall'elenco casella e controllo della casella combinata di modifica.|  
|[CMFCToolBarComboBoxButton::SelectItem](#selectitem)|Seleziona un elemento nella casella combinata in base al relativo indice, un valore a 32 bit o una stringa e informa il controllo casella combinata relative alla selezione.|  
|[CMFCToolBarComboBoxButton::SelectItemAll](#selectitemall)|Consente di trovare la combinazione di pulsante della finestra che ha un ID di comando specificato. Le chiamate `SelectItem` per selezionare un elemento nella casella combinata del pulsante in base al relativo valore stringa, indice o a 32 bit.|  
|[CMFCToolBarComboBoxButton::SetCenterVert](#setcentervert)|Specifica se i pulsanti della casella combinata nell'applicazione sono centrati verticalmente o allineati alla parte superiore della barra degli strumenti.|  
|[CMFCToolBarComboBoxButton::SetDropDownHeight](#setdropdownheight)|Imposta l'altezza della casella di riepilogo a discesa.|  
|[CMFCToolBarComboBoxButton::SetFlatMode](#setflatmode)|Specifica se i pulsanti della casella combinata nell'applicazione hanno un aspetto bidimensionale.|  
  
## <a name="remarks"></a>Note  
 Per aggiungere un pulsante della casella combinata a una barra degli strumenti, seguire questa procedura:  
  
 1. Riservare un ID di risorsa fittizio per il pulsante nella risorsa della barra degli strumenti padre.  
  
 2. Costruire un `CMFCToolBarComboBoxButton` oggetto.  
  
 3. Nel gestore di messaggi che elabora il messaggio AFX_WM_RESETTOOLBAR, sostituire il pulsante fittizio con il nuovo pulsante della casella combinata utilizzando [CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton).  
  
 Per altre informazioni, vedere [procedura dettagliata: inserimento di controlli in barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md). Per un esempio di un pulsante della barra degli strumenti della casella combinata, vedere il progetto di esempio VisualStudioDemo.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i vari metodi nel `CMFCToolBarComboBoxButton` classe. Nell'esempio viene illustrato come attivare le caselle di modifica e combinata, impostare la posizione verticale della casella combinata i pulsanti della casella nell'applicazione, impostare l'altezza della casella di riepilogo quando viene eliminato verso il basso, impostare l'aspetto bidimensionale dei pulsanti della casella combinata nell'applicazione e impostare il testo nella casella di modifica della casella combinata pulsante della finestra. Questo frammento di codice fa parte di [esempio dimostrativo di Visual Studio](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#36](../../mfc/codesnippet/cpp/cmfctoolbarcomboboxbutton-class_1.cpp)]  
[!code-cpp[NVC_MFC_VisualStudioDemo#37](../../mfc/codesnippet/cpp/cmfctoolbarcomboboxbutton-class_2.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)  
  
 [CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxtoolbarcomboboxbutton.h  
  
##  <a name="additem"></a>  CMFCToolBarComboBoxButton::AddItem  
 Aggiunge un elemento univoco nella casella di riepilogo.  
  
```  
virtual INT_PTR AddItem(
    LPCTSTR lpszItem,  
    DWORD_PTR dwData=0);
```  
  
### <a name="parameters"></a>Parametri  
*lpszItem*<br/>
[in] Testo dell'elemento da aggiungere alla casella di riepilogo.  
  
*dwData*<br/>
[in] I dati associati con l'elemento da aggiungere alla casella di riepilogo.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice dell'ultimo elemento nella casella di riepilogo.  
  
### <a name="remarks"></a>Note  
 Non utilizzare questo metodo quando viene applicato lo stile di finestra elenco.  
  
 Se il testo dell'elemento è già nella casella di riepilogo, i nuovi dati vengono archiviati con l'elemento esistente. La ricerca per l'elemento viene fatta distinzione tra maiuscole e minuscole.  
  
##  <a name="addsorteditem"></a>  CMFCToolBarComboBoxButton::AddSortedItem  
 Aggiunge un elemento alla casella di riepilogo nell'ordine in cui è definito per il [confrontare](#compare) (metodo).  
  
```  
virtual INT_PTR AddSortedItem(
    LPCTSTR lpszItem,  
    DWORD_PTR dwData=0);
```  
  
### <a name="parameters"></a>Parametri  
*lpszItem*<br/>
[in] Testo dell'elemento da aggiungere alla casella di riepilogo.  
  
*dwData*<br/>
[in] I dati associati con l'elemento da aggiungere alla casella di riepilogo.  
  
### <a name="return-value"></a>Valore restituito  
 Indice dell'elemento che è stato aggiunto alla casella di riepilogo.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per aggiungere elementi alla casella di riepilogo in un ordine specifico.  
  
##  <a name="canbestretched"></a>  CMFCToolBarComboBoxButton::CanBeStretched  
 Indica se è possono modificare le dimensioni di pulsante casella combinata.  
  
```  
virtual BOOL CanBeStretched() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE.  
  
##  <a name="cmfctoolbarcomboboxbutton"></a>  CMFCToolBarComboBoxButton::CMFCToolBarComboBoxButton  
 Costruisce un [CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md) oggetto.  
  
```  
CMFCToolBarComboBoxButton(
    UINT uiID,  
    int iImage,  
    DWORD dwStyle=CBS_DROPDOWNLIST,  
    int iWidth=0);
```  
  
### <a name="parameters"></a>Parametri  
*uiID*<br/>
[in] ID comando del pulsante nuovo.  
  
*iImage*<br/>
[in] L'indice dell'immagine dell'immagine associata al pulsante nuovo.  
  
*dwStyle*<br/>
[in] Lo stile del pulsante nuovo.  
  
*iWidth*<br/>
[in] La larghezza in pixel, del nuovo pulsante.  
  
### <a name="remarks"></a>Note  
 La larghezza predefinita è 150 pixel.  
  
 Per un elenco degli stili dei pulsanti della barra degli strumenti vedere [stili dei controlli ToolBar](../../mfc/reference/toolbar-control-styles.md)  
  
##  <a name="cleardata"></a>  CMFCToolBarComboBoxButton::ClearData  
 Elimina i dati definiti dall'utente.  
  
```  
virtual void ClearData();
```  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita questo metodo non esegue alcuna operazione. Eseguire l'override di questo metodo in una classe derivata se si desidera eliminare tutti i dati definiti dall'utente.  
  
##  <a name="compare"></a>  CMFCToolBarComboBoxButton::Compare  
 Confronta due stringhe.  
  
```  
virtual int Compare(
    LPCTSTR lpszItem1,  
    LPCTSTR lpszItem2);
```  
  
### <a name="parameters"></a>Parametri  
*lpszItem1*<br/>
[in] La prima stringa da confrontare.  
  
*lpszItem2*<br/>
[in] La seconda stringa da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che indica la relazione tra maiuscole e minuscole lessicografico tra stringhe. Nella tabella seguente sono elencati i valori possibili:  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|\<0|La prima stringa è minore del secondo.|  
|0|La prima stringa è uguale a secondo.|  
|>0|La prima stringa è maggiore del secondo.|  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo per modificare l'ordinamento degli elementi nella casella di riepilogo.  
  
 Il confronto è tra maiuscole e minuscole.  
  
 Questo metodo viene chiamato solo dal [AddSortedItem](#addsorteditem) (metodo).  
  
##  <a name="copyfrom"></a>  CMFCToolBarComboBoxButton::CopyFrom  
 Copia lo stato dell'oggetto specificato `CMFCToolBarComboBoxButton` all'oggetto corrente.  
  
```  
virtual void CopyFrom(const CMFCToolBarButton& src);
```  
  
### <a name="parameters"></a>Parametri  
*src*<br/>
[in] L'origine `CMFCToolBarComboBoxButton` oggetto.  
  
##  <a name="createcombo"></a>  CMFCToolBarComboBoxButton::CreateCombo  
 Crea una nuova casella combinata per il pulsante della casella combinata.  
  
```  
virtual CComboBox* CreateCombo(
    CWnd* pWndParent,  
    const CRect& rect);
```  
  
### <a name="parameters"></a>Parametri  
*pWndParent*<br/>
[in] Puntatore alla finestra padre del pulsante.  
  
*Rect*<br/>
[in] Rettangolo di delimitazione della casella combinata.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore alla nuova casella combinata se il metodo ha esito positivo; in caso contrario, NULL.  
  
##  <a name="createedit"></a>  CMFCToolBarComboBoxButton::CreateEdit  
 Crea una nuova casella di modifica per il pulsante della casella combinata.  
  
```  
virtual CMFCToolBarComboBoxEdit* CreateEdit(
    CWnd* pWndParent,  
    const CRect& rect,  
    DWORD dwEditStyle);
```  
  
### <a name="parameters"></a>Parametri  
*pWndParent*<br/>
[in] Puntatore alla finestra padre del pulsante.  
  
*Rect*<br/>
[in] Rettangolo di delimitazione della nuova casella di modifica.  
  
*dwEditStyle*<br/>
[in] Stile del controllo della nuova casella di modifica.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore alla nuova casella di modifica se il metodo ha esito positivo; in caso contrario, NULL.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questo metodo quando si crea una nuova casella di modifica per un pulsante della casella combinata. Eseguire l'override di questo metodo per modificare la modalità [CMFCToolBarComboBoxEdit](../../mfc/reference/cmfctoolbarcomboboxedit-class.md) viene creato.  
  
##  <a name="deleteitem"></a>  CMFCToolBarComboBoxButton::DeleteItem  
 Elimina un elemento specificato nella casella di riepilogo.  
  
```  
BOOL DeleteItem(int iIndex);  
BOOL DeleteItem(DWORD_PTR dwData);  
  BOOL DeleteItem(LPCTSTR lpszText);
```  
  
### <a name="parameters"></a>Parametri  
*iIndex*<br/>
[in] Indice a base zero dell'elemento da eliminare.  
  
*dwData*<br/>
[in] I dati associati all'elemento da eliminare.  
  
*lpszText*<br/>
[in] Il testo dell'elemento da eliminare. Se sono presenti più elementi con lo stesso testo, il primo elemento viene eliminato.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se l'elemento è stato disponibile ed è stata eliminata; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
  
##  <a name="duplicatedata"></a>  CMFCToolBarComboBoxButton::DuplicateData  
 Dati definiti dall'utente duplicati.  
  
```  
virtual void DuplicateData();
```  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita questo metodo non esegue alcuna operazione. Eseguire l'override di questo metodo in una classe derivata se si desidera copiare i dati definiti dall'utente.  
  
##  <a name="enablewindow"></a>  CMFCToolBarComboBoxButton::EnableWindow  
 Abilita o disabilita le caselle di modifica e casella combinata.  
  
```  
virtual void EnableWindow(BOOL bEnable = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
*bAttivare il*<br/>
[in] TRUE per abilitare le caselle di modifica e casella combinata. FALSE per disabilitare le caselle di modifica e casella combinata.  
  
### <a name="remarks"></a>Note  
 Quando disabilitata, i controlli non sono diventato attivi e non possono accettare l'input dell'utente.  
  
##  <a name="exporttomenubutton"></a>  CMFCToolBarComboBoxButton::ExportToMenuButton  
 Copia una stringa dalla tabella di stringhe dell'applicazione al menu specificato utilizzando il comando di pulsante casella combinata ID.  
  
```  
virtual BOOL ExportToMenuButton(CMFCToolBarMenuButton& menuButton) const;  
```  
  
### <a name="parameters"></a>Parametri  
*MenuButton*<br/>
[out] Riferimento a un pulsante di menu.  
  
### <a name="return-value"></a>Valore restituito  
 Sempre TRUE.  
  
##  <a name="finditem"></a>  CMFCToolBarComboBoxButton::FindItem  
 Restituisce l'indice del primo elemento nella casella di riepilogo che contiene una stringa specificata.  
  
```  
int FindItem(LPCTSTR lpszText) const;  
```  
  
### <a name="parameters"></a>Parametri  
*lpszText*<br/>
[in] Il testo da cercare nella casella di riepilogo.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice dell'elemento; o CB_ERR se l'elemento non viene trovato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getbycmd"></a>  CMFCToolBarComboBoxButton::GetByCmd  
 Ottiene un puntatore al pulsante casella combinata con un ID di comando specificato.  
  
```  
static CMFCToolBarComboBoxButton* GetByCmd(
    UINT uiCmd,  
    BOOL bIsFocus=FALSE);
```  
  
### <a name="parameters"></a>Parametri  
*uiCmd*<br/>
[in] L'ID di comando di un pulsante della casella combinata.  
  
*bIsFocus*<br/>
[in] True per cercare solo incentrata sui pulsanti. FALSE per tutti i pulsanti di ricerca.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un pulsante della casella combinata; o NULL se il pulsante non viene trovato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getcombobox"></a>  CMFCToolBarComboBoxButton::GetComboBox  
 Restituisce un puntatore alla casella combinata nella casella combinata pulsante della finestra.  
  
```  
CComboBox* GetComboBox() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il [CComboBox (classe)](../../mfc/reference/ccombobox-class.md) dell'oggetto se il metodo ha avuto esito positivo; in caso contrario, NULL.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getcontextmenuid"></a>  CMFCToolBarComboBoxButton::GetContextMenuID  
 Ottiene l'ID di risorsa di menu di scelta rapida per il pulsante della casella combinata.  
  
```  
UINT GetContextMenuID();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'ID di risorsa dal menu di scelta rapida.  
  
##  <a name="getcount"></a>  CMFCToolBarComboBoxButton::GetCount  
 Restituisce il numero di elementi nella casella di riepilogo.  
  
```  
INT_PTR GetCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di elementi nella casella di riepilogo.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getcountall"></a>  CMFCToolBarComboBoxButton::GetCountAll  
 Ottiene il numero di elementi nella casella di riepilogo di un pulsante della casella combinata con un ID di comando specificato.  
  
```  
static int GetCountAll(UINT uiCmd);
```  
  
### <a name="parameters"></a>Parametri  
*uiCmd*<br/>
[in] L'ID di comando di un pulsante della casella combinata.  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di elementi nella casella di riepilogo. in caso contrario, CB_ERR se la casella combinata finestra pulsante non è stato trovato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getcursel"></a>  CMFCToolBarComboBoxButton::GetCurSel  
 Ottiene l'indice dell'elemento attualmente selezionato nella casella di riepilogo.  
  
```  
int GetCurSel() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'indice dell'elemento attualmente selezionato nella casella di riepilogo. o CB_ERR se è selezionato alcun elemento.  
  
### <a name="remarks"></a>Note  
 L'indice di casella di elenco è in base zero.  
  
##  <a name="getcurselall"></a>  CMFCToolBarComboBoxButton::GetCurSelAll  
 Restituisce l'indice dell'elemento attualmente selezionato nella casella di riepilogo di una casella combinata pulsante della finestra che ha un ID di comando specificato.  
  
```  
static int GetCurSelAll(UINT uiCmd);
```  
  
### <a name="parameters"></a>Parametri  
*uiCmd*<br/>
[in] L'ID di comando di un pulsante della casella combinata.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice dell'elemento attualmente selezionato nella casella di riepilogo. in caso contrario, non viene trovato CB_ERR se è selezionato alcun elemento o un pulsante della casella combinata.  
  
### <a name="remarks"></a>Note  
 L'indice di casella di elenco è in base zero.  
  
##  <a name="geteditctrl"></a>  CMFCToolBarComboBoxButton::GetEditCtrl  
 Restituisce un puntatore alla casella di modifica nella casella combinata pulsante della finestra.  
  
```  
virtual CEdit* GetEditCtrl();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore alla casella di modifica se il metodo ha esito positivo; in caso contrario, NULL.  
  
### <a name="remarks"></a>Note  
  
##  <a name="gethwnd"></a>  CMFCToolBarComboBoxButton::GetHwnd  
 Restituisce l'handle di finestra per la casella combinata.  
  
```  
virtual HWND GetHwnd();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'handle di finestra, o NULL se la casella combinata non è associata a un oggetto finestra.  
  
##  <a name="getitem"></a>  CMFCToolBarComboBoxButton::GetItem  
 Restituisce la stringa associata a un elemento in corrispondenza dell'indice specificato nella casella di riepilogo.  
  
```  
LPCTSTR GetItem(int iIndex=-1) const;  
```  
  
### <a name="parameters"></a>Parametri  
*iIndex*<br/>
[in] Indice in base zero di un elemento nella casella di riepilogo.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a una stringa che viene associato all'articolo; in caso contrario, NULL se il parametro di indice non è valido o se il parametro di indice è -1 ed è presente nessun elemento selezionato nella casella combinata.  
  
### <a name="remarks"></a>Note  
 Un parametro di indice pari a -1 restituisce la stringa dell'elemento attualmente selezionato.  
  
##  <a name="getitemall"></a>  CMFCToolBarComboBoxButton::GetItemAll  
 Restituisce la stringa associata a un elemento in corrispondenza dell'indice specificato nella casella di riepilogo di un pulsante della casella combinata con un ID di comando specificato.  
  
```  
static LPCTSTR GetItemAll(
    UINT uiCmd,  
    int iIndex=-1);
```  
  
### <a name="parameters"></a>Parametri  
*uiCmd*<br/>
[in] L'ID di comando di un pulsante della casella combinata.  
  
*iIndex*<br/>
[in] Indice a base zero di un elemento nella casella di riepilogo.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore alla stringa dell'elemento se il metodo ha esito positivo; in caso contrario, NULL se l'indice non è valido, un pulsante della casella combinata non viene trovato, o se l'indice è -1 ed è presente nessun elemento selezionato nella casella combinata.  
  
### <a name="remarks"></a>Note  
 Un valore di indice pari a -1 restituisce la stringa dell'elemento attualmente selezionato.  
  
##  <a name="getitemdata"></a>  CMFCToolBarComboBoxButton::GetItemData  
 Restituisce i dati associati a un elemento in corrispondenza di un indice specifico nella casella di riepilogo.  
  
```  
DWORD_PTR GetItemData(int iIndex=-1) const;  
```  
  
### <a name="parameters"></a>Parametri  
*iIndex*<br/>
[in] Indice a base zero di un elemento nella casella di riepilogo.  
  
### <a name="return-value"></a>Valore restituito  
 I dati associati all'elemento; oppure 0 se l'elemento non esiste.  
  
### <a name="remarks"></a>Note  
 Un parametro di indice pari a -1 restituisce i dati associati all'elemento attualmente selezionato.  
  
##  <a name="getitemdataall"></a>  CMFCToolBarComboBoxButton::GetItemDataAll  
 Restituisce i dati associati a un elemento in corrispondenza di un indice specifico nella casella di riepilogo di un pulsante della casella combinata con un ID di comando specifico.  
  
```  
static DWORD_PTR GetItemDataAll(
    UINT uiCmd,  
    int iIndex=-1);
```  
  
### <a name="parameters"></a>Parametri  
*uiCmd*<br/>
[in] L'ID di comando di un pulsante della casella combinata.  
  
*iIndex*<br/>
[in] Indice a base zero di un elemento nella casella di riepilogo.  
  
### <a name="return-value"></a>Valore restituito  
 I dati associati all'elemento se il metodo ha esito positivo; in caso contrario, 0 se l'indice specificato non è valido o CB_ERR se la casella combinata finestra pulsante non viene trovato.  
  
### <a name="remarks"></a>Note  
 Un parametro di indice pari a -1 restituisce i dati associati all'elemento attualmente selezionato.  
  
##  <a name="getitemdataptrall"></a>  CMFCToolBarComboBoxButton::GetItemDataPtrAll  
 Restituisce i dati associati a un elemento in corrispondenza di un indice specifico nella casella di riepilogo di un pulsante della casella combinata con un ID di comando specifico. Questi dati vengono restituiti come indicatore di misura.  
  
```  
static void* GetItemDataPtrAll(
    UINT uiCmd,  
    int iIndex=-1);
```  
  
### <a name="parameters"></a>Parametri  
*uiCmd*<br/>
[in] ID comando del pulsante casella combinata.  
  
*iIndex*<br/>
[in] Indice a base zero di un elemento nella casella di riepilogo.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore associato all'elemento se il metodo ha esito positivo; in caso contrario,-1 se un errore si verifica, o NULL se la casella combinata finestra pulsante non viene trovato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getprompt"></a>  CMFCToolBarComboBoxButton::GetPrompt  
 Restituisce la stringa di messaggio di richiesta per la casella combinata pulsante della finestra.  
  
```  
virtual CString GetPrompt() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La stringa di messaggio di richiesta.  
  
### <a name="remarks"></a>Note  
 Questo metodo non è attualmente implementato.  
  
##  <a name="gettext"></a>  CMFCToolBarComboBoxButton::GetText  
 Ottiene il testo nella casella di modifica.  
  
```  
LPCTSTR GetText() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il testo nella casella di modifica.  
  
### <a name="remarks"></a>Note  
  
##  <a name="gettextall"></a>  CMFCToolBarComboBoxButton::GetTextAll  
 Ottiene il testo nella casella di modifica di un pulsante della casella combinata con un ID di comando specificato.  
  
```  
static LPCTSTR GetTextAll(UINT uiCmd);
```  
  
### <a name="parameters"></a>Parametri  
*uiCmd*<br/>
[in] L'ID di comando di un pulsante della casella combinata specifico.  
  
### <a name="return-value"></a>Valore restituito  
 Il testo nella casella di modifica se il metodo ha esito positivo; in caso contrario, NULL.  
  
### <a name="remarks"></a>Note  
  
##  <a name="hasfocus"></a>  CMFCToolBarComboBoxButton::HasFocus  
 Indica se la casella combinata ha attualmente lo stato attivo.  
  
```  
virtual BOOL HasFocus() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la casella combinata ha attualmente lo stato attivo; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Questo metodo restituisce inoltre TRUE se qualsiasi finestra figlio della casella combinata ha attualmente lo stato attivo.  
  
##  <a name="iscentervert"></a>  CMFCToolBarComboBoxButton::IsCenterVert  
 Restituisce la posizione verticale dei pulsanti della casella combinata nell'applicazione.  
  
```  
static BOOL IsCenterVert();
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se i pulsanti sono centrati; FALSO se i pulsanti sono allineati nella parte superiore.  
  
### <a name="remarks"></a>Note  
  
##  <a name="isflatmode"></a>  CMFCToolBarComboBoxButton::IsFlatMode  
 Restituisce l'aspetto bidimensionale dei pulsanti della casella combinata nell'applicazione.  
  
```  
static BOOL IsFlatMode();
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se i pulsanti hanno uno stile flat; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Lo stile flat predefinito per i pulsanti della casella combinata è FALSE.  
  
##  <a name="isownerof"></a>  CMFCToolBarComboBoxButton::IsOwnerOf  
 Indica se l'handle specificato è associato con il pulsante della casella combinata o uno dei relativi elementi figlio.  
  
```  
virtual BOOL IsOwnerOf(HWND hwnd);
```  
  
### <a name="parameters"></a>Parametri  
*HWND*<br/>
[in] Un handle di finestra.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se l'handle è associata con il pulsante della casella combinata o uno dei relativi figli; in caso contrario, FALSE.  
  
##  <a name="isribbonbutton"></a>  CMFCToolBarComboBoxButton::IsRibbonButton  
 Indica se il pulsante della casella combinata si trova in un pannello della barra multifunzione.  
  
```  
BOOL IsRibbonButton() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Sempre FALSE.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, questo metodo restituisce sempre FALSE, ovvero che il pulsante della casella combinata non viene mai visualizzato in un pannello della barra multifunzione.  
  
##  <a name="iswindowvisible"></a>  CMFCToolBarComboBoxButton::IsWindowVisible  
 Restituisce lo stato di visibilità della casella combinata pulsante della finestra.  
  
```  
virtual BOOL IsWindowVisible();
```  
  
### <a name="return-value"></a>Valore restituito  
 Lo stato di visibilità del pulsante casella combinata.  
  
##  <a name="notifycommand"></a>  CMFCToolBarComboBoxButton::NotifyCommand  
 Indica se il pulsante della casella combinata elabora il messaggio.  
  
```  
virtual BOOL NotifyCommand(int iNotifyCode);
```  
  
### <a name="parameters"></a>Parametri  
*iNotifyCode*<br/>
[in] Il messaggio di notifica associato con il comando.  
  
### <a name="return-value"></a>Valore restituito  
 Indica se il pulsante della casella combinata elabora il messaggio.  
  
##  <a name="onaddtocustomizepage"></a>  CMFCToolBarComboBoxButton::OnAddToCustomizePage  
 Chiamato dal framework quando viene aggiunto il pulsante per la **Personalizza** nella finestra di dialogo.  
  
```  
virtual void OnAddToCustomizePage();
```  
  
##  <a name="oncalculatesize"></a>  CMFCToolBarComboBoxButton::OnCalculateSize  
 Chiamato dal framework per calcolare le dimensioni del pulsante.  
  
```  
virtual SIZE OnCalculateSize(
    CDC* pDC,  
    const CSize& sizeDefault,  
    BOOL bHorz);
```  
  
### <a name="parameters"></a>Parametri  
*pDC*<br/>
[in] Il contesto di dispositivo che visualizza il pulsante della casella combinata.  
  
*sizeDefault*<br/>
[in] La dimensione predefinita del pulsante casella combinata.  
  
*bHorz*<br/>
[in] Lo stato di ancoraggio della barra degli strumenti padre. TRUE se la barra degli strumenti è ancorato in orizzontale e FALSE se la barra degli strumenti è ancorato in verticale.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `SIZE` struttura che contiene le dimensioni del pulsante casella combinata, in pixel.  
  
##  <a name="onchangeparentwnd"></a>  CMFCToolBarComboBoxButton::OnChangeParentWnd  
 Chiamato dal framework quando il pulsante della casella combinata viene inserito in una nuova barra degli strumenti.  
  
```  
virtual void OnChangeParentWnd(CWnd* pWndParent);
```  
  
### <a name="parameters"></a>Parametri  
*pWndParent*<br/>
[in] Puntatore alla nuova barra degli strumenti padre.  
  
##  <a name="onclick"></a>  CMFCToolBarComboBoxButton::OnClick  
 Chiamato dal framework quando l'utente sceglie il pulsante della casella combinata.  
  
```  
virtual BOOL OnClick(
    CWnd* pWnd,  
    BOOL bDelay = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
*pWnd*<br/>
[in] Puntatore alla finestra padre del pulsante casella combinata.  
  
*bDelay*<br/>
[in] Riservato per uso in una classe derivata.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il metodo gestisce l'evento; in caso contrario, FALSE.  
  
##  <a name="onctlcolor"></a>  CMFCToolBarComboBoxButton::OnCtlColor  
 Chiamato dal framework quando l'utente modifica il colore della barra degli strumenti padre impostare colore del pulsante casella combinata.  
  
```  
virtual HBRUSH OnCtlColor(
    CDC* pDC,  
    UINT nCtlColor);
```  
  
### <a name="parameters"></a>Parametri  
*pDC*<br/>
[in] Il contesto di dispositivo che visualizza il pulsante della casella combinata.  
  
*nCtlColor*<br/>
[in] Non usato.  
  
### <a name="return-value"></a>Valore restituito  
 Handle per il pennello utilizzato per disegnare lo sfondo del pulsante casella combinata framework.  
  
### <a name="remarks"></a>Note  
 Questo metodo imposta anche il colore del testo pulsante casella combinata.  
  
##  <a name="ondraw"></a>  CMFCToolBarComboBoxButton::OnDraw  
 Chiamato dal framework per disegnare il pulsante della casella combinata utilizzando gli stili specificati e le opzioni.  
  
```  
virtual void OnDraw(
    CDC* pDC,  
    const CRect& rect,  
    CMFCToolBarImages* pImages,  
    BOOL bHorz = TRUE,  
    BOOL bCustomizeMode = FALSE,  
    BOOL bHighlight = FALSE,  
    BOOL bDrawBorder = TRUE,  
    BOOL bGrayDisabledButtons = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
*PDC*<br/>
[in] Il contesto di dispositivo che visualizza il pulsante.  
  
*Rect*<br/>
[in] Il rettangolo di delimitazione del pulsante.  
  
*pImages*<br/>
[in] La raccolta di immagini associato con il pulsante.  
  
*bHorz*<br/>
[in] Lo stato di ancoraggio della barra degli strumenti padre. TRUE se la barra degli strumenti è ancorato in orizzontale e FALSE se la barra degli strumenti è ancorato in verticale.  
  
*bCustomizeMode*<br/>
[in] Indica se l'applicazione è in modalità di personalizzazione.  
  
*bHighlight*<br/>
[in] Indica se disegnare il pulsante della casella combinata evidenziato.  
  
*bDrawBorder*<br/>
[in] Indica se disegnare il pulsante della casella combinata con un bordo.  
  
*bGrayDisabledButtons*<br/>
[in] True per disegno ombreggiato i pulsanti disabilitati; FALSE per utilizzare la raccolta di immagini disabilitato.  
  
##  <a name="ondrawoncustomizelist"></a>  CMFCToolBarComboBoxButton::OnDrawOnCustomizeList  
 Chiamato dal framework per disegnare il pulsante della casella combinata nel **comandi** riquadro della finestra il **Personalizza** nella finestra di dialogo.  
  
```  
virtual int OnDrawOnCustomizeList(
    CDC* pDC,  
    const CRect& rect,  
    BOOL bSelected);
```  
  
### <a name="parameters"></a>Parametri  
*pDC*<br/>
[in] Il contesto di dispositivo che visualizza il pulsante della casella combinata.  
  
*Rect*<br/>
[in] Il rettangolo di delimitazione del pulsante casella combinata.  
  
*bSelected*<br/>
[in] TRUE se è selezionato il pulsante della casella combinata; in caso contrario, FALSE.  
  
### <a name="return-value"></a>Valore restituito  
 La larghezza in pixel, del pulsante casella combinata.  
  
##  <a name="onglobalfontschanged"></a>  CMFCToolBarComboBoxButton::OnGlobalFontsChanged  
 Chiamato dal framework per impostare la casella combinata tipo di carattere pulsante casella quando viene modificato il tipo di carattere dell'applicazione.  
  
```  
virtual void OnGlobalFontsChanged();
```  
  
##  <a name="onmove"></a>  CMFCToolBarComboBoxButton::OnMove  
 Chiamato dal framework per modificare la posizione del pulsante casella combinata quando si sposta la barra degli strumenti padre.  
  
```  
virtual void OnMove();
```  
  
##  <a name="onshow"></a>  CMFCToolBarComboBoxButton::OnShow  
 Chiamato dal framework quando il pulsante della casella combinata è nascosto o visualizzato.  
  
```  
virtual void OnShow(BOOL bShow);
```  
  
### <a name="parameters"></a>Parametri  
*bMostra*<br/>
[in] Se si desidera nascondere o visualizzare il pulsante della casella combinata.  
  
##  <a name="onsize"></a>  CMFCToolBarComboBoxButton::OnSize  
 Chiamato dal framework per modificare le dimensioni del pulsante casella combinata quando la barra degli strumenti padre cambia le dimensioni.  
  
```  
virtual void OnSize(int iSize);
```  
  
### <a name="parameters"></a>Parametri  
*iSize*<br/>
[in] La nuova larghezza del pulsante casella combinata.  
  
##  <a name="onupdatetooltip"></a>  CMFCToolBarComboBoxButton::OnUpdateToolTip  
 Chiamato dal framework quando l'utente modifica la descrizione comando per il pulsante della casella combinata.  
  
```  
virtual BOOL OnUpdateToolTip(
    CWnd* pWndParent,  
    int iButtonIndex,  
    CToolTipCtrl& wndToolTip,  
    CString& str);
```  
  
### <a name="parameters"></a>Parametri  
*pWndParent*<br/>
[in] Puntatore alla finestra padre per il pulsante della casella combinata.  
  
*iButtonIndex*<br/>
[in] ID del pulsante casella combinata.  
  
*wndToolTip*<br/>
[in] La descrizione comando da associare con il pulsante della casella combinata.  
  
*str*<br/>
[in] Il testo della descrizione comando.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il metodo gestisce l'evento; in caso contrario, FALSE.  
  
##  <a name="removeallitems"></a>  CMFCToolBarComboBoxButton::RemoveAllItems  
 Elimina tutti gli elementi dalle finestre di elenco e modifica.  
  
```  
void RemoveAllItems();
```  
  
### <a name="remarks"></a>Note  
 Rimuove tutti gli elementi dall'elenco casella e controllo di una casella combinata di modifica.  
  
##  <a name="selectitem"></a>  CMFCToolBarComboBoxButton::SelectItem  
 Seleziona un elemento nella casella di riepilogo.  
  
```  
BOOL SelectItem(
    int iIndex,  
    BOOL bNotify=TRUE);  
  
BOOL SelectItem(DWORD_PTR dwData);  
BOOL SelectItem(LPCTSTR lpszText);
```  
  
### <a name="parameters"></a>Parametri  
*iIndex*<br/>
[in] Indice a base zero di un elemento nella casella di riepilogo.  
  
*bNotify*<br/>
[in] TRUE per notificare il pulsante della casella combinata di selezione. in caso contrario, FALSE.  
  
*dwData*<br/>
[in] I dati associati a un elemento nella casella di riepilogo.  
  
*lpszText*<br/>
[in] Il testo di un elemento nella casella di riepilogo.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il metodo ha avuto esito positivo. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
  
##  <a name="selectitemall"></a>  CMFCToolBarComboBoxButton::SelectItemAll  
 Seleziona un elemento nella casella di riepilogo di un pulsante della casella combinata con un ID di comando specificato.  
  
```  
static BOOL SelectItemAll(
    UINT uiCmd,  
    int iIndex);

 
static BOOL SelectItemAll(
    UINT uiCmd,  
    DWORD_PTR dwData);

 
static BOOL SelectItemAll(
    UINT uiCmd,  
    LPCTSTR lpszText);
```  
  
### <a name="parameters"></a>Parametri  
*uiCmd*<br/>
[in] ID comando del pulsante casella combinata che contiene la casella di riepilogo.  
  
*iIndex*<br/>
[in] Indice a base zero dell'elemento nella casella di riepilogo. Il valore -1 rimuove qualsiasi selezione corrente nella casella di riepilogo e cancella la casella di modifica.  
  
*dwData*<br/>
[in] I dati di un elemento nella casella di riepilogo.  
  
*lpszText*<br/>
[in] Il testo di un elemento nella casella di riepilogo.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il metodo ha avuto esito positivo. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
  
##  <a name="serialize"></a>  CMFCToolBarComboBoxButton::Serialize  
 Legge l'oggetto da un archivio o lo scrive in un archivio.  
  
```  
virtual void Serialize(CArchive& ar);
```  
  
### <a name="parameters"></a>Parametri  
*ar*<br/>
[in, out] Il `CArchive` oggetto da serializzare.  
  
### <a name="remarks"></a>Note  
 Le impostazioni nel `CArchive` oggetto determinare se questo metodo legge o scrive nell'archivio.  
  
##  <a name="setaccdata"></a>  CMFCToolBarComboBoxButton::SetACCData  
 Popola l'oggetto specificato `CAccessibilityData` oggetto utilizzando i dati di accessibilità dal pulsante della casella combinata.  
  
```  
virtual BOOL SetACCData(
    CWnd* pParent,  
    CAccessibilityData& data);
```  
  
### <a name="parameters"></a>Parametri  
*pParent*<br/>
[in] La finestra padre del pulsante casella combinata.  
  
*data*<br/>
[out] Oggetto `CAccessibilityData` oggetto che riceve i dati di accessibilità dal pulsante della casella combinata.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il metodo ha avuto esito positivo. in caso contrario, FALSE.  
  
##  <a name="setcentervert"></a>  CMFCToolBarComboBoxButton::SetCenterVert  
 Imposta la posizione verticale dei pulsanti della casella combinata nell'applicazione.  
  
```  
static void SetCenterVert(BOOL bCenterVert=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
*bCenterVert*<br/>
[in] TRUE per centrare il pulsante della casella combinata nella barra degli strumenti; FALSE per allineare il pulsante della casella combinata nella parte superiore della barra degli strumenti.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, i pulsanti della casella combinata sono allineati in alto.  
  
##  <a name="setcontextmenuid"></a>  CMFCToolBarComboBoxButton::SetContextMenuID  
 Imposta l'ID di risorsa di menu di scelta rapida per la combinazione di pulsante della finestra.  
  
```  
void SetContextMenuID(UINT uiResID);
```  
  
### <a name="parameters"></a>Parametri  
*uiResID*<br/>
[in] L'ID di risorsa dal menu di scelta rapida.  
  
##  <a name="setdropdownheight"></a>  CMFCToolBarComboBoxButton::SetDropDownHeight  
 Imposta l'altezza della casella di riepilogo quando viene eliminato verso il basso.  
  
```  
void SetDropDownHeight(int nHeight);
```  
  
### <a name="parameters"></a>Parametri  
*nHeight*<br/>
[in] Altezza, in pixel, della casella di riepilogo.  
  
### <a name="remarks"></a>Note  
 L'altezza predefinita è 150 pixel.  
  
##  <a name="setflatmode"></a>  CMFCToolBarComboBoxButton::SetFlatMode  
 Imposta l'aspetto bidimensionale dei pulsanti della casella combinata nell'applicazione.  
  
```  
static void SetFlatMode(BOOL bFlat=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
*bFlat*<br/>
[in] TRUE per un aspetto bidimensionale; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Lo stile flat predefinito per i pulsanti della casella combinata è FALSE.  
  
##  <a name="setstyle"></a>  CMFCToolBarComboBoxButton::SetStyle  
 Imposta lo stile specificato per la combinazione di pulsante della finestra e ridisegna il controllo se non è disabilitato.  
  
```  
virtual void SetStyle(UINT nStyle);
```  
  
### <a name="parameters"></a>Parametri  
*nStyle*<br/>
[in] Combinazione bit per bit (OR) di stili della barra degli strumenti.  
  
### <a name="remarks"></a>Note  
 Per un elenco degli stili dei pulsanti della barra degli strumenti vedere [stili dei controlli ToolBar](../../mfc/reference/toolbar-control-styles.md)  
  
##  <a name="settext"></a>  CMFCToolBarComboBoxButton::SetText  
 Imposta il testo nella casella di modifica della casella combinata pulsante della finestra.  
  
```  
void SetText(LPCTSTR lpszText);
```  
  
### <a name="parameters"></a>Parametri  
*lpszText*<br/>
[in] Puntatore a una stringa che contiene il testo per la casella di modifica.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)   
 [CComboBox (classe)](../../mfc/reference/ccombobox-class.md)   
 [CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton)   
 [Procedura dettagliata: inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md)



