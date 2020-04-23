---
title: COlePasteSpecialDialog (classe)
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
ms.openlocfilehash: 47fb421ef9dedcae7f92d33f55988dbbc2ea452d
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81753819"
---
# <a name="colepastespecialdialog-class"></a>COlePasteSpecialDialog (classe)

Utilizzata per la finestra di dialogo incolla speciale OLE.

## <a name="syntax"></a>Sintassi

```
class COlePasteSpecialDialog : public COleDialog
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COlePasteSpecialDialog::COlePasteSpecialDialog](#colepastespecialdialog)|Costruisce un oggetto `COlePasteSpecialDialog`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COlePasteSpecialDialog::AddFormat](#addformat)|Aggiunge formati personalizzati all'elenco dei formati che l'applicazione può incollare.|
|[COlePasteSpecialDialog::AddLinkEntry](#addlinkentry)|Aggiunge una nuova voce all'elenco dei formati degli Appunti supportati.|
|[COlePasteSpecialDialog::AddStandardFormats](#addstandardformats)|Aggiunge CF_BITMAP, CF_DIB, CF_METAFILEPICT e, facoltativamente, CF_LINKSOURCE all'elenco dei formati che l'applicazione può incollare.|
|[COlePasteSpecialDialog::CreateItem](#createitem)|Crea l'elemento nel documento contenitore utilizzando il formato specificato.|
|[COlePasteSpecialDialog::DoModal](#domodal)|Visualizza la finestra di dialogo Incolla speciale OLE.|
|[COlePasteSpecialDialog::GetDrawAspect](#getdrawaspect)|Indica se disegnare o meno l'elemento come icona.|
|[COlePasteSpecialDialog::GetIconicMetafile](#geticonicmetafile)|Ottiene un handle per il metafile associato al form iconico di questo elemento.|
|[COlePasteSpecialDialog::GetPasteIndex](#getpasteindex)|Ottiene l'indice delle opzioni Incolla disponibili scelte dall'utente.|
|[COlePasteSpecialDialog::GetSelectionType](#getselectiontype)|Ottiene il tipo di selezione scelto.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COlePasteSpecialDialog::m_ps](#m_ps)|Struttura di tipo OLEUIPASTESPECIAL che controlla la funzione della finestra di dialogo.|

## <a name="remarks"></a>Osservazioni

Creare un oggetto `COlePasteSpecialDialog` di classe quando si desidera chiamare questa finestra di dialogo. Dopo `COlePasteSpecialDialog` aver costruito un oggetto, è possibile utilizzare le funzioni membro [AddFormat](#addformat) e [AddStandardFormats](#addstandardformats) per aggiungere formati degli Appunti alla finestra di dialogo. È inoltre possibile utilizzare la struttura [m_ps](#m_ps) per inizializzare i valori o gli stati dei controlli nella finestra di dialogo. La `m_ps` struttura è di tipo OLEUIPASTESPECIAL.

Per ulteriori informazioni, vedere la struttura [OLEUIPASTESPECIAL](/windows/win32/api/oledlg/ns-oledlg-oleuipastespecialw) in Windows SDK.

Per ulteriori informazioni sulle finestre di dialogo specifiche di OLE, vedere l'articolo [Finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

[COleDialog](../../mfc/reference/coledialog-class.md)

`COlePasteSpecialDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxodlgs.h

## <a name="colepastespecialdialogaddformat"></a><a name="addformat"></a>COlePasteSpecialDialog::AddFormat

Chiamare questa funzione per aggiungere nuovi formati all'elenco dei formati che l'applicazione può supportare in un'operazione Incolla speciale.

