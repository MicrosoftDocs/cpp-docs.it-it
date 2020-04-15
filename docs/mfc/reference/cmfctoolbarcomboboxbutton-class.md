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
ms.openlocfilehash: 0d003bdacf13403ad8dc4be4ec7e6f71ea57d156
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372182"
---
# <a name="cmfctoolbarcomboboxbutton-class"></a>Classe CMFCToolBarComboBoxButton

Pulsante della barra degli strumenti che contiene un controllo casella combinata ( [CComboBox Class](../../mfc/reference/ccombobox-class.md)).

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
|[CMFCToolBarComboBoxButton::AddSortedItem](#addsorteditem)|Aggiunge un elemento all'elenco della casella combinata. L'ordine degli elementi nell'elenco è specificato da `Compare`.|
|[CMFCToolBarComboBoxButton::Compare](#compare)|Confronta due elementi. Chiamato per ordinare `AddSortedItems` gli elementi che vengono aggiunti all'elenco della casella combinata.|
|[CMFCToolBarComboBoxButton::CreateModifica](#createedit)|Crea un nuovo controllo di modifica per il pulsante della casella combinata.|
|[CMFCToolBarComboBoxButton::DeleteItem](#deleteitem)|Elimina un elemento dall'elenco della casella combinata.|
|[CMFCToolBarComboBoxButton::FindItem](#finditem)|Restituisce l'indice dell'elemento che contiene una stringa specificata.|
|[CMFCToolBarComboBoxButton::GetByCmd](#getbycmd)|Restituisce un puntatore al pulsante della casella combinata con un ID di comando specificato.|
|[CMFCToolBarComboBoxButton::GetComboBox](#getcombobox)|Restituisce un puntatore al controllo casella combinata incorporato nel pulsante della casella combinata.|
|[CMFCToolBarComboBoxButton::GetCount](#getcount)|Restituisce il numero di elementi nell'elenco della casella combinata.|
|[CMFCToolBarComboBoxButton::GetCountAll](#getcountall)|Trova il pulsante della casella combinata con un ID di comando specificato. Restituisce il numero di elementi nell'elenco della casella combinata di tale pulsante.|
|[CMFCToolBarComboBoxButton::GetCurSel](#getcursel)|Restituisce l'indice dell'elemento selezionato nell'elenco della casella combinata.|
|[CMFCToolBarComboBoxButton::GetCurSelAll](#getcurselall)|Trova il pulsante della casella combinata con un ID di comando specificato e restituisce l'indice dell'elemento selezionato nell'elenco della casella combinata di tale pulsante.|
|[CMFCToolBarComboBoxButton::GetEditCtrl](#geteditctrl)|Restituisce un puntatore al controllo di modifica incorporato nel pulsante della casella combinata.|
|[CMFCToolBarComboBoxButton::GetItem](#getitem)|Restituisce la stringa associata a un indice specificato nell'elenco della casella combinata.|
|[CMFCToolBarComboBoxButton::GetItemAll](#getitemall)|Trova il pulsante della casella combinata con un ID di comando specificato e restituisce la stringa associata a un indice nell'elenco della casella combinata di tale pulsante.|
|[CMFCToolBarComboBoxButton::GetItemData](#getitemdata)|Restituisce il valore a 32 bit associato a un indice specificato nell'elenco della casella combinata.|
|[CMFCToolBarComboBoxButton::GetItemDataAllCMFCToolBarComboBoxButton::GetItemDataAll](#getitemdataall)|Trova il pulsante della casella combinata con un ID di comando specificato e restituisce il valore a 32 bit associato a un indice nell'elenco della casella combinata di tale pulsante.|
|[CMFCToolBarComboBoxButton::GetItemDataPtrAll](#getitemdataptrall)|Trova il pulsante della casella combinata con un ID di comando specificato. Recupera il valore a 32 bit associato a un indice nell'elenco della casella combinata di tale pulsante e restituisce il valore a 32 bit come puntatore.|
|[CMFCToolBarComboBoxButton::GetText](#gettext)|Restituisce il testo dal controllo di modifica della casella combinata.|
|[CMFCToolBarComboBoxButton::GetTextAll](#gettextall)|Trova il pulsante della casella combinata con un ID di comando specificato e restituisce il testo dal controllo di modifica di tale pulsante.|
|[CMFCToolBarComboBoxButton::IsCenterVert](#iscentervert)|Determina se i pulsanti delle caselle combinate nell'applicazione sono centrati o allineati con la parte superiore della barra degli strumenti.|
|[CMFCToolBarComboBoxButton::IsFlatMode](#isflatmode)|Determina se i pulsanti delle caselle combinate nell'applicazione hanno un aspetto piatto.|
|[CMFCToolBarComboBoxButton::RemoveAllItems](#removeallitems)|Rimuove tutti gli elementi dalla casella di riepilogo e dal controllo di modifica della casella combinata.|
|[CMFCToolBarComboBoxButton::SelectItem](#selectitem)|Seleziona un elemento nella casella combinata in base all'indice, al valore a 32 bit o alla stringa e notifica alla selezione il controllo casella combinata.|
|[CMFCToolBarComboBoxButton::SelectItemAll](#selectitemall)|Trova il pulsante della casella combinata con un ID di comando specificato. Chiamate `SelectItem` per selezionare un elemento nella casella combinata del pulsante in base alla stringa, indice o valore a 32 bit.|
|[CMFCToolBarComboBoxButton::SetCenterVert](#setcentervert)|Specifica se i pulsanti delle caselle combinate nell'applicazione sono centrati verticalmente o allineati con la parte superiore della barra degli strumenti.|
|[CMFCToolBarComboBoxButton::SetDropDownHeight](#setdropdownheight)|Imposta l'altezza della casella di riepilogo a discesa.|
|[CMFCToolBarComboBoxButton::SetFlatMode](#setflatmode)|Specifica se i pulsanti delle caselle combinate nell'applicazione hanno un aspetto piatto.|

## <a name="remarks"></a>Osservazioni

Per aggiungere un pulsante della casella combinata a una barra degli strumenti, attenersi alla seguente procedura:

1. Riservare un ID di risorsa fittizio per il pulsante nella risorsa della barra degli strumenti padre.

2. Costruire `CMFCToolBarComboBoxButton` un oggetto.

3. Nel gestore messaggi che elabora il messaggio AFX_WM_RESETTOOLBAR sostituire il pulsante fittizio con il pulsante della nuova casella combinata utilizzando [CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton).

Per ulteriori informazioni, vedere [Procedura dettagliata: inserimento](../../mfc/walkthrough-putting-controls-on-toolbars.md)di controlli nelle barre degli strumenti . Per un esempio di pulsante della barra degli strumenti di una casella combinata, vedere il progetto di esempio VisualStudioDemo.For an example of a combo box toolbar button, see the example project VisualStudioDemo.

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare i vari metodi nella classe `CMFCToolBarComboBoxButton` . Nell'esempio viene illustrato come abilitare la modifica e le caselle combinate, impostare la posizione verticale dei pulsanti della casella combinata nell'applicazione, impostare l'altezza della casella di riepilogo quando viene rilasciata verso il basso, impostare l'aspetto dello stile piatto dei pulsanti della casella combinata nell'applicazione e impostare il testo nella casella di modifica del pulsante della casella combinata. Questo frammento di codice fa parte dell'esempio Demo di [Visual Studio.](../../overview/visual-cpp-samples.md)

[!code-cpp[NVC_MFC_VisualStudioDemo#36](../../mfc/codesnippet/cpp/cmfctoolbarcomboboxbutton-class_1.cpp)]
[!code-cpp[NVC_MFC_VisualStudioDemo#37](../../mfc/codesnippet/cpp/cmfctoolbarcomboboxbutton-class_2.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)

[CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtoolbarcomboboxbutton.h

## <a name="cmfctoolbarcomboboxbuttonadditem"></a><a name="additem"></a>CMFCToolBarComboBoxButton::AddItem

Aggiunge un elemento univoco alla casella di riepilogo.

```
virtual INT_PTR AddItem(
    LPCTSTR lpszItem,
    DWORD_PTR dwData=0);
```

### <a name="parameters"></a>Parametri

*lpszItem (elemento di gruppo)*<br/>
[in] Testo dell'elemento da aggiungere alla casella di riepilogo.

*dwData (dati)*<br/>
[in] Dati associati all'elemento da aggiungere alla casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Indice dell'ultimo elemento della casella di riepilogo.

### <a name="remarks"></a>Osservazioni

Non utilizzare questo metodo quando lo stile della casella di riepilogo è ordinato.

Se il testo dell'elemento è già presente nella casella di riepilogo, i nuovi dati vengono archiviati con l'elemento esistente. Per la ricerca dell'elemento viene fatta distinzione tra maiuscole e minuscole.

## <a name="cmfctoolbarcomboboxbuttonaddsorteditem"></a><a name="addsorteditem"></a>CMFCToolBarComboBoxButton::AddSortedItem

Aggiunge un elemento alla casella di riepilogo nell'ordine definito dal [Compare](#compare) metodo.

```
virtual INT_PTR AddSortedItem(
    LPCTSTR lpszItem,
    DWORD_PTR dwData=0);
```

### <a name="parameters"></a>Parametri

*lpszItem (elemento di gruppo)*<br/>
[in] Testo dell'elemento da aggiungere alla casella di riepilogo.

*dwData (dati)*<br/>
[in] Dati associati all'elemento da aggiungere alla casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Indice dell'elemento aggiunto alla casella di riepilogo.

### <a name="remarks"></a>Osservazioni

Utilizzare questa funzione per aggiungere elementi alla casella di riepilogo in un ordine specifico.

## <a name="cmfctoolbarcomboboxbuttoncanbestretched"></a><a name="canbestretched"></a>CMFCToolBarComboBoxButton::CanBeStretched

Indica se le dimensioni del pulsante della casella combinata possono cambiare.

```
virtual BOOL CanBeStretched() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce VERO.

## <a name="cmfctoolbarcomboboxbuttoncmfctoolbarcomboboxbutton"></a><a name="cmfctoolbarcomboboxbutton"></a>CMFCToolBarComboBoxButton::CMFCToolBarComboBoxButton

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
[in] ID di comando del nuovo pulsante.

*iImage (immagine)*<br/>
[in] Indice dell'immagine associata al nuovo pulsante.

*DwStyle (in stile dwStyle)*<br/>
[in] Stile del nuovo pulsante.

*ILarghezza*<br/>
[in] Larghezza, in pixel, del nuovo pulsante.

### <a name="remarks"></a>Osservazioni

La larghezza predefinita è 150 pixel.

Per un elenco degli stili dei pulsanti della barra degli strumenti, vedere [Stili dei controlli ToolBar](../../mfc/reference/toolbar-control-styles.md)

## <a name="cmfctoolbarcomboboxbuttoncleardata"></a><a name="cleardata"></a>CMFCToolBarComboBoxButton::ClearData

Elimina i dati definiti dall'utente.

```
virtual void ClearData();
```

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, questo metodo non esegue alcuna operazione. Eseguire l'override di questo metodo in una classe derivata se si desidera eliminare i dati definiti dall'utente.

## <a name="cmfctoolbarcomboboxbuttoncompare"></a><a name="compare"></a>CMFCToolBarComboBoxButton::Compare

Confronta due stringhe.

```
virtual int Compare(
    LPCTSTR lpszItem1,
    LPCTSTR lpszItem2);
```

### <a name="parameters"></a>Parametri

*lpszItem1 (informazioni in stati incomin*<br/>
[in] Prima stringa da confrontare.

*lpszItem2 (informazioni in stati incommi in vi elas*<br/>
[in] Seconda stringa da confrontare.

### <a name="return-value"></a>Valore restituito

Valore che indica la relazione lessicografica con distinzione tra maiuscole e minuscole tra le stringhe. La tabella seguente elenca i possibili valori:

|valore|Descrizione|
|-----------|-----------------|
|\<0|La prima stringa è minore della seconda.|
|0|La prima stringa è uguale alla seconda.|
|>0|La prima stringa è maggiore della seconda.|

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo per modificare la modalità di ordinamento degli elementi nella casella di riepilogo.

Il confronto fa distinzione tra maiuscole e minuscole.

Questo metodo viene chiamato solo dal [AddSortedItem](#addsorteditem) metodo.

## <a name="cmfctoolbarcomboboxbuttoncopyfrom"></a><a name="copyfrom"></a>CMFCToolBarComboBoxButton::CopyFrom

Copia lo stato dell'oggetto specificato `CMFCToolBarComboBoxButton` nell'oggetto corrente.

```
virtual void CopyFrom(const CMFCToolBarButton& src);
```

### <a name="parameters"></a>Parametri

*src*<br/>
[in] Oggetto `CMFCToolBarComboBoxButton` di origine.

## <a name="cmfctoolbarcomboboxbuttoncreatecombo"></a><a name="createcombo"></a>CMFCToolBarComboBoxButton::CreateCombo

Crea una nuova casella combinata per il pulsante della casella combinata.

```
virtual CComboBox* CreateCombo(
    CWnd* pWndParent,
    const CRect& rect);
```

### <a name="parameters"></a>Parametri

*pWndParent (padre di pWndParent)*<br/>
[in] Puntatore alla finestra padre del pulsante.

*Rect*<br/>
[in] Rettangolo di delimitazione della casella combinata.

### <a name="return-value"></a>Valore restituito

Puntatore alla nuova casella combinata se il metodo ha esito positivo; in caso contrario, NULL.

## <a name="cmfctoolbarcomboboxbuttoncreateedit"></a><a name="createedit"></a>CMFCToolBarComboBoxButton::CreateModifica

Crea una nuova casella di modifica per il pulsante della casella combinata.

```
virtual CMFCToolBarComboBoxEdit* CreateEdit(
    CWnd* pWndParent,
    const CRect& rect,
    DWORD dwEditStyle);
```

### <a name="parameters"></a>Parametri

*pWndParent (padre di pWndParent)*<br/>
[in] Puntatore alla finestra padre del pulsante.

*Rect*<br/>
[in] Rettangolo di delimitazione della nuova casella di modifica.

*DwEditStyle (in stile dwEditStyle)*<br/>
[in] Stile di controllo della nuova casella di modifica.

### <a name="return-value"></a>Valore restituito

Un puntatore alla nuova casella di modifica se il metodo ha esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

Il framework chiama questo metodo quando crea una nuova casella di modifica per un pulsante della casella combinata. Eseguire l'override di questo metodo per modificare la modalità di creazione di [CMFCToolBarComboBoxEdit.Override](../../mfc/reference/cmfctoolbarcomboboxedit-class.md) this method to change how CMFCToolBarComboBoxEdit is created.

## <a name="cmfctoolbarcomboboxbuttondeleteitem"></a><a name="deleteitem"></a>CMFCToolBarComboBoxButton::DeleteItem

Elimina un elemento specificato dalla casella di riepilogo.

```
BOOL DeleteItem(int iIndex);
BOOL DeleteItem(DWORD_PTR dwData);
BOOL DeleteItem(LPCTSTR lpszText);
```

### <a name="parameters"></a>Parametri

*Iindex*<br/>
[in] Indice in base zero dell'elemento da eliminare.

*dwData (dati)*<br/>
[in] Dati associati all'elemento da eliminare.

*lpszText*<br/>
[in] Testo dell'elemento da eliminare. Se sono presenti più elementi con lo stesso testo, il primo elemento viene eliminato.

### <a name="return-value"></a>Valore restituito

TRUESe l'elemento è stato individuato ed eliminato correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

## <a name="cmfctoolbarcomboboxbuttonduplicatedata"></a><a name="duplicatedata"></a>CMFCToolBarComboBoxButton::DuplicateData

Duplica i dati definiti dall'utente.

```
virtual void DuplicateData();
```

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, questo metodo non esegue alcuna operazione. Eseguire l'override di questo metodo in una classe derivata se si desidera copiare dati definiti dall'utente.

## <a name="cmfctoolbarcomboboxbuttonenablewindow"></a><a name="enablewindow"></a>CMFCToolBarComboBoxButton::EnableWindow

Abilita o disabilita la modifica e le caselle combinate.

```
virtual void EnableWindow(BOOL bEnable = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
[in] TRUE per abilitare la modifica e le caselle combinate; FALSE per disabilitare la modifica e le caselle combinate.

### <a name="remarks"></a>Osservazioni

Se disabilitati, i controlli non possono diventare attivi e non possono accettare l'input dell'utente.

## <a name="cmfctoolbarcomboboxbuttonexporttomenubutton"></a><a name="exporttomenubutton"></a>CMFCToolBarComboBoxButton::ExportToMenuButton

Copia una stringa dalla tabella delle stringhe dell'applicazione al menu specificato utilizzando l'ID di comando del pulsante della casella combinata.

```
virtual BOOL ExportToMenuButton(CMFCToolBarMenuButton& menuButton) const;
```

### <a name="parameters"></a>Parametri

*menuButton*<br/>
[fuori] Riferimento a un pulsante di menu.

### <a name="return-value"></a>Valore restituito

Sempre TRUE.

## <a name="cmfctoolbarcomboboxbuttonfinditem"></a><a name="finditem"></a>CMFCToolBarComboBoxButton::FindItem

Restituisce l'indice del primo elemento nella casella di riepilogo che contiene una stringa specificata.

```
int FindItem(LPCTSTR lpszText) const;
```

### <a name="parameters"></a>Parametri

*lpszText*<br/>
[in] Testo per il quale eseguire la ricerca nella casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Indice dell'elemento; o CB_ERR se l'elemento non viene trovato.

### <a name="remarks"></a>Osservazioni

## <a name="cmfctoolbarcomboboxbuttongetbycmd"></a><a name="getbycmd"></a>CMFCToolBarComboBoxButton::GetByCmd

Ottiene un puntatore al pulsante della casella combinata con un ID di comando specificato.

```
static CMFCToolBarComboBoxButton* GetByCmd(
    UINT uiCmd,
    BOOL bIsFocus=FALSE);
```

### <a name="parameters"></a>Parametri

*uiCmd (informazioni in stato in questo*<br/>
[in] ID di comando di un pulsante della casella combinata.

*bIsFocus*<br/>
[in] TRUE per cercare solo i pulsanti con lo stato attivo; FALSE per cercare tutti i pulsanti.

### <a name="return-value"></a>Valore restituito

Un puntatore a un pulsante della casella combinata; o NULL se il pulsante non viene trovato.

### <a name="remarks"></a>Osservazioni

## <a name="cmfctoolbarcomboboxbuttongetcombobox"></a><a name="getcombobox"></a>CMFCToolBarComboBoxButton::GetComboBox

Restituisce un puntatore alla casella combinata nel pulsante della casella combinata.

```
CComboBox* GetComboBox() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto [classe CComboBox](../../mfc/reference/ccombobox-class.md) se il metodo ha esito positivo; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

## <a name="cmfctoolbarcomboboxbuttongetcontextmenuid"></a><a name="getcontextmenuid"></a>CMFCToolBarComboBoxButton::GetContextMenuID

Ottiene l'ID risorsa del menu di scelta rapida per il pulsante della casella combinata.

```
UINT GetContextMenuID();
```

### <a name="return-value"></a>Valore restituito

ID della risorsa del menu di scelta rapida.

## <a name="cmfctoolbarcomboboxbuttongetcount"></a><a name="getcount"></a>CMFCToolBarComboBoxButton::GetCount

Restituisce il numero di elementi nella casella di riepilogo.

```
INT_PTR GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nella casella di riepilogo.

### <a name="remarks"></a>Osservazioni

## <a name="cmfctoolbarcomboboxbuttongetcountall"></a><a name="getcountall"></a>CMFCToolBarComboBoxButton::GetCountAll

Ottiene il numero di elementi nella casella di riepilogo di un pulsante della casella combinata con un ID di comando specificato.

```
static int GetCountAll(UINT uiCmd);
```

### <a name="parameters"></a>Parametri

*uiCmd (informazioni in stato in questo*<br/>
[in] ID di comando di un pulsante della casella combinata.

### <a name="return-value"></a>Valore restituito

Il numero di elementi nella casella di riepilogo; in caso contrario, CB_ERR se il pulsante della casella combinata non viene trovato.

### <a name="remarks"></a>Osservazioni

## <a name="cmfctoolbarcomboboxbuttongetcursel"></a><a name="getcursel"></a>CMFCToolBarComboBoxButton::GetCurSel

Ottiene l'indice dell'elemento attualmente selezionato nella casella di riepilogo.

```
int GetCurSel() const;
```

### <a name="return-value"></a>Valore restituito

L'indice dell'elemento attualmente selezionato nella casella di riepilogo; o CB_ERR se non è selezionato alcun elemento.

### <a name="remarks"></a>Osservazioni

L'indice della casella di riepilogo è in base zero.

## <a name="cmfctoolbarcomboboxbuttongetcurselall"></a><a name="getcurselall"></a>CMFCToolBarComboBoxButton::GetCurSelAll

Restituisce l'indice dell'elemento attualmente selezionato nella casella di riepilogo di un pulsante della casella combinata con un ID di comando specificato.

```
static int GetCurSelAll(UINT uiCmd);
```

### <a name="parameters"></a>Parametri

*uiCmd (informazioni in stato in questo*<br/>
[in] ID di comando di un pulsante della casella combinata.

### <a name="return-value"></a>Valore restituito

L'indice dell'elemento attualmente selezionato nella casella di riepilogo; in caso contrario, CB_ERR se non è selezionato alcun elemento o non viene trovato un pulsante della casella combinata.

### <a name="remarks"></a>Osservazioni

L'indice della casella di riepilogo è in base zero.

## <a name="cmfctoolbarcomboboxbuttongeteditctrl"></a><a name="geteditctrl"></a>CMFCToolBarComboBoxButton::GetEditCtrl

Restituisce un puntatore alla casella di modifica nel pulsante della casella combinata.

```
virtual CEdit* GetEditCtrl();
```

### <a name="return-value"></a>Valore restituito

Un puntatore alla casella di modifica se il metodo ha esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

## <a name="cmfctoolbarcomboboxbuttongethwnd"></a><a name="gethwnd"></a>CMFCToolBarComboBoxButton::GetHwnd

Restituisce l'handle di finestra per la casella combinata.

```
virtual HWND GetHwnd();
```

### <a name="return-value"></a>Valore restituito

Handle di finestra o NULL se la casella combinata non è associata a un oggetto finestra.

## <a name="cmfctoolbarcomboboxbuttongetitem"></a><a name="getitem"></a>CMFCToolBarComboBoxButton::GetItem

Restituisce la stringa associata a un elemento in corrispondenza dell'indice specificato nella casella di riepilogo.

```
LPCTSTR GetItem(int iIndex=-1) const;
```

### <a name="parameters"></a>Parametri

*Iindex*<br/>
[in] Indice in base zero di un elemento nella casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Puntatore alla stringa associata all'elemento. in caso contrario, NULL se il parametro index non è valido o se il parametro di indice è -1 e non è presente alcun elemento selezionato nella casella combinata.

### <a name="remarks"></a>Osservazioni

Un parametro di indice pari a -1 restituisce la stringa dell'elemento attualmente selezionato.

## <a name="cmfctoolbarcomboboxbuttongetitemall"></a><a name="getitemall"></a>CMFCToolBarComboBoxButton::GetItemAll

Restituisce la stringa associata a un elemento in corrispondenza di un indice specificato nella casella di riepilogo del pulsante di una casella combinata con un ID di comando specificato.

```
static LPCTSTR GetItemAll(
    UINT uiCmd,
    int iIndex=-1);
```

### <a name="parameters"></a>Parametri

*uiCmd (informazioni in stato in questo*<br/>
[in] ID di comando di un pulsante della casella combinata.

*Iindex*<br/>
[in] Indice in base zero di un elemento nella casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Puntatore alla stringa dell'elemento se il metodo ha esito positivo; in caso contrario, NULL se l'indice non è valido, non viene trovato un pulsante della casella combinata o se index è -1 e non è presente alcun elemento selezionato nella casella combinata.

### <a name="remarks"></a>Osservazioni

Un valore di indice pari a -1 restituisce la stringa dell'elemento attualmente selezionato.

## <a name="cmfctoolbarcomboboxbuttongetitemdata"></a><a name="getitemdata"></a>CMFCToolBarComboBoxButton::GetItemData

Restituisce i dati associati a un elemento in corrispondenza di un indice specifico nella casella di riepilogo.

```
DWORD_PTR GetItemData(int iIndex=-1) const;
```

### <a name="parameters"></a>Parametri

*Iindex*<br/>
[in] Indice in base zero di un elemento nella casella di riepilogo.

### <a name="return-value"></a>Valore restituito

I dati associati all'elemento; o 0 se l'elemento non esiste.

### <a name="remarks"></a>Osservazioni

Un parametro di indice pari a -1 restituisce i dati associati all'elemento attualmente selezionato.

## <a name="cmfctoolbarcomboboxbuttongetitemdataall"></a><a name="getitemdataall"></a>CMFCToolBarComboBoxButton::GetItemDataAllCMFCToolBarComboBoxButton::GetItemDataAll

Restituisce i dati associati a un elemento in corrispondenza di un indice specifico nella casella di riepilogo del pulsante di una casella combinata con un ID di comando specifico.

```
static DWORD_PTR GetItemDataAll(
    UINT uiCmd,
    int iIndex=-1);
```

### <a name="parameters"></a>Parametri

*uiCmd (informazioni in stato in questo*<br/>
[in] ID di comando di un pulsante della casella combinata.

*Iindex*<br/>
[in] Indice in base zero di un elemento nella casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Dati associati all'elemento se il metodo ha esito positivo; in caso contrario, 0 se l'indice specificato non è valido o CB_ERR se il pulsante della casella combinata non viene trovato.

### <a name="remarks"></a>Osservazioni

Un parametro di indice pari a -1 restituisce i dati associati all'elemento attualmente selezionato.

## <a name="cmfctoolbarcomboboxbuttongetitemdataptrall"></a><a name="getitemdataptrall"></a>CMFCToolBarComboBoxButton::GetItemDataPtrAll

Restituisce i dati associati a un elemento in corrispondenza di un indice specifico nella casella di riepilogo del pulsante di una casella combinata con un ID di comando specifico. Questi dati vengono restituiti come puntatore.

```
static void* GetItemDataPtrAll(
    UINT uiCmd,
    int iIndex=-1);
```

### <a name="parameters"></a>Parametri

*uiCmd (informazioni in stato in questo*<br/>
[in] ID di comando del pulsante della casella combinata.

*Iindex*<br/>
[in] Indice in base zero di un elemento nella casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Puntatore associato all'elemento se il metodo ha esito positivo; in caso contrario, -1 se si verifica un errore o NULL se il pulsante della casella combinata non viene trovato.

### <a name="remarks"></a>Osservazioni

## <a name="cmfctoolbarcomboboxbuttongetprompt"></a><a name="getprompt"></a>CMFCToolBarComboBoxButton::GetPrompt

Restituisce la stringa di richiesta per il pulsante della casella combinata.

```
virtual CString GetPrompt() const;
```

### <a name="return-value"></a>Valore restituito

Stringa del prompt.

### <a name="remarks"></a>Osservazioni

Questo metodo non è attualmente implementato.

## <a name="cmfctoolbarcomboboxbuttongettext"></a><a name="gettext"></a>CMFCToolBarComboBoxButton::GetText

Ottiene il testo nella casella di modifica.

```
LPCTSTR GetText() const;
```

### <a name="return-value"></a>Valore restituito

Testo nella casella di modifica.

### <a name="remarks"></a>Osservazioni

## <a name="cmfctoolbarcomboboxbuttongettextall"></a><a name="gettextall"></a>CMFCToolBarComboBoxButton::GetTextAll

Ottiene il testo nella casella di modifica di un pulsante della casella combinata con un ID di comando specificato.

```
static LPCTSTR GetTextAll(UINT uiCmd);
```

### <a name="parameters"></a>Parametri

*uiCmd (informazioni in stato in questo*<br/>
[in] ID di comando di un pulsante specifico della casella combinata.

### <a name="return-value"></a>Valore restituito

Il testo nella casella di modifica se il metodo ha esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

## <a name="cmfctoolbarcomboboxbuttonhasfocus"></a><a name="hasfocus"></a>CMFCToolBarComboBoxButton::HasFocus

Indica se la casella combinata ha attualmente lo stato attivo.

```
virtual BOOL HasFocus() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe la casella combinata ha attualmente lo stato attivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo restituisce anche TRUE se qualsiasi finestra figlio della casella combinata ha attualmente lo stato attivo.

## <a name="cmfctoolbarcomboboxbuttoniscentervert"></a><a name="iscentervert"></a>CMFCToolBarComboBoxButton::IsCenterVert

Restituisce la posizione verticale dei pulsanti della casella combinata nell'applicazione.

```
static BOOL IsCenterVert();
```

### <a name="return-value"></a>Valore restituito

TRUESe i pulsanti sono centrati; FALSE se i pulsanti sono allineati nella parte superiore.

### <a name="remarks"></a>Osservazioni

## <a name="cmfctoolbarcomboboxbuttonisflatmode"></a><a name="isflatmode"></a>CMFCToolBarComboBoxButton::IsFlatMode

Restituisce l'aspetto in stile piatto dei pulsanti delle caselle combinate nell'applicazione.

```
static BOOL IsFlatMode();
```

### <a name="return-value"></a>Valore restituito

TRUESe i pulsanti hanno uno stile piatto; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Lo stile piatto predefinito per i pulsanti delle caselle combinate è FALSO.

## <a name="cmfctoolbarcomboboxbuttonisownerof"></a><a name="isownerof"></a>CMFCToolBarComboBoxButton::IsOwnerOf

Indica se l'handle specificato è associato al pulsante della casella combinata o a uno dei relativi elementi figlio.

```
virtual BOOL IsOwnerOf(HWND hwnd);
```

### <a name="parameters"></a>Parametri

*Hwnd*<br/>
[in] Un handle di finestra.

### <a name="return-value"></a>Valore restituito

TRUESe l'handle viene associato con il pulsante della casella combinata o uno dei relativi elementi figlio. in caso contrario, FALSE.

## <a name="cmfctoolbarcomboboxbuttonisribbonbutton"></a><a name="isribbonbutton"></a>CMFCToolBarComboBoxButton::IsRibbonButton

Indica se il pulsante della casella combinata si trova in un gruppo della barra multifunzione.

```
BOOL IsRibbonButton() const;
```

### <a name="return-value"></a>Valore restituito

Sempre FALSE.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, questo metodo restituisce sempre FALSE, il che significa che il pulsante della casella combinata non viene mai visualizzato in un gruppo della barra multifunzione.

## <a name="cmfctoolbarcomboboxbuttoniswindowvisible"></a><a name="iswindowvisible"></a>CMFCToolBarComboBoxButton::IsWindowVisible

Restituisce lo stato di visibilità del pulsante della casella combinata.

```
virtual BOOL IsWindowVisible();
```

### <a name="return-value"></a>Valore restituito

Stato di visibilità del pulsante della casella combinata.

## <a name="cmfctoolbarcomboboxbuttonnotifycommand"></a><a name="notifycommand"></a>CMFCToolBarComboBoxButton::NotifyCommand

Indica se il pulsante della casella combinata elabora il messaggio.

```
virtual BOOL NotifyCommand(int iNotifyCode);
```

### <a name="parameters"></a>Parametri

*Codice iNotify*<br/>
[in] Messaggio di notifica associato al comando.

### <a name="return-value"></a>Valore restituito

Se il pulsante della casella combinata elabora il messaggio.

## <a name="cmfctoolbarcomboboxbuttononaddtocustomizepage"></a><a name="onaddtocustomizepage"></a>CMFCToolBarComboBoxButton::OnAddToCustomizePage

Chiamato dal framework quando il pulsante viene aggiunto alla finestra di dialogo **Personalizza.**

```
virtual void OnAddToCustomizePage();
```

## <a name="cmfctoolbarcomboboxbuttononcalculatesize"></a><a name="oncalculatesize"></a>CMFCToolBarComboBoxButton::OnCalculateSize

Chiamato dal framework per calcolare le dimensioni del pulsante.

```
virtual SIZE OnCalculateSize(
    CDC* pDC,
    const CSize& sizeDefault,
    BOOL bHorz);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Contesto di dispositivo che visualizza il pulsante della casella combinata.

*sizeDefault (Impostazione predefinita)*<br/>
[in] Dimensione predefinita del pulsante della casella combinata.

*bHorz*<br/>
[in] Stato di ancoraggio della barra degli strumenti padre. TRUE quando la barra degli strumenti è ancorata orizzontalmente e FALSE quando la barra degli strumenti è ancorata verticalmente.

### <a name="return-value"></a>Valore restituito

Struttura `SIZE` che contiene le dimensioni del pulsante della casella combinata, in pixel.

## <a name="cmfctoolbarcomboboxbuttononchangeparentwnd"></a><a name="onchangeparentwnd"></a>CMFCToolBarComboBoxButton::OnChangeParentWnd

Chiamato dal framework quando il pulsante della casella combinata viene inserito in una nuova barra degli strumenti.

```
virtual void OnChangeParentWnd(CWnd* pWndParent);
```

### <a name="parameters"></a>Parametri

*pWndParent (padre di pWndParent)*<br/>
[in] Puntatore alla nuova barra degli strumenti padre.

## <a name="cmfctoolbarcomboboxbuttononclick"></a><a name="onclick"></a>CMFCToolBarComboBoxButton::OnClick

Chiamato dal framework quando l'utente fa clic sul pulsante della casella combinata.

```
virtual BOOL OnClick(
    CWnd* pWnd,
    BOOL bDelay = TRUE);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
[in] Puntatore alla finestra padre del pulsante della casella combinata.

*bRitarda*<br/>
[in] Riservato per l'utilizzo in una classe derivata.

### <a name="return-value"></a>Valore restituito

TRUESe il metodo gestisce l'evento. in caso contrario, FALSE.

## <a name="cmfctoolbarcomboboxbuttononctlcolor"></a><a name="onctlcolor"></a>CMFCToolBarComboBoxButton::OnCtlColor

Chiamato dal framework quando l'utente modifica il colore della barra degli strumenti padre per impostare il colore del pulsante della casella combinata.

```
virtual HBRUSH OnCtlColor(
    CDC* pDC,
    UINT nCtlColor);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Contesto di dispositivo che visualizza il pulsante della casella combinata.

*nCtlColore*<br/>
[in] Non utilizzato.

### <a name="return-value"></a>Valore restituito

Gestire il pennello utilizzato dal framework per disegnare lo sfondo del pulsante della casella combinata.

### <a name="remarks"></a>Osservazioni

Questo metodo imposta anche il colore del testo del pulsante casella combinata.

## <a name="cmfctoolbarcomboboxbuttonondraw"></a><a name="ondraw"></a>CMFCToolBarComboBoxButton::OnDraw

Chiamato dal framework per disegnare il pulsante della casella combinata utilizzando gli stili e le opzioni specificati.

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
[in] Contesto di dispositivo che visualizza il pulsante.

*Rect*<br/>
[in] Rettangolo di delimitazione del pulsante.

*pImmagini*<br/>
[in] Raccolta di immagini associate al pulsante.

*bHorz*<br/>
[in] Stato di ancoraggio della barra degli strumenti padre. TRUE quando la barra degli strumenti è ancorata orizzontalmente e FALSE quando la barra degli strumenti è ancorata verticalmente.

*bCustomizeMode (Modalità di personalizzazione)*<br/>
[in] Se l'applicazione è in modalità di personalizzazione.

*bEvidenziare*<br/>
[in] Se disegnare il pulsante della casella combinata evidenziato.

*bDrawBorder*<br/>
[in] Se disegnare il pulsante della casella combinata con un bordo.

*bGrayDisabledButtons (Pulsanti)*<br/>
[in] TRUE per disegnare i pulsanti disabilitati ombreggiati; FALSE per utilizzare la raccolta di immagini disabilitate.

## <a name="cmfctoolbarcomboboxbuttonondrawoncustomizelist"></a><a name="ondrawoncustomizelist"></a>CMFCToolBarComboBoxButton::OnDrawOnCustomizeList

Chiamato dal framework per disegnare il pulsante della casella combinata nel riquadro **Comandi** della finestra di dialogo **Personalizza.**

```
virtual int OnDrawOnCustomizeList(
    CDC* pDC,
    const CRect& rect,
    BOOL bSelected);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Contesto di dispositivo che visualizza il pulsante della casella combinata.

*Rect*<br/>
[in] Rettangolo di delimitazione del pulsante della casella combinata.

*bSelezionato*<br/>
[in] TRUESe il pulsante casella combinata è selezionato; in caso contrario, FALSE.

### <a name="return-value"></a>Valore restituito

Larghezza, in pixel, del pulsante della casella combinata.

## <a name="cmfctoolbarcomboboxbuttononglobalfontschanged"></a><a name="onglobalfontschanged"></a>CMFCToolBarComboBoxButton::OnGlobalFontsChanged

Chiamato dal framework per impostare il tipo di carattere del pulsante della casella combinata quando il tipo di carattere dell'applicazione viene modificato.

```
virtual void OnGlobalFontsChanged();
```

## <a name="cmfctoolbarcomboboxbuttononmove"></a><a name="onmove"></a>CMFCToolBarComboBoxButton::OnMove

Chiamato dal framework per modificare la posizione del pulsante della casella combinata quando si sposta la barra degli strumenti padre.

```
virtual void OnMove();
```

## <a name="cmfctoolbarcomboboxbuttononshow"></a><a name="onshow"></a>CMFCToolBarComboBoxButton::OnShow

Chiamato dal framework quando il pulsante della casella combinata è nascosto o visualizzato.

```
virtual void OnShow(BOOL bShow);
```

### <a name="parameters"></a>Parametri

*bShow*<br/>
[in] Se nascondere o visualizzare il pulsante della casella combinata.

## <a name="cmfctoolbarcomboboxbuttononsize"></a><a name="onsize"></a>CMFCToolBarComboBoxButton::OnSize

Chiamato dal framework per modificare le dimensioni del pulsante della casella combinata quando le dimensioni della barra degli strumenti padre cambiano.

```
virtual void OnSize(int iSize);
```

### <a name="parameters"></a>Parametri

*IDimensioni*<br/>
[in] Nuova larghezza del pulsante della casella combinata.

## <a name="cmfctoolbarcomboboxbuttononupdatetooltip"></a><a name="onupdatetooltip"></a>Suggerimento CMFCToolBarComboBoxButton::OnUpdateTool

Chiamato dal framework quando l'utente modifica la descrizione comandi per il pulsante della casella combinata.

```
virtual BOOL OnUpdateToolTip(
    CWnd* pWndParent,
    int iButtonIndex,
    CToolTipCtrl& wndToolTip,
    CString& str);
```

### <a name="parameters"></a>Parametri

*pWndParent (padre di pWndParent)*<br/>
[in] Puntatore alla finestra padre per il pulsante della casella combinata.

*Indice iButton*<br/>
[in] ID del pulsante della casella combinata.

*WndToolTip (suggerimento su WNdTool)*<br/>
[in] Suggerimento da associare al pulsante della casella combinata.

*Str*<br/>
[in] Testo della descrizione comandi.

### <a name="return-value"></a>Valore restituito

TRUESe il metodo gestisce l'evento. in caso contrario, FALSE.

## <a name="cmfctoolbarcomboboxbuttonremoveallitems"></a><a name="removeallitems"></a>CMFCToolBarComboBoxButton::RemoveAllItems

Elimina tutti gli elementi dalle caselle di riepilogo e modifica.

```
void RemoveAllItems();
```

### <a name="remarks"></a>Osservazioni

Rimuove tutti gli elementi dalla casella di riepilogo e modifica il controllo di una casella combinata.

## <a name="cmfctoolbarcomboboxbuttonselectitem"></a><a name="selectitem"></a>CMFCToolBarComboBoxButton::SelectItem

Seleziona un elemento nella casella di riepilogo.

```
BOOL SelectItem(
    int iIndex,
    BOOL bNotify=TRUE);

BOOL SelectItem(DWORD_PTR dwData);
BOOL SelectItem(LPCTSTR lpszText);
```

### <a name="parameters"></a>Parametri

*Iindex*<br/>
[in] Indice in base zero di un elemento nella casella di riepilogo.

*bNotifica*<br/>
[in] TRUE per notificare il pulsante della casella combinata della selezione; in caso contrario, FALSE.

*dwData (dati)*<br/>
[in] Dati associati a un elemento nella casella di riepilogo.

*lpszText*<br/>
[in] Testo di un elemento nella casella di riepilogo.

### <a name="return-value"></a>Valore restituito

TRUESe il metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

## <a name="cmfctoolbarcomboboxbuttonselectitemall"></a><a name="selectitemall"></a>CMFCToolBarComboBoxButton::SelectItemAll

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

*uiCmd (informazioni in stato in questo*<br/>
[in] ID di comando del pulsante della casella combinata che contiene la casella di riepilogo.

*Iindex*<br/>
[in] Indice in base zero dell'elemento nella casella di riepilogo. Il valore -1 rimuove qualsiasi selezione corrente nella casella di riepilogo e cancella la casella di modifica.

*dwData (dati)*<br/>
[in] Dati di un elemento nella casella di riepilogo.

*lpszText*<br/>
[in] Testo di un elemento nella casella di riepilogo.

### <a name="return-value"></a>Valore restituito

TRUESe il metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

## <a name="cmfctoolbarcomboboxbuttonserialize"></a><a name="serialize"></a>CMFCToolBarComboBoxButton::Serialize (Serialize)

Legge l'oggetto da un archivio o lo scrive in un archivio.

```
virtual void Serialize(CArchive& ar);
```

### <a name="parameters"></a>Parametri

*Ar*<br/>
[in, out] Oggetto `CArchive` da serializzare.

### <a name="remarks"></a>Osservazioni

Le impostazioni `CArchive` nell'oggetto determinano se questo metodo legge o scrive nell'archivio.

## <a name="cmfctoolbarcomboboxbuttonsetaccdata"></a><a name="setaccdata"></a>CMFCToolBarComboBoxButton::SetACCData

Popola `CAccessibilityData` l'oggetto specificato utilizzando i dati di accessibilità dal pulsante della casella combinata.

```
virtual BOOL SetACCData(
    CWnd* pParent,
    CAccessibilityData& data);
```

### <a name="parameters"></a>Parametri

*pPadre*<br/>
[in] Finestra padre del pulsante della casella combinata.

*data*<br/>
[fuori] Oggetto `CAccessibilityData` che riceve i dati di accessibilità dal pulsante della casella combinata.

### <a name="return-value"></a>Valore restituito

TRUESe il metodo ha esito positivo. in caso contrario, FALSE.

## <a name="cmfctoolbarcomboboxbuttonsetcentervert"></a><a name="setcentervert"></a>CMFCToolBarComboBoxButton::SetCenterVert

Imposta la posizione verticale dei pulsanti delle caselle combinate nell'applicazione.

```
static void SetCenterVert(BOOL bCenterVert=TRUE);
```

### <a name="parameters"></a>Parametri

*bCentroVert*<br/>
[in] TRUE per centrare il pulsante della casella combinata nella barra degli strumenti; FALSE per allineare il pulsante della casella combinata alla parte superiore della barra degli strumenti.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, i pulsanti delle caselle combinate sono allineati in alto.

## <a name="cmfctoolbarcomboboxbuttonsetcontextmenuid"></a><a name="setcontextmenuid"></a>CMFCToolBarComboBoxButton::SetContextMenuID

Imposta l'ID risorsa del menu di scelta rapida per il pulsante della casella combinata.

```
void SetContextMenuID(UINT uiResID);
```

### <a name="parameters"></a>Parametri

*uiResID (informazioni in cui è in stato possibile appun*<br/>
[in] ID della risorsa del menu di scelta rapida.

## <a name="cmfctoolbarcomboboxbuttonsetdropdownheight"></a><a name="setdropdownheight"></a>CMFCToolBarComboBoxButton::SetDropDownHeight

Imposta l'altezza della casella di riepilogo quando viene rilasciata verso il basso.

```
void SetDropDownHeight(int nHeight);
```

### <a name="parameters"></a>Parametri

*nAltezza*<br/>
[in] Altezza, in pixel, della casella di riepilogo.

### <a name="remarks"></a>Osservazioni

L'altezza predefinita è 150 pixel.

## <a name="cmfctoolbarcomboboxbuttonsetflatmode"></a><a name="setflatmode"></a>CMFCToolBarComboBoxButton::SetFlatMode

Imposta l'aspetto dello stile piatto dei pulsanti delle caselle combinate nell'applicazione.

```
static void SetFlatMode(BOOL bFlat=TRUE);
```

### <a name="parameters"></a>Parametri

*bPiatto*<br/>
[in] TRUE per un aspetto piatto stile; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Lo stile piatto predefinito per i pulsanti delle caselle combinate è FALSO.

## <a name="cmfctoolbarcomboboxbuttonsetstyle"></a><a name="setstyle"></a>CMFCToolBarComboBoxButton::SetStyle

Imposta lo stile specificato per il pulsante della casella combinata e ridisegna il controllo se non è disabilitato.

```
virtual void SetStyle(UINT nStyle);
```

### <a name="parameters"></a>Parametri

*nStyle*<br/>
[in] Combinazione bit per bit (OR) di stili della barra degli strumenti.

### <a name="remarks"></a>Osservazioni

Per un elenco degli stili dei pulsanti della barra degli strumenti, vedere [Stili dei controlli ToolBar](../../mfc/reference/toolbar-control-styles.md)

## <a name="cmfctoolbarcomboboxbuttonsettext"></a><a name="settext"></a>CMFCToolBarComboBoxButton::SetText

Imposta il testo nella casella di modifica del pulsante della casella combinata.

```
void SetText(LPCTSTR lpszText);
```

### <a name="parameters"></a>Parametri

*lpszText*<br/>
[in] Puntatore a una stringa che contiene il testo per la casella di modifica.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)<br/>
[Classe CComboBox](../../mfc/reference/ccombobox-class.md)<br/>
[CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton)<br/>
[Procedura dettagliata: inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md)
