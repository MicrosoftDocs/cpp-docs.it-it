---
title: Classe CMFCToolBarComboBoxButton
ms.date: 11/04/2016
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
ms.openlocfilehash: 639a5f98ff4780bd26388796039e85b812621b36
ms.sourcegitcommit: 46d24d6e70c03e05484923d9efc6ed5150e96a64
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2019
ms.locfileid: "68915973"
---
# <a name="cmfctoolbarcomboboxbutton-class"></a>Classe CMFCToolBarComboBoxButton

Pulsante della barra degli strumenti contenente un controllo casella combinata ( [Classe CComboBox](../../mfc/reference/ccombobox-class.md)).

## <a name="syntax"></a>Sintassi

```
class CMFCToolBarComboBoxButton : public CMFCToolBarButton
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCToolBarComboBoxButton::CMFCToolBarComboBoxButton](#cmfctoolbarcomboboxbutton)|Costruisce un oggetto `CMFCToolBarComboBoxButton`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCToolBarComboBoxButton::AddItem](#additem)|Aggiunge un elemento alla fine dell'elenco di caselle combinate.|
|[CMFCToolBarComboBoxButton::AddSortedItem](#addsorteditem)|Aggiunge un elemento all'elenco di caselle combinate. L'ordine degli elementi nell'elenco è specificato da `Compare`.|
|[CMFCToolBarComboBoxButton::Compare](#compare)|Confronta due elementi. Chiamato per ordinare gli elementi `AddSortedItems` che vengono aggiunti all'elenco di caselle combinate.|
|[CMFCToolBarComboBoxButton::CreateEdit](#createedit)|Crea un nuovo controllo di modifica per il pulsante della casella combinata.|
|[CMFCToolBarComboBoxButton::DeleteItem](#deleteitem)|Elimina un elemento dall'elenco di caselle combinate.|
|[CMFCToolBarComboBoxButton::FindItem](#finditem)|Restituisce l'indice dell'elemento che contiene una stringa specificata.|
|[CMFCToolBarComboBoxButton::GetByCmd](#getbycmd)|Restituisce un puntatore al pulsante della casella combinata con un ID di comando specificato.|
|[CMFCToolBarComboBoxButton::GetComboBox](#getcombobox)|Restituisce un puntatore al controllo casella combinata incorporato nel pulsante della casella combinata.|
|[CMFCToolBarComboBoxButton::GetCount](#getcount)|Restituisce il numero di elementi nell'elenco di caselle combinate.|
|[CMFCToolBarComboBoxButton::GetCountAll](#getcountall)|Trova il pulsante della casella combinata con un ID comando specificato. Restituisce il numero di elementi nell'elenco di caselle combinate di tale pulsante.|
|[CMFCToolBarComboBoxButton::GetCurSel](#getcursel)|Restituisce l'indice dell'elemento selezionato nell'elenco della casella combinata.|
|[CMFCToolBarComboBoxButton::GetCurSelAll](#getcurselall)|Trova il pulsante della casella combinata con un ID di comando specificato e restituisce l'indice dell'elemento selezionato nell'elenco di caselle combinate di tale pulsante.|
|[CMFCToolBarComboBoxButton::GetEditCtrl](#geteditctrl)|Restituisce un puntatore al controllo di modifica incorporato nel pulsante della casella combinata.|
|[CMFCToolBarComboBoxButton::GetItem](#getitem)|Restituisce la stringa associata a un indice specificato nell'elenco di caselle combinate.|
|[CMFCToolBarComboBoxButton::GetItemAll](#getitemall)|Trova il pulsante della casella combinata con un ID di comando specificato e restituisce la stringa associata a un indice nell'elenco di caselle combinate di tale pulsante.|
|[CMFCToolBarComboBoxButton::GetItemData](#getitemdata)|Restituisce il valore a 32 bit associato a un indice specificato nell'elenco della casella combinata.|
|[CMFCToolBarComboBoxButton::GetItemDataAll](#getitemdataall)|Trova il pulsante della casella combinata con un ID di comando specificato e restituisce il valore a 32 bit associato a un indice nell'elenco di caselle combinate di tale pulsante.|
|[CMFCToolBarComboBoxButton::GetItemDataPtrAll](#getitemdataptrall)|Trova il pulsante della casella combinata con un ID comando specificato. Recupera il valore a 32 bit associato a un indice nell'elenco di caselle combinate di tale pulsante e restituisce il valore a 32 bit come puntatore.|
|[CMFCToolBarComboBoxButton::GetText](#gettext)|Restituisce il testo del controllo di modifica della casella combinata.|
|[CMFCToolBarComboBoxButton::GetTextAll](#gettextall)|Trova il pulsante della casella combinata con un ID di comando specificato e restituisce il testo del controllo di modifica di tale pulsante.|
|[CMFCToolBarComboBoxButton::IsCenterVert](#iscentervert)|Determina se i pulsanti della casella combinata nell'applicazione sono centrati o allineati con la parte superiore della barra degli strumenti.|
|[CMFCToolBarComboBoxButton::IsFlatMode](#isflatmode)|Determina se i pulsanti della casella combinata nell'applicazione hanno un aspetto flat.|
|[CMFCToolBarComboBoxButton::RemoveAllItems](#removeallitems)|Rimuove tutti gli elementi dalla casella di riepilogo e dal controllo di modifica della casella combinata.|
|[CMFCToolBarComboBoxButton::SelectItem](#selectitem)|Seleziona un elemento nella casella combinata in base al relativo indice, valore a 32 bit o stringa e notifica al controllo casella combinata la selezione.|
|[CMFCToolBarComboBoxButton::SelectItemAll](#selectitemall)|Trova il pulsante della casella combinata con un ID comando specificato. Chiama `SelectItem` per selezionare un elemento nella casella combinata del pulsante in base alla stringa, all'indice o al valore a 32 bit.|
|[CMFCToolBarComboBoxButton::SetCenterVert](#setcentervert)|Specifica se i pulsanti della casella combinata nell'applicazione sono centrati verticalmente o allineati con la parte superiore della barra degli strumenti.|
|[CMFCToolBarComboBoxButton::SetDropDownHeight](#setdropdownheight)|Imposta l'altezza della casella di riepilogo a discesa.|
|[CMFCToolBarComboBoxButton::SetFlatMode](#setflatmode)|Specifica se i pulsanti della casella combinata nell'applicazione hanno un aspetto flat.|

## <a name="remarks"></a>Note

Per aggiungere un pulsante della casella combinata a una barra degli strumenti, attenersi alla seguente procedura:

1. Riservare un ID di risorsa fittizio per il pulsante nella risorsa della barra degli strumenti padre.

2. Costruisce `CMFCToolBarComboBoxButton` un oggetto.

3. Nel gestore di messaggi che elabora il messaggio AFX_WM_RESETTOOLBAR sostituire il pulsante fittizio con il nuovo pulsante della casella combinata tramite [CMFCToolBar:: ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton).

Per altre informazioni, vedere [Procedura dettagliata: Inserimento di controlli nelle barre](../../mfc/walkthrough-putting-controls-on-toolbars.md)degli strumenti. Per un esempio di un pulsante della barra degli strumenti della casella combinata, vedere il progetto di esempio VisualStudioDemo.

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare i vari metodi nella classe `CMFCToolBarComboBoxButton` . Nell'esempio viene illustrato come abilitare le caselle di modifica e combinata, impostare la posizione verticale dei pulsanti della casella combinata nell'applicazione, impostare l'altezza della casella di riepilogo quando viene rilasciata, impostare l'aspetto bidimensionale dei pulsanti della casella combinata nell'applicazione e impostare il testo nella casella di modifica del pulsante della casella combinata. Questo frammento di codice fa parte dell' [esempio demo di Visual Studio](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_VisualStudioDemo#36](../../mfc/codesnippet/cpp/cmfctoolbarcomboboxbutton-class_1.cpp)]
[!code-cpp[NVC_MFC_VisualStudioDemo#37](../../mfc/codesnippet/cpp/cmfctoolbarcomboboxbutton-class_2.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)

[CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtoolbarcomboboxbutton. h

##  <a name="additem"></a>  CMFCToolBarComboBoxButton::AddItem

Accoda un elemento univoco alla casella di riepilogo.

```
virtual INT_PTR AddItem(
    LPCTSTR lpszItem,
    DWORD_PTR dwData=0);
