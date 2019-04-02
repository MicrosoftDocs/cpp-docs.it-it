---
title: Classe COleInsertDialog
ms.date: 11/04/2016
f1_keywords:
- COleInsertDialog
- AFXODLGS/COleInsertDialog
- AFXODLGS/COleInsertDialog::COleInsertDialog
- AFXODLGS/COleInsertDialog::CreateItem
- AFXODLGS/COleInsertDialog::DoModal
- AFXODLGS/COleInsertDialog::GetClassID
- AFXODLGS/COleInsertDialog::GetDrawAspect
- AFXODLGS/COleInsertDialog::GetIconicMetafile
- AFXODLGS/COleInsertDialog::GetPathName
- AFXODLGS/COleInsertDialog::GetSelectionType
- AFXODLGS/COleInsertDialog::m_io
helpviewer_keywords:
- COleInsertDialog [MFC], COleInsertDialog
- COleInsertDialog [MFC], CreateItem
- COleInsertDialog [MFC], DoModal
- COleInsertDialog [MFC], GetClassID
- COleInsertDialog [MFC], GetDrawAspect
- COleInsertDialog [MFC], GetIconicMetafile
- COleInsertDialog [MFC], GetPathName
- COleInsertDialog [MFC], GetSelectionType
- COleInsertDialog [MFC], m_io
ms.assetid: a9ec610b-abde-431e-bd01-c40159a66dbb
ms.openlocfilehash: 27bf98ea4fe6951624873c1463d50f37558c9234
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58781484"
---
# <a name="coleinsertdialog-class"></a>Classe COleInsertDialog

Utilizzata per la finestra di dialogo di inserimento oggetto OLE.

## <a name="syntax"></a>Sintassi

```
class COleInsertDialog : public COleDialog
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleInsertDialog::COleInsertDialog](#coleinsertdialog)|Costruisce un oggetto `COleInsertDialog`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleInsertDialog::CreateItem](#createitem)|Crea l'elemento selezionato nella finestra di dialogo.|
|[COleInsertDialog::DoModal](#domodal)|Consente di visualizzare la finestra di dialogo di inserimento oggetto OLE.|
|[COleInsertDialog::GetClassID](#getclassid)|Ottiene il CLSID associato all'elemento selezionato.|
|[COleInsertDialog::GetDrawAspect](#getdrawaspect)|Indica se disegnare l'elemento sotto forma di icona.|
|[COleInsertDialog::GetIconicMetafile](#geticonicmetafile)|Ottiene un handle del metafile associato alla originalissima maschera di questo elemento.|
|[COleInsertDialog::GetPathName](#getpathname)|Ottiene il percorso completo del file selezionato nella finestra di dialogo.|
|[COleInsertDialog::GetSelectionType](#getselectiontype)|Ottiene il tipo di oggetto selezionato.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleInsertDialog::m_io](#m_io)|Una struttura di tipo OLEUIINSERTOBJECT che controlla il comportamento della finestra di dialogo.|

## <a name="remarks"></a>Note

Creare un oggetto della classe `COleInsertDialog` quando si desidera chiamare questa finestra di dialogo. Dopo una `COleInsertDialog` oggetto è stato costruito, è possibile usare il [m_io](#m_io) struttura per inizializzare i valori o degli stati dei controlli nella finestra di dialogo. Il `m_io` struttura è di tipo OLEUIINSERTOBJECT. Per altre informazioni sull'uso di questa classe di finestra di dialogo, vedere la [DoModal](#domodal) funzione membro.

> [!NOTE]
>  Il codice dell'applicazione contenitore generato dalla procedura guidata Usa questa classe.

Per altre informazioni, vedere la [OLEUIINSERTOBJECT](/windows/desktop/api/oledlg/ns-oledlg-tagoleuiinsertobjecta) struttura nel SDK di Windows.

Per altre informazioni sulle finestre di dialogo OLE specifici, vedere l'articolo [finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

[COleDialog](../../mfc/reference/coledialog-class.md)

`COleInsertDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxodlgs. h

##  <a name="coleinsertdialog"></a>  COleInsertDialog::COleInsertDialog

Questa funzione crea solo un `COleInsertDialog` oggetto.

