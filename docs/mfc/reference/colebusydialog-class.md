---
title: Classe COleBusyDialog
ms.date: 11/04/2016
f1_keywords:
- COleBusyDialog
- AFXODLGS/COleBusyDialog
- AFXODLGS/COleBusyDialog::COleBusyDialog
- AFXODLGS/COleBusyDialog::DoModal
- AFXODLGS/COleBusyDialog::GetSelectionType
- AFXODLGS/COleBusyDialog::m_bz
helpviewer_keywords:
- COleBusyDialog [MFC], COleBusyDialog
- COleBusyDialog [MFC], DoModal
- COleBusyDialog [MFC], GetSelectionType
- COleBusyDialog [MFC], m_bz
ms.assetid: c881a532-9672-4c41-b51b-5ce4a7246a6b
ms.openlocfilehash: aa3f0d85bcbf34d325125187b22b38c4da01fb43
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69504397"
---
# <a name="colebusydialog-class"></a>Classe COleBusyDialog

Utilizzata per la finestra di dialogo relativa al server OLE che non risponde o al server occupato.

## <a name="syntax"></a>Sintassi

```
class COleBusyDialog : public COleDialog
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[COleBusyDialog:: COleBusyDialog](#colebusydialog)|Costruisce un oggetto `COleBusyDialog`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleBusyDialog::D oModal](#domodal)|Consente di visualizzare la finestra di dialogo server OLE occupato.|
|[COleBusyDialog:: GetSelectionType](#getselectiontype)|Determina la scelta effettuata nella finestra di dialogo.|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|Descrizione|
|----------|-----------------|
|[COleBusyDialog::m_bz](#m_bz)|Struttura di tipo OLEUIBUSY che controlla il comportamento della finestra di dialogo.|

## <a name="remarks"></a>Note

Creare un oggetto della classe `COleBusyDialog` quando si desidera chiamare queste finestre di dialogo. Dopo che `COleBusyDialog` un oggetto è stato creato, è possibile utilizzare la struttura [m_bz](#m_bz) per inizializzare i valori o gli Stati dei controlli nella finestra di dialogo. La `m_bz` struttura è di tipo OLEUIBUSY. Per ulteriori informazioni sull'utilizzo di questa classe della finestra di dialogo, vedere la funzione membro [DoModal](#domodal) .

> [!NOTE]
>  Il codice contenitore generato dalla creazione guidata applicazione usa questa classe.

Per ulteriori informazioni, vedere la struttura [OLEUIBUSY](/windows/win32/api/oledlg/ns-oledlg-oleuibusyw) nel Windows SDK.

Per ulteriori informazioni sulle finestre di dialogo specifiche di OLE, vedere l'articolo finestre [di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

[COleDialog](../../mfc/reference/coledialog-class.md)

`COleBusyDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxodlgs. h

##  <a name="colebusydialog"></a>COleBusyDialog:: COleBusyDialog

Questa funzione costruisce solo un `COleBusyDialog` oggetto.

```
explicit COleBusyDialog(
    HTASK htaskBusy,
    BOOL bNotResponding = FALSE,
    DWORD dwFlags = 0,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*htaskBusy*<br/>
Handle per l'attività server occupata.

*bNotResponding*<br/>
Se TRUE, chiamare la finestra di dialogo non risponde invece della finestra di dialogo Server occupato. Il testo nella finestra di dialogo che non risponde è leggermente diverso rispetto a quello della finestra di dialogo Server occupato e il pulsante Annulla è disabilitato.

*dwFlags*<br/>
Flag di creazione. Può contenere zero o più dei valori seguenti combinati con l'operatore OR bit per bit:

- BZ_DISABLECANCELBUTTON Disabilita il pulsante Annulla quando si chiama la finestra di dialogo.

- BZ_DISABLESWITCHTOBUTTON disabilita il pulsante passa a quando si chiama la finestra di dialogo.

- BZ_DISABLERETRYBUTTON disabilita il pulsante Riprova quando si chiama la finestra di dialogo.

*pParentWnd*<br/>
Punta all'oggetto padre o alla finestra proprietaria (di `CWnd`tipo) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre dell'oggetto finestra di dialogo viene impostata sulla finestra principale dell'applicazione.

### <a name="remarks"></a>Note

Per visualizzare la finestra di dialogo, chiamare [DoModal](#domodal).

Per ulteriori informazioni, vedere la struttura [OLEUIBUSY](/windows/win32/api/oledlg/ns-oledlg-oleuibusyw) nel Windows SDK.

##  <a name="domodal"></a>COleBusyDialog::D oModal

Chiamare questa funzione per visualizzare la finestra di dialogo server OLE occupato o non in risposta.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

Stato di completamento della finestra di dialogo. Uno dei valori seguenti:

- IDOK se la finestra di dialogo è stata visualizzata correttamente.

- IDCANCEL se l'utente ha annullato la finestra di dialogo.

- IDABORT se si è verificato un errore. Se viene restituito IDABORT, chiamare la `COleDialog::GetLastError` funzione membro per ottenere ulteriori informazioni sul tipo di errore che si è verificato. Per un elenco di possibili errori, vedere la funzione [OLEUIBUSY](/windows/win32/api/oledlg/nf-oledlg-oleuibusyw) nella Windows SDK.

### <a name="remarks"></a>Note

Se si desidera inizializzare i vari controlli della finestra di dialogo impostando i membri della struttura [m_bz](#m_bz) , è necessario eseguire questa `DoModal`operazione prima di chiamare, ma dopo la costruzione dell'oggetto finestra di dialogo.

Se `DoModal` restituisce IDOK, è possibile chiamare altre funzioni membro per recuperare le impostazioni o le informazioni che sono state inserite dall'utente nella finestra di dialogo.

##  <a name="getselectiontype"></a>COleBusyDialog:: GetSelectionType

Chiamare questa funzione per ottenere il tipo di selezione scelto dall'utente nella finestra di dialogo Server occupato.

```
UINT GetSelectionType() const;
```

### <a name="return-value"></a>Valore restituito

Tipo di selezione eseguita.

### <a name="remarks"></a>Note

I valori dei tipi restituiti sono specificati dal `Selection` tipo di enumerazione dichiarato `COleBusyDialog` nella classe.

```
enum Selection {
    switchTo,
    retry,
    callUnblocked
    };
```

Le brevi descrizioni di questi valori seguono:

- `COleBusyDialog::switchTo`È stato premuto il pulsante passa a.

- `COleBusyDialog::retry`È stato premuto il pulsante Riprova.

- `COleBusyDialog::callUnblocked`La chiamata per attivare il server è ora sbloccata.

##  <a name="m_bz"></a>COleBusyDialog:: m_bz

Struttura di tipo OLEUIBUSY utilizzata per controllare il comportamento della finestra di dialogo Server occupato.

```
OLEUIBUSY m_bz;
```

### <a name="remarks"></a>Note

I membri di questa struttura possono essere modificati direttamente o tramite le funzioni membro.

Per ulteriori informazioni, vedere la struttura [OLEUIBUSY](/windows/win32/api/oledlg/ns-oledlg-oleuibusyw) nel Windows SDK.

## <a name="see-also"></a>Vedere anche

[Classe COleDialog](../../mfc/reference/coledialog-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDialog](../../mfc/reference/coledialog-class.md)