```

### <a name="parameters"></a>Parametri

*lpszItem*<br/>
in Testo dell'elemento da aggiungere alla casella di riepilogo.

*dwData*<br/>
in Dati associati all'elemento da aggiungere alla casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Indice dell'ultimo elemento nella casella di riepilogo.

### <a name="remarks"></a>Note

Non usare questo metodo quando lo stile della casella di riepilogo è ordinato.

Se il testo dell'elemento è già presente nella casella di riepilogo, i nuovi dati vengono archiviati con l'elemento esistente. La ricerca dell'elemento fa distinzione tra maiuscole e minuscole.

##  <a name="addsorteditem"></a>  CMFCToolBarComboBoxButton::AddSortedItem

Aggiunge un elemento alla casella di riepilogo nell'ordine definito dal metodo [compare](#compare) .

```
virtual INT_PTR AddSortedItem(
    LPCTSTR lpszItem,
    DWORD_PTR dwData=0);
```

### <a name="parameters"></a>Parametri

*lpszItem*<br/>
in Testo dell'elemento da aggiungere alla casella di riepilogo.

*dwData*<br/>
in Dati associati all'elemento da aggiungere alla casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Indice dell'elemento aggiunto alla casella di riepilogo.

### <a name="remarks"></a>Note

Utilizzare questa funzione per aggiungere elementi alla casella di riepilogo in un ordine specifico.

##  <a name="canbestretched"></a>  CMFCToolBarComboBoxButton::CanBeStretched

Indica se le dimensioni del pulsante della casella combinata possono essere modificate.

```
virtual BOOL CanBeStretched() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE.

##  <a name="cmfctoolbarcomboboxbutton"></a>CMFCToolBarComboBoxButton:: CMFCToolBarComboBoxButton

Costruisce un oggetto [CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md) .

```
CMFCToolBarComboBoxButton(
    UINT uiID,
    int iImage,
    DWORD dwStyle=CBS_DROPDOWNLIST,
    int iWidth=0);
```

### <a name="parameters"></a>Parametri

*uiID*<br/>
in ID comando del pulsante nuovo.