```
COleInsertDialog (
    DWORD dwFlags = IOF_SELECTCREATENEW,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*dwFlags*<br/>
Flag di creazione che include il numero dei valori seguenti per essere combinati utilizzando l'operatore OR bit per bit:

- IOF_SHOWHELP specifica che il pulsante della Guida verrà visualizzato quando viene chiamata la finestra di dialogo.

- IOF_SELECTCREATENEW specifica che il pulsante di opzione Crea nuovo verrà inizialmente selezionato quando viene chiamata nella finestra di dialogo. Questo è il valore predefinito e non può essere usato con IOF_SELECTCREATEFROMFILE.

- IOF_SELECTCREATEFROMFILE specifica che il pulsante di opzione di creazione da File saranno inizialmente selezionato quando viene chiamata nella finestra di dialogo. Non è utilizzabile con IOF_SELECTCREATENEW.

- IOF_CHECKLINK specifica che la casella di controllo di collegamento saranno controllati inizialmente quando viene chiamata nella finestra di dialogo.

- Verrà disabilitato IOF_DISABLELINK specifica che il collegamento di casella di controllo quando viene chiamata la finestra di dialogo.

- IOF_CHECKDISPLAYASICON specifica che la casella di controllo Visualizza come icona disporrà inizialmente, verrà visualizzata l'icona corrente e il pulsante dell'icona di modifica verrà attivato quando viene chiamata la finestra di dialogo.

- IOF_VERIFYSERVERSEXIST specifica che la finestra di dialogo deve convalidare le classi che viene aggiunto alla casella di riepilogo, garantendo che i server specificati nel database di registrazione esistano prima che venga visualizzata la finestra di dialogo. Impostazione di questo flag può compromettere notevolmente le prestazioni.

*pParentWnd*<br/>
Punta all'oggetto finestra padre o proprietaria (di tipo `CWnd`) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre dell'oggetto finestra di dialogo è impostata per la finestra principale dell'applicazione.

### <a name="remarks"></a>Note

Per visualizzare la finestra di dialogo, chiamare il [DoModal](#domodal) (funzione).

##  <a name="createitem"></a>  COleInsertDialog::CreateItem

Chiamare questa funzione per creare un oggetto di tipo [COleClientItem](../../mfc/reference/coleclientitem-class.md) solo se [DoModal](#domodal) restituisce IDOK.

```
BOOL CreateItem(COleClientItem* pItem);
```

### <a name="parameters"></a>Parametri

*pItem*<br/>
Punta all'elemento da creare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se è stata creata. in caso contrario 0.

### <a name="remarks"></a>Note

È necessario allocare il `COleClientItem` dell'oggetto prima di poter chiamare questa funzione.

##  <a name="domodal"></a>  COleInsertDialog::DoModal

Chiamare questa funzione per visualizzare la finestra di dialogo di inserimento oggetto OLE.

```
virtual INT_PTR
    DoModal();

INT_PTR
    DoModal(DWORD  dwFlags);
```

### <a name="parameters"></a>Parametri

*dwFlags*<br/>
Uno dei valori seguenti:

`COleInsertDialog::DocObjectsOnly` Inserisce solo DocObjects.

`COleInsertDialog::ControlsOnly` Consente di inserire solo i controlli ActiveX.

Zero inserisce DocObject né un controllo ActiveX. Questo valore corrisponde alla stessa implementazione come il primo prototipo elencati in precedenza.

### <a name="return-value"></a>Valore restituito

Stato di completamento della finestra di dialogo. Uno dei valori seguenti:

- IDOK se la finestra di dialogo viene visualizzata correttamente.

- IDCANCEL, se l'utente ha annullato la finestra di dialogo.

- IDABORT se si è verificato un errore. Se viene restituito IDABORT, chiamare il [COleDialog:: GetLastError](../../mfc/reference/coledialog-class.md#getlasterror) funzione membro per ottenere altre informazioni sul tipo di errore che si sono verificati. Per un elenco dei possibili errori, vedere la [OleUIInsertObject](/windows/desktop/api/oledlg/nf-oledlg-oleuiinsertobjecta) funzione nel SDK di Windows.

### <a name="remarks"></a>Note

Se si desidera inizializzare i vari controlli di finestra di dialogo impostando i membri del [m_io](#m_io) struttura, è necessario eseguire questa operazione prima di chiamare `DoModal`, ma dopo che viene costruito l'oggetto finestra di dialogo.

Se `DoModal` restituisce IDOK, è possibile chiamare altri membri funzioni per recuperare le impostazioni o input di informazioni nella finestra di dialogo dall'utente.

##  <a name="getclassid"></a>  COleInsertDialog::GetClassID

Chiamare questa funzione per ottenere il CLSID associato l'elemento solo se selezionato [DoModal](#domodal) restituisce IDOK e il tipo di selezione è `COleInsertDialog::createNewItem`.

```
REFCLSID GetClassID() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il CLSID associato all'elemento selezionato.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [CLSID chiave](/windows/desktop/com/clsid-key-hklm) nel SDK di Windows.

