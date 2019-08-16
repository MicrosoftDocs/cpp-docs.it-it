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
ms.openlocfilehash: ba57e756457fcffca806eeba7454ddf7bcf99d34
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69504300"
---
# <a name="coleconvertdialog-class"></a>Classe COleConvertDialog

Per ulteriori informazioni, vedere la struttura [OleUIConvert](/windows/win32/api/oledlg/ns-oledlg-oleuiconvertw) nel Windows SDK.

## <a name="syntax"></a>Sintassi

```
class COleConvertDialog : public COleDialog
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleConvertDialog:: COleConvertDialog](#coleconvertdialog)|Costruisce un oggetto `COleConvertDialog`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[COleConvertDialog::D oConvert](#doconvert)|Esegue la conversione specificata nella finestra di dialogo.|
|[COleConvertDialog::D oModal](#domodal)|Consente di visualizzare la finestra di dialogo modifica elemento OLE.|
|[COleConvertDialog:: GetClassID](#getclassid)|Ottiene il CLSID associato all'elemento scelto.|
|[COleConvertDialog:: GetDrawAspect](#getdrawaspect)|Specifica se creare un elemento come icona.|
|[COleConvertDialog:: GetIconicMetafile](#geticonicmetafile)|Ottiene un handle per il Metafile associato alla forma iconica di questo elemento.|
|[COleConvertDialog:: GetSelectionType](#getselectiontype)|Ottiene il tipo di selezione scelto.|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|Descrizione|
|----------|-----------------|
|[COleConvertDialog:: m_cv](#m_cv)|Struttura che controlla il comportamento della finestra di dialogo.|

## <a name="remarks"></a>Note

> [!NOTE]
>  Il codice contenitore generato dalla creazione guidata applicazione usa questa classe.

Per ulteriori informazioni sulle finestre di dialogo specifiche di OLE, vedere l'articolo finestre [di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).

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

##  <a name="coleconvertdialog"></a>COleConvertDialog:: COleConvertDialog

Costruisce solo un `COleConvertDialog` oggetto.

```
explicit COleConvertDialog (
    COleClientItem* pItem,
    DWORD dwFlags = CF_SELECTCONVERTTO,
    CLSID* pClassID = NULL,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*pItem*<br/>
Punta all'elemento da convertire o attivare.

*dwFlags*<br/>
Flag di creazione, che contiene un numero qualsiasi dei valori seguenti combinati tramite l'operatore OR bit per bit:

- CF_SELECTCONVERTTO specifica che il pulsante Converti in opzione verrà selezionato inizialmente quando viene chiamata la finestra di dialogo. Questa è l'impostazione predefinita.

- CF_SELECTACTIVATEAS specifica che il pulsante di opzione attiva come verrà selezionato inizialmente quando viene chiamata la finestra di dialogo.

- CF_SETCONVERTDEFAULT specifica che la classe il cui CLSID è specificato dal `clsidConvertDefault` membro `m_cv` della struttura verrà utilizzata come selezione predefinita nella casella di riepilogo classe quando viene selezionato il pulsante di opzione Converti in.

- CF_SETACTIVATEDEFAULT specifica che la classe il cui CLSID è specificato dal `clsidActivateDefault` membro `m_cv` della struttura verrà utilizzata come selezione predefinita nella casella di riepilogo classe quando viene selezionato il pulsante di opzione attiva come.

- CF_SHOWHELPBUTTON specifica che il pulsante della guida viene visualizzato quando viene chiamata la finestra di dialogo.

*pClassID*<br/>
Punta al CLSID dell'elemento da convertire o attivare. Se è NULL, verrà utilizzato il CLSID associato a *pItem* .

*pParentWnd*<br/>
Punta all'oggetto padre o alla finestra proprietaria (di `CWnd`tipo) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre della finestra di dialogo viene impostata sulla finestra principale dell'applicazione.

### <a name="remarks"></a>Note

Per visualizzare la finestra di dialogo, chiamare la funzione [DoModal](#domodal) .

Per ulteriori informazioni, vedere la [chiave CLSID](/windows/win32/com/clsid-key-hklm) e la struttura [OleUIConvert](/windows/win32/api/oledlg/ns-oledlg-oleuiconvertw) .

##  <a name="doconvert"></a>COleConvertDialog::D oConvert

Chiamare questa funzione, dopo la restituzione corretta da [DoModal](#domodal), per convertire o per attivare un oggetto di tipo [COleClientItem](../../mfc/reference/coleclientitem-class.md).

```
BOOL DoConvert(COleClientItem* pItem);
```

### <a name="parameters"></a>Parametri

*pItem*<br/>
Punta all'elemento da convertire o attivare. Non può essere NULL.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

L'elemento viene convertito o attivato in base alle informazioni selezionate dall'utente nella finestra di dialogo Converti.

##  <a name="domodal"></a>COleConvertDialog::D oModal

Chiamare questa funzione per visualizzare la finestra di dialogo conversione OLE.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

Stato di completamento della finestra di dialogo. Uno dei valori seguenti:

- IDOK se la finestra di dialogo è stata visualizzata correttamente.

- IDCANCEL se l'utente ha annullato la finestra di dialogo.

- IDABORT se si è verificato un errore. Se viene restituito IDABORT, chiamare la funzione membro [COleDialog:: GetLastError](../../mfc/reference/coledialog-class.md#getlasterror) per ottenere ulteriori informazioni sul tipo di errore che si è verificato. Per un elenco di possibili errori, vedere la funzione [OleUIConvert](/windows/win32/api/oledlg/nf-oledlg-oleuiconvertw) nella Windows SDK.

### <a name="remarks"></a>Note

Se si desidera inizializzare i vari controlli della finestra di dialogo impostando i membri della struttura [m_cv](#m_cv) , è necessario eseguire questa `DoModal`operazione prima di chiamare, ma dopo la costruzione dell'oggetto finestra di dialogo.

Se `DoModal` restituisce IDOK, è possibile chiamare altre funzioni membro per recuperare le impostazioni o le informazioni che sono state inserite dall'utente nella finestra di dialogo.

##  <a name="getclassid"></a>COleConvertDialog:: GetClassID

Chiamare questa funzione per ottenere il CLSID associato all'elemento selezionato dall'utente nella finestra di dialogo Converti.

```
REFCLSID GetClassID() const;
```

### <a name="return-value"></a>Valore restituito

CLSID associato all'elemento selezionato nella finestra di dialogo Converti.

### <a name="remarks"></a>Note

Chiamare questa funzione solo dopo che [DoModal](#domodal) restituisce IDOK.

Per ulteriori informazioni, vedere la [chiave CLSID](/windows/win32/com/clsid-key-hklm) nella Windows SDK.

##  <a name="getdrawaspect"></a>COleConvertDialog:: GetDrawAspect

Chiamare questa funzione per determinare se l'utente ha scelto di visualizzare l'elemento selezionato come icona.

```
DVASPECT GetDrawAspect() const;
```

### <a name="return-value"></a>Valore restituito

Metodo necessario per eseguire il rendering dell'oggetto.

- DVASPECT_CONTENT restituito se la casella di controllo Visualizza come icona non è stata selezionata.

- DVASPECT_ICON restituito se è stata selezionata la casella di controllo Visualizza come icona.

### <a name="remarks"></a>Note

Chiamare questa funzione solo dopo che [DoModal](#domodal) restituisce IDOK.

Per ulteriori informazioni sull'aspetto del disegno, vedere la struttura dei dati [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) nell'Windows SDK.

##  <a name="geticonicmetafile"></a>COleConvertDialog:: GetIconicMetafile

Chiamare questa funzione per ottenere un handle per il metafile che contiene l'aspetto iconico dell'elemento selezionato.

```
HGLOBAL GetIconicMetafile() const;
```

### <a name="return-value"></a>Valore restituito

Handle per il metafile contenente l'aspetto iconico dell'elemento selezionato, se è stata selezionata la casella di controllo Visualizza come icona quando la finestra di dialogo è stata annullata scegliendo OK. in caso contrario, NULL.

##  <a name="getselectiontype"></a>COleConvertDialog:: GetSelectionType

Chiamare questa funzione per determinare il tipo di conversione selezionato nella finestra di dialogo Converti.

```
UINT GetSelectionType() const;
```

### <a name="return-value"></a>Valore restituito

Tipo di selezione eseguita.

### <a name="remarks"></a>Note

I valori dei tipi restituiti sono specificati dal `Selection` tipo di enumerazione dichiarato `COleConvertDialog` nella classe.

```
enum Selection {
    noConversion,
    convertItem,
    activateAs
    };
```

Le brevi descrizioni di questi valori seguono:

- `COleConvertDialog::noConversion`Restituito se la finestra di dialogo è stata annullata o se l'utente non ha selezionato alcuna conversione. Se `COleConvertDialog::DoModal` viene restituito IDOK, è possibile che l'utente abbia selezionato un'icona diversa da quella selezionata in precedenza.

- `COleConvertDialog::convertItem`Restituito se è stato selezionato il pulsante di opzione Converti in, l'utente ha selezionato un elemento diverso in cui `DoModal` eseguire la conversione e ha restituito IDOK.

- `COleConvertDialog::activateAs`Restituito se è stato selezionato il pulsante di opzione attiva come, l'utente ha selezionato un elemento diverso da `DoModal` attivare e ha restituito IDOK.

##  <a name="m_cv"></a>COleConvertDialog:: m_cv

Struttura di tipo OLEUICONVERT utilizzata per controllare il comportamento della finestra di dialogo di conversione.

```
OLEUICONVERT m_cv;
```

### <a name="remarks"></a>Note

I membri di questa struttura possono essere modificati direttamente o tramite le funzioni membro.

Per ulteriori informazioni, vedere la struttura [OleUIConvert](/windows/win32/api/oledlg/ns-oledlg-oleuiconvertw) nel Windows SDK.

## <a name="see-also"></a>Vedere anche

[Classe COleDialog](../../mfc/reference/coledialog-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDialog](../../mfc/reference/coledialog-class.md)