*iImage*<br/>
in Indice di immagine dell'immagine associata al pulsante nuovo.

*dwStyle*<br/>
in Stile del pulsante nuovo.

*iWidth*<br/>
in Larghezza, in pixel, del pulsante nuovo.

### <a name="remarks"></a>Note

La larghezza predefinita è 150 pixel.

Per un elenco degli stili dei pulsanti della barra degli strumenti, vedere [stili di controllo Toolbar](../../mfc/reference/toolbar-control-styles.md)

##  <a name="cleardata"></a>CMFCToolBarComboBoxButton:: ClearData

Elimina i dati definiti dall'utente.

```
virtual void ClearData();
```

### <a name="remarks"></a>Note

Per impostazione predefinita, questo metodo non esegue alcuna operazione. Eseguire l'override di questo metodo in una classe derivata se si desidera eliminare i dati definiti dall'utente.

##  <a name="compare"></a>CMFCToolBarComboBoxButton:: compare

Confronta due stringhe.

```
virtual int Compare(
    LPCTSTR lpszItem1,
    LPCTSTR lpszItem2);
```

### <a name="parameters"></a>Parametri

*lpszItem1*<br/>
in Prima stringa da confrontare.

*lpszItem2*<br/>
in Seconda stringa da confrontare.

### <a name="return-value"></a>Valore restituito

Valore che indica la relazione di lessicografico con distinzione tra maiuscole e minuscole tra le stringhe. Nella tabella seguente sono elencati i valori possibili:

|Value|DESCRIZIONE|
|-----------|-----------------|
|\<0|La prima stringa è minore del secondo.|
|0|La prima stringa è uguale al secondo.|
|>0|La prima stringa è maggiore della seconda.|

### <a name="remarks"></a>Note

Eseguire l'override di questo metodo per modificare la modalità di ordinamento degli elementi nella casella di riepilogo.

Il confronto fa distinzione tra maiuscole e minuscole.

