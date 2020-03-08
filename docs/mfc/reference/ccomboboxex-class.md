---
title: Classe CComboBoxEx
ms.date: 11/04/2016
f1_keywords:
- CComboBoxEx
- AFXCMN/CComboBoxEx
- AFXCMN/CComboBoxEx::CComboBoxEx
- AFXCMN/CComboBoxEx::Create
- AFXCMN/CComboBoxEx::CreateEx
- AFXCMN/CComboBoxEx::DeleteItem
- AFXCMN/CComboBoxEx::GetComboBoxCtrl
- AFXCMN/CComboBoxEx::GetEditCtrl
- AFXCMN/CComboBoxEx::GetExtendedStyle
- AFXCMN/CComboBoxEx::GetImageList
- AFXCMN/CComboBoxEx::GetItem
- AFXCMN/CComboBoxEx::HasEditChanged
- AFXCMN/CComboBoxEx::InsertItem
- AFXCMN/CComboBoxEx::SetExtendedStyle
- AFXCMN/CComboBoxEx::SetImageList
- AFXCMN/CComboBoxEx::SetItem
- AFXCMN/CComboBoxEx::SetWindowTheme
helpviewer_keywords:
- CComboBoxEx [MFC], CComboBoxEx
- CComboBoxEx [MFC], Create
- CComboBoxEx [MFC], CreateEx
- CComboBoxEx [MFC], DeleteItem
- CComboBoxEx [MFC], GetComboBoxCtrl
- CComboBoxEx [MFC], GetEditCtrl
- CComboBoxEx [MFC], GetExtendedStyle
- CComboBoxEx [MFC], GetImageList
- CComboBoxEx [MFC], GetItem
- CComboBoxEx [MFC], HasEditChanged
- CComboBoxEx [MFC], InsertItem
- CComboBoxEx [MFC], SetExtendedStyle
- CComboBoxEx [MFC], SetImageList
- CComboBoxEx [MFC], SetItem
- CComboBoxEx [MFC], SetWindowTheme
ms.assetid: 33ca960a-2409-478c-84a4-a2ee8ecfe8f7
ms.openlocfilehash: 7d46f175a62cda7f1ff08327830f1dffe2967727
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78865548"
---
# <a name="ccomboboxex-class"></a>Classe CComboBoxEx

Estende il controllo della casella combinata fornendo il supporto per elenchi di immagini.

## <a name="syntax"></a>Sintassi

