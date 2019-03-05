---
title: Classe COleConvertDialog
ms.date: 11/04/2016
f1_keywords:
- COleConvertDialog
- AFXODLGS/COleConvertDialog
- AFXODLGS/COleConvertDialog::COleConvertDialog
- AFXODLGS/COleConvertDialog::DoConvert
- AFXODLGS/COleConvertDialog::DoModal
- AFXODLGS/COleConvertDialog::GetClassID
- AFXODLGS/COleConvertDialog::GetDrawAspect
- AFXODLGS/COleConvertDialog::GetIconicMetafile
- AFXODLGS/COleConvertDialog::GetSelectionType
- AFXODLGS/COleConvertDialog::m_cv
helpviewer_keywords:
- COleConvertDialog [MFC], COleConvertDialog
- COleConvertDialog [MFC], DoConvert
- COleConvertDialog [MFC], DoModal
- COleConvertDialog [MFC], GetClassID
- COleConvertDialog [MFC], GetDrawAspect
- COleConvertDialog [MFC], GetIconicMetafile
- COleConvertDialog [MFC], GetSelectionType
- COleConvertDialog [MFC], m_cv
ms.assetid: a7c57714-31e8-4b78-834d-8ddd1b856a1c
ms.openlocfilehash: d0d2f83a6340224cf0fd6318e470fcfae103d72b
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57267732"
---
# <a name="coleconvertdialog-class"></a>Classe COleConvertDialog

Per altre informazioni, vedere la [OLEUICONVERT](/windows/desktop/api/oledlg/ns-oledlg-tagoleuiconverta) struttura nel SDK di Windows.

## <a name="syntax"></a>Sintassi

```
class COleConvertDialog : public COleDialog
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleConvertDialog::COleConvertDialog](#coleconvertdialog)|Costruisce un oggetto `COleConvertDialog`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleConvertDialog::DoConvert](#doconvert)|Esegue la conversione specificata nella finestra di dialogo.|
|[COleConvertDialog::DoModal](#domodal)|Consente di visualizzare la finestra di dialogo OLE Modifica elemento.|
|[COleConvertDialog::GetClassID](#getclassid)|Ottiene il CLSID associato all'elemento selezionato.|
|[COleConvertDialog::GetDrawAspect](#getdrawaspect)|Specifica se disegnare elementi come un'icona.|
|[COleConvertDialog::GetIconicMetafile](#geticonicmetafile)|Ottiene un handle del metafile associato alla originalissima maschera di questo elemento.|
|[COleConvertDialog::GetSelectionType](#getselectiontype)|Ottiene il tipo dell'opzione selezionata.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleConvertDialog::m_cv](#m_cv)|Struttura che controlla il comportamento della finestra di dialogo.|

## <a name="remarks"></a>Note

> [!NOTE]
>  Il codice dell'applicazione contenitore generato dalla procedura guidata Usa questa classe.

Per altre informazioni sulle finestre di dialogo OLE specifici, vedere l'articolo [finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

[COleDialog](../../mfc/reference/coledialog-class.md)

`COleConvertDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxodlgs. h

##  <a name="coleconvertdialog"></a>  COleConvertDialog::COleConvertDialog

Crea solo un `COleConvertDialog` oggetto.