##  <a name="getdrawaspect"></a>  COleInsertDialog::GetDrawAspect

Chiamare questa funzione per determinare se l'utente sceglie di visualizzare l'elemento selezionato come icona.

```
DVASPECT GetDrawAspect() const;
```

### <a name="return-value"></a>Valore restituito

Il metodo necessario per il rendering dell'oggetto.

- DVASPECT_CONTENT restituito se non è stata selezionata la casella di controllo Visualizza come icona.

- DVASPECT_ICON restituita se è stata selezionata la casella di controllo Visualizza come icona.

### <a name="remarks"></a>Note

Chiamare questa funzione solo se [DoModal](#domodal) restituisce IDOK.

Per altre informazioni sugli aspetti di disegno, vedere [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) struttura dei dati in Windows SDK.

##  <a name="geticonicmetafile"></a>  COleInsertDialog::GetIconicMetafile

Chiamare questa funzione per ottenere un handle del metafile che contiene l'aspetto delle icone dell'elemento selezionato.

```
HGLOBAL GetIconicMetafile() const;
```

### <a name="return-value"></a>Valore restituito

L'handle del metafile contenente l'aspetto delle icone dell'elemento selezionato, se la casella di controllo Visualizza come icona è stata selezionata quando è stata chiusa la finestra di dialogo scegliendo **OK**; in caso contrario, NULL.

##  <a name="getpathname"></a>  COleInsertDialog::GetPathName

Chiamare questa funzione per ottenere il percorso completo del solo se file selezionato [DoModal](#domodal) restituisce IDOK e il tipo di selezione non `COleInsertDialog::createNewItem`.

```
CString GetPathName() const;
```

### <a name="return-value"></a>Valore restituito

Il percorso completo del file selezionato nella finestra di dialogo. Se il tipo di selezione `createNewItem`, questa funzione restituisce un significato `CString` in modalità di rilascio o genera un'asserzione in modalità di debug.

##  <a name="getselectiontype"></a>  COleInsertDialog::GetSelectionType

Chiamare questa funzione per ottenere il tipo di selezione scelto quando è stata chiusa la finestra di dialogo Inserisci oggetto scegliendo **OK**.

```
UINT GetSelectionType() const;
```

### <a name="return-value"></a>Valore restituito

Tipo di selezione effettuata.

### <a name="remarks"></a>Note

Vengono specificati i valori di tipo restituito per il `Selection` tipo enumerazione dichiarato nel `COleInsertDialog` classe.

```
enum Selection {
    createNewItem,
    insertFromFile,
    linkToFile
    };
```

Seguono brevi descrizioni dei valori seguenti:

- `COleInsertDialog::createNewItem` È stato selezionato il pulsante di opzione Crea nuovo.

- `COleInsertDialog::insertFromFile` È stato selezionato il pulsante di opzione di creazione da File e non è stata selezionata la casella di controllo di collegamento.

- `COleInsertDialog::linkToFile` È stato selezionato il pulsante di opzione di creazione da File ed è stata selezionata la casella di controllo di collegamento.

##  <a name="m_io"></a>  COleInsertDialog::m_io

Struttura di tipo OLEUIINSERTOBJECT consentono di controllare il comportamento della finestra di dialogo Inserisci oggetto.

```
OLEUIINSERTOBJECT m_io;
```

### <a name="remarks"></a>Note

I membri di questa struttura possono essere modificati direttamente o tramite le funzioni membro.

Per altre informazioni, vedere la [OLEUIINSERTOBJECT](/windows/desktop/api/oledlg/ns-oledlg-tagoleuiinsertobjecta) struttura nel SDK di Windows.

## <a name="see-also"></a>Vedere anche

[Esempio MFC OCLIENT](../../overview/visual-cpp-samples.md)<br/>
[Classe COleDialog](../../mfc/reference/coledialog-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDialog](../../mfc/reference/coledialog-class.md)
