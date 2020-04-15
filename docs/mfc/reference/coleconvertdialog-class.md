---
title: COleConvertDialog (classe)
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
ms.openlocfilehash: 6d6690b8d06df29ce9fcd323eb8724009ee3cca9
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366171"
---
# <a name="coleconvertdialog-class"></a>COleConvertDialog (classe)

Per ulteriori informazioni, vedere la struttura [OLEUICONVERT](/windows/win32/api/oledlg/ns-oledlg-oleuiconvertw) in Windows SDK.

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
|[COleConvertDialog::DoModal](#domodal)|Visualizza la finestra di dialogo Modifica elemento OLE.|
|[COleConvertDialog::GetClassID](#getclassid)|Ottiene il CLSID associato all'elemento selezionato.|
|[COleConvertDialog::GetDrawAspect](#getdrawaspect)|Specifica se disegnare l'elemento come icona.|
|[COleConvertDialog::GetIconicMetafile](#geticonicmetafile)|Ottiene un handle per il metafile associato al form iconico di questo elemento.|
|[COleConvertDialog::GetSelectionType](#getselectiontype)|Ottiene il tipo di selezione scelto.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleConvertDialog::m_cv](#m_cv)|Struttura che controlla il comportamento della finestra di dialogo.|

## <a name="remarks"></a>Osservazioni

> [!NOTE]
> Il codice del contenitore generato dalla creazione guidata dall'applicazione utilizza questa classe.

Per ulteriori informazioni sulle finestre di dialogo specifiche di OLE, vedere l'articolo [Finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

[COleDialog](../../mfc/reference/coledialog-class.md)

`COleConvertDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxodlgs.h

## <a name="coleconvertdialogcoleconvertdialog"></a><a name="coleconvertdialog"></a>COleConvertDialog::COleConvertDialog

Costruisce solo `COleConvertDialog` un oggetto.

```
explicit COleConvertDialog (
    COleClientItem* pItem,
    DWORD dwFlags = CF_SELECTCONVERTTO,
    CLSID* pClassID = NULL,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*pItem (elemento)*<br/>
Punta all'elemento da convertire o attivare.

*dwFlags*<br/>
Flag di creazione, che contiene un numero qualsiasi dei seguenti valori combinati utilizzando l'operatore or bit per bit:

- CF_SELECTCONVERTTO specifica che il pulsante di opzione Converti in verrà selezionato inizialmente quando viene chiamata la finestra di dialogo. Questa è la modalità predefinita.

- CF_SELECTACTIVATEAS specifica che il pulsante di opzione Attiva come verrà selezionato inizialmente quando viene chiamata la finestra di dialogo.

- CF_SETCONVERTDEFAULT Specifica che la classe il cui CLSID è specificato dal `clsidConvertDefault` membro della `m_cv` struttura verrà utilizzata come selezione predefinita nella casella di riepilogo della classe quando viene selezionato il pulsante di opzione Converti in.

- CF_SETACTIVATEDEFAULT Specifica che la classe il cui CLSID è specificato dal `clsidActivateDefault` membro della `m_cv` struttura verrà utilizzata come selezione predefinita nella casella di riepilogo della classe quando viene selezionato il pulsante di opzione Attiva come.

- CF_SHOWHELPBUTTON specifica che il pulsante ?da un messaggio di posta elettronica verrà visualizzato quando viene chiamata la finestra di dialogo.

*pClassID (informazioni in classe)*<br/>
Punta al CLSID dell'elemento da convertire o attivare. Se NULL, verrà utilizzato il CLSID associato a *pItem.*

*pParentWnd (informazioni in due)*<br/>
Punta all'oggetto finestra padre o `CWnd`proprietario (di tipo ) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre della finestra di dialogo viene impostata sulla finestra principale dell'applicazione.

### <a name="remarks"></a>Osservazioni

Per visualizzare la finestra di dialogo, chiamare la funzione [DoModal](#domodal) .

Per ulteriori informazioni, vedere [Chiave CLSID](/windows/win32/com/clsid-key-hklm) e struttura [OLEUICONVERT.](/windows/win32/api/oledlg/ns-oledlg-oleuiconvertw)

## <a name="coleconvertdialogdoconvert"></a><a name="doconvert"></a>COleConvertDialog::DoConvert

Chiamare questa funzione, dopo essere stata restituita correttamente da [DoModal](#domodal), per convertire o attivare un oggetto di tipo [COleClientItem](../../mfc/reference/coleclientitem-class.md).

```
BOOL DoConvert(COleClientItem* pItem);
```

### <a name="parameters"></a>Parametri

*pItem (elemento)*<br/>
Punta all'elemento da convertire o attivare. Non può essere NULL.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

L'elemento viene convertito o attivato in base alle informazioni selezionate dall'utente nella finestra di dialogo Converti.

## <a name="coleconvertdialogdomodal"></a><a name="domodal"></a>COleConvertDialog::DoModal

Chiamare questa funzione per visualizzare la finestra di dialogo Converti OLE.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

Stato di completamento per la finestra di dialogo. Uno dei valori seguenti:

- IDOK se la finestra di dialogo è stata visualizzata correttamente.

- IDCANCEL se l'utente ha annullato la finestra di dialogo.

- IDABORT se si è verificato un errore. Se viene restituito IDABORT, chiamare il [COleDialog::GetLastError](../../mfc/reference/coledialog-class.md#getlasterror) funzione membro per ottenere ulteriori informazioni sul tipo di errore che si è verificato. Per un elenco dei possibili errori, vedere la funzione [OleUIConvert](/windows/win32/api/oledlg/nf-oledlg-oleuiconvertw) in Windows SDK.

### <a name="remarks"></a>Osservazioni

Se si desidera inizializzare i vari controlli della finestra di dialogo `DoModal`impostando i membri della [struttura m_cv,](#m_cv) è necessario eseguire questa operazione prima di chiamare , ma dopo la costruzione dell'oggetto finestra di dialogo.

Se `DoModal` restituisce IDOK, è possibile chiamare altre funzioni membro per recuperare le impostazioni o le informazioni immesse dall'utente nella finestra di dialogo.

## <a name="coleconvertdialoggetclassid"></a><a name="getclassid"></a>COleConvertDialog::GetClassID

Chiamare questa funzione per ottenere il CLSID associato all'elemento selezionato dall'utente nella finestra di dialogo Converti.

```
REFCLSID GetClassID() const;
```

### <a name="return-value"></a>Valore restituito

Il CLSID associato all'elemento selezionato nella finestra di dialogo Converti.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione solo dopo DoModal restituisce IDOK.Call this function only after [DoModal](#domodal) returns IDOK.

Per ulteriori informazioni, vedere [chiave CLSID](/windows/win32/com/clsid-key-hklm) in Windows SDK.

## <a name="coleconvertdialoggetdrawaspect"></a><a name="getdrawaspect"></a>COleConvertDialog::GetDrawAspect

Chiamare questa funzione per determinare se l'utente ha scelto di visualizzare l'elemento selezionato come icona.

```
DVASPECT GetDrawAspect() const;
```

### <a name="return-value"></a>Valore restituito

Metodo necessario per eseguire il rendering dell'oggetto.

- DVASPECT_CONTENT restituito se la casella di controllo Visualizza come icona non è stata selezionata.

- DVASPECT_ICON restituito se è stata selezionata la casella di controllo Visualizza come icona.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione solo dopo DoModal restituisce IDOK.Call this function only after [DoModal](#domodal) returns IDOK.

Per ulteriori informazioni sull'aspetto del disegno, vedere la struttura dei dati [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) in Windows SDK.

## <a name="coleconvertdialoggeticonicmetafile"></a><a name="geticonicmetafile"></a>COleConvertDialog::GetIconicMetafile

Chiamare questa funzione per ottenere un handle per il metafile che contiene l'aspetto iconico dell'elemento selezionato.

```
HGLOBAL GetIconicMetafile() const;
```

### <a name="return-value"></a>Valore restituito

L'handle del metafile contenente l'aspetto iconico dell'elemento selezionato, se la casella di controllo Visualizza come icona è stata selezionata quando la finestra di dialogo è stata chiusa scegliendo OK; in caso contrario NULL.

## <a name="coleconvertdialoggetselectiontype"></a><a name="getselectiontype"></a>COleConvertDialog::GetSelectionType

Chiamare questa funzione per determinare il tipo di conversione selezionato nella finestra di dialogo Converti.

```
UINT GetSelectionType() const;
```

### <a name="return-value"></a>Valore restituito

Tipo di selezione effettuata.

### <a name="remarks"></a>Osservazioni

I valori del tipo `Selection` restituito vengono specificati `COleConvertDialog` dal tipo di enumerazione dichiarato nella classe.

```
enum Selection {
    noConversion,
    convertItem,
    activateAs
    };
```

Seguono brevi descrizioni di questi valori:

- `COleConvertDialog::noConversion`Restituito se la finestra di dialogo è stata annullata o se l'utente non ha selezionato alcuna conversione. Se `COleConvertDialog::DoModal` ha restituito IDOK, è possibile che l'utente abbia selezionato un'icona diversa da quella precedentemente selezionata.

- `COleConvertDialog::convertItem`Restituito se il pulsante di opzione Converti in è stato `DoModal` selezionato, l'utente ha selezionato un elemento diverso in cui convertire e ha restituito idOK.

- `COleConvertDialog::activateAs`Restituito se il pulsante di opzione Attiva come è stato `DoModal` selezionato, l'utente ha selezionato un elemento diverso da attivare e ha restituito IDOK.

## <a name="coleconvertdialogm_cv"></a><a name="m_cv"></a>COleConvertDialog::m_cv

Struttura di tipo OLEUICONVERT utilizzata per controllare il comportamento della finestra di dialogo Converti.

```
OLEUICONVERT m_cv;
```

### <a name="remarks"></a>Osservazioni

I membri di questa struttura possono essere modificati direttamente o tramite funzioni membro.

Per ulteriori informazioni, vedere la struttura [OLEUICONVERT](/windows/win32/api/oledlg/ns-oledlg-oleuiconvertw) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Classe COleDialog](../../mfc/reference/coledialog-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDialog](../../mfc/reference/coledialog-class.md)