```cpp
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

*Fmt*<br/>
Riferimento al tipo di dati da aggiungere.

*Formato lpsz*<br/>
Stringa che descrive il formato per l'utente.

*Risultato di lpsz*<br/>
Stringa che descrive il risultato se questo formato viene scelto nella finestra di dialogo.

*flags*<br/>
Le diverse opzioni di collegamento e incorporamento disponibili per questo formato. Questo flag è una combinazione bit per bit di uno o più valori diversi nel tipo enumerato OLEUIPASTEFLAG.

*Cfr*<br/>
Formato degli Appunti da aggiungere.

*Tymed*<br/>
I tipi di supporto disponibili in questo formato. Si tratta di una combinazione bit per bit di uno o più valori nel tipo enumerato TYMED.

*nId FormatID (informazioni in questo campo)*<br/>
ID della stringa che identifica questo formato. Il formato di questa stringa è costituito da due stringhe separate separate da un carattere ''n'. La prima stringa è la stessa che verrebbe passata nel *lpstrFormat* parametro e la seconda è la stessa di *lpstrResult* parametro.

*bEnableIcon (Informazioni in questo stato instato)*<br/>
Flag che determina se la casella di controllo Visualizza come icona è attivata quando si seleziona questo formato nella casella di riepilogo.

*Lampeggiare*<br/>
Flag che determina se il pulsante di opzione Incolla collegamento è abilitato quando si preleva questo formato nella casella di riepilogo.

### <a name="remarks"></a>Osservazioni

Questa funzione può essere chiamata per aggiungere formati standard come CF_TEXT o CF_TIFF o formati personalizzati che l'applicazione ha registrato con il sistema. Per ulteriori informazioni sull'incollamento di oggetti dati nell'applicazione, vedere l'articolo [Oggetti dati e origini dati: manipolazione](../../mfc/data-objects-and-data-sources-manipulation.md).

Per ulteriori informazioni, vedere il tipo di enumerazione [TYMED](/windows/win32/api/objidl/ne-objidl-tymed) e la struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) in Windows SDK.

Per ulteriori informazioni, vedere il tipo enumerato [OLEUIPASTEFLAG](/windows/win32/api/oledlg/ne-oledlg-oleuipasteflag) in Windows SDK.

## <a name="colepastespecialdialogaddlinkentry"></a><a name="addlinkentry"></a>COlePasteSpecialDialog::AddLinkEntry

Aggiunge una nuova voce all'elenco dei formati degli Appunti supportati.

```
OLEUIPASTEFLAG AddLinkEntry(UINT cf);
```

### <a name="parameters"></a>Parametri

*Cfr*<br/>
Formato degli Appunti da aggiungere.

### <a name="return-value"></a>Valore restituito

Struttura [OLEUIPASTEFLAG](/windows/win32/api/oledlg/ne-oledlg-oleuipasteflag) contenente le informazioni per la nuova voce di collegamento.

## <a name="colepastespecialdialogaddstandardformats"></a><a name="addstandardformats"></a>COlePasteSpecialDialog::AddStandardFormats

Chiamare questa funzione per aggiungere i seguenti formati degli Appunti all'elenco dei formati che l'applicazione può supportare in un'operazione Incolla speciale:Call this function to add the following Clipboard formats to the list of formats your application can support in a Paste Special operation:

```cpp
void AddStandardFormats(BOOL bEnableLink = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnableLink*<br/>
Flag che determina se aggiungere CF_LINKSOURCE all'elenco dei formati che l'applicazione può incollare.

### <a name="remarks"></a>Osservazioni

- CF_BITMAP

- CF_DIB

- CF_METAFILEPICT

- **"Oggetto incorporato"**

- (opzionalmente) **"Origine collegamento"**

Questi formati vengono utilizzati per supportare l'incorporamento e il collegamento.

## <a name="colepastespecialdialogcolepastespecialdialog"></a><a name="colepastespecialdialog"></a>COlePasteSpecialDialog::COlePasteSpecialDialog

Costruisce un oggetto `COlePasteSpecialDialog`.

```
COlePasteSpecialDialog(
    DWORD dwFlags = PSF_SELECTPASTE,
    COleDataObject* pDataObject = NULL,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*dwFlags*<br/>
Flag di creazione, contiene un numero qualsiasi dei seguenti flag combinati utilizzando l'operatore OR bit per bit:

- PSF_SELECTPASTE Specifica che il pulsante di opzione Incolla verrà controllato inizialmente quando viene chiamata la finestra di dialogo. Non può essere utilizzato in combinazione con PSF_SELECTPASTELINK. Questa è la modalità predefinita.

- PSF_SELECTPASTELINK specifica che il pulsante di opzione Incolla collegamento verrà controllato inizialmente quando viene chiamata la finestra di dialogo. Non può essere utilizzato in combinazione con PSF_SELECTPASTE.

- PSF_CHECKDISPLAYASICON specifica che la casella di controllo Visualizza come icona verrà selezionata inizialmente quando viene chiamata la finestra di dialogo.

- PSF_SHOWHELP Specifica che il pulsante ?da visualizzare quando viene chiamata la finestra di dialogo.

*pDataObject (oggetto PDataObject)*<br/>
Punta a [COleDataObject](../../mfc/reference/coledataobject-class.md) per incollare. Se questo valore è NULL, ottiene l'oggetto `COleDataObject` dagli Appunti.

*pParentWnd (informazioni in due)*<br/>
Punta all'oggetto finestra padre o `CWnd`proprietario (di tipo ) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre della finestra di dialogo viene impostata sulla finestra principale dell'applicazione.

### <a name="remarks"></a>Osservazioni

Questa funzione costruisce `COlePasteSpecialDialog` solo un oggetto. Per visualizzare la finestra di dialogo, chiamare la funzione [DoModal](#domodal) .

Per ulteriori informazioni, vedere il tipo enumerato [OLEUIPASTEFLAG](/windows/win32/api/oledlg/ne-oledlg-oleuipasteflag) in Windows SDK.

## <a name="colepastespecialdialogcreateitem"></a><a name="createitem"></a>COlePasteSpecialDialog::CreateItem

Crea il nuovo elemento scelto nella finestra di dialogo Incolla speciale.

```
BOOL CreateItem(COleClientItem* pNewItem);
```

### <a name="parameters"></a>Parametri

*pNewItem (informazioni in base all'elemento in*<br/>
Punta a `COleClientItem` un'istanza. Non può essere NULL.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'elemento è stato creato correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione deve essere chiamata solo dopo DoModal restituisce IDOK.This function should only be called after [DoModal](#domodal) returns IDOK.

## <a name="colepastespecialdialogdomodal"></a><a name="domodal"></a>COlePasteSpecialDialog::DoModal

Visualizza la finestra di dialogo Incolla speciale OLE.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

Stato di completamento per la finestra di dialogo. Uno dei valori seguenti:

- IDOK se la finestra di dialogo è stata visualizzata correttamente.

- IDCANCEL se l'utente ha annullato la finestra di dialogo.

- IDABORT se si è verificato un errore. Se viene restituito IDABORT, `COleDialog::GetLastError` chiamare la funzione membro per ottenere ulteriori informazioni sul tipo di errore che si è verificato. Per un elenco dei possibili errori, vedere la funzione [OleUIPasteSpecial](/windows/win32/api/oledlg/nf-oledlg-oleuipastespecialw) in Windows SDK.

### <a name="remarks"></a>Osservazioni

Se si desidera inizializzare i vari controlli della finestra di dialogo `DoModal`impostando i membri della [struttura m_ps,](#m_ps) è necessario eseguire questa operazione prima di chiamare , ma dopo la costruzione dell'oggetto finestra di dialogo.

Se `DoModal` restituisce IDOK, è possibile chiamare altre funzioni membro per recuperare le impostazioni o le informazioni immesse dall'utente nella finestra di dialogo.

## <a name="colepastespecialdialoggetdrawaspect"></a><a name="getdrawaspect"></a>COlePasteSpecialDialog::GetDrawAspect

Determina se l'utente ha scelto di visualizzare l'elemento selezionato come icona.

```
DVASPECT GetDrawAspect() const;
```

### <a name="return-value"></a>Valore restituito

Metodo necessario per eseguire il rendering dell'oggetto.

- DVASPECT_CONTENT restituito se la casella di controllo Visualizza come icona non è stata selezionata quando la finestra di dialogo è stata chiusa.

- DVASPECT_ICON restituito se la casella di controllo Visualizza come icona è stata selezionata quando la finestra di dialogo è stata chiusa.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione solo dopo [DoModal](#domodal) restituisce IDOK.

Per ulteriori informazioni sul disegno aspetto, vedere la struttura [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) in Windows SDK.

## <a name="colepastespecialdialoggeticonicmetafile"></a><a name="geticonicmetafile"></a>COlePasteSpecialDialog::GetIconicMetafile

Ottiene il metafile associato all'elemento selezionato dall'utente.

```
HGLOBAL GetIconicMetafile() const;
```

### <a name="return-value"></a>Valore restituito

L'handle del metafile contenente l'aspetto iconico dell'elemento selezionato, se la casella di controllo Visualizza come icona è stata selezionata quando la finestra di dialogo è stata chiusa scegliendo **OK;** in caso contrario NULL.

## <a name="colepastespecialdialoggetpasteindex"></a><a name="getpasteindex"></a>COlePasteSpecialDialog::GetPasteIndex

Ottiene il valore di indice associato alla voce selezionata dall'utente.

```
int GetPasteIndex() const;
```

### <a name="return-value"></a>Valore restituito

Indice nella matrice `OLEUIPASTEENTRY` di strutture selezionata dall'utente. Il formato corrispondente all'indice selezionato deve essere utilizzato quando si esegue l'operazione Incolla.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere la struttura [OLEUIPASTEENTRY](/windows/win32/api/oledlg/ns-oledlg-oleuipasteentryw) in Windows SDK.

## <a name="colepastespecialdialoggetselectiontype"></a><a name="getselectiontype"></a>COlePasteSpecialDialog::GetSelectionType

Determina il tipo di selezione effettuata dall'utente.

```
UINT GetSelectionType() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il tipo di selezione effettuata.

### <a name="remarks"></a>Osservazioni

I valori del tipo `Selection` restituito vengono specificati `COlePasteSpecialDialog` dal tipo di enumerazione dichiarato nella classe.

```
enum Selection {
    pasteLink,
    pasteNormal,
    pasteOther,
    pasteStatic
    };
```

Seguono brevi desccriptions di questi valori:

- `COlePasteSpecialDialog::pasteLink`Il pulsante di opzione Incolla collegamento è stato selezionato e il formato scelto era un formato OLE standard.

- `COlePasteSpecialDialog::pasteNormal`Il pulsante di opzione Incolla è stato selezionato e il formato scelto era un formato OLE standard.

- `COlePasteSpecialDialog::pasteOther`Il formato selezionato non è un formato OLE standard.

- `COlePasteSpecialDialog::pasteStatic`Il formato scelto era un metafile.

## <a name="colepastespecialdialogm_ps"></a><a name="m_ps"></a>COlePasteSpecialDialog::m_ps

Struttura di tipo OLEUIPASTESPECIAL utilizzata per controllare il comportamento della finestra di dialogo Incolla speciale.

```
OLEUIPASTESPECIAL m_ps;
```

### <a name="remarks"></a>Osservazioni

I membri di questa struttura possono essere modificati direttamente o tramite funzioni membro.

Per ulteriori informazioni, vedere la struttura [OLEUIPASTESPECIAL](/windows/win32/api/oledlg/ns-oledlg-oleuipastespecialw) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Esempio MFC OCLIENT](../../overview/visual-cpp-samples.md)<br/>
[Classe COleDialog](../../mfc/reference/coledialog-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDialog](../../mfc/reference/coledialog-class.md)
