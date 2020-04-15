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
ms.openlocfilehash: 4151ea17fd3223c126715742c6149f2cf55bcbc7
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369469"
---
# <a name="ccomboboxex-class"></a>Classe CComboBoxEx

Estende il controllo della casella combinata fornendo il supporto per elenchi di immagini.

## <a name="syntax"></a>Sintassi

```
class CComboBoxEx : public CComboBox
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComboBoxEx::CComboBoxEx](#ccomboboxex)|Costruisce un oggetto `CComboBoxEx`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComboBoxEx::Creare](#create)|Crea la casella combinata e la `CComboBoxEx` associa all'oggetto.|
|[CComboBoxEx::CreateEx](#createex)|Crea una casella combinata con gli stili estesi di `ComboBoxEx` Windows specificati e la associa a un oggetto.|
|[CComboBoxEx::DeleteItem](#deleteitem)|Rimuove un elemento `ComboBoxEx` da un controllo.|
|[CComboBoxEx::GetComboBoxCtrl](#getcomboboxctrl)|Recupera un puntatore al controllo casella combinata figlio.|
|[CComboBoxEx::GetEditCtrl](#geteditctrl)|Recupera l'handle per la parte `ComboBoxEx` del controllo di modifica di un controllo.|
|[CComboBoxEx::GetExtendedStyle](#getextendedstyle)|Recupera gli stili estesi in uso `ComboBoxEx` per un controllo.|
|[CComboBoxEx::GetImageList](#getimagelist)|Recupera un puntatore all'elenco `ComboBoxEx` immagini assegnato a un controllo.|
|[CComboBoxEx::GetItem](#getitem)|Recupera le informazioni sull'elemento per un elemento specificato. `ComboBoxEx`|
|[CComboBoxEx::HasEditChanged](#haseditchanged)|Determina se l'utente ha `ComboBoxEx` modificato il contenuto del controllo di modifica digitando.|
|[CComboBoxEx::InsertItem](#insertitem)|Inserisce un nuovo `ComboBoxEx` elemento in un controllo.|
|[CComboBoxEx::SetExtendedStyle (combinazione di oggetti)](#setextendedstyle)|Imposta gli stili `ComboBoxEx` estesi all'interno di un controllo.|
|[CComboBoxEx::SetImageList](#setimagelist)|Imposta un elenco `ComboBoxEx` immagini per un controllo.|
|[CComboBoxEx::SetItem](#setitem)|Imposta gli attributi per `ComboBoxEx` un elemento in un controllo.|
|[CComboBoxEx::SetWindowTheme](#setwindowtheme)|Imposta lo stile di visualizzazione del controllo casella combinata estesa.|

## <a name="remarks"></a>Osservazioni

Utilizzando `CComboBoxEx` per creare controlli casella combinata, non è più necessario implementare il proprio codice di disegno immagine. Al contrario, utilizzare `CComboBoxEx` per accedere alle immagini da un elenco di immagini.

## <a name="image-list-support"></a>Supporto per l'elenco immagini

In una casella combinata standard, il proprietario della casella combinata è responsabile del disegno di un'immagine creando la casella combinata come controllo di disegno del proprietario. Quando si `CComboBoxEx`utilizza , non è necessario impostare gli stili di disegno CBS_OWNERDRAWFIXED e CBS_HASSTRINGS perché sono impliciti. In caso contrario, è necessario scrivere codice per eseguire operazioni di disegno. Un `CComboBoxEx` controllo supporta fino a tre immagini per elemento: una per uno stato selezionato, una per uno stato non selezionato e una per un'immagine sovrapposta.

## <a name="styles"></a>Stili

`CComboBoxEx`supporta gli stili CBS_SIMPLE, CBS_DROPDOWN, CBS_DROPDOWNLIST e WS_CHILD. Tutti gli altri stili passati quando si crea la finestra vengono ignorati dal controllo. Dopo aver creato la finestra, è possibile fornire `CComboBoxEx` altri stili di casella combinata chiamando la funzione membro [SetExtendedStyle](#setextendedstyle). Con questi stili, è possibile:

- Impostare le ricerche di stringhe nell'elenco per la distinzione tra maiuscole e minuscole.

- Creare un controllo casella combinata che utilizza i caratteri\\barra ('/'), barra rovesciata (' e punto ('.') come delimitatori di parola. Ciò consente agli utenti di passare da una parola all'altro, utilizzando la scorciatoia da tastiera CTRL e LA freccia.

- Impostare il controllo casella combinata per visualizzare o non visualizzare un'immagine. Se non viene visualizzata alcuna immagine, la casella combinata può rimuovere il rientro del testo che contiene un'immagine.

- Creare un controllo casella combinata stretta, incluso il ridimensionamento in modo che ritaglia la casella combinata più ampia che contiene.

Questi flag di stile sono descritti più avanti in Utilizzo di [CComboBoxEx](../../mfc/using-ccomboboxex.md).

## <a name="item-retention-and-callback-item-attributes"></a>Conservazione degli elementi e attributi degli elementi di callback

Le informazioni sugli elementi, ad esempio gli indici per elementi e immagini, i valori di rientro e le stringhe di testo, vengono archiviate nella struttura Win32 [COMBOBOXEXITEM](/windows/win32/api/commctrl/ns-commctrl-comboboxexitemw), come descritto in Windows SDK. La struttura contiene anche membri che corrispondono ai flag di callback.

Per una discussione concettuale dettagliata, vedere [Utilizzo di CComboBoxEx](../../mfc/using-ccomboboxex.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CComboBox](../../mfc/reference/ccombobox-class.md)

`CComboBoxEx`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

## <a name="ccomboboxexccomboboxex"></a><a name="ccomboboxex"></a>CComboBoxEx::CComboBoxEx

Chiamare questa funzione membro `CComboBoxEx` per creare un oggetto.

```
CComboBoxEx();
```

## <a name="ccomboboxexcreate"></a><a name="create"></a>CComboBoxEx::Creare

Crea la casella combinata e la `CComboBoxEx` associa all'oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*DwStyle (in stile dwStyle)*<br/>
Specifica la combinazione di stili di casella combinata applicati alla casella combinata. Per ulteriori informazioni sugli stili, vedere **la sezione Osservazioni** riportata di seguito.

*Rect*<br/>
Un riferimento a un [oggetto CRect](../../atl-mfc-shared/reference/crect-class.md) o una struttura [RECT,](/previous-versions/dd162897\(v=vs.85\)) ovvero la posizione e le dimensioni della casella combinata.

*pParentWnd (informazioni in due)*<br/>
Puntatore a un oggetto [CWnd](../../mfc/reference/cwnd-class.md) che è la finestra `CDialog`padre della casella combinata (in genere un oggetto ). Non deve essere NULL.

*nID*<br/>
Specifica l'ID di controllo della casella combinata.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto è stato creato correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Creare `CComboBoxEx` un oggetto in due passaggi:Create a object in two steps:

1. Chiamare [CComboBoxEx](#ccomboboxex) per `CComboBoxEx` costruire un oggetto.

1. Chiamare questa funzione membro, che crea la casella combinata `CComboBoxEx` di Windows estesa e la associa all'oggetto.

Quando si `Create`chiama , MFC inizializza i controlli comuni.

Quando si crea la casella combinata, è possibile specificare uno o tutti i seguenti stili di casella combinata:

- CBS_SIMPLE

- CBS_DROPDOWN

- CBS_DROPDOWNLIST

- CBS_AUTOHSCROLL

- WS_CHILD

Tutti gli altri stili passati quando si crea la finestra vengono ignorati. Il `ComboBoxEx` controllo supporta inoltre stili estesi che forniscono funzionalità aggiuntive. Questi stili sono descritti in [Stili estesi del controllo ComboBoxEx](/windows/win32/Controls/comboboxex-control-extended-styles), in Windows SDK. Impostare questi stili chiamando [SetExtendedStyle](#setextendedstyle).

Se si desidera utilizzare gli stili di finestre estese `Create`con il controllo, chiamare [CreateEx](#createex) anziché .

## <a name="ccomboboxexcreateex"></a><a name="createex"></a>CComboBoxEx::CreateEx

Chiamare questa funzione per creare un controllo casella combinata estesa `CComboBoxEx` (una finestra figlio) e associarlo all'oggetto.

```
virtual BOOL CreateEx(
    DWORD dwExStyle,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*DwExStyle (in stile dwExStyle)*<br/>
Specifica lo stile esteso del controllo in fase di creazione. Per un elenco di stili di Windows estesi, vedere il parametro *dwExStyle* per [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) in Windows SDK.

*DwStyle (in stile dwStyle)*<br/>
Stile del controllo casella combinata. Consultate [Creare](#create) per un elenco di stili.

*Rect*<br/>
Riferimento a una struttura [RECT](/previous-versions/dd162897\(v=vs.85\)) che descrive le dimensioni e la posizione della finestra da creare, nelle coordinate client di *pParentWnd*.

*pParentWnd (informazioni in due)*<br/>
Puntatore alla finestra che è padre del controllo.

*nID*<br/>
ID della finestra figlio del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Utilizzare `CreateEx` invece di `Create` applicare stili di Windows estesi, specificati dalla prefazione dello stile esteso di Windows **WS_EX_**.

`CreateEx`crea il controllo con gli stili di Windows estesi specificati da *dwExStyle*. È necessario impostare stili estesi specifici di un controllo casella combinata estesa utilizzando [SetExtendedStyle](#setextendedstyle). Ad esempio, `CreateEx` utilizzare per impostare stili `SetExtendedStyle` quali WS_EX_CONTEXTHELP, ma utilizzare per impostare tali stili come CBES_EX_CASESENSITIVE. Per ulteriori informazioni, vedere gli stili descritti nell'argomento Stili estesi del [controllo ComboBoxEx](/windows/win32/Controls/comboboxex-control-extended-styles) in Windows SDK.

## <a name="ccomboboxexdeleteitem"></a><a name="deleteitem"></a>CComboBoxEx::DeleteItem

Rimuove un elemento `ComboBoxEx` da un controllo.

```
int DeleteItem(int iIndex);
```

### <a name="parameters"></a>Parametri

*Iindex*<br/>
Indice in base zero dell'elemento da rimuovere.

### <a name="return-value"></a>Valore restituito

Numero di elementi rimanenti nel controllo. Se *iIndex* non è valido, la funzione restituisce CB_ERR.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa la funzionalità del messaggio [CBEM_DELETEITEM](/windows/win32/Controls/cbem-deleteitem), come descritto in Windows SDK. Quando si chiama DeleteItem, un messaggio [di WM_NOTIFY](/windows/win32/controls/wm-notify) con CBEN_DELETEITEM notifica verrà inviato alla finestra padre.

## <a name="ccomboboxexgetcomboboxctrl"></a><a name="getcomboboxctrl"></a>CComboBoxEx::GetComboBoxCtrl

Chiamare questa funzione membro per ottenere un puntatore a un controllo casella combinata all'interno di un `CComboBoxEx` oggetto.

```
CComboBox* GetComboBoxCtrl();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto `CComboBox`.

### <a name="remarks"></a>Osservazioni

Il `CComboBoxEx` controllo è costituito da una `CComboBox`finestra padre, che incapsula un oggetto .

L'oggetto `CComboBox` a cui fa riferimento il valore restituito è un oggetto temporaneo e viene eliminato durante il successivo tempo di elaborazione inattivo.

## <a name="ccomboboxexgeteditctrl"></a><a name="geteditctrl"></a>CComboBoxEx::GetEditCtrl

Chiamare questa funzione membro per ottenere un puntatore al controllo di modifica per una casella combinata.

```
CEdit* GetEditCtrl();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un [CEdit](../../mfc/reference/cedit-class.md) oggetto.

### <a name="remarks"></a>Osservazioni

Un `CComboBoxEx` controllo utilizza una casella di modifica quando viene creato con lo stile CBS_DROPDOWN.

L'oggetto `CEdit` a cui fa riferimento il valore restituito è un oggetto temporaneo e viene eliminato durante il successivo tempo di elaborazione inattivo.

## <a name="ccomboboxexgetextendedstyle"></a><a name="getextendedstyle"></a>CComboBoxEx::GetExtendedStyle

Chiamare questa funzione membro per ottenere `CComboBoxEx` gli stili estesi utilizzati per un controllo.

```
DWORD GetExtendedStyle() const;
```

### <a name="return-value"></a>Valore restituito

Valore DWORD che contiene gli stili estesi utilizzati per il controllo casella combinata.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su questi stili, vedere [Stili estesi del controllo ComboBoxEx](/windows/win32/Controls/comboboxex-control-extended-styles) in Windows SDK.

## <a name="ccomboboxexgetimagelist"></a><a name="getimagelist"></a>CComboBoxEx::GetImageList

Chiamare questa funzione membro per ottenere un puntatore all'elenco di immagini utilizzato da un `CComboBoxEx` controllo.

```
CImageList* GetImageList() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un [CImageList](../../mfc/reference/cimagelist-class.md) oggetto. Se ha esito negativo, questa funzione membro restituisce NULL.

### <a name="remarks"></a>Osservazioni

L'oggetto `CImageList` a cui fa riferimento il valore restituito è un oggetto temporaneo e viene eliminato durante il successivo tempo di elaborazione inattivo.

## <a name="ccomboboxexgetitem"></a><a name="getitem"></a>CComboBoxEx::GetItem

Recupera le informazioni sull'elemento per un elemento specificato. `ComboBoxEx`

```
BOOL GetItem(COMBOBOXEXITEM* pCBItem);
```

### <a name="parameters"></a>Parametri

*Oggetto pCBItem*<br/>
Puntatore a una struttura [COMBOBOXEXITEM](/windows/win32/api/commctrl/ns-commctrl-comboboxexitemw) che riceverà le informazioni sull'elemento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'operazione ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa la funzionalità del messaggio [CBEM_GETITEM](/windows/win32/Controls/cbem-getitem), come descritto in Windows SDK.

## <a name="ccomboboxexhaseditchanged"></a><a name="haseditchanged"></a>CComboBoxEx::HasEditChanged

Determina se l'utente ha `ComboBoxEx` modificato il contenuto del controllo di modifica digitando.

```
BOOL HasEditChanged();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'utente ha digitato nella casella di modifica del controllo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa la funzionalità del messaggio [CBEM_HASEDITCHANGED](/windows/win32/Controls/cbem-haseditchanged), come descritto in Windows SDK.

## <a name="ccomboboxexinsertitem"></a><a name="insertitem"></a>CComboBoxEx::InsertItem

Inserisce un nuovo `ComboBoxEx` elemento in un controllo.

```
int InsertItem(const COMBOBOXEXITEM* pCBItem);
```

### <a name="parameters"></a>Parametri

*Oggetto pCBItem*<br/>
Puntatore a una struttura [COMBOBOXEXITEM](/windows/win32/api/commctrl/ns-commctrl-comboboxexitemw) che riceverà le informazioni sull'elemento. Questa struttura contiene valori di flag di callback per l'elemento.

### <a name="return-value"></a>Valore restituito

Indice in corrispondenza del quale il nuovo elemento è stato inserito in caso di esito positivo; in caso contrario -1.

### <a name="remarks"></a>Osservazioni

Quando si `InsertItem`chiama , alla finestra padre verrà inviato un messaggio [di WM_NOTIFY](/windows/win32/controls/wm-notify) con [CBEN_INSERTITEM](/windows/win32/Controls/cben-insertitem) notifica.

## <a name="ccomboboxexsetextendedstyle"></a><a name="setextendedstyle"></a>CComboBoxEx::SetExtendedStyle (combinazione di oggetti)

Chiamare questa funzione membro per impostare gli stili estesi utilizzati per un controllo esteso casella combinata.

```
DWORD SetExtendedStyle(
    DWORD dwExMask,
    DWORD dwExStyles);
```

### <a name="parameters"></a>Parametri

*DwExMaschera*<br/>
Valore DWORD che indica gli stili in *dwExStyles* interessati. Verranno modificati solo gli stili estesi in *dwExMask.* Tutti gli altri stili verranno mantenuti così come sono. Se questo parametro è zero, verranno interessati tutti gli stili in *dwExStyles.*

*Stili dwEx*<br/>
Valore DWORD che contiene gli stili estesi del controllo casella combinata da impostare per il controllo.

### <a name="return-value"></a>Valore restituito

Valore DWORD che contiene gli stili estesi precedentemente utilizzati per il controllo.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su questi stili, vedere [Stili estesi del controllo ComboBoxEx](/windows/win32/Controls/comboboxex-control-extended-styles) in Windows SDK.

Per creare un controllo esteso casella combinata con stili di finestre estese, utilizzare [CreateEx](#createex).

## <a name="ccomboboxexsetimagelist"></a><a name="setimagelist"></a>CComboBoxEx::SetImageList

Imposta un elenco `ComboBoxEx` immagini per un controllo.

```
CImageList* SetImageList(CImageList* pImageList);
```

### <a name="parameters"></a>Parametri

*pImageList (elenco immagine)*<br/>
Puntatore a `CImageList` un oggetto contenente le `CComboBoxEx` immagini da utilizzare con il controllo.

### <a name="return-value"></a>Valore restituito

Puntatore a un [CImageList](../../mfc/reference/cimagelist-class.md) oggetto contenente `CComboBoxEx` le immagini utilizzate in precedenza dal controllo. NULL se in precedenza non è stato impostato alcun elenco immagini.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa la funzionalità del messaggio [CBEM_SETIMAGELIST](/windows/win32/Controls/cbem-setimagelist), come descritto in Windows SDK. Se si modifica l'altezza del controllo di modifica predefinito, chiamare la funzione `SetImageList`Win32 [SetWindowPos](/windows/win32/api/winuser/nf-winuser-setwindowpos) per ridimensionare il controllo dopo la chiamata o non verrà visualizzato correttamente.

L'oggetto `CImageList` a cui fa riferimento il valore restituito è un oggetto temporaneo e viene eliminato durante il successivo tempo di elaborazione inattivo.

## <a name="ccomboboxexsetitem"></a><a name="setitem"></a>CComboBoxEx::SetItem

Imposta gli attributi per `ComboBoxEx` un elemento in un controllo.

```
BOOL SetItem(const COMBOBOXEXITEM* pCBItem);
```

### <a name="parameters"></a>Parametri

*Oggetto pCBItem*<br/>
Puntatore a una struttura [COMBOBOXEXITEM](/windows/win32/api/commctrl/ns-commctrl-comboboxexitemw) che riceverà le informazioni sull'elemento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'operazione ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa la funzionalità del messaggio [CBEM_SETITEM](/windows/win32/Controls/cbem-setitem), come descritto in Windows SDK.

## <a name="ccomboboxexsetwindowtheme"></a><a name="setwindowtheme"></a>CComboBoxEx::SetWindowTheme

Imposta lo stile di visualizzazione del controllo casella combinata estesa.

```
HRESULT SetWindowTheme(LPCWSTR pszSubAppName);
```

### <a name="parameters"></a>Parametri

*pszSubAppName (nome da piszSubApp*<br/>
Puntatore a una stringa Unicode che contiene lo stile di visualizzazione della casella combinata estesa da impostare.

### <a name="return-value"></a>Valore restituito

Il valore restituito non viene utilizzato.

### <a name="remarks"></a>Osservazioni

Questa funzione membro emula la funzionalità del messaggio [CBEM_SETWINDOWTHEME,](/windows/win32/Controls/cbem-setwindowtheme) come descritto in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Esempio MFCIE di MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CComboBox](../../mfc/reference/ccombobox-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CComboBox](../../mfc/reference/ccombobox-class.md)
