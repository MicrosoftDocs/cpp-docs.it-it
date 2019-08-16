---
title: Classe COlePasteSpecialDialog
ms.date: 11/04/2016
f1_keywords:
- COlePasteSpecialDialog
- AFXODLGS/COlePasteSpecialDialog
- AFXODLGS/COlePasteSpecialDialog::COlePasteSpecialDialog
- AFXODLGS/COlePasteSpecialDialog::AddFormat
- AFXODLGS/COlePasteSpecialDialog::AddLinkEntry
- AFXODLGS/COlePasteSpecialDialog::AddStandardFormats
- AFXODLGS/COlePasteSpecialDialog::CreateItem
- AFXODLGS/COlePasteSpecialDialog::DoModal
- AFXODLGS/COlePasteSpecialDialog::GetDrawAspect
- AFXODLGS/COlePasteSpecialDialog::GetIconicMetafile
- AFXODLGS/COlePasteSpecialDialog::GetPasteIndex
- AFXODLGS/COlePasteSpecialDialog::GetSelectionType
- AFXODLGS/COlePasteSpecialDialog::m_ps
helpviewer_keywords:
- COlePasteSpecialDialog [MFC], COlePasteSpecialDialog
- COlePasteSpecialDialog [MFC], AddFormat
- COlePasteSpecialDialog [MFC], AddLinkEntry
- COlePasteSpecialDialog [MFC], AddStandardFormats
- COlePasteSpecialDialog [MFC], CreateItem
- COlePasteSpecialDialog [MFC], DoModal
- COlePasteSpecialDialog [MFC], GetDrawAspect
- COlePasteSpecialDialog [MFC], GetIconicMetafile
- COlePasteSpecialDialog [MFC], GetPasteIndex
- COlePasteSpecialDialog [MFC], GetSelectionType
- COlePasteSpecialDialog [MFC], m_ps
ms.assetid: 0e82ef9a-9bbe-457e-8240-42c86a0534f7
ms.openlocfilehash: f4174369620f14f2d1ac410aa5d756c75097ad0f
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69503771"
---
# <a name="colepastespecialdialog-class"></a>Classe COlePasteSpecialDialog

Utilizzata per la finestra di dialogo incolla speciale OLE.

## <a name="syntax"></a>Sintassi

```
class COlePasteSpecialDialog : public COleDialog
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COlePasteSpecialDialog:: COlePasteSpecialDialog](#colepastespecialdialog)|Costruisce un oggetto `COlePasteSpecialDialog`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[COlePasteSpecialDialog:: AddFormat](#addformat)|Aggiunge formati personalizzati all'elenco di formati che possono essere incollati nell'applicazione.|
|[COlePasteSpecialDialog:: AddLinkEntry](#addlinkentry)|Aggiunge una nuova voce all'elenco dei formati degli Appunti supportati.|
|[COlePasteSpecialDialog:: AddStandardFormats](#addstandardformats)|Aggiunge CF_BITMAP, CF_DIB, CF_METAFILEPICT e, facoltativamente, CF_LINKSOURCE all'elenco dei formati che possono essere incollati nell'applicazione.|
|[COlePasteSpecialDialog:: CreateItem](#createitem)|Crea l'elemento nel documento contenitore utilizzando il formato specificato.|
|[COlePasteSpecialDialog::D oModal](#domodal)|Consente di visualizzare la finestra di dialogo OLE Incolla speciale.|
|[COlePasteSpecialDialog:: GetDrawAspect](#getdrawaspect)|Indica se creare o meno un elemento come icona.|
|[COlePasteSpecialDialog:: GetIconicMetafile](#geticonicmetafile)|Ottiene un handle per il Metafile associato alla forma iconica di questo elemento.|
|[COlePasteSpecialDialog:: GetPasteIndex](#getpasteindex)|Ottiene l'indice delle opzioni di Incolla disponibili scelte dall'utente.|
|[COlePasteSpecialDialog:: GetSelectionType](#getselectiontype)|Ottiene il tipo di selezione scelto.|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|Descrizione|
|----------|-----------------|
|[COlePasteSpecialDialog:: m_ps](#m_ps)|Struttura di tipo OLEUIPASTESPECIAL che controlla la funzione della finestra di dialogo.|

## <a name="remarks"></a>Note

Creare un oggetto della classe `COlePasteSpecialDialog` quando si desidera chiamare questa finestra di dialogo. Dopo che `COlePasteSpecialDialog` un oggetto è stato creato, è possibile utilizzare le funzioni membro [AddFormat](#addformat) e [AddStandardFormats](#addstandardformats) per aggiungere i formati degli Appunti alla finestra di dialogo. È inoltre possibile utilizzare la struttura [m_ps](#m_ps) per inizializzare i valori o gli Stati dei controlli nella finestra di dialogo. La `m_ps` struttura è di tipo OLEUIPASTESPECIAL.

Per ulteriori informazioni, vedere la struttura [OleUIPasteSpecial](/windows/win32/api/oledlg/ns-oledlg-oleuipastespecialw) nel Windows SDK.

Per ulteriori informazioni sulle finestre di dialogo specifiche di OLE, vedere l'articolo finestre [di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

[COleDialog](../../mfc/reference/coledialog-class.md)

`COlePasteSpecialDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxodlgs. h

