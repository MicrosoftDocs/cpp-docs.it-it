---
title: CComboBoxEx (classe)
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
ms.openlocfilehash: c3fd57510a38d597b827f80ab98a0be280ad31e3
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58767769"
---
# <a name="ccomboboxex-class"></a>CComboBoxEx (classe)

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
|[CComboBoxEx::Create](#create)|Crea la casella combinata e lo collega al `CComboBoxEx` oggetto.|
|[CComboBoxEx::CreateEx](#createex)|Crea una casella combinata con gli stili estesi di Windows specificati e lo collega a un `ComboBoxEx` oggetto.|
|[CComboBoxEx::DeleteItem](#deleteitem)|Rimuove un elemento da un `ComboBoxEx` controllo.|
|[CComboBoxEx::GetComboBoxCtrl](#getcomboboxctrl)|Recupera un puntatore al controllo della casella combinata figlio.|
|[CComboBoxEx::GetEditCtrl](#geteditctrl)|Recupera l'handle alla parte di controllo di modifica di un `ComboBoxEx` controllo.|
|[CComboBoxEx::GetExtendedStyle](#getextendedstyle)|Recupera gli stili estesi che sono in uso per un `ComboBoxEx` controllo.|
|[CComboBoxEx::GetImageList](#getimagelist)|Recupera un puntatore all'elenco delle immagini assegnato a un `ComboBoxEx` controllo.|
|[CComboBoxEx::GetItem](#getitem)|Recupera elementi informazioni per un determinato `ComboBoxEx` elemento.|
|[CComboBoxEx::HasEditChanged](#haseditchanged)|Determina se l'utente ha modificato il contenuto del `ComboBoxEx` controllo edit digitando.|
|[CComboBoxEx::InsertItem](#insertitem)|Inserisce un nuovo elemento in un `ComboBoxEx` controllo.|
|[CComboBoxEx::SetExtendedStyle](#setextendedstyle)|Imposta gli stili estesi all'interno di un `ComboBoxEx` controllo.|
|[CComboBoxEx::SetImageList](#setimagelist)|Imposta un elenco di immagini per un `ComboBoxEx` controllo.|
|[CComboBoxEx::SetItem](#setitem)|Imposta gli attributi per un elemento in un `ComboBoxEx` controllo.|
|[CComboBoxEx::SetWindowTheme](#setwindowtheme)|Imposta lo stile di visualizzazione della casella combinata estesa di controllo di finestra.|

## <a name="remarks"></a>Note

Usando `CComboBoxEx` per creare controlli casella combinata, è non è più necessario implementare il proprio codice di disegno di immagini. Usare invece `CComboBoxEx` alle immagini di accesso da un elenco di immagini.

## <a name="image-list-support"></a>Supporto di elenchi immagini

In una casella combinata standard, il proprietario della casella combinata è responsabile della creazione di un'immagine mediante la creazione della casella combinata come un controllo creato dal proprietario. Quando si usa `CComboBoxEx`, non è necessario impostare gli stili di disegno CBS_OWNERDRAWFIXED e CBS_HASSTRINGS perché perché sono implicite. In caso contrario, è necessario scrivere codice per eseguire le operazioni di disegno. Oggetto `CComboBoxEx` controllo supporta fino a tre immagini per ogni elemento: uno per uno stato selezionato, uno per uno stato deselezionato e uno per l'immagine sovrapposta.

## <a name="styles"></a>Stili

`CComboBoxEx` supporta gli stili CBS_SIMPLE, CBS_DROPDOWN, CBS_DROPDOWNLIST e WS_CHILD. Tutti gli altri stili passati quando si crea la finestra vengono ignorati dal controllo. Dopo aver creata la finestra, è possibile specificare altri combinata stili delle caselle chiamando il `CComboBoxEx` funzione membro [SetExtendedStyle](#setextendedstyle). Con questi stili, è possibile:

- Set le ricerche di stringhe nell'elenco per essere distinzione maiuscole/minuscole.

- Creare un controllo casella combinata che utilizza la barra ('/'), barra rovesciata ('\\') e il periodo ('. ') come caratteri come delimitatori di parola. Ciò consente agli utenti di passare dalla parola per parola, utilizzando il tasto di scelta rapida CTRL + tasti di direzione.

- Impostare la casella combinata casella di controllo per visualizzare o non visualizzare un'immagine. Se viene visualizzata alcuna immagine, la casella combinata può rimuovere il rientro del testo che consente di adattare un'immagine.

- Creare un controllo casella combinata narrow, tra cui ridimensionamento in modo che Ritaglia più ampia casella combinata che contiene.

Questi flag di stile sono descritti dettagliatamente nella [utilizzo di CComboBoxEx](../../mfc/using-ccomboboxex.md).

## <a name="item-retention-and-callback-item-attributes"></a>Il mantenimento degli elementi e gli attributi dell'elemento di Callback

Informazioni sull'elemento, ad esempio gli indici per gli elementi e le immagini, i valori del rientro e stringhe di testo, viene archiviate nella struttura Win32 [COMBOBOXEXITEM](/windows/desktop/api/commctrl/ns-commctrl-tagcomboboxexitema), come descritto nel SDK di Windows. La struttura contiene anche i membri che corrispondono ai flag di callback.

Per informazioni dettagliate, concettuale, vedere [utilizzo di CComboBoxEx](../../mfc/using-ccomboboxex.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CComboBox](../../mfc/reference/ccombobox-class.md)

`CComboBoxEx`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

##  <a name="ccomboboxex"></a>  CComboBoxEx::CComboBoxEx

Chiamare questa funzione membro per creare un `CComboBoxEx` oggetto.

```
CComboBoxEx();
```

##  <a name="create"></a>  CComboBoxEx::Create

Crea la casella combinata e lo collega al `CComboBoxEx` oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Specifica la combinazione degli stili casella combinata applicato alla casella combinata. Visualizzare **osservazioni** sotto per altre informazioni sugli stili.

*rect*<br/>
Un riferimento a un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto oppure [RECT](/previous-versions/dd162897\(v=vs.85\)) struttura, ovvero la posizione e dimensioni della casella combinata.

*pParentWnd*<br/>
Un puntatore a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto, ovvero la finestra padre della casella combinata (in genere un `CDialog`). Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo. della casella combinata

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto è stato creato correttamente. in caso contrario 0.

### <a name="remarks"></a>Note

Creare un `CComboBoxEx` oggetto in due passaggi:

1. Chiamare [CComboBoxEx](#ccomboboxex) per costruire un `CComboBoxEx` oggetto.

1. Chiamare questa funzione membro, che crea la casella combinata Windows estesa e lo collega al `CComboBoxEx` oggetto.

Quando si chiama `Create`, MFC Inizializza i controlli comuni.

Quando si crea la casella combinata, è possibile specificare uno o tutti i seguenti stili casella combinata:

- CBS_SIMPLE

- CBS_DROPDOWN

- CBS_DROPDOWNLIST

- CBS_AUTOHSCROLL

- WS_CHILD

Vengono ignorati tutti gli altri stili passati quando si crea la finestra. Il `ComboBoxEx` controllo supporta anche i stili estesi che forniscono funzionalità aggiuntive. Questi stili sono descritte nel [ComboBoxEx controllare stili estesi](/windows/desktop/Controls/comboboxex-control-extended-styles), nel SDK di Windows. Impostare gli stili chiamando [SetExtendedStyle](#setextendedstyle).

Se si desidera utilizzare gli stili estesi di windows con il controllo, chiamare [CreateEx](#createex) invece di `Create`.

##  <a name="createex"></a>  CComboBoxEx::CreateEx

Chiamare questa funzione per creare un controllo casella combinata estesa (una finestra figlio) e associarlo con il `CComboBoxEx` oggetto.

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
Specifica lo stile esteso del controllo da creare. Per un elenco di stili estesi di Windows, vedere la *dwExStyle* parametro per [CreateWindowEx](/windows/desktop/api/winuser/nf-winuser-createwindowexa) nel SDK di Windows.

*dwStyle*<br/>
Stile del controllo casella combinata. Visualizzare [Create](#create) per un elenco degli stili.

*rect*<br/>
Un riferimento a un [RECT](/previous-versions/dd162897\(v=vs.85\)) struttura che descrive le dimensioni e posizione della finestra da creare, nelle coordinate del client *pParentWnd*.

*pParentWnd*<br/>
Puntatore alla finestra padre del controllo.

*nID*<br/>
ID di finestra figlio. del controllo

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Uso `CreateEx` invece di `Create` per applicare stili estesi di Windows, specificati dal prefisso di stile esteso di Windows **WS_EX _**.

`CreateEx` Crea il controllo con gli stili estesi di Windows specificati da *dwExStyle*. È necessario impostare stili estesi specifici per un controllo casella combinata estesa utilizzando [SetExtendedStyle](#setextendedstyle). Ad esempio, usare `CreateEx` per impostare tali stili come WS_EX_CONTEXTHELP, ma userà `SetExtendedStyle` per impostare tali stili come CBES_EX_CASESENSITIVE. Per altre informazioni, vedere gli stili descritti nell'argomento [stili estesi dei controlli ComboBoxEx](/windows/desktop/Controls/comboboxex-control-extended-styles) nel SDK di Windows.

##  <a name="deleteitem"></a>  CComboBoxEx::DeleteItem

Rimuove un elemento da un `ComboBoxEx` controllo.

```
int DeleteItem(int iIndex);
```

### <a name="parameters"></a>Parametri

*iIndex*<br/>
Indice in base zero dell'elemento da rimuovere.

### <a name="return-value"></a>Valore restituito

Il numero di elementi rimanenti nel controllo. Se *iIndex* è valido, la funzione restituisce CB_ERR.

### <a name="remarks"></a>Note

Questa funzione membro implementa la funzionalità del messaggio [CBEM_DELETEITEM](/windows/desktop/Controls/cbem-deleteitem), come descritto nel SDK di Windows. Quando si chiama DeleteItem, un [WM_NOTIFY](/windows/desktop/controls/wm-notify) messaggio con notifica CBEN_DELETEITEM verrà inviato alla finestra padre.

##  <a name="getcomboboxctrl"></a>  CComboBoxEx::GetComboBoxCtrl

Chiamare questa funzione membro per ottenere un puntatore a un controllo casella combinata all'interno di un `CComboBoxEx` oggetto.

```
CComboBox* GetComboBoxCtrl();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto `CComboBox` .

### <a name="remarks"></a>Note

Il `CComboBoxEx` controllo è costituito da una finestra padre, che incapsula un `CComboBox`.

Il `CComboBox` oggetto a cui punta il valore restituito è un oggetto temporaneo e viene eliminato definitivamente durante il tempo di elaborazione di inattività successivo.

##  <a name="geteditctrl"></a>  CComboBoxEx::GetEditCtrl

Chiamare questa funzione membro per ottenere un puntatore per il controllo di modifica di una casella combinata.

```
CEdit* GetEditCtrl();
```

### <a name="return-value"></a>Valore restituito

Un puntatore a un [CEdit](../../mfc/reference/cedit-class.md) oggetto.

### <a name="remarks"></a>Note

Oggetto `CComboBoxEx` controllo Usa una casella di modifica quando viene creato con lo stile CBS_DROPDOWN.

Il `CEdit` oggetto a cui punta il valore restituito è un oggetto temporaneo e viene eliminato definitivamente durante il tempo di elaborazione di inattività successivo.

##  <a name="getextendedstyle"></a>  CComboBoxEx::GetExtendedStyle

Chiamare questa funzione membro per gli stili estesi utilizzati per ottenere un `CComboBoxEx` controllo.

```
DWORD GetExtendedStyle() const;
```

### <a name="return-value"></a>Valore restituito

Il valore DWORD che contiene gli stili estesi che vengono usati per il controllo casella combinata.

### <a name="remarks"></a>Note

Visualizzare [stili estesi dei controlli ComboBoxEx](/windows/desktop/Controls/comboboxex-control-extended-styles) nel SDK di Windows per altre informazioni su questi stili.

##  <a name="getimagelist"></a>  CComboBoxEx::GetImageList

Chiamare questa funzione membro per ottenere un puntatore all'elenco di immagini utilizzato da un `CComboBoxEx` controllo.

```
CImageList* GetImageList() const;
```

### <a name="return-value"></a>Valore restituito

Un puntatore a un [CImageList](../../mfc/reference/cimagelist-class.md) oggetto. In caso contrario, questa funzione membro restituisce NULL.

### <a name="remarks"></a>Note

Il `CImageList` oggetto a cui punta il valore restituito è un oggetto temporaneo e viene eliminato definitivamente durante il tempo di elaborazione di inattività successivo.

##  <a name="getitem"></a>  CComboBoxEx::GetItem

Recupera elementi informazioni per un determinato `ComboBoxEx` elemento.

```
BOOL GetItem(COMBOBOXEXITEM* pCBItem);
```

### <a name="parameters"></a>Parametri

*pCBItem*<br/>
Un puntatore a un [COMBOBOXEXITEM](/windows/desktop/api/commctrl/ns-commctrl-tagcomboboxexitema) struttura che riceverà le informazioni sull'elemento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'operazione ha avuto esito positivo. in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro implementa la funzionalità del messaggio [CBEM_GETITEM](/windows/desktop/Controls/cbem-getitem), come descritto nel SDK di Windows.

##  <a name="haseditchanged"></a>  CComboBoxEx::HasEditChanged

Determina se l'utente ha modificato il contenuto del `ComboBoxEx` controllo edit digitando.

```
BOOL HasEditChanged();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'utente ha digitato nella casella di modifica del controllo. in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro implementa la funzionalità del messaggio [CBEM_HASEDITCHANGED](/windows/desktop/Controls/cbem-haseditchanged), come descritto nel SDK di Windows.

##  <a name="insertitem"></a>  CComboBoxEx::InsertItem

Inserisce un nuovo elemento in un `ComboBoxEx` controllo.

```
int InsertItem(const COMBOBOXEXITEM* pCBItem);
```

### <a name="parameters"></a>Parametri

*pCBItem*<br/>
Un puntatore a un [COMBOBOXEXITEM](/windows/desktop/api/commctrl/ns-commctrl-tagcomboboxexitema) struttura che riceverà le informazioni sull'elemento. Questa struttura contiene valori di flag di callback per l'elemento.

### <a name="return-value"></a>Valore restituito

L'indice in corrispondenza del quale è stato inserito il nuovo elemento, se ha esito positivo. in caso contrario,-1.

### <a name="remarks"></a>Note

Quando si chiama `InsertItem`, una [WM_NOTIFY](/windows/desktop/controls/wm-notify) dei messaggi con [CBEN_INSERTITEM](/windows/desktop/Controls/cben-insertitem) verrà inviata notifica alla finestra padre.

##  <a name="setextendedstyle"></a>  CComboBoxEx::SetExtendedStyle

Chiamare questa funzione membro per impostare gli stili estesi utilizzati per una casella combinata estesi di controllo.

```
DWORD SetExtendedStyle(
    DWORD dwExMask,
    DWORD dwExStyles);
```

### <a name="parameters"></a>Parametri

*dwExMask*<br/>
Un valore DWORD che indica gli stili nel *dwExStyles* sono interessate. Solo gli stili estesi nella *dwExMask* verrà modificato. Tutti gli altri stili verranno mantenute come è. Se questo parametro è zero, quindi tutti gli stili *dwExStyles* saranno interessate.

*dwExStyles*<br/>
Un valore DWORD che contiene il controllo casella combinata estesa stili da impostare per il controllo.

### <a name="return-value"></a>Valore restituito

Un valore DWORD che contiene gli stili estesi usati in precedenza per il controllo.

### <a name="remarks"></a>Note

Visualizzare [stili estesi dei controlli ComboBoxEx](/windows/desktop/Controls/comboboxex-control-extended-styles) nel SDK di Windows per altre informazioni su questi stili.

Per creare una casella combinata estesa con stili di visualizzazione estesa di windows, usare [CreateEx](#createex).

##  <a name="setimagelist"></a>  CComboBoxEx::SetImageList

Imposta un elenco di immagini per un `ComboBoxEx` controllo.

```
CImageList* SetImageList(CImageList* pImageList);
```

### <a name="parameters"></a>Parametri

*pImageList*<br/>
Un puntatore a un `CImageList` oggetto che contiene le immagini da usare con il `CComboBoxEx` controllo.

### <a name="return-value"></a>Valore restituito

Un puntatore a un [CImageList](../../mfc/reference/cimagelist-class.md) contenente le immagini usate in precedenza per il `CComboBoxEx` controllo. NULL se nessun elenco di immagini è stato impostato in precedenza.

### <a name="remarks"></a>Note

Questa funzione membro implementa la funzionalità del messaggio [CBEM_SETIMAGELIST](/windows/desktop/Controls/cbem-setimagelist), come descritto nel SDK di Windows. Se si modifica l'altezza del controllo di modifica predefinito, chiamare la funzione Win32 [SetWindowPos](/windows/desktop/api/winuser/nf-winuser-setwindowpos) per ridimensionare il controllo dopo aver chiamato `SetImageList`, o non viene visualizzata correttamente.

Il `CImageList` oggetto a cui punta il valore restituito è un oggetto temporaneo e viene eliminato definitivamente durante il tempo di elaborazione di inattività successivo.

##  <a name="setitem"></a>  CComboBoxEx::SetItem

Imposta gli attributi per un elemento in un `ComboBoxEx` controllo.

```
BOOL SetItem(const COMBOBOXEXITEM* pCBItem);
```

### <a name="parameters"></a>Parametri

*pCBItem*<br/>
Un puntatore a un [COMBOBOXEXITEM](/windows/desktop/api/commctrl/ns-commctrl-tagcomboboxexitema) struttura che riceverà le informazioni sull'elemento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'operazione ha avuto esito positivo. in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro implementa la funzionalità del messaggio [CBEM_SETITEM](/windows/desktop/Controls/cbem-setitem), come descritto nel SDK di Windows.

##  <a name="setwindowtheme"></a>  CComboBoxEx::SetWindowTheme

Imposta lo stile di visualizzazione della casella combinata estesa di controllo di finestra.

```
HRESULT SetWindowTheme(LPCWSTR pszSubAppName);
```

### <a name="parameters"></a>Parametri

*pszSubAppName*<br/>
Un puntatore a una stringa Unicode che contiene lo stile di visualizzazione di casella combinata estesa da impostare.

### <a name="return-value"></a>Valore restituito

Il valore restituito non viene utilizzato.

### <a name="remarks"></a>Note

Questa funzione membro emula la funzionalità dei [CBEM_SETWINDOWTHEME](/windows/desktop/Controls/cbem-setwindowtheme) del messaggio, come descritto nel SDK di Windows.

## <a name="see-also"></a>Vedere anche

[Esempio MFCIE di MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CComboBox](../../mfc/reference/ccombobox-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CComboBox](../../mfc/reference/ccombobox-class.md)