```
class CComboBoxEx : public CComboBox
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComboBoxEx:: CComboBoxEx](#ccomboboxex)|Costruisce un oggetto `CComboBoxEx`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComboBoxEx:: create](#create)|Crea la casella combinata e la collega all'oggetto `CComboBoxEx`.|
|[CComboBoxEx:: CreateEx](#createex)|Crea una casella combinata con gli stili estesi di Windows specificati e la associa a un oggetto `ComboBoxEx`.|
|[CComboBoxEx::D eleteItem](#deleteitem)|Rimuove un elemento da un controllo `ComboBoxEx`.|
|[CComboBoxEx:: GetComboBoxCtrl](#getcomboboxctrl)|Recupera un puntatore al controllo casella combinata figlio.|
|[CComboBoxEx:: GetEditCtrl](#geteditctrl)|Recupera l'handle per la parte del controllo di modifica di un controllo `ComboBoxEx`.|
|[CComboBoxEx:: GetExtendedStyle](#getextendedstyle)|Recupera gli stili estesi utilizzati per un controllo `ComboBoxEx`.|
|[CComboBoxEx:: GetImages](#getimagelist)|Recupera un puntatore all'elenco di immagini assegnato a un controllo `ComboBoxEx`.|
|[CComboBoxEx:: GetItem](#getitem)|Recupera le informazioni sull'elemento per un elemento di `ComboBoxEx` specificato.|
|[CComboBoxEx:: HasEditChanged](#haseditchanged)|Determina se l'utente ha modificato il contenuto del `ComboBoxEx` controllo di modifica digitando.|
|[CComboBoxEx:: InsertItem](#insertitem)|Inserisce un nuovo elemento in un controllo `ComboBoxEx`.|
|[CComboBoxEx:: SetExtendedStyle](#setextendedstyle)|Imposta gli stili estesi all'interno di un controllo `ComboBoxEx`.|
|[CComboBoxEx:: seimagine](#setimagelist)|Imposta un elenco di immagini per un controllo `ComboBoxEx`.|
|[CComboBoxEx:: SetItem](#setitem)|Imposta gli attributi per un elemento in un controllo `ComboBoxEx`.|
|[CComboBoxEx:: SetWindowTheme](#setwindowtheme)|Imposta lo stile di visualizzazione del controllo casella combinata estesa.|

## <a name="remarks"></a>Osservazioni

Utilizzando `CComboBoxEx` per creare controlli casella combinata, non è più necessario implementare il proprio codice di disegno dell'immagine. Usare invece `CComboBoxEx` per accedere alle immagini da un elenco di immagini.

## <a name="image-list-support"></a>Supporto per elenchi di immagini

In una casella combinata standard, il proprietario della casella combinata è responsabile del disegno di un'immagine mediante la creazione della casella combinata come controllo di disegno del proprietario. Quando si utilizza `CComboBoxEx`, non è necessario impostare gli stili di disegno CBS_OWNERDRAWFIXED e CBS_HASSTRINGS perché sono impliciti. In caso contrario, è necessario scrivere codice per eseguire operazioni di disegno. Un controllo `CComboBoxEx` supporta fino a tre immagini per elemento: una per uno stato selezionato, una per uno stato non selezionato e una per un'immagine sovrapposta.

## <a name="styles"></a>cella

`CComboBoxEx` supporta gli stili CBS_SIMPLE, CBS_DROPDOWN, CBS_DROPDOWNLIST e WS_CHILD. Tutti gli altri stili passati quando si crea la finestra vengono ignorati dal controllo. Dopo la creazione della finestra, è possibile fornire altri stili di caselle combinate chiamando il `CComboBoxEx` funzione membro [SetExtendedStyle](#setextendedstyle). Con questi stili è possibile:

- Impostare le ricerche di stringhe nell'elenco per fare distinzione tra maiuscole e minuscole.

- Creare un controllo casella combinata che usa i caratteri barra ('/'), barra rovesciata ('\\') e punto (' .') come delimitatori di parola. Ciò consente agli utenti di passare da Word a Word, usando il tasto di scelta rapida CTRL + freccia.

- Impostare il controllo casella combinata in modo da visualizzare o non visualizzare un'immagine. Se non viene visualizzata alcuna immagine, la casella combinata può rimuovere il rientro del testo che supporta un'immagine.

- Creare un controllo casella combinata stretta, incluso il ridimensionamento in modo che ritaglia la casella combinata più ampia che contiene.

Questi flag di stile sono descritti ulteriormente in [uso di CComboBoxEx](../../mfc/using-ccomboboxex.md).

## <a name="item-retention-and-callback-item-attributes"></a>Attributi di conservazione degli elementi e di elementi di callback

Le informazioni sugli elementi, ad esempio gli indici per elementi e immagini, i valori dei rientri e le stringhe di testo, vengono archiviate nella struttura Win32 [COMBOBOXEXITEM](/windows/win32/api/commctrl/ns-commctrl-comboboxexitemw), come descritto nel Windows SDK. La struttura contiene anche membri che corrispondono ai flag di callback.

Per una discussione concettuale dettagliata, vedere [uso di CComboBoxEx](../../mfc/using-ccomboboxex.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CComboBox](../../mfc/reference/ccombobox-class.md)

`CComboBoxEx`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

##  <a name="ccomboboxex"></a>CComboBoxEx:: CComboBoxEx

Chiamare questa funzione membro per creare un oggetto `CComboBoxEx`.

```
CComboBoxEx();
```

##  <a name="create"></a>CComboBoxEx:: create

Crea la casella combinata e la collega all'oggetto `CComboBoxEx`.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Specifica la combinazione di stili della casella combinata applicati alla casella combinata. Per ulteriori informazioni sugli stili, vedere la **sezione Osservazioni** di seguito.

*rect*<br/>
Riferimento a un oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) o a una struttura [Rect](/previous-versions/dd162897\(v=vs.85\)) , che rappresenta la posizione e le dimensioni della casella combinata.

*pParentWnd*<br/>
Puntatore a un oggetto [CWnd](../../mfc/reference/cwnd-class.md) che rappresenta la finestra padre della casella combinata, in genere un `CDialog`. Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo della casella combinata.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto è stato creato correttamente; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Creare un oggetto `CComboBoxEx` in due passaggi:

1. Chiamare [CComboBoxEx](#ccomboboxex) per costruire un oggetto `CComboBoxEx`.

1. Chiamare questa funzione membro, che crea la casella combinata Windows estesa e la collega all'oggetto `CComboBoxEx`.

Quando si chiama `Create`, MFC Inizializza i controlli comuni.

Quando si crea la casella combinata, è possibile specificare uno o tutti gli stili della casella combinata seguenti:

- CBS_SIMPLE

- CBS_DROPDOWN

- CBS_DROPDOWNLIST

- CBS_AUTOHSCROLL

- WS_CHILD

Tutti gli altri stili passati quando si crea la finestra vengono ignorati. Il controllo `ComboBoxEx` supporta anche gli stili estesi che forniscono funzionalità aggiuntive. Questi stili sono descritti in [ComboBoxEx Control Extended Styles](/windows/win32/Controls/comboboxex-control-extended-styles), nel Windows SDK. Impostare questi stili chiamando [SetExtendedStyle](#setextendedstyle).

Se si desidera utilizzare gli stili Windows estesi con il controllo, chiamare [CreateEx](#createex) anziché `Create`.

##  <a name="createex"></a>CComboBoxEx:: CreateEx

Chiamare questa funzione per creare un controllo casella combinata estesa (una finestra figlio) e associarlo all'oggetto `CComboBoxEx`.

```
virtual BOOL CreateEx(
    DWORD dwExStyle,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwExStyle*<br/>
Specifica lo stile esteso del controllo da creare. Per un elenco degli stili Windows estesi, vedere il parametro *dwExStyle* per [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) nel Windows SDK.

*dwStyle*<br/>
Stile del controllo casella combinata. Per un elenco di stili, vedere [create](#create) .

*rect*<br/>
Riferimento a una struttura [Rect](/previous-versions/dd162897\(v=vs.85\)) che descrive le dimensioni e la posizione della finestra da creare, nelle coordinate client di *pParentWnd*.

*pParentWnd*<br/>
Puntatore alla finestra che rappresenta l'elemento padre del controllo.

*nID*<br/>
ID della finestra figlio del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Utilizzare `CreateEx` anziché `Create` per applicare gli stili di Windows estesi, specificati dall' **WS_EX_** di prefazione dello stile esteso di Windows.

`CreateEx` crea il controllo con gli stili Windows estesi specificati da *dwExStyle*. È necessario impostare gli stili estesi specifici di un controllo casella combinata estesa usando [SetExtendedStyle](#setextendedstyle). Utilizzare ad esempio `CreateEx` per impostare tali stili come WS_EX_CONTEXTHELP, ma utilizzare `SetExtendedStyle` per impostare tali stili come CBES_EX_CASESENSITIVE. Per ulteriori informazioni, vedere gli stili descritti nell'argomento [ComboBoxEx Control Extended Styles](/windows/win32/Controls/comboboxex-control-extended-styles) nella Windows SDK.

##  <a name="deleteitem"></a>CComboBoxEx::D eleteItem

Rimuove un elemento da un controllo `ComboBoxEx`.

```
int DeleteItem(int iIndex);
```

### <a name="parameters"></a>Parametri

*iIndex*<br/>
Indice in base zero dell'elemento da rimuovere.

### <a name="return-value"></a>Valore restituito

Numero di elementi rimanenti nel controllo. Se *iIndex* non è valido, la funzione restituisce CB_ERR.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa la funzionalità del messaggio [CBEM_DELETEITEM](/windows/win32/Controls/cbem-deleteitem), come descritto nel Windows SDK. Quando si chiama DeleteItem, alla finestra padre verrà inviato un messaggio di [WM_NOTIFY](/windows/win32/controls/wm-notify) con CBEN_DELETEITEM notifica.

##  <a name="getcomboboxctrl"></a>CComboBoxEx:: GetComboBoxCtrl

Chiamare questa funzione membro per ottenere un puntatore a un controllo casella combinata all'interno di un oggetto `CComboBoxEx`.

```
CComboBox* GetComboBoxCtrl();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto `CComboBox`.

### <a name="remarks"></a>Osservazioni

Il controllo `CComboBoxEx` è costituito da una finestra padre che incapsula una `CComboBox`.

Il `CComboBox` oggetto a cui fa riferimento il valore restituito è un oggetto temporaneo e viene eliminato definitivamente durante il successivo tempo di elaborazione inattivo.

##  <a name="geteditctrl"></a>CComboBoxEx:: GetEditCtrl

Chiamare questa funzione membro per ottenere un puntatore al controllo di modifica per una casella combinata.

```
CEdit* GetEditCtrl();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto [CEdit](../../mfc/reference/cedit-class.md) .

### <a name="remarks"></a>Osservazioni

Un controllo `CComboBoxEx` usa una casella di modifica quando viene creata con lo stile CBS_DROPDOWN.

Il `CEdit` oggetto a cui fa riferimento il valore restituito è un oggetto temporaneo e viene eliminato definitivamente durante il successivo tempo di elaborazione inattivo.

##  <a name="getextendedstyle"></a>CComboBoxEx:: GetExtendedStyle

Chiamare questa funzione membro per ottenere gli stili estesi utilizzati per un controllo `CComboBoxEx`.

```
DWORD GetExtendedStyle() const;
```

### <a name="return-value"></a>Valore restituito

Valore DWORD che contiene gli stili estesi utilizzati per il controllo casella combinata.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su questi stili, vedere [ComboBoxEx controllare gli stili estesi](/windows/win32/Controls/comboboxex-control-extended-styles) nel Windows SDK.

##  <a name="getimagelist"></a>CComboBoxEx:: GetImages

Chiamare questa funzione membro per ottenere un puntatore all'elenco di immagini utilizzato da un controllo `CComboBoxEx`.

```
CImageList* GetImageList() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto [CImageList](../../mfc/reference/cimagelist-class.md) . Se ha esito negativo, questa funzione membro restituisce NULL.

### <a name="remarks"></a>Osservazioni

Il `CImageList` oggetto a cui fa riferimento il valore restituito è un oggetto temporaneo e viene eliminato definitivamente durante il successivo tempo di elaborazione inattivo.

##  <a name="getitem"></a>CComboBoxEx:: GetItem

Recupera le informazioni sull'elemento per un elemento di `ComboBoxEx` specificato.

```
BOOL GetItem(COMBOBOXEXITEM* pCBItem);
```

### <a name="parameters"></a>Parametri

*pCBItem*<br/>
Puntatore a una struttura [COMBOBOXEXITEM](/windows/win32/api/commctrl/ns-commctrl-comboboxexitemw) che riceverà le informazioni sull'elemento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'operazione ha avuto esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa la funzionalità del messaggio [CBEM_GETITEM](/windows/win32/Controls/cbem-getitem), come descritto nel Windows SDK.

##  <a name="haseditchanged"></a>CComboBoxEx:: HasEditChanged

Determina se l'utente ha modificato il contenuto del `ComboBoxEx` controllo di modifica digitando.

```
BOOL HasEditChanged();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'utente ha digitato nella casella di modifica del controllo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa la funzionalità del messaggio [CBEM_HASEDITCHANGED](/windows/win32/Controls/cbem-haseditchanged), come descritto nel Windows SDK.

##  <a name="insertitem"></a>CComboBoxEx:: InsertItem

Inserisce un nuovo elemento in un controllo `ComboBoxEx`.

```
int InsertItem(const COMBOBOXEXITEM* pCBItem);
```

### <a name="parameters"></a>Parametri

*pCBItem*<br/>
Puntatore a una struttura [COMBOBOXEXITEM](/windows/win32/api/commctrl/ns-commctrl-comboboxexitemw) che riceverà le informazioni sull'elemento. Questa struttura contiene i valori dei flag di callback per l'elemento.

### <a name="return-value"></a>Valore restituito

Indice in corrispondenza del quale è stato inserito il nuovo elemento in caso di esito positivo; in caso contrario,-1.

### <a name="remarks"></a>Osservazioni

Quando si chiama `InsertItem`, alla finestra padre verrà inviato un messaggio di [WM_NOTIFY](/windows/win32/controls/wm-notify) con [CBEN_INSERTITEM](/windows/win32/Controls/cben-insertitem) notifica.

##  <a name="setextendedstyle"></a>CComboBoxEx:: SetExtendedStyle

Chiamare questa funzione membro per impostare gli stili estesi utilizzati per un controllo esteso della casella combinata.

```
DWORD SetExtendedStyle(
    DWORD dwExMask,
    DWORD dwExStyles);
```

### <a name="parameters"></a>Parametri

*dwExMask*<br/>
Valore DWORD che indica gli stili in *dwExStyles* che devono essere interessati. Solo gli stili estesi in *dwExMask* verranno modificati. Tutti gli altri stili verranno mantenuti così come sono. Se questo parametro è zero, saranno interessati tutti gli stili in *dwExStyles* .

*dwExStyles*<br/>
Valore DWORD che contiene gli stili estesi del controllo casella combinata da impostare per il controllo.

### <a name="return-value"></a>Valore restituito

Valore DWORD che contiene gli stili estesi usati in precedenza per il controllo.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su questi stili, vedere [ComboBoxEx controllare gli stili estesi](/windows/win32/Controls/comboboxex-control-extended-styles) nel Windows SDK.

Per creare un controllo esteso della casella combinata con stili Windows estesi, usare [CreateEx](#createex).

##  <a name="setimagelist"></a>CComboBoxEx:: seimagine

Imposta un elenco di immagini per un controllo `ComboBoxEx`.

```
CImageList* SetImageList(CImageList* pImageList);
```

### <a name="parameters"></a>Parametri

*pImageList*<br/>
Puntatore a un oggetto `CImageList` contenente le immagini da utilizzare con il controllo `CComboBoxEx`.

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto [CImageList](../../mfc/reference/cimagelist-class.md) contenente le immagini utilizzate in precedenza dal controllo `CComboBoxEx`. NULL se non è stato impostato in precedenza alcun elenco di immagini.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa la funzionalità del messaggio [CBEM_SETIMAGELIST](/windows/win32/Controls/cbem-setimagelist), come descritto nel Windows SDK. Se si modifica l'altezza del controllo di modifica predefinito, chiamare la funzione Win32 [SetWindowPos](/windows/win32/api/winuser/nf-winuser-setwindowpos) per ridimensionare il controllo dopo aver chiamato `SetImageList`o non verrà visualizzato correttamente.

Il `CImageList` oggetto a cui fa riferimento il valore restituito è un oggetto temporaneo e viene eliminato definitivamente durante il successivo tempo di elaborazione inattivo.

##  <a name="setitem"></a>CComboBoxEx:: SetItem

Imposta gli attributi per un elemento in un controllo `ComboBoxEx`.

```
BOOL SetItem(const COMBOBOXEXITEM* pCBItem);
```

### <a name="parameters"></a>Parametri

*pCBItem*<br/>
Puntatore a una struttura [COMBOBOXEXITEM](/windows/win32/api/commctrl/ns-commctrl-comboboxexitemw) che riceverà le informazioni sull'elemento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'operazione ha avuto esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa la funzionalità del messaggio [CBEM_SETITEM](/windows/win32/Controls/cbem-setitem), come descritto nel Windows SDK.

##  <a name="setwindowtheme"></a>CComboBoxEx:: SetWindowTheme

Imposta lo stile di visualizzazione del controllo casella combinata estesa.

```
HRESULT SetWindowTheme(LPCWSTR pszSubAppName);
```

### <a name="parameters"></a>Parametri

*pszSubAppName*<br/>
Puntatore a una stringa Unicode che contiene lo stile di visualizzazione della casella combinata estesa da impostare.

### <a name="return-value"></a>Valore restituito

Il valore restituito non viene utilizzato.

### <a name="remarks"></a>Osservazioni

Questa funzione membro emula la funzionalità del messaggio di [CBEM_SETWINDOWTHEME](/windows/win32/Controls/cbem-setwindowtheme) , come descritto nel Windows SDK.

## <a name="see-also"></a>Vedere anche

[MFCIE di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CComboBox](../../mfc/reference/ccombobox-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CComboBox](../../mfc/reference/ccombobox-class.md)
