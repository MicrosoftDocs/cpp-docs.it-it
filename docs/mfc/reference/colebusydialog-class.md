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
ms.openlocfilehash: 1b8c5522d0e1f223c31cd53e8995c962c7095d46
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50664139"
---
# <a name="colebusydialog-class"></a>Classe COleBusyDialog

Utilizzata per la finestra di dialogo relativa al server OLE che non risponde o al server occupato.

## <a name="syntax"></a>Sintassi

```
class COleBusyDialog : public COleDialog
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleBusyDialog::COleBusyDialog](#colebusydialog)|Costruisce un oggetto `COleBusyDialog`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleBusyDialog::DoModal](#domodal)|Consente di visualizzare la finestra di dialogo OLE Server occupato.|
|[COleBusyDialog::GetSelectionType](#getselectiontype)|Determina la selezione effettuata nella finestra di dialogo.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleBusyDialog::m_bz](#m_bz)|Struttura di tipo OLEUIBUSY che controlla il comportamento della finestra di dialogo.|

## <a name="remarks"></a>Note

Creare un oggetto della classe `COleBusyDialog` quando si desidera chiamare queste finestre di dialogo. Dopo una `COleBusyDialog` oggetto è stato costruito, è possibile usare il [m_bz](#m_bz) struttura per inizializzare i valori o degli stati dei controlli nella finestra di dialogo. Il `m_bz` struttura è di tipo OLEUIBUSY. Per altre informazioni sull'uso di questa classe di finestra di dialogo, vedere la [DoModal](#domodal) funzione membro.

> [!NOTE]
>  Il codice dell'applicazione contenitore generato dalla procedura guidata Usa questa classe.

Per altre informazioni, vedere la [OLEUIBUSY](/windows/desktop/api/oledlg/ns-oledlg-tagoleuibusya) struttura nel SDK di Windows.

Per altre informazioni sulle finestre di dialogo OLE specifici, vedere l'articolo [finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).

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

##  <a name="colebusydialog"></a>  COleBusyDialog::COleBusyDialog

Questa funzione crea solo un `COleBusyDialog` oggetto.

```
explicit COleBusyDialog(
    HTASK htaskBusy,
    BOOL bNotResponding = FALSE,
    DWORD dwFlags = 0,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*htaskBusy*<br/>
Handle per l'attività di server è occupato.

*bNotResponding*<br/>
Se TRUE, chiamare la finestra di dialogo non risponde anziché nella finestra di dialogo Server occupato. Il testo nella finestra di dialogo non risponde è leggermente diverso rispetto a quella nella finestra di dialogo Server occupato e il pulsante Annulla è disabilitato.

*dwFlags*<br/>
Flag di creazione. Può contenere zero o più dei valori seguenti combinati con l'operatore OR bit per bit:

- Quando si chiama la finestra di dialogo, BZ_DISABLECANCELBUTTON disabilita il pulsante Annulla.

- BZ_DISABLESWITCHTOBUTTON disabilita il pulsante passa a quando si chiama la finestra di dialogo.

- BZ_DISABLERETRYBUTTON disabilitare il pulsante di ripetizione dei tentativi quando si chiama la finestra di dialogo.

*pParentWnd*<br/>
Punta all'oggetto finestra padre o proprietaria (di tipo `CWnd`) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre dell'oggetto finestra di dialogo è impostata per la finestra principale dell'applicazione.

### <a name="remarks"></a>Note

Per visualizzare la finestra di dialogo, chiamare [DoModal](#domodal).

Per altre informazioni, vedere la [OLEUIBUSY](/windows/desktop/api/oledlg/ns-oledlg-tagoleuibusya) struttura nel SDK di Windows.

##  <a name="domodal"></a>  COleBusyDialog::DoModal

Chiamare questa funzione per visualizzare la finestra di dialogo OLE Server occupato o di Server non risponde.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

Stato di completamento della finestra di dialogo. Uno dei valori seguenti:

- IDOK se la finestra di dialogo viene visualizzata correttamente.

- IDCANCEL, se l'utente ha annullato la finestra di dialogo.

- IDABORT se si è verificato un errore. Se viene restituito IDABORT, chiamare il `COleDialog::GetLastError` funzione membro per ottenere altre informazioni sul tipo di errore che si sono verificati. Per un elenco dei possibili errori, vedere la [OleUIBusy](/windows/desktop/api/oledlg/nf-oledlg-oleuibusya) funzione nel SDK di Windows.

### <a name="remarks"></a>Note

Se si desidera inizializzare i vari controlli di finestra di dialogo impostando i membri del [m_bz](#m_bz) struttura, è necessario eseguire questa operazione prima di chiamare `DoModal`, ma dopo che viene costruito l'oggetto finestra di dialogo.

Se `DoModal` restituisce IDOK, è possibile chiamare altri membri funzioni per recuperare le impostazioni o le informazioni che è stato immesso dall'utente nella finestra di dialogo.

##  <a name="getselectiontype"></a>  COleBusyDialog::GetSelectionType

Chiamare questa funzione per ottenere il tipo di selezione scelto dall'utente nella finestra di dialogo Server occupato.

```
UINT GetSelectionType() const;
```

### <a name="return-value"></a>Valore restituito

Tipo di selezione effettuata.

### <a name="remarks"></a>Note

Vengono specificati i valori di tipo restituito per il `Selection` tipo enumerazione dichiarato nel `COleBusyDialog` classe.

```
enum Selection {
    switchTo,
    retry,
    callUnblocked
    };
```

Seguono brevi descrizioni dei valori seguenti:

- `COleBusyDialog::switchTo` Pulsante passa a è stato premuto.

- `COleBusyDialog::retry` È stato premuto il pulsante Riprova.

- `COleBusyDialog::callUnblocked` Chiamata per attivare il server è ora sbloccato.

##  <a name="m_bz"></a>  COleBusyDialog::m_bz

Struttura di tipo OLEUIBUSY consentono di controllare il comportamento della finestra di dialogo Server occupato.

```
OLEUIBUSY m_bz;
```

### <a name="remarks"></a>Note

I membri di questa struttura possono essere modificati direttamente o tramite le funzioni membro.

Per altre informazioni, vedere la [OLEUIBUSY](/windows/desktop/api/oledlg/ns-oledlg-tagoleuibusya) struttura nel SDK di Windows.

## <a name="see-also"></a>Vedere anche

[Classe COleDialog](../../mfc/reference/coledialog-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDialog](../../mfc/reference/coledialog-class.md)