Questo metodo viene chiamato solo dal metodo [AddSortedItem](#addsorteditem) .

##  <a name="copyfrom"></a>CMFCToolBarComboBoxButton:: CopyFrom

Copia lo stato dell'oggetto specificato `CMFCToolBarComboBoxButton` nell'oggetto corrente.

```
virtual void CopyFrom(const CMFCToolBarButton& src);
```

### <a name="parameters"></a>Parametri

*src*<br/>
in Oggetto di `CMFCToolBarComboBoxButton` origine.

##  <a name="createcombo"></a>  CMFCToolBarComboBoxButton::CreateCombo

Crea una nuova casella combinata per il pulsante della casella combinata.

```
virtual CComboBox* CreateCombo(
    CWnd* pWndParent,
    const CRect& rect);
```

### <a name="parameters"></a>Parametri

*pWndParent*<br/>
in Puntatore alla finestra padre del pulsante.

*rect*<br/>
in Rettangolo di delimitazione della casella combinata.

### <a name="return-value"></a>Valore restituito

Puntatore alla nuova casella combinata se il metodo ha avuto esito positivo; in caso contrario, NULL.

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
in Puntatore alla finestra padre del pulsante.

*rect*<br/>
in Rettangolo di delimitazione della nuova casella di modifica.

*dwEditStyle*<br/>
in Stile del controllo della nuova casella di modifica.

### <a name="return-value"></a>Valore restituito

Puntatore alla nuova casella di modifica se il metodo ha avuto esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Note

Il Framework chiama questo metodo quando crea una nuova casella di modifica per un pulsante della casella combinata. Eseguire l'override di questo metodo per modificare la modalità di creazione di [CMFCToolBarComboBoxEdit](../../mfc/reference/cmfctoolbarcomboboxedit-class.md) .

##  <a name="deleteitem"></a>  CMFCToolBarComboBoxButton::DeleteItem

Elimina un elemento specificato dalla casella di riepilogo.

```
BOOL DeleteItem(int iIndex);
BOOL DeleteItem(DWORD_PTR dwData);
BOOL DeleteItem(LPCTSTR lpszText);
```

### <a name="parameters"></a>Parametri

*iIndex*<br/>
in Indice in base zero dell'elemento da eliminare.

*dwData*<br/>
in Dati associati all'elemento da eliminare.

*lpszText*<br/>
in Testo dell'elemento da eliminare. Se sono presenti più elementi con lo stesso testo, il primo elemento viene eliminato.

### <a name="return-value"></a>Valore restituito

TRUE se l'elemento è stato individuato ed eliminato correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Note

##  <a name="duplicatedata"></a>  CMFCToolBarComboBoxButton::DuplicateData

Duplica i dati definiti dall'utente.

```
virtual void DuplicateData();
```

### <a name="remarks"></a>Note

Per impostazione predefinita, questo metodo non esegue alcuna operazione. Eseguire l'override di questo metodo in una classe derivata se si desidera copiare tutti i dati definiti dall'utente.

##  <a name="enablewindow"></a>  CMFCToolBarComboBoxButton::EnableWindow

Abilita o Disabilita le caselle di modifica e combinata.

```
virtual void EnableWindow(BOOL bEnable = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
in TRUE per abilitare le caselle di modifica e le caselle combinate; FALSE per disabilitare le caselle di modifica e le caselle combinate.

### <a name="remarks"></a>Note

Quando questa impostazione è disabilitata, i controlli non possono essere attivi e non accettano l'input dell'utente.

##  <a name="exporttomenubutton"></a>CMFCToolBarComboBoxButton:: ExportToMenuButton

Copia una stringa dalla tabella delle stringhe dell'applicazione nel menu specificato utilizzando l'ID del comando del pulsante della casella combinata.

```
virtual BOOL ExportToMenuButton(CMFCToolBarMenuButton& menuButton) const;
```

### <a name="parameters"></a>Parametri

*menuButton*<br/>
out Riferimento a un pulsante di menu.

### <a name="return-value"></a>Valore restituito

Sempre TRUE.

##  <a name="finditem"></a>  CMFCToolBarComboBoxButton::FindItem

Restituisce l'indice del primo elemento nella casella di riepilogo che contiene una stringa specificata.

```
int FindItem(LPCTSTR lpszText) const;
```

### <a name="parameters"></a>Parametri

*lpszText*<br/>
in Testo da cercare nella casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Indice dell'elemento; o CB_ERR se l'elemento non viene trovato.

### <a name="remarks"></a>Note

##  <a name="getbycmd"></a>CMFCToolBarComboBoxButton:: GetByCmd

Ottiene un puntatore al pulsante della casella combinata con un ID di comando specificato.

```
static CMFCToolBarComboBoxButton* GetByCmd(
    UINT uiCmd,
    BOOL bIsFocus=FALSE);
```

### <a name="parameters"></a>Parametri

*uiCmd*<br/>
in ID del comando di un pulsante della casella combinata.

*bIsFocus*<br/>
in TRUE per cercare solo i pulsanti con stato attivo; FALSE per cercare tutti i pulsanti.

### <a name="return-value"></a>Valore restituito

Puntatore a un pulsante della casella combinata; o NULL se il pulsante non viene trovato.

### <a name="remarks"></a>Note

##  <a name="getcombobox"></a>CMFCToolBarComboBoxButton:: getcombobox

Restituisce un puntatore alla casella combinata nel pulsante della casella combinata.

```
CComboBox* GetComboBox() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto della [Classe CComboBox](../../mfc/reference/ccombobox-class.md) se il metodo ha avuto esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Note

##  <a name="getcontextmenuid"></a>  CMFCToolBarComboBoxButton::GetContextMenuID

Ottiene l'ID della risorsa del menu di scelta rapida per il pulsante della casella combinata.

```
UINT GetContextMenuID();
```

### <a name="return-value"></a>Valore restituito

ID della risorsa del menu di scelta rapida.

##  <a name="getcount"></a>CMFCToolBarComboBoxButton:: GetCount

Restituisce il numero di elementi nella casella di riepilogo.

```
INT_PTR GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nella casella di riepilogo.

### <a name="remarks"></a>Note

##  <a name="getcountall"></a>  CMFCToolBarComboBoxButton::GetCountAll

Ottiene il numero di elementi nella casella di riepilogo di un pulsante della casella combinata con un ID di comando specificato.

```
static int GetCountAll(UINT uiCmd);
```

### <a name="parameters"></a>Parametri

*uiCmd*<br/>
in ID del comando di un pulsante della casella combinata.

### <a name="return-value"></a>Valore restituito

Numero di elementi nella casella di riepilogo. in caso contrario, CB_ERR se il pulsante della casella combinata non viene trovato.

### <a name="remarks"></a>Note

##  <a name="getcursel"></a>CMFCToolBarComboBoxButton:: GetCurSel

Ottiene l'indice dell'elemento attualmente selezionato nella casella di riepilogo.

```
int GetCurSel() const;
```

### <a name="return-value"></a>Valore restituito

Indice dell'elemento attualmente selezionato nella casella di riepilogo. o CB_ERR se non è selezionato alcun elemento.

### <a name="remarks"></a>Note

L'indice della casella di riepilogo è in base zero.

##  <a name="getcurselall"></a>CMFCToolBarComboBoxButton:: GetCurSelAll

Restituisce l'indice dell'elemento attualmente selezionato nella casella di riepilogo di un pulsante della casella combinata con un ID di comando specificato.

```
static int GetCurSelAll(UINT uiCmd);
```

### <a name="parameters"></a>Parametri

*uiCmd*<br/>
in ID del comando di un pulsante della casella combinata.

### <a name="return-value"></a>Valore restituito

Indice dell'elemento attualmente selezionato nella casella di riepilogo. in caso contrario, CB_ERR se non è selezionato alcun elemento o non viene trovato un pulsante della casella combinata.

### <a name="remarks"></a>Note

L'indice della casella di riepilogo è in base zero.

##  <a name="geteditctrl"></a>CMFCToolBarComboBoxButton:: GetEditCtrl

Restituisce un puntatore alla casella di modifica nel pulsante della casella combinata.

```
virtual CEdit* GetEditCtrl();
```

### <a name="return-value"></a>Valore restituito

Puntatore alla casella di modifica se il metodo ha avuto esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Note

##  <a name="gethwnd"></a>CMFCToolBarComboBoxButton:: GetHwnd

Restituisce l'handle della finestra per la casella combinata.

```
virtual HWND GetHwnd();
```

### <a name="return-value"></a>Valore restituito

Handle della finestra o NULL se la casella combinata non è associata a un oggetto finestra.

##  <a name="getitem"></a>CMFCToolBarComboBoxButton:: GetItem

Restituisce la stringa associata a un elemento in corrispondenza di un indice specificato nella casella di riepilogo.

```
LPCTSTR GetItem(int iIndex=-1) const;
```

### <a name="parameters"></a>Parametri

*iIndex*<br/>
in Indice in base zero di un elemento nella casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Puntatore alla stringa associata all'elemento. in caso contrario, NULL se il parametro di indice non è valido o se il parametro di indice è-1 e non è presente alcun elemento selezionato nella casella combinata.

### <a name="remarks"></a>Note

Un parametro di indice di-1 restituisce la stringa dell'elemento attualmente selezionato.

##  <a name="getitemall"></a>CMFCToolBarComboBoxButton:: GetItemAll

Restituisce la stringa associata a un elemento in corrispondenza di un indice specificato nella casella di riepilogo di un pulsante della casella combinata con un ID di comando specificato.

```
static LPCTSTR GetItemAll(
    UINT uiCmd,
    int iIndex=-1);
```

### <a name="parameters"></a>Parametri

*uiCmd*<br/>
in ID del comando di un pulsante della casella combinata.

*iIndex*<br/>
in Indice in base zero di un elemento nella casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Puntatore alla stringa dell'elemento se il metodo ha avuto esito positivo; in caso contrario, NULL se l'indice non è valido, non viene trovato un pulsante della casella combinata o se index è-1 e non è presente alcun elemento selezionato nella casella combinata.

### <a name="remarks"></a>Note

Un valore di indice di-1 restituisce la stringa dell'elemento attualmente selezionato.

##  <a name="getitemdata"></a>CMFCToolBarComboBoxButton:: GetItemData

Restituisce i dati associati a un elemento in corrispondenza di un indice specifico nella casella di riepilogo.

```
DWORD_PTR GetItemData(int iIndex=-1) const;
```

### <a name="parameters"></a>Parametri

*iIndex*<br/>
in Indice in base zero di un elemento nella casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Dati associati all'elemento; oppure 0 se l'elemento non esiste.

### <a name="remarks"></a>Note

Un parametro di indice di-1 restituisce i dati associati all'elemento attualmente selezionato.

##  <a name="getitemdataall"></a>  CMFCToolBarComboBoxButton::GetItemDataAll

Restituisce i dati associati a un elemento in corrispondenza di un indice specifico nella casella di riepilogo di un pulsante della casella combinata con un ID di comando specifico.

```
static DWORD_PTR GetItemDataAll(
    UINT uiCmd,
    int iIndex=-1);
```

### <a name="parameters"></a>Parametri

*uiCmd*<br/>
in ID del comando di un pulsante della casella combinata.

*iIndex*<br/>
in Indice in base zero di un elemento nella casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Dati associati all'elemento se il metodo ha avuto esito positivo; in caso contrario, 0 se l'indice specificato non è valido o CB_ERR se il pulsante della casella combinata non viene trovato.

### <a name="remarks"></a>Note

Un parametro di indice di-1 restituisce i dati associati all'elemento attualmente selezionato.

##  <a name="getitemdataptrall"></a>CMFCToolBarComboBoxButton:: GetItemDataPtrAll

Restituisce i dati associati a un elemento in corrispondenza di un indice specifico nella casella di riepilogo di un pulsante della casella combinata con un ID di comando specifico. Questi dati vengono restituiti come puntatore.

```
static void* GetItemDataPtrAll(
    UINT uiCmd,
    int iIndex=-1);
```

### <a name="parameters"></a>Parametri

*uiCmd*<br/>
in ID di comando del pulsante della casella combinata.

*iIndex*<br/>
in Indice in base zero di un elemento nella casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Puntatore associato all'elemento se il metodo ha avuto esito positivo; in caso contrario,-1 se si verifica un errore o NULL se il pulsante della casella combinata non viene trovato.

### <a name="remarks"></a>Note

##  <a name="getprompt"></a>CMFCToolBarComboBoxButton:: GetPrompt

Restituisce la stringa di richiesta per il pulsante della casella combinata.

```
virtual CString GetPrompt() const;
```

### <a name="return-value"></a>Valore restituito

Stringa di richiesta.

### <a name="remarks"></a>Note

Questo metodo non è attualmente implementato.

##  <a name="gettext"></a>  CMFCToolBarComboBoxButton::GetText

Ottiene il testo nella casella di modifica.

```
LPCTSTR GetText() const;
```

### <a name="return-value"></a>Valore restituito

Testo della casella di modifica.

### <a name="remarks"></a>Note

##  <a name="gettextall"></a>  CMFCToolBarComboBoxButton::GetTextAll

Ottiene il testo nella casella di modifica di un pulsante della casella combinata con un ID di comando specificato.

```
static LPCTSTR GetTextAll(UINT uiCmd);
```

### <a name="parameters"></a>Parametri

*uiCmd*<br/>
in ID del comando di un pulsante casella combinata specifico.

### <a name="return-value"></a>Valore restituito

Testo della casella di modifica se il metodo ha avuto esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Note

##  <a name="hasfocus"></a>  CMFCToolBarComboBoxButton::HasFocus

Indica se la casella combinata dispone attualmente dello stato attivo.

```
virtual BOOL HasFocus() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la casella combinata dispone attualmente dello stato attivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo restituisce TRUE anche se una finestra figlio della casella combinata dispone attualmente dello stato attivo.

##  <a name="iscentervert"></a>  CMFCToolBarComboBoxButton::IsCenterVert

Restituisce la posizione verticale dei pulsanti della casella combinata nell'applicazione.

```
static BOOL IsCenterVert();
```

### <a name="return-value"></a>Valore restituito

TRUE se i pulsanti sono centrati; FALSE se i pulsanti sono allineati nella parte superiore.

### <a name="remarks"></a>Note

##  <a name="isflatmode"></a>CMFCToolBarComboBoxButton:: IsFlatMode

Restituisce l'aspetto bidimensionale dei pulsanti della casella combinata nell'applicazione.

```
static BOOL IsFlatMode();
```

### <a name="return-value"></a>Valore restituito

TRUE se i pulsanti hanno uno stile Flat; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Lo stile flat predefinito per i pulsanti della casella combinata è FALSE.

##  <a name="isownerof"></a>  CMFCToolBarComboBoxButton::IsOwnerOf

Indica se l'handle specificato è associato al pulsante della casella combinata o a uno dei relativi elementi figlio.

```
virtual BOOL IsOwnerOf(HWND hwnd);
```

### <a name="parameters"></a>Parametri

*hwnd*<br/>
in Handle di finestra.

### <a name="return-value"></a>Valore restituito

TRUE se l'handle è associata con il pulsante della casella combinata o uno degli elementi figlio; in caso contrario, FALSE.

##  <a name="isribbonbutton"></a>CMFCToolBarComboBoxButton:: IsRibbonButton

Indica se il pulsante della casella combinata si trova in un pannello della barra multifunzione.

```
BOOL IsRibbonButton() const;
```

### <a name="return-value"></a>Valore restituito

Sempre FALSE.

### <a name="remarks"></a>Note

Per impostazione predefinita, questo metodo restituisce sempre FALSE, il che significa che il pulsante della casella combinata non viene mai visualizzato in un pannello della barra multifunzione.

##  <a name="iswindowvisible"></a>  CMFCToolBarComboBoxButton::IsWindowVisible

Restituisce lo stato di visibilità del pulsante della casella combinata.

```
virtual BOOL IsWindowVisible();
```

### <a name="return-value"></a>Valore restituito

Stato di visibilità del pulsante della casella combinata.

##  <a name="notifycommand"></a>CMFCToolBarComboBoxButton:: NotifyCommand

Indica se il pulsante della casella combinata elabora il messaggio.

```
virtual BOOL NotifyCommand(int iNotifyCode);
```

### <a name="parameters"></a>Parametri

*iNotifyCode*<br/>
in Messaggio di notifica associato al comando.

### <a name="return-value"></a>Valore restituito

Indica se il pulsante della casella combinata elabora il messaggio.

##  <a name="onaddtocustomizepage"></a>CMFCToolBarComboBoxButton:: OnAddToCustomizePage

Chiamata eseguita dal framework quando il pulsante viene aggiunto alla finestra di dialogo **Personalizza** .

```
virtual void OnAddToCustomizePage();
```

##  <a name="oncalculatesize"></a>CMFCToolBarComboBoxButton:: OnCalculateSize

Chiamato dal Framework per calcolare le dimensioni del pulsante.

```
virtual SIZE OnCalculateSize(
    CDC* pDC,
    const CSize& sizeDefault,
    BOOL bHorz);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Contesto di dispositivo in cui viene visualizzato il pulsante della casella combinata.

*sizeDefault*<br/>
in Dimensioni predefinite del pulsante della casella combinata.

*bHorz*<br/>
in Stato di ancoraggio della barra degli strumenti padre. TRUE se la barra degli strumenti è ancorata orizzontalmente e FALSE quando la barra degli strumenti è ancorata verticalmente.

### <a name="return-value"></a>Valore restituito

`SIZE` Struttura che contiene le dimensioni del pulsante della casella combinata, in pixel.

##  <a name="onchangeparentwnd"></a>CMFCToolBarComboBoxButton:: OnChangeParentWnd

Chiamata eseguita dal framework quando il pulsante della casella combinata viene inserito in una nuova barra degli strumenti.

```
virtual void OnChangeParentWnd(CWnd* pWndParent);
```

### <a name="parameters"></a>Parametri

*pWndParent*<br/>
in Puntatore alla nuova barra degli strumenti padre.

##  <a name="onclick"></a>CMFCToolBarComboBoxButton:: OnClick

Chiamata eseguita dal framework quando l'utente fa clic sul pulsante della casella combinata.

```
virtual BOOL OnClick(
    CWnd* pWnd,
    BOOL bDelay = TRUE);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
in Puntatore alla finestra padre del pulsante della casella combinata.

*bDelay*<br/>
in Riservato per l'utilizzo in una classe derivata.

### <a name="return-value"></a>Valore restituito

TRUE se il metodo gestisce l'evento; in caso contrario, FALSE.

##  <a name="onctlcolor"></a>CMFCToolBarComboBoxButton:: OnCtlColor

Chiamata eseguita dal framework quando l'utente modifica il colore della barra degli strumenti padre per impostare il colore del pulsante della casella combinata.

```
virtual HBRUSH OnCtlColor(
    CDC* pDC,
    UINT nCtlColor);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Contesto di dispositivo in cui viene visualizzato il pulsante della casella combinata.

*nCtlColor*<br/>
in Inutilizzati.

### <a name="return-value"></a>Valore restituito

Handle per il pennello utilizzato dal Framework per disegnare lo sfondo del pulsante della casella combinata.

### <a name="remarks"></a>Note

Questo metodo imposta anche il colore del testo del pulsante della casella combinata.

##  <a name="ondraw"></a>CMFCToolBarComboBoxButton:: onpare

Chiamato dal Framework per disegnare il pulsante della casella combinata usando gli stili e le opzioni specificati.

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

*Pdc*<br/>
in Contesto di dispositivo in cui viene visualizzato il pulsante.

*rect*<br/>
in Rettangolo delimitatore del pulsante.

*pImages*<br/>
in Raccolta di immagini associate al pulsante.

*bHorz*<br/>
in Stato di ancoraggio della barra degli strumenti padre. TRUE se la barra degli strumenti è ancorata orizzontalmente e FALSE quando la barra degli strumenti è ancorata verticalmente.

*bCustomizeMode*<br/>
in Indica se l'applicazione è in modalità di personalizzazione.

*bHighlight*<br/>
in Indica se creare il pulsante della casella combinata evidenziato.

*bDrawBorder*<br/>
in Indica se creare il pulsante della casella combinata con un bordo.

*bGrayDisabledButtons*<br/>
in TRUE per creare pulsanti disabilitati ombreggiati; FALSE per usare la raccolta di immagini disabilitate.

##  <a name="ondrawoncustomizelist"></a>  CMFCToolBarComboBoxButton::OnDrawOnCustomizeList

Chiamato dal Framework per creare il pulsante della casella combinata nel riquadro **comandi** della finestra di dialogo **Personalizza** .

```
virtual int OnDrawOnCustomizeList(
    CDC* pDC,
    const CRect& rect,
    BOOL bSelected);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Contesto di dispositivo in cui viene visualizzato il pulsante della casella combinata.

*rect*<br/>
in Rettangolo delimitatore del pulsante della casella combinata.

*bSelected*<br/>
in TRUE se il pulsante della casella combinata è selezionato; in caso contrario, FALSE.

### <a name="return-value"></a>Valore restituito

Larghezza, in pixel, del pulsante della casella combinata.

##  <a name="onglobalfontschanged"></a>  CMFCToolBarComboBoxButton::OnGlobalFontsChanged

Chiamata eseguita dal Framework per impostare il tipo di carattere del pulsante della casella combinata quando viene modificato il tipo di carattere dell'applicazione.

```
virtual void OnGlobalFontsChanged();
```

##  <a name="onmove"></a>CMFCToolBarComboBoxButton:: OnMove

Chiamata eseguita dal Framework per modificare la posizione del pulsante della casella combinata quando viene spostata la barra degli strumenti padre.

```
virtual void OnMove();
```

##  <a name="onshow"></a>CMFCToolBarComboBoxButton:: OnShow

Chiamata eseguita dal framework quando il pulsante della casella combinata è nascosto o visualizzato.

```
virtual void OnShow(BOOL bShow);
```

### <a name="parameters"></a>Parametri

*bShow*<br/>
in Indica se nascondere o visualizzare il pulsante della casella combinata.

##  <a name="onsize"></a>  CMFCToolBarComboBoxButton::OnSize

Chiamata eseguita dal Framework per modificare le dimensioni del pulsante della casella combinata quando la barra degli strumenti padre cambia dimensione.

```
virtual void OnSize(int iSize);
```

### <a name="parameters"></a>Parametri

*iSize*<br/>
in Nuova larghezza del pulsante della casella combinata.

##  <a name="onupdatetooltip"></a>CMFCToolBarComboBoxButton:: OnUpdateToolTip

Chiamata eseguita dal framework quando l'utente modifica la descrizione comando per il pulsante della casella combinata.

```
virtual BOOL OnUpdateToolTip(
    CWnd* pWndParent,
    int iButtonIndex,
    CToolTipCtrl& wndToolTip,
    CString& str);
```

### <a name="parameters"></a>Parametri

*pWndParent*<br/>
in Puntatore alla finestra padre del pulsante della casella combinata.

*iButtonIndex*<br/>
in ID del pulsante della casella combinata.

*wndToolTip*<br/>
in Descrizione comando da associare al pulsante della casella combinata.

*str*<br/>
in Testo della descrizione comando.

### <a name="return-value"></a>Valore restituito

TRUE se il metodo gestisce l'evento; in caso contrario, FALSE.

##  <a name="removeallitems"></a>  CMFCToolBarComboBoxButton::RemoveAllItems

Elimina tutti gli elementi dalle caselle elenco e modifica.

```
void RemoveAllItems();
```

### <a name="remarks"></a>Note

Rimuove tutti gli elementi dalla casella di riepilogo e il controllo di modifica di una casella combinata.

##  <a name="selectitem"></a>CMFCToolBarComboBoxButton:: SelectItem

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
in Indice in base zero di un elemento nella casella di riepilogo.

*bNotify*<br/>
in TRUE per inviare una notifica al pulsante della casella combinata della selezione; in caso contrario, FALSE.

*dwData*<br/>
in Dati associati a un elemento nella casella di riepilogo.

*lpszText*<br/>
in Testo di un elemento nella casella di riepilogo.

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha avuto esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

##  <a name="selectitemall"></a>CMFCToolBarComboBoxButton:: SelectItemAll

Seleziona un elemento nella casella di riepilogo di un pulsante della casella combinata con un ID comando specificato.

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
in ID di comando del pulsante della casella combinata che contiene la casella di riepilogo.

*iIndex*<br/>
in Indice in base zero dell'elemento nella casella di riepilogo. Il valore-1 consente di rimuovere qualsiasi selezione corrente nella casella di riepilogo e di deselezionare la casella di modifica.

*dwData*<br/>
in Dati di un elemento nella casella di riepilogo.

*lpszText*<br/>
in Testo di un elemento nella casella di riepilogo.

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha avuto esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

##  <a name="serialize"></a>CMFCToolBarComboBoxButton:: Serialize

Legge questo oggetto da un archivio o lo scrive in un archivio.

```
virtual void Serialize(CArchive& ar);
```

### <a name="parameters"></a>Parametri

*ar*<br/>
[in, out] `CArchive` Oggetto da serializzare.

### <a name="remarks"></a>Note

Le impostazioni nell' `CArchive` oggetto determinano se questo metodo legge o scrive nell'archivio.

##  <a name="setaccdata"></a>  CMFCToolBarComboBoxButton::SetACCData

Popola l'oggetto specificato `CAccessibilityData` usando i dati di accessibilità dal pulsante della casella combinata.

```
virtual BOOL SetACCData(
    CWnd* pParent,
    CAccessibilityData& data);
```

### <a name="parameters"></a>Parametri

*pParent*<br/>
in Finestra padre del pulsante della casella combinata.

*data*<br/>
out `CAccessibilityData` Oggetto che riceve i dati di accessibilità dal pulsante della casella combinata.

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha avuto esito positivo; in caso contrario, FALSE.

##  <a name="setcentervert"></a>  CMFCToolBarComboBoxButton::SetCenterVert

Imposta la posizione verticale dei pulsanti della casella combinata nell'applicazione.

```
static void SetCenterVert(BOOL bCenterVert=TRUE);
```

### <a name="parameters"></a>Parametri

*bCenterVert*<br/>
in TRUE per allineare al centro il pulsante della casella combinata nella barra degli strumenti; FALSE per allineare il pulsante della casella combinata nella parte superiore della barra degli strumenti.

### <a name="remarks"></a>Note

Per impostazione predefinita, i pulsanti della casella combinata sono allineati alla parte superiore.

##  <a name="setcontextmenuid"></a>  CMFCToolBarComboBoxButton::SetContextMenuID

Imposta l'ID della risorsa del menu di scelta rapida per il pulsante della casella combinata.

```
void SetContextMenuID(UINT uiResID);
```

### <a name="parameters"></a>Parametri

*uiResID*<br/>
in ID della risorsa del menu di scelta rapida.

##  <a name="setdropdownheight"></a>CMFCToolBarComboBoxButton:: SetDropDownHeight

Imposta l'altezza della casella di riepilogo quando viene rilasciata.

```
void SetDropDownHeight(int nHeight);
```

### <a name="parameters"></a>Parametri

*nHeight*<br/>
in Altezza, in pixel, della casella di riepilogo.

### <a name="remarks"></a>Note

L'altezza predefinita è 150 pixel.

##  <a name="setflatmode"></a>CMFCToolBarComboBoxButton:: SetFlatMode

Imposta l'aspetto bidimensionale dei pulsanti della casella combinata nell'applicazione.

```
static void SetFlatMode(BOOL bFlat=TRUE);
```

### <a name="parameters"></a>Parametri

*bFlat*<br/>
in TRUE per un aspetto di tipo Flat; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Lo stile flat predefinito per i pulsanti della casella combinata è FALSE.

##  <a name="setstyle"></a>CMFCToolBarComboBoxButton:: Sestyle

Imposta lo stile specificato per il pulsante della casella combinata e ridisegna il controllo se non è disabilitato.

```
virtual void SetStyle(UINT nStyle);
```

### <a name="parameters"></a>Parametri

*nStyle*<br/>
in Combinazione bit per bit (o) degli stili della barra degli strumenti.

### <a name="remarks"></a>Note

Per un elenco degli stili dei pulsanti della barra degli strumenti, vedere [stili di controllo Toolbar](../../mfc/reference/toolbar-control-styles.md)

##  <a name="settext"></a>  CMFCToolBarComboBoxButton::SetText

Imposta il testo nella casella di modifica del pulsante della casella combinata.

```
void SetText(LPCTSTR lpszText);
```

### <a name="parameters"></a>Parametri

*lpszText*<br/>
in Puntatore a una stringa che contiene il testo per la casella di modifica.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)<br/>
[Classe CComboBox](../../mfc/reference/ccombobox-class.md)<br/>
[CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton)<br/>
[Procedura dettagliata: Inserimento di controlli sulle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md)
