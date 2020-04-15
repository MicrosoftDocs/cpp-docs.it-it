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
ms.openlocfilehash: 5be42463c08cacd83de84900fb4d98771774e897
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364248"
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
|[COleBusyDialog::DoModal](#domodal)|Visualizza la finestra di dialogo Server OLE Occupato.|
|[COleBusyDialog::GetSelectionType](#getselectiontype)|Determina la scelta effettuata nella finestra di dialogo.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleBusyDialog::m_bz](#m_bz)|Struttura di tipo OLEUIBUSY che controlla il comportamento della finestra di dialogo.|

## <a name="remarks"></a>Osservazioni

Creare un oggetto `COleBusyDialog` di classe quando si desidera chiamare queste finestre di dialogo. Dopo `COleBusyDialog` aver costruito un oggetto, è possibile utilizzare la struttura [m_bz](#m_bz) per inizializzare i valori o gli stati dei controlli nella finestra di dialogo. La `m_bz` struttura è di tipo OLEUIBUSY. Per altre informazioni sull'uso di questa classe di finestre di dialogo, vedere la funzione membro [DoModal.For](#domodal) more information about using this dialog class, see the DoModal member function.

> [!NOTE]
> Il codice del contenitore generato dalla creazione guidata dall'applicazione utilizza questa classe.

Per ulteriori informazioni, vedere la struttura [OLEUIBUSY](/windows/win32/api/oledlg/ns-oledlg-oleuibusyw) in Windows SDK.

Per ulteriori informazioni sulle finestre di dialogo specifiche di OLE, vedere l'articolo [Finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

[COleDialog](../../mfc/reference/coledialog-class.md)

`COleBusyDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxodlgs.h

## <a name="colebusydialogcolebusydialog"></a><a name="colebusydialog"></a>COleBusyDialog::COleBusyDialog

Questa funzione costruisce `COleBusyDialog` solo un oggetto.

```
explicit COleBusyDialog(
    HTASK htaskBusy,
    BOOL bNotResponding = FALSE,
    DWORD dwFlags = 0,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*htaskBusy*<br/>
Gestire l'attività server occupata.

*bNonrisponde*<br/>
Se TRUE, chiamare la finestra di dialogo Non risponde anziché la finestra di dialogo Server occupato . Il testo nella finestra di dialogo Non risponde è leggermente diverso da quello nella finestra di dialogo Server occupato e il pulsante Annulla è disabilitato.

*dwFlags*<br/>
Flag di creazione. Può contenere zero o più dei seguenti valori combinati con l'operatore OR bit per bit:

- BZ_DISABLECANCELBUTTON disattivare il pulsante Annulla quando si chiama la finestra di dialogo.

- BZ_DISABLESWITCHTOBUTTON disattivare il pulsante Cambia in quando si chiama la finestra di dialogo.

- BZ_DISABLERETRYBUTTON disattivare il pulsante Riprova quando si chiama la finestra di dialogo.

*pParentWnd (informazioni in due)*<br/>
Punta all'oggetto finestra padre o `CWnd`proprietario (di tipo ) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre dell'oggetto finestra di dialogo viene impostata sulla finestra principale dell'applicazione.

### <a name="remarks"></a>Osservazioni

Per visualizzare la finestra di dialogo, chiamare [DoModal](#domodal).

Per ulteriori informazioni, vedere la struttura [OLEUIBUSY](/windows/win32/api/oledlg/ns-oledlg-oleuibusyw) in Windows SDK.

## <a name="colebusydialogdomodal"></a><a name="domodal"></a>COleBusyDialog::DoModal

Chiamare questa funzione per visualizzare la finestra di dialogo Server OLE occupato o Server non risponde.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

Stato di completamento per la finestra di dialogo. Uno dei valori seguenti:

- IDOK se la finestra di dialogo è stata visualizzata correttamente.

- IDCANCEL se l'utente ha annullato la finestra di dialogo.

- IDABORT se si è verificato un errore. Se viene restituito IDABORT, `COleDialog::GetLastError` chiamare la funzione membro per ottenere ulteriori informazioni sul tipo di errore che si è verificato. Per un elenco dei possibili errori, vedere la funzione [OleUIBusy](/windows/win32/api/oledlg/nf-oledlg-oleuibusyw) in Windows SDK.

### <a name="remarks"></a>Osservazioni

Se si desidera inizializzare i vari controlli della finestra di dialogo `DoModal`impostando i membri della [struttura m_bz,](#m_bz) è necessario eseguire questa operazione prima di chiamare , ma dopo la costruzione dell'oggetto finestra di dialogo.

Se `DoModal` restituisce IDOK, è possibile chiamare altre funzioni membro per recuperare le impostazioni o le informazioni immesse dall'utente nella finestra di dialogo.

## <a name="colebusydialoggetselectiontype"></a><a name="getselectiontype"></a>COleBusyDialog::GetSelectionType

Chiamare questa funzione per ottenere il tipo di selezione scelto dall'utente nella finestra di dialogo Server occupato .

```
UINT GetSelectionType() const;
```

### <a name="return-value"></a>Valore restituito

Tipo di selezione effettuata.

### <a name="remarks"></a>Osservazioni

I valori del tipo `Selection` restituito vengono specificati `COleBusyDialog` dal tipo di enumerazione dichiarato nella classe.

```
enum Selection {
    switchTo,
    retry,
    callUnblocked
    };
```

Seguono brevi descrizioni di questi valori:

- `COleBusyDialog::switchTo`È stato premuto il pulsante Passa a.

- `COleBusyDialog::retry`È stato premuto il pulsante Riprova.

- `COleBusyDialog::callUnblocked`La chiamata per attivare il server è ora sbloccata.

## <a name="colebusydialogm_bz"></a><a name="m_bz"></a>COleBusyDialog::m_bz

Struttura di tipo OLEUIBUSY utilizzata per controllare il comportamento della finestra di dialogo Server occupato.

```
OLEUIBUSY m_bz;
```

### <a name="remarks"></a>Osservazioni

I membri di questa struttura possono essere modificati direttamente o tramite funzioni membro.

Per ulteriori informazioni, vedere la struttura [OLEUIBUSY](/windows/win32/api/oledlg/ns-oledlg-oleuibusyw) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Classe COleDialog](../../mfc/reference/coledialog-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDialog](../../mfc/reference/coledialog-class.md)
