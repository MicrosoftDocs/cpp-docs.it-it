---
title: Classe COlePasteSpecialDialog | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: aad3a019b3c81b4edc890daafdff232a522ed4e2
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50074345"
---
# <a name="colepastespecialdialog-class"></a>Classe COlePasteSpecialDialog

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
|[COlePasteSpecialDialog::AddFormat](#addformat)|Aggiunge all'elenco dei formati che l'applicazione può inserire i formati personalizzati.|
|[COlePasteSpecialDialog::AddLinkEntry](#addlinkentry)|Aggiunge una nuova voce all'elenco dei formati Appunti supportati.|
|[COlePasteSpecialDialog::AddStandardFormats](#addstandardformats)|Aggiunge CF_EMBEDSOURCE CF_BITMAP, CF_DIB, e facoltativamente CF_LINKSOURCE all'elenco dei formati l'applicazione può inserire.|
|[COlePasteSpecialDialog::CreateItem](#createitem)|Crea l'elemento nel documento contenitore usando il formato specificato.|
|[COlePasteSpecialDialog::DoModal](#domodal)|Consente di visualizzare la finestra di dialogo Incolla speciale OLE.|
|[COlePasteSpecialDialog::GetDrawAspect](#getdrawaspect)|Indica se disegnare elementi come un'icona o No.|
|[COlePasteSpecialDialog::GetIconicMetafile](#geticonicmetafile)|Ottiene un handle del metafile associato alla originalissima maschera di questo elemento.|
|[COlePasteSpecialDialog::GetPasteIndex](#getpasteindex)|Ottiene l'indice delle opzioni Incolla disponibili che è stato scelto dall'utente.|
|[COlePasteSpecialDialog::GetSelectionType](#getselectiontype)|Ottiene il tipo dell'opzione selezionata.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COlePasteSpecialDialog::m_ps](#m_ps)|Una struttura di tipo OLEUIPASTESPECIAL che controlla la funzione della finestra di dialogo.|

## <a name="remarks"></a>Note

Creare un oggetto della classe `COlePasteSpecialDialog` quando si desidera chiamare questa finestra di dialogo. Dopo una `COlePasteSpecialDialog` oggetto è stato costruito, è possibile usare il [AddFormat](#addformat) e [AddStandardFormats](#addstandardformats) funzioni membro per aggiungere i formati degli Appunti nella finestra di dialogo. È anche possibile usare la [m_ps](#m_ps) struttura per inizializzare i valori o degli stati dei controlli nella finestra di dialogo. Il `m_ps` struttura è di tipo OLEUIPASTESPECIAL.

Per altre informazioni, vedere la [OLEUIPASTESPECIAL](/windows/desktop/api/oledlg/ns-oledlg-tagoleuipastespeciala) struttura nel SDK di Windows.

Per altre informazioni sulle finestre di dialogo OLE specifici, vedere l'articolo [finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).

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

##  <a name="addformat"></a>  COlePasteSpecialDialog::AddFormat

Chiamare questa funzione per aggiungere nuovi formati per l'elenco dei formati che l'applicazione può supportare in un'operazione Incolla speciale.

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

*FMT*<br/>
Riferimento al tipo di dati da aggiungere.

*lpszFormat*<br/>
Stringa che descrive il formato per l'utente.

*lpszResult*<br/>
Stringa che descrive il risultato se viene scelto questo formato nella finestra di dialogo.

*flags*<br/>
I diversi collegamento e incorporamento opzioni disponibili per questo formato. Questo flag è una combinazione bit per bit di uno o più dei diversi valori del OLEUIPASTEFLAG tipo enumerato.

*cloud Foundry*<br/>
Il formato degli Appunti da aggiungere.

*TYMED*<br/>
I tipi di supporto disponibile in questo formato. Si tratta di una combinazione bit per bit di uno o più dei valori nel TYMED tipo enumerato.

*nFormatID*<br/>
L'ID della stringa che identifica questo formato. Il formato di questa stringa è due stringhe separate separate da un carattere '\n'. La prima stringa è lo stesso che verrebbe passato il *lpstrFormat* parametro e il secondo è lo stesso come il *lpstrResult* parametro.

*bEnableIcon*<br/>
Flag che determina se la casella di controllo Visualizza come icona è abilitata quando si sceglie il formato seguente nella casella di riepilogo.

*per il lampeggiamento*<br/>
Flag che determina se il pulsante di opzione Incolla collegamento è abilitato quando si sceglie il formato seguente nella casella di riepilogo.

### <a name="remarks"></a>Note

Questa funzione può essere chiamata per aggiungere formati standard, ad esempio CF_TEXT o CF_TIFF né formati personalizzati che l'applicazione è registrata con il sistema. Per ulteriori informazioni su incollando gli oggetti dati nell'applicazione, vedere l'articolo [oggetti dati e origini dati: Manipulation](../../mfc/data-objects-and-data-sources-manipulation.md).

Per altre informazioni, vedere la [TYMED](/windows/desktop/api/objidl/ne-objidl-tagtymed) tipo di enumerazione e la [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) struttura nel SDK di Windows.

Per altre informazioni, vedere la [OLEUIPASTEFLAG](/windows/desktop/api/oledlg/ne-oledlg-tagoleuipasteflag) enumerata di tipo nel SDK di Windows.

##  <a name="addlinkentry"></a>  COlePasteSpecialDialog::AddLinkEntry

Aggiunge una nuova voce all'elenco dei formati Appunti supportati.

```
OLEUIPASTEFLAG AddLinkEntry(UINT cf);
```

### <a name="parameters"></a>Parametri

*cloud Foundry*<br/>
Il formato degli Appunti da aggiungere.

### <a name="return-value"></a>Valore restituito

Un' [OLEUIPASTEFLAG](/windows/desktop/api/oledlg/ne-oledlg-tagoleuipasteflag) struttura contenente le informazioni per la nuova voce di collegamento.

##  <a name="addstandardformats"></a>  COlePasteSpecialDialog::AddStandardFormats

Chiamare questa funzione per aggiungere i seguenti formati degli Appunti all'elenco dei formati che l'applicazione può supportare in un'operazione Incolla speciale:

```
void AddStandardFormats(BOOL bEnableLink = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnableLink*<br/>
Flag che determina se aggiungere CF_LINKSOURCE all'elenco dei formati di applicazione è possibile incollare.

### <a name="remarks"></a>Note

- CF_BITMAP

- CF_DIB

- CF_EMBEDSOURCE

- **"Oggetto incorporato"**

- (facoltativo) **"Link Source"**

Questi formati vengono utilizzati per supportare l'incorporamento e di collegamento.

##  <a name="colepastespecialdialog"></a>  COlePasteSpecialDialog::COlePasteSpecialDialog

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

- PSF_SELECTPASTE specifica che il pulsante di opzione Incolla verrà verificata inizialmente quando viene chiamata nella finestra di dialogo. Non può essere usato in combinazione con PSF_SELECTPASTELINK. Questa è l'impostazione predefinita.

- PSF_SELECTPASTELINK specifica che il pulsante di opzione Incolla collegamento verrà verificata inizialmente quando viene chiamata nella finestra di dialogo. Non può essere usato in combinazione con PSF_SELECTPASTE.

- PSF_CHECKDISPLAYASICON specifica che la casella di controllo Visualizza come icona sarà selezionata inizialmente quando viene chiamata nella finestra di dialogo.

- PSF_SHOWHELP specifica che il pulsante della Guida verrà visualizzato quando viene chiamata la finestra di dialogo.

*pDataObject*<br/>
Punta al [COleDataObject](../../mfc/reference/coledataobject-class.md) per incollare. Se questo valore è NULL, ottiene il `COleDataObject` dagli Appunti.

*pParentWnd*<br/>
Punta all'oggetto finestra padre o proprietaria (di tipo `CWnd`) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre della finestra di dialogo è impostata per la finestra principale dell'applicazione.

### <a name="remarks"></a>Note

Questa funzione crea solo un `COlePasteSpecialDialog` oggetto. Per visualizzare la finestra di dialogo, chiamare il [DoModal](#domodal) (funzione).

Per altre informazioni, vedere la [OLEUIPASTEFLAG](/windows/desktop/api/oledlg/ne-oledlg-tagoleuipasteflag) enumerata di tipo nel SDK di Windows.

##  <a name="createitem"></a>  COlePasteSpecialDialog::CreateItem

Crea il nuovo elemento che è stata scelta nella finestra di dialogo Incolla speciale.

```
BOOL CreateItem(COleClientItem* pNewItem);
```

### <a name="parameters"></a>Parametri

*pNewItem*<br/>
Punta a un `COleClientItem` istanza. Non può essere NULL.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'elemento è stato creato correttamente. in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione deve essere chiamata solo dopo aver [DoModal](#domodal) restituisce IDOK.

##  <a name="domodal"></a>  COlePasteSpecialDialog::DoModal

Consente di visualizzare la finestra di dialogo Incolla speciale OLE.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

Stato di completamento della finestra di dialogo. Uno dei valori seguenti:

- IDOK se la finestra di dialogo viene visualizzata correttamente.

- IDCANCEL, se l'utente ha annullato la finestra di dialogo.

- IDABORT se si è verificato un errore. Se viene restituito IDABORT, chiamare il `COleDialog::GetLastError` funzione membro per ottenere altre informazioni sul tipo di errore che si sono verificati. Per un elenco dei possibili errori, vedere la [OleUIPasteSpecial](/windows/desktop/api/oledlg/nf-oledlg-oleuipastespeciala) funzione nel SDK di Windows.

### <a name="remarks"></a>Note

Se si desidera inizializzare i vari controlli di finestra di dialogo impostando i membri del [m_ps](#m_ps) struttura, è necessario eseguire questa operazione prima di chiamare `DoModal`, ma dopo che viene costruito l'oggetto finestra di dialogo.

Se `DoModal` restituisce IDOK, è possibile chiamare altri membri funzioni per recuperare le impostazioni o input di informazioni dall'utente nella finestra di dialogo.

##  <a name="getdrawaspect"></a>  COlePasteSpecialDialog::GetDrawAspect

Determina se l'utente sceglie di visualizzare l'elemento selezionato come icona.

```
DVASPECT GetDrawAspect() const;
```

### <a name="return-value"></a>Valore restituito

Il metodo necessario per il rendering dell'oggetto.

- DVASPECT_CONTENT restituito se la casella di controllo Visualizza come icona non è stata verificata quando la finestra di dialogo è stata chiusa.

- DVASPECT_ICON restituita se è stata selezionata la casella di controllo Visualizza come icona quando la finestra di dialogo è stata annullata.

### <a name="remarks"></a>Note

Solo chiamare questa funzione dopo [DoModal](#domodal) restituisce IDOK.

Per altre informazioni sugli aspetti di disegno, vedere la [FORMATETC](/windows/desktop/api/objidl/ns-objidl-tagformatetc) struttura nel SDK di Windows.

##  <a name="geticonicmetafile"></a>  COlePasteSpecialDialog::GetIconicMetafile

Ottiene il metafile associato all'elemento selezionato dall'utente.

```
HGLOBAL GetIconicMetafile() const;
```

### <a name="return-value"></a>Valore restituito

L'handle del metafile contenente l'aspetto delle icone dell'elemento selezionato, se è stata selezionata la casella di controllo Visualizza come icona quando la finestra di dialogo è stata annullata, scegliendo **OK**; in caso contrario, NULL.

##  <a name="getpasteindex"></a>  COlePasteSpecialDialog::GetPasteIndex

Ottiene il valore di indice associata alla voce selezionata dall'utente.

```
int GetPasteIndex() const;
```

### <a name="return-value"></a>Valore restituito

L'indice nella matrice di `OLEUIPASTEENTRY` strutture che è stato selezionato dall'utente. Il formato che corrisponde all'indice selezionato deve essere utilizzato quando si esegue l'operazione Incolla.

### <a name="remarks"></a>Note

Per altre informazioni, vedere la [OLEUIPASTEENTRY](/windows/desktop/api/oledlg/ns-oledlg-tagoleuipasteentrya) struttura nel SDK di Windows.

##  <a name="getselectiontype"></a>  COlePasteSpecialDialog::GetSelectionType

Determina il tipo di selezione effettuata all'utente.

```
UINT GetSelectionType() const;
```

### <a name="return-value"></a>Valore restituito

Tipo restituisce della selezione effettuata.

### <a name="remarks"></a>Note

Vengono specificati i valori di tipo restituito per il `Selection` tipo enumerazione dichiarato nel `COlePasteSpecialDialog` classe.

```
enum Selection {
    pasteLink,
    pasteNormal,
    pasteOther,
    pasteStatic
    };
```

Seguire questa breve desccriptions dei valori seguenti:

- `COlePasteSpecialDialog::pasteLink` È stato selezionato il pulsante di opzione Incolla collegamento e il formato scelto è stato un formato OLE standard.

- `COlePasteSpecialDialog::pasteNormal` È stato selezionato il pulsante di opzione Incolla e il formato scelto è stato un formato OLE standard.

- `COlePasteSpecialDialog::pasteOther` Il formato selezionato non è un formato OLE standard.

- `COlePasteSpecialDialog::pasteStatic` Il formato scelto è stato un metafile.

##  <a name="m_ps"></a>  COlePasteSpecialDialog::m_ps

Struttura di tipo OLEUIPASTESPECIAL consentono di controllare il comportamento della finestra di dialogo Incolla speciale.

```
OLEUIPASTESPECIAL m_ps;
```

### <a name="remarks"></a>Note

I membri di questa struttura possono essere modificati direttamente o tramite le funzioni membro.

Per altre informazioni, vedere la [OLEUIPASTESPECIAL](/windows/desktop/api/oledlg/ns-oledlg-tagoleuipastespeciala) struttura nel SDK di Windows.

## <a name="see-also"></a>Vedere anche

[Esempio MFC OCLIENT](../../visual-cpp-samples.md)<br/>
[Classe COleDialog](../../mfc/reference/coledialog-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDialog](../../mfc/reference/coledialog-class.md)
