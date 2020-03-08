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
ms.openlocfilehash: a884f946b60be0567f39477f434db8efe041e393
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78855602"
---
# <a name="coleinsertdialog-class"></a>Classe COleInsertDialog

Utilizzata per la finestra di dialogo di inserimento oggetto OLE.

## <a name="syntax"></a>Sintassi

```
class COleInsertDialog : public COleDialog
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleInsertDialog:: COleInsertDialog](#coleinsertdialog)|Costruisce un oggetto `COleInsertDialog`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleInsertDialog:: CreateItem](#createitem)|Crea l'elemento selezionato nella finestra di dialogo.|
|[COleInsertDialog::D oModal](#domodal)|Consente di visualizzare la finestra di dialogo OLE Insert Object.|
|[COleInsertDialog:: GetClassID](#getclassid)|Ottiene il CLSID associato all'elemento scelto.|
|[COleInsertDialog:: GetDrawAspect](#getdrawaspect)|Indica se l'elemento deve essere disegnato come icona.|
|[COleInsertDialog:: GetIconicMetafile](#geticonicmetafile)|Ottiene un handle per il Metafile associato alla forma iconica di questo elemento.|
|[COleInsertDialog:: GetPathName](#getpathname)|Ottiene il percorso completo del file selezionato nella finestra di dialogo.|
|[COleInsertDialog:: GetSelectionType](#getselectiontype)|Ottiene il tipo di oggetto selezionato.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleInsertDialog:: m_io](#m_io)|Struttura di tipo OLEUIINSERTOBJECT che controlla il comportamento della finestra di dialogo.|

## <a name="remarks"></a>Osservazioni

Creare un oggetto della classe `COleInsertDialog` quando si desidera chiamare questa finestra di dialogo. Dopo aver creato un oggetto `COleInsertDialog`, è possibile utilizzare la struttura [m_io](#m_io) per inizializzare i valori o gli Stati dei controlli nella finestra di dialogo. La struttura `m_io` è di tipo OLEUIINSERTOBJECT. Per ulteriori informazioni sull'utilizzo di questa classe della finestra di dialogo, vedere la funzione membro [DoModal](#domodal) .

> [!NOTE]
>  Il codice contenitore generato dalla creazione guidata applicazione usa questa classe.

Per ulteriori informazioni, vedere la struttura [OleUIInsertObject](/windows/win32/api/oledlg/ns-oledlg-oleuiinsertobjectw) nel Windows SDK.

Per ulteriori informazioni sulle finestre di dialogo specifiche di OLE, vedere l'articolo finestre [di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).

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

##  <a name="coleinsertdialog"></a>COleInsertDialog:: COleInsertDialog

Questa funzione costruisce solo un oggetto `COleInsertDialog`.

```
COleInsertDialog (
    DWORD dwFlags = IOF_SELECTCREATENEW,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*dwFlags*<br/>
Flag di creazione contenente un numero qualsiasi di valori seguenti da combinare utilizzando l'operatore OR bit per bit:

- IOF_SHOWHELP specifica che il pulsante della guida viene visualizzato quando viene chiamata la finestra di dialogo.

- IOF_SELECTCREATENEW specifica che il pulsante di opzione Crea nuovo verrà selezionato inizialmente quando viene chiamata la finestra di dialogo. Si tratta dell'impostazione predefinita e non può essere utilizzata con IOF_SELECTCREATEFROMFILE.

- IOF_SELECTCREATEFROMFILE specifica che il pulsante di opzione Crea da file verrà selezionato inizialmente quando viene chiamata la finestra di dialogo. Non può essere utilizzato con IOF_SELECTCREATENEW.

- IOF_CHECKLINK specifica che la casella di controllo del collegamento verrà controllata inizialmente quando viene chiamata la finestra di dialogo.

- IOF_DISABLELINK specifica che la casella di controllo del collegamento verrà disabilitata quando viene chiamata la finestra di dialogo.

- IOF_CHECKDISPLAYASICON specifica che la casella di controllo Visualizza come icona verrà inizialmente controllata, verrà visualizzata l'icona corrente e il pulsante Cambia icona verrà abilitato quando viene chiamata la finestra di dialogo.

- IOF_VERIFYSERVERSEXIST specifica che la finestra di dialogo deve convalidare le classi aggiunte alla casella di riepilogo assicurandosi che i server specificati nel database di registrazione esistano prima della visualizzazione della finestra di dialogo. L'impostazione di questo flag può compromettere significativamente le prestazioni.

*pParentWnd*<br/>
Punta all'oggetto padre o alla finestra proprietaria (di tipo `CWnd`) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre dell'oggetto finestra di dialogo viene impostata sulla finestra principale dell'applicazione.

### <a name="remarks"></a>Osservazioni

Per visualizzare la finestra di dialogo, chiamare la funzione [DoModal](#domodal) .

##  <a name="createitem"></a>COleInsertDialog:: CreateItem

Chiamare questa funzione per creare un oggetto di tipo [COleClientItem](../../mfc/reference/coleclientitem-class.md) solo se [DoModal](#domodal) restituisce IDOK.

```
BOOL CreateItem(COleClientItem* pItem);
```

### <a name="parameters"></a>Parametri

*pItem*<br/>
Punta all'elemento da creare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'elemento è stato creato; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Prima di poter chiamare questa funzione, è necessario allocare l'oggetto `COleClientItem`.

##  <a name="domodal"></a>COleInsertDialog::D oModal

Chiamare questa funzione per visualizzare la finestra di dialogo OLE Insert Object.

```
virtual INT_PTR
    DoModal();

INT_PTR
    DoModal(DWORD  dwFlags);
```

### <a name="parameters"></a>Parametri

*dwFlags*<br/>
Uno dei valori seguenti:

`COleInsertDialog::DocObjectsOnly` inserisce solo DocObjects.

`COleInsertDialog::ControlsOnly` inserisce solo i controlli ActiveX.

Zero non inserisce né un DocObject né un controllo ActiveX. Questo valore restituisce la stessa implementazione del primo prototipo elencato sopra.

### <a name="return-value"></a>Valore restituito

Stato di completamento della finestra di dialogo. Uno dei valori seguenti:

- IDOK se la finestra di dialogo è stata visualizzata correttamente.

- IDCANCEL se l'utente ha annullato la finestra di dialogo.

- IDABORT se si è verificato un errore. Se viene restituito IDABORT, chiamare la funzione membro [COleDialog:: GetLastError](../../mfc/reference/coledialog-class.md#getlasterror) per ottenere ulteriori informazioni sul tipo di errore che si è verificato. Per un elenco di possibili errori, vedere la funzione [OleUIInsertObject](/windows/win32/api/oledlg/nf-oledlg-oleuiinsertobjectw) nella Windows SDK.

### <a name="remarks"></a>Osservazioni

Se si desidera inizializzare i vari controlli della finestra di dialogo impostando i membri della struttura [m_io](#m_io) , è necessario eseguire questa operazione prima di chiamare `DoModal`, ma dopo la costruzione dell'oggetto finestra di dialogo.

Se `DoModal` restituisce IDOK, è possibile chiamare altre funzioni membro per recuperare dall'utente le impostazioni o l'input di informazioni nella finestra di dialogo.

##  <a name="getclassid"></a>COleInsertDialog:: GetClassID

Chiamare questa funzione per ottenere il CLSID associato all'elemento selezionato solo se [DoModal](#domodal) restituisce IDOK e il tipo di selezione viene `COleInsertDialog::createNewItem`.

```
REFCLSID GetClassID() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il CLSID associato all'elemento selezionato.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere la [chiave CLSID](/windows/win32/com/clsid-key-hklm) nella Windows SDK.

##  <a name="getdrawaspect"></a>COleInsertDialog:: GetDrawAspect

Chiamare questa funzione per determinare se l'utente ha scelto di visualizzare l'elemento selezionato come icona.

```
DVASPECT GetDrawAspect() const;
```

### <a name="return-value"></a>Valore restituito

Metodo necessario per eseguire il rendering dell'oggetto.

- DVASPECT_CONTENT restituito se la casella di controllo Visualizza come icona non è stata selezionata.

- DVASPECT_ICON restituito se è stata selezionata la casella di controllo Visualizza come icona.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione solo se [DoModal](#domodal) restituisce IDOK.

Per ulteriori informazioni sull'aspetto del disegno, vedere struttura dei dati [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) nell'Windows SDK.

##  <a name="geticonicmetafile"></a>COleInsertDialog:: GetIconicMetafile

Chiamare questa funzione per ottenere un handle per il metafile che contiene l'aspetto iconico dell'elemento selezionato.

```
HGLOBAL GetIconicMetafile() const;
```

### <a name="return-value"></a>Valore restituito

Handle per il metafile contenente l'aspetto iconico dell'elemento selezionato, se è stata selezionata la casella di controllo Visualizza come icona quando la finestra di dialogo è stata annullata scegliendo **OK**. in caso contrario, NULL.

##  <a name="getpathname"></a>COleInsertDialog:: GetPathName

Chiamare questa funzione per ottenere il percorso completo del file selezionato solo se [DoModal](#domodal) restituisce IDOK e il tipo di selezione non è `COleInsertDialog::createNewItem`.

```
CString GetPathName() const;
```

### <a name="return-value"></a>Valore restituito

Percorso completo del file selezionato nella finestra di dialogo. Se il tipo di selezione è `createNewItem`, questa funzione restituisce un `CString` non significativo in modalità di rilascio o causa un'asserzione in modalità di debug.

##  <a name="getselectiontype"></a>COleInsertDialog:: GetSelectionType

Chiamare questa funzione per ottenere il tipo di selezione scelto quando la finestra di dialogo Inserisci oggetto è stata rilasciata scegliendo **OK**.

```
UINT GetSelectionType() const;
```

### <a name="return-value"></a>Valore restituito

Tipo di selezione eseguita.

### <a name="remarks"></a>Osservazioni

I valori dei tipi restituiti sono specificati dal tipo di enumerazione `Selection` dichiarati nella classe `COleInsertDialog`.

```
enum Selection {
    createNewItem,
    insertFromFile,
    linkToFile
    };
```

Le brevi descrizioni di questi valori seguono:

- `COleInsertDialog::createNewItem` è stato selezionato il pulsante di opzione Crea nuovo.

- `COleInsertDialog::insertFromFile` è stato selezionato il pulsante di opzione Crea da file e la casella di controllo collegamento non è stata selezionata.

- `COleInsertDialog::linkToFile` è stato selezionato il pulsante di opzione Crea da file ed è stata selezionata la casella di controllo collegamento.

##  <a name="m_io"></a>COleInsertDialog:: m_io

Struttura di tipo OLEUIINSERTOBJECT utilizzata per controllare il comportamento della finestra di dialogo Inserisci oggetto.

```
OLEUIINSERTOBJECT m_io;
```

### <a name="remarks"></a>Osservazioni

I membri di questa struttura possono essere modificati direttamente o tramite le funzioni membro.

Per ulteriori informazioni, vedere la struttura [OleUIInsertObject](/windows/win32/api/oledlg/ns-oledlg-oleuiinsertobjectw) nel Windows SDK.

## <a name="see-also"></a>Vedere anche

[OCLIENT di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe COleDialog](../../mfc/reference/coledialog-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDialog](../../mfc/reference/coledialog-class.md)