##  <a name="addformat"></a>COlePasteSpecialDialog:: AddFormat

Chiamare questa funzione per aggiungere nuovi formati all'elenco di formati che l'applicazione può supportare in un'operazione speciale Incolla.

```
void AddFormat(
    const FORMATETC& formatEtc,
    LPTSTR lpszFormat,
    LPTSTR lpszResult,
    DWORD flags);

void AddFormat(
    UINT cf,
    DWORD tymed,
    UINT nFormatID,
    BOOL bEnableIcon,
    BOOL bLink);
```

### <a name="parameters"></a>Parametri

*fmt*<br/>
Riferimento al tipo di dati da aggiungere.

*lpszFormat*<br/>
Stringa che descrive il formato all'utente.

*lpszResult*<br/>
Stringa che descrive il risultato se questo formato viene scelto nella finestra di dialogo.

*flags*<br/>
Diverse opzioni di collegamento e incorporamento disponibili per questo formato. Questo flag è una combinazione bit per bit di uno o più valori diversi nel tipo enumerato OLEUIPASTEFLAG.

*cf*<br/>
Formato degli Appunti da aggiungere.

*tymed*<br/>
Tipi di supporti disponibili in questo formato. Si tratta di una combinazione bit per bit di uno o più valori del tipo enumerato TYMED.

*nFormatID*<br/>
ID della stringa che identifica il formato. Il formato di questa stringa è costituito da due stringhe separate separate da un carattere "\n". La prima stringa è la stessa che verrebbe passata nel parametro *lpstrFormat* e la seconda è uguale al parametro *lpstrResult* .

*bEnableIcon*<br/>
Flag che determina se la casella di controllo Visualizza come icona è abilitata quando questo formato viene scelto nella casella di riepilogo.

*bLink*<br/>
Flag che determina se il pulsante di opzione Incolla collegamento è abilitato quando questo formato viene scelto nella casella di riepilogo.

### <a name="remarks"></a>Note

Questa funzione può essere chiamata per aggiungere formati standard, ad esempio CF_TEXT o CF_TIFF, o formati personalizzati che l'applicazione ha registrato con il sistema. Per ulteriori informazioni su come incollare oggetti dati nell'applicazione, vedere l'articolo [oggetti dati e origini dati: Manipolazione](../../mfc/data-objects-and-data-sources-manipulation.md).

Per ulteriori informazioni, vedere il tipo di enumerazione [TYMED](/windows/win32/api/objidl/ne-objidl-tymed) e la struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) nell'Windows SDK.

Per ulteriori informazioni, vedere il tipo enumerato [OLEUIPASTEFLAG](/windows/win32/api/oledlg/ne-oledlg-oleuipasteflag) nel Windows SDK.

##  <a name="addlinkentry"></a>COlePasteSpecialDialog:: AddLinkEntry

Aggiunge una nuova voce all'elenco dei formati degli Appunti supportati.

```
OLEUIPASTEFLAG AddLinkEntry(UINT cf);
```

### <a name="parameters"></a>Parametri

*cf*<br/>
Formato degli Appunti da aggiungere.

### <a name="return-value"></a>Valore restituito

Struttura [OLEUIPASTEFLAG](/windows/win32/api/oledlg/ne-oledlg-oleuipasteflag) contenente le informazioni per la nuova voce di collegamento.

