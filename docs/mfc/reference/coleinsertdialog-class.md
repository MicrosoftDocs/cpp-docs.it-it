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
ms.openlocfilehash: b5de4ff5daa80e1d8727444a4cfd275597e18c08
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374964"
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
|[COleInsertDialog::DoModal](#domodal)|Visualizza la finestra di dialogo Inserisci oggetto OLE.|
|[COleInsertDialog::GetClassID](#getclassid)|Ottiene il CLSID associato all'elemento selezionato.|
|[COleInsertDialog::GetDrawAspect](#getdrawaspect)|Indica se disegnare l'elemento come icona.|
|[COleInsertDialog::GetIconicMetafile](#geticonicmetafile)|Ottiene un handle per il metafile associato al form iconico di questo elemento.|
|[COleInsertDialog::NomePercorso](#getpathname)|Ottiene il percorso completo del file scelto nella finestra di dialogo.|
|[COleInsertDialog::GetSelectionType](#getselectiontype)|Ottiene il tipo di oggetto selezionato.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleInsertDialog::m_io](#m_io)|Struttura di tipo OLEUIINSERTOBJECT che controlla il comportamento della finestra di dialogo.|

## <a name="remarks"></a>Osservazioni

Creare un oggetto `COleInsertDialog` di classe quando si desidera chiamare questa finestra di dialogo. Dopo `COleInsertDialog` aver costruito un oggetto, è possibile utilizzare la struttura [m_io](#m_io) per inizializzare i valori o gli stati dei controlli nella finestra di dialogo. La `m_io` struttura è di tipo OLEUIINSERTOBJECT. Per altre informazioni sull'uso di questa classe di finestre di dialogo, vedere la funzione membro [DoModal.For](#domodal) more information about using this dialog class, see the DoModal member function.

> [!NOTE]
> Il codice del contenitore generato dalla creazione guidata dall'applicazione utilizza questa classe.

Per ulteriori informazioni, vedere la struttura [OLEUIINSERTOBJECT](/windows/win32/api/oledlg/ns-oledlg-oleuiinsertobjectw) in Windows SDK.

Per ulteriori informazioni sulle finestre di dialogo specifiche di OLE, vedere l'articolo [Finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

[COleDialog](../../mfc/reference/coledialog-class.md)

`COleInsertDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxodlgs.h

## <a name="coleinsertdialogcoleinsertdialog"></a><a name="coleinsertdialog"></a>COleInsertDialog::COleInsertDialog

Questa funzione costruisce `COleInsertDialog` solo un oggetto.

```
COleInsertDialog (
    DWORD dwFlags = IOF_SELECTCREATENEW,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*dwFlags*<br/>
Flag di creazione che contiene un numero qualsiasi dei seguenti valori da combinare utilizzando l'operatore OR bit per bit:

- IOF_SHOWHELP specifica che il pulsante ?da visualizzare quando viene chiamata la finestra di dialogo.

- IOF_SELECTCREATENEW specifica che il pulsante di opzione Crea nuovo verrà selezionato inizialmente quando viene chiamata la finestra di dialogo. Questa è l'impostazione predefinita e non può essere utilizzata con IOF_SELECTCREATEFROMFILE.

- IOF_SELECTCREATEFROMFILE specifica che il pulsante di opzione Crea da file verrà selezionato inizialmente quando viene chiamata la finestra di dialogo. Non può essere utilizzato con IOF_SELECTCREATENEW.

- IOF_CHECKLINK specifica che la casella di controllo Collegamento verrà selezionata inizialmente quando viene chiamata la finestra di dialogo.

- IOF_DISABLELINK Specifica che la casella di controllo Collegamento sarà disabilitata quando viene chiamata la finestra di dialogo.

- IOF_CHECKDISPLAYASICON specifica che la casella di controllo Visualizza come icona verrà selezionata inizialmente, verrà visualizzata l'icona corrente e il pulsante Cambia icona verrà abilitato quando viene chiamata la finestra di dialogo.

- IOF_VERIFYSERVERSEXIST Specifica che la finestra di dialogo deve convalidare le classi aggiunte alla casella di riepilogo assicurandosi che i server specificati nel database di registrazione esistano prima della visualizzazione della finestra di dialogo. L'impostazione di questo flag può compromettere in modo significativo le prestazioni.

*pParentWnd (informazioni in due)*<br/>
Punta all'oggetto finestra padre o `CWnd`proprietario (di tipo ) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre dell'oggetto finestra di dialogo viene impostata sulla finestra principale dell'applicazione.

### <a name="remarks"></a>Osservazioni

Per visualizzare la finestra di dialogo, chiamare la funzione [DoModal](#domodal) .

## <a name="coleinsertdialogcreateitem"></a><a name="createitem"></a>COleInsertDialog::CreateItem

Chiamare questa funzione per creare un oggetto di tipo [COleClientItem](../../mfc/reference/coleclientitem-class.md) solo se [DoModal](#domodal) restituisce IDOK.

```
BOOL CreateItem(COleClientItem* pItem);
```

### <a name="parameters"></a>Parametri

*pItem (elemento)*<br/>
Punta all'elemento da creare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'elemento è stato creato; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

È necessario `COleClientItem` allocare l'oggetto prima di poter chiamare questa funzione.

## <a name="coleinsertdialogdomodal"></a><a name="domodal"></a>COleInsertDialog::DoModal

Chiamare questa funzione per visualizzare la finestra di dialogo Inserisci oggetto OLE.

```
virtual INT_PTR
    DoModal();

INT_PTR
    DoModal(DWORD  dwFlags);
```

### <a name="parameters"></a>Parametri

*dwFlags*<br/>
Uno dei valori seguenti:

`COleInsertDialog::DocObjectsOnly`inserisce solo DocObjects.

`COleInsertDialog::ControlsOnly`inserisce solo controlli ActiveX.

Il valore zero non inserisce né un DocObject né un controllo ActiveX. Questo valore determina la stessa implementazione del primo prototipo elencato in precedenza.

### <a name="return-value"></a>Valore restituito

Stato di completamento per la finestra di dialogo. Uno dei valori seguenti:

- IDOK se la finestra di dialogo è stata visualizzata correttamente.

- IDCANCEL se l'utente ha annullato la finestra di dialogo.

- IDABORT se si è verificato un errore. Se viene restituito IDABORT, chiamare il [COleDialog::GetLastError](../../mfc/reference/coledialog-class.md#getlasterror) funzione membro per ottenere ulteriori informazioni sul tipo di errore che si è verificato. Per un elenco dei possibili errori, vedere la funzione [OleUIInsertObject](/windows/win32/api/oledlg/nf-oledlg-oleuiinsertobjectw) in Windows SDK.

### <a name="remarks"></a>Osservazioni

Se si desidera inizializzare i vari controlli della finestra di dialogo `DoModal`impostando i membri della [struttura m_io,](#m_io) è necessario eseguire questa operazione prima di chiamare , ma dopo la costruzione dell'oggetto finestra di dialogo.

Se `DoModal` restituisce IDOK, è possibile chiamare altre funzioni membro per recuperare le impostazioni o le informazioni immesse nella finestra di dialogo dall'utente.

## <a name="coleinsertdialoggetclassid"></a><a name="getclassid"></a>COleInsertDialog::GetClassID

Chiamare questa funzione per ottenere il CLSID associato all'elemento selezionato solo `COleInsertDialog::createNewItem`se [DoModal](#domodal) restituisce IDOK e il tipo di selezione è .

```
REFCLSID GetClassID() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il CLSID associato all'elemento selezionato.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [chiave CLSID](/windows/win32/com/clsid-key-hklm) in Windows SDK.

## <a name="coleinsertdialoggetdrawaspect"></a><a name="getdrawaspect"></a>COleInsertDialog::GetDrawAspect

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

Per ulteriori informazioni sull'aspetto del disegno, vedere struttura dei dati [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) in Windows SDK.

## <a name="coleinsertdialoggeticonicmetafile"></a><a name="geticonicmetafile"></a>COleInsertDialog::GetIconicMetafile

Chiamare questa funzione per ottenere un handle per il metafile che contiene l'aspetto iconico dell'elemento selezionato.

```
HGLOBAL GetIconicMetafile() const;
```

### <a name="return-value"></a>Valore restituito

L'handle del metafile contenente l'aspetto iconico dell'elemento selezionato, se la casella di controllo Visualizza come icona è stata selezionata quando la finestra di dialogo è stata chiusa scegliendo **OK;** in caso contrario NULL.

## <a name="coleinsertdialoggetpathname"></a><a name="getpathname"></a>COleInsertDialog::NomePercorso

Chiamare questa funzione per ottenere il percorso completo del file selezionato solo se `COleInsertDialog::createNewItem` [DoModal](#domodal) restituisce IDOK e il tipo di selezione non è .

```
CString GetPathName() const;
```

### <a name="return-value"></a>Valore restituito

Il percorso completo del file selezionato nella finestra di dialogo. Se il tipo `createNewItem`di selezione è `CString` , questa funzione restituisce un valore privo di significato in modalità di rilascio o causa un'asserzione in modalità di debug.

## <a name="coleinsertdialoggetselectiontype"></a><a name="getselectiontype"></a>COleInsertDialog::GetSelectionType

Chiamare questa funzione per ottenere il tipo di selezione scelto quando la finestra di dialogo Inserisci oggetto è stata chiusa scegliendo **OK**.

```
UINT GetSelectionType() const;
```

### <a name="return-value"></a>Valore restituito

Tipo di selezione effettuata.

### <a name="remarks"></a>Osservazioni

I valori del tipo `Selection` restituito vengono specificati `COleInsertDialog` dal tipo di enumerazione dichiarato nella classe.

```
enum Selection {
    createNewItem,
    insertFromFile,
    linkToFile
    };
```

Seguono brevi descrizioni di questi valori:

- `COleInsertDialog::createNewItem`È stato selezionato il pulsante di opzione Crea nuovo.

- `COleInsertDialog::insertFromFile`Il pulsante di opzione Crea da file è stato selezionato e la casella di controllo Collegamento non è stata selezionata.

- `COleInsertDialog::linkToFile`È stato selezionato il pulsante di opzione Crea da file e la casella di controllo Collegamento è stata selezionata.

## <a name="coleinsertdialogm_io"></a><a name="m_io"></a>COleInsertDialog::m_io

Struttura di tipo OLEUIINSERTOBJECT utilizzata per controllare il comportamento della finestra di dialogo Inserisci oggetto.

```
OLEUIINSERTOBJECT m_io;
```

### <a name="remarks"></a>Osservazioni

I membri di questa struttura possono essere modificati direttamente o tramite funzioni membro.

Per ulteriori informazioni, vedere la struttura [OLEUIINSERTOBJECT](/windows/win32/api/oledlg/ns-oledlg-oleuiinsertobjectw) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Esempio MFC OCLIENT](../../overview/visual-cpp-samples.md)<br/>
[Classe COleDialog](../../mfc/reference/coledialog-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDialog](../../mfc/reference/coledialog-class.md)