```
explicit COleConvertDialog (
    COleClientItem* pItem,
    DWORD dwFlags = CF_SELECTCONVERTTO,
    CLSID* pClassID = NULL,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*pItem*<br/>
Punta all'elemento per essere convertito o attivati.

*dwFlags*<br/>
Flag di creazione, che contiene qualsiasi numero dei valori seguenti combinati tramite bit per bit-operatore or:

- CF_SELECTCONVERTTO specifica che il pulsante di opzione Converti in saranno inizialmente selezionato quando viene chiamata nella finestra di dialogo. Questa è l'impostazione predefinita.

- CF_SELECTACTIVATEAS specifica che il pulsante di opzione attiva come verrà inizialmente selezionato quando viene chiamata nella finestra di dialogo.

- CF_SETCONVERTDEFAULT specifica che la classe con CLSID specificato dal `clsidConvertDefault` membro del `m_cv` struttura verrà usata come selezione predefinita nella casella di riepilogo di classe quando è selezionato il pulsante di opzione Converti in.

- CF_SETACTIVATEDEFAULT specifica che la classe con CLSID specificato dal `clsidActivateDefault` membro del `m_cv` struttura verrà usata come selezione predefinita nella casella di riepilogo di classe quando è selezionato il pulsante di opzione attiva come.

- CF_SHOWHELPBUTTON specifica che il pulsante della Guida verrà visualizzato quando viene chiamata la finestra di dialogo.

*pClassID*<br/>
Punta al CLSID dell'elemento da convertire o attivato. Se NULL, il CLSID associato *pItem* verrà utilizzato.

*pParentWnd*<br/>
Punta all'oggetto finestra padre o proprietaria (di tipo `CWnd`) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre della finestra di dialogo è impostata per la finestra principale dell'applicazione.

### <a name="remarks"></a>Note

Per visualizzare la finestra di dialogo, chiamare il [DoModal](#domodal) (funzione).

Per altre informazioni, vedere [chiave CLSID](/windows/desktop/com/clsid-key-hklm) e il [OLEUICONVERT](/windows/desktop/api/oledlg/ns-oledlg-tagoleuiconverta) struttura.

##  <a name="doconvert"></a>  COleConvertDialog::DoConvert

Chiamare questa funzione, dopo essere uscito correttamente dal [DoModal](#domodal), ad esempio la conversione o attivare un oggetto di tipo [COleClientItem](../../mfc/reference/coleclientitem-class.md).

```
BOOL DoConvert(COleClientItem* pItem);
```

### <a name="parameters"></a>Parametri

*pItem*<br/>
Punta all'elemento per essere convertito o attivati. Non può essere NULL.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

L'elemento viene convertito o attivato in base alle informazioni selezionate dall'utente nella finestra di dialogo Converti.

##  <a name="domodal"></a>  COleConvertDialog::DoModal

Chiamare questa funzione per visualizzare la finestra di dialogo Converti OLE.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

Stato di completamento della finestra di dialogo. Uno dei valori seguenti:

- IDOK se la finestra di dialogo viene visualizzata correttamente.

- IDCANCEL, se l'utente ha annullato la finestra di dialogo.

- IDABORT se si è verificato un errore. Se viene restituito IDABORT, chiamare il [COleDialog:: GetLastError](../../mfc/reference/coledialog-class.md#getlasterror) funzione membro per ottenere altre informazioni sul tipo di errore che si sono verificati. Per un elenco dei possibili errori, vedere la [OleUIConvert](/windows/desktop/api/oledlg/nf-oledlg-oleuiconverta) funzione nel SDK di Windows.

### <a name="remarks"></a>Note

Se si desidera inizializzare i vari controlli di finestra di dialogo impostando i membri del [m_cv](#m_cv) struttura, è necessario eseguire questa operazione prima di chiamare `DoModal`, ma dopo che viene costruito l'oggetto finestra di dialogo.

Se `DoModal` restituisce IDOK, è possibile chiamare altri membri funzioni per recuperare le impostazioni o le informazioni che è stato immesso dall'utente nella finestra di dialogo.

##  <a name="getclassid"></a>  COleConvertDialog::GetClassID

Chiamare questa funzione per ottenere il CLSID associato all'elemento selezionato nella finestra di dialogo Converti dall'utente.

```
REFCLSID GetClassID() const;
```

### <a name="return-value"></a>Valore restituito

Il CLSID associato all'elemento selezionato nella finestra di dialogo Convert.

### <a name="remarks"></a>Note

Questa funzione solo dopo la chiamata [DoModal](#domodal) restituisce IDOK.

Per altre informazioni, vedere [CLSID chiave](/windows/desktop/com/clsid-key-hklm) nel SDK di Windows.

##  <a name="getdrawaspect"></a>  COleConvertDialog::GetDrawAspect

Chiamare questa funzione per determinare se l'utente sceglie di visualizzare l'elemento selezionato come icona.

```
DVASPECT GetDrawAspect() const;
```

### <a name="return-value"></a>Valore restituito

Il metodo necessario per il rendering dell'oggetto.

- DVASPECT_CONTENT restituito se non è stata selezionata la casella di controllo Visualizza come icona.

- DVASPECT_ICON restituita se è stata selezionata la casella di controllo Visualizza come icona.

### <a name="remarks"></a>Note

Questa funzione solo dopo la chiamata [DoModal](#domodal) restituisce IDOK.

Per altre informazioni sugli aspetti di disegno, vedere la [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) struttura dei dati in Windows SDK.

##  <a name="geticonicmetafile"></a>  COleConvertDialog::GetIconicMetafile

Chiamare questa funzione per ottenere un handle del metafile che contiene l'aspetto delle icone dell'elemento selezionato.

```
HGLOBAL GetIconicMetafile() const;
```

### <a name="return-value"></a>Valore restituito

L'handle del metafile contenente l'aspetto delle icone dell'elemento selezionato, se la casella di controllo Visualizza come icona è stata selezionata quando è stata chiusa la finestra di dialogo, scegliere OK. in caso contrario NULL.

##  <a name="getselectiontype"></a>  COleConvertDialog::GetSelectionType

Chiamare questa funzione per determinare il tipo di conversione selezionato nella finestra di dialogo Convert.

```
UINT GetSelectionType() const;
```

### <a name="return-value"></a>Valore restituito

Tipo di selezione effettuata.

### <a name="remarks"></a>Note

Vengono specificati i valori di tipo restituito per il `Selection` tipo enumerazione dichiarato nel `COleConvertDialog` classe.

```
enum Selection {
    noConversion,
    convertItem,
    activateAs
    };
```

Seguono brevi descrizioni dei valori seguenti:

- `COleConvertDialog::noConversion` Restituito se la finestra di dialogo è stata annullata o l'utente ha selezionato alcuna conversione. Se `COleConvertDialog::DoModal` restituito IDOK, è possibile che l'utente ha selezionato un'icona diversa rispetto a quello selezionato in precedenza.

- `COleConvertDialog::convertItem` Restituito se è stato selezionato il pulsante di opzione Converti in, l'utente ha selezionato un elemento diverso per la conversione e `DoModal` restituito IDOK.

- `COleConvertDialog::activateAs` Restituito se il pulsante di opzione attiva come è stato selezionato, l'utente ha selezionato un elemento diverso da attivare, e `DoModal` restituito IDOK.

##  <a name="m_cv"></a>  COleConvertDialog::m_cv

Struttura di tipo OLEUICONVERT consentono di controllare il comportamento della finestra di dialogo Convert.

```
OLEUICONVERT m_cv;
```

### <a name="remarks"></a>Note

I membri di questa struttura possono essere modificati direttamente o tramite le funzioni membro.

Per altre informazioni, vedere la [OLEUICONVERT](/windows/desktop/api/oledlg/ns-oledlg-tagoleuiconverta) struttura nel SDK di Windows.

## <a name="see-also"></a>Vedere anche

[Classe COleDialog](../../mfc/reference/coledialog-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDialog](../../mfc/reference/coledialog-class.md)