##  <a name="addstandardformats"></a>COlePasteSpecialDialog:: AddStandardFormats

Chiamare questa funzione per aggiungere i formati degli Appunti seguenti all'elenco di formati che l'applicazione può supportare in un'operazione di Incolla speciale:

```
void AddStandardFormats(BOOL bEnableLink = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnableLink*<br/>
Flag che determina se aggiungere CF_LINKSOURCE all'elenco di formati che possono essere incollati nell'applicazione.

### <a name="remarks"></a>Note

- CF_BITMAP

- CF_DIB

- CF_METAFILEPICT

- **"Oggetto incorporato"**

- Facoltativamente **"Origine collegamento"**

Questi formati vengono usati per supportare l'incorporamento e il collegamento.

##  <a name="colepastespecialdialog"></a>COlePasteSpecialDialog:: COlePasteSpecialDialog

Costruisce un oggetto `COlePasteSpecialDialog`.

```
COlePasteSpecialDialog(
    DWORD dwFlags = PSF_SELECTPASTE,
    COleDataObject* pDataObject = NULL,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*dwFlags*<br/>
Flag di creazione, contiene un numero qualsiasi di flag seguenti combinati tramite l'operatore OR bit per bit:

- PSF_SELECTPASTE specifica che il pulsante di opzione Incolla verrà selezionato inizialmente quando viene chiamata la finestra di dialogo. Non può essere usato in combinazione con PSF_SELECTPASTELINK. Questa è l'impostazione predefinita.

- PSF_SELECTPASTELINK specifica che il pulsante di opzione Incolla collegamento verrà selezionato inizialmente quando viene chiamata la finestra di dialogo. Non può essere usato in combinazione con PSF_SELECTPASTE.

- PSF_CHECKDISPLAYASICON specifica che la casella di controllo Visualizza come icona verrà controllata inizialmente quando viene chiamata la finestra di dialogo.

- PSF_SHOWHELP specifica che il pulsante della guida viene visualizzato quando viene chiamata la finestra di dialogo.

*pDataObject*<br/>
Punta a [COleDataObject](../../mfc/reference/coledataobject-class.md) per incollare. Se questo valore è null, ottiene l'oggetto `COleDataObject` dagli Appunti.

*pParentWnd*<br/>
Punta all'oggetto padre o alla finestra proprietaria (di `CWnd`tipo) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre della finestra di dialogo viene impostata sulla finestra principale dell'applicazione.

### <a name="remarks"></a>Note

Questa funzione costruisce solo un `COlePasteSpecialDialog` oggetto. Per visualizzare la finestra di dialogo, chiamare la funzione [DoModal](#domodal) .

Per ulteriori informazioni, vedere il tipo enumerato [OLEUIPASTEFLAG](/windows/win32/api/oledlg/ne-oledlg-oleuipasteflag) nel Windows SDK.

##  <a name="createitem"></a>COlePasteSpecialDialog:: CreateItem

Crea il nuovo elemento scelto nella finestra di dialogo Incolla speciale.

```
BOOL CreateItem(COleClientItem* pNewItem);
```

### <a name="parameters"></a>Parametri

*pNewItem*<br/>
Punta a un' `COleClientItem` istanza di. Non può essere NULL.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'elemento è stato creato correttamente; in caso contrario, 0.

### <a name="remarks"></a>Note

Questa funzione deve essere chiamata solo dopo che [DoModal](#domodal) restituisce IDOK.

##  <a name="domodal"></a>COlePasteSpecialDialog::D oModal

Consente di visualizzare la finestra di dialogo OLE Incolla speciale.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

Stato di completamento della finestra di dialogo. Uno dei valori seguenti:

- IDOK se la finestra di dialogo è stata visualizzata correttamente.

- IDCANCEL se l'utente ha annullato la finestra di dialogo.

- IDABORT se si è verificato un errore. Se viene restituito IDABORT, chiamare la `COleDialog::GetLastError` funzione membro per ottenere ulteriori informazioni sul tipo di errore che si è verificato. Per un elenco di possibili errori, vedere la funzione [OleUIPasteSpecial](/windows/win32/api/oledlg/nf-oledlg-oleuipastespecialw) nella Windows SDK.

### <a name="remarks"></a>Note

Se si desidera inizializzare i vari controlli della finestra di dialogo impostando i membri della struttura [m_ps](#m_ps) , è necessario eseguire questa `DoModal`operazione prima di chiamare, ma dopo la costruzione dell'oggetto finestra di dialogo.

Se `DoModal` restituisce IDOK, è possibile chiamare altre funzioni membro per recuperare le impostazioni o l'input di informazioni da parte dell'utente nella finestra di dialogo.

##  <a name="getdrawaspect"></a>COlePasteSpecialDialog:: GetDrawAspect

Determina se l'utente ha scelto di visualizzare l'elemento selezionato come icona.

```
DVASPECT GetDrawAspect() const;
```

### <a name="return-value"></a>Valore restituito

Metodo necessario per eseguire il rendering dell'oggetto.

- DVASPECT_CONTENT restituito se la casella di controllo Visualizza come icona non è stata selezionata quando la finestra di dialogo è stata rilasciata.

- DVASPECT_ICON restituito se la casella di controllo Visualizza come icona è stata selezionata quando la finestra di dialogo è stata rilasciata.

### <a name="remarks"></a>Note

Chiamare questa funzione solo dopo che [DoModal](#domodal) restituisce IDOK.

Per ulteriori informazioni sull'aspetto del disegno, vedere la struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) nell'Windows SDK.

##  <a name="geticonicmetafile"></a>COlePasteSpecialDialog:: GetIconicMetafile

Ottiene il Metafile associato all'elemento selezionato dall'utente.

```
HGLOBAL GetIconicMetafile() const;
```

### <a name="return-value"></a>Valore restituito

Handle per il metafile che contiene l'aspetto iconico dell'elemento selezionato, se è stata selezionata la casella di controllo Visualizza come icona quando la finestra di dialogo è stata rilasciata scegliendo **OK**. in caso contrario, NULL.

##  <a name="getpasteindex"></a>COlePasteSpecialDialog:: GetPasteIndex

Ottiene il valore di indice associato alla voce selezionata dall'utente.

```
int GetPasteIndex() const;
```

### <a name="return-value"></a>Valore restituito

Indice nella matrice di `OLEUIPASTEENTRY` strutture selezionata dall'utente. Quando si esegue l'operazione Incolla, è necessario utilizzare il formato corrispondente all'indice selezionato.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere la struttura [OLEUIPASTEENTRY](/windows/win32/api/oledlg/ns-oledlg-oleuipasteentryw) nel Windows SDK.

##  <a name="getselectiontype"></a>COlePasteSpecialDialog:: GetSelectionType

Determina il tipo di selezione eseguita dall'utente.

```
UINT GetSelectionType() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il tipo di selezione eseguita.

### <a name="remarks"></a>Note

I valori dei tipi restituiti sono specificati dal `Selection` tipo di enumerazione dichiarato `COlePasteSpecialDialog` nella classe.

```
enum Selection {
    pasteLink,
    pasteNormal,
    pasteOther,
    pasteStatic
    };
```

Il Brief desccriptions di questi valori è il seguente:

- `COlePasteSpecialDialog::pasteLink`Il pulsante di opzione Incolla collegamento è stato selezionato e il formato scelto era un formato OLE standard.

- `COlePasteSpecialDialog::pasteNormal`Il pulsante di opzione Incolla è stato selezionato e il formato scelto era un formato OLE standard.

- `COlePasteSpecialDialog::pasteOther`Il formato selezionato non è un formato OLE standard.

- `COlePasteSpecialDialog::pasteStatic`Il formato scelto era un metafile.

##  <a name="m_ps"></a>COlePasteSpecialDialog:: m_ps

Struttura di tipo OLEUIPASTESPECIAL utilizzata per controllare il comportamento della finestra di dialogo Incolla speciale.

```
OLEUIPASTESPECIAL m_ps;
```

### <a name="remarks"></a>Note

I membri di questa struttura possono essere modificati direttamente o tramite le funzioni membro.

Per ulteriori informazioni, vedere la struttura [OleUIPasteSpecial](/windows/win32/api/oledlg/ns-oledlg-oleuipastespecialw) nel Windows SDK.

## <a name="see-also"></a>Vedere anche

[OCLIENT di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe COleDialog](../../mfc/reference/coledialog-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDialog](../../mfc/reference/coledialog-class.md)
