---
title: Classe COleLinksDialog
ms.date: 11/04/2016
f1_keywords:
- COleLinksDialog
- AFXODLGS/COleLinksDialog
- AFXODLGS/COleLinksDialog::COleLinksDialog
- AFXODLGS/COleLinksDialog::DoModal
- AFXODLGS/COleLinksDialog::m_el
helpviewer_keywords:
- COleLinksDialog [MFC], COleLinksDialog
- COleLinksDialog [MFC], DoModal
- COleLinksDialog [MFC], m_el
ms.assetid: fb2eb638-2809-46db-ac74-392a732affc7
ms.openlocfilehash: f120678c822749c8f27c3c56c95fcdd54647aca3
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374927"
---
# <a name="colelinksdialog-class"></a>Classe COleLinksDialog

Utilizzato per la finestra di dialogo di modifica collegamenti OLE.

## <a name="syntax"></a>Sintassi

```
class COleLinksDialog : public COleDialog
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleLinksDialog::COleLinksDialog](#colelinksdialog)|Costruisce un oggetto `COleLinksDialog`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleLinksDialog::DoModal](#domodal)|Visualizza la finestra di dialogo Modifica collegamenti OLE.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleLinksDialog::m_el](#m_el)|Struttura di tipo OLEUIEDITLINKS che controlla il comportamento della finestra di dialogo.|

## <a name="remarks"></a>Osservazioni

Creare un oggetto `COleLinksDialog` di classe quando si desidera chiamare questa finestra di dialogo. Dopo `COleLinksDialog` aver costruito un oggetto, è possibile utilizzare la struttura [m_el](#m_el) per inizializzare i valori o gli stati dei controlli nella finestra di dialogo. La `m_el` struttura è di tipo OLEUIEDITLINKS. Per altre informazioni sull'uso di questa classe di finestre di dialogo, vedere la funzione membro [DoModal.For](#domodal) more information about using this dialog class, see the DoModal member function.

> [!NOTE]
> Il codice del contenitore generato dalla creazione guidata dall'applicazione utilizza questa classe.

Per ulteriori informazioni, vedere la struttura [OLEUIEDITLINKS](/windows/win32/api/oledlg/ns-oledlg-oleuieditlinksw) in Windows SDK.

Per ulteriori informazioni sulle finestre di dialogo specifiche di OLE, vedere l'articolo [Finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

[COleDialog](../../mfc/reference/coledialog-class.md)

`COleLinksDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxodlgs.h

## <a name="colelinksdialogdomodal"></a><a name="domodal"></a>COleLinksDialog::DoModal

Visualizza la finestra di dialogo Modifica collegamenti OLE.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

Stato di completamento per la finestra di dialogo. Uno dei valori seguenti:

- IDOK se la finestra di dialogo è stata visualizzata correttamente.

- IDCANCEL se l'utente ha annullato la finestra di dialogo.

- IDABORT se si è verificato un errore. Se viene restituito IDABORT, `COleDialog::GetLastError` chiamare la funzione membro per ottenere ulteriori informazioni sul tipo di errore che si è verificato. Per un elenco dei possibili errori, vedere la funzione [OleUIEditLinks](/windows/win32/api/oledlg/nf-oledlg-oleuieditlinksw) in Windows SDK.

### <a name="remarks"></a>Osservazioni

Se si desidera inizializzare i vari controlli della finestra di dialogo `DoModal`impostando i membri della [struttura m_el,](#m_el) è necessario farlo prima di chiamare , ma dopo la costruzione dell'oggetto finestra di dialogo.

## <a name="colelinksdialogcolelinksdialog"></a><a name="colelinksdialog"></a>COleLinksDialog::COleLinksDialog

Costruisce un oggetto `COleLinksDialog`.

```
COleLinksDialog (
    COleDocument* pDoc,
    CView* pView,
    DWORD dwFlags = 0,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*pDoc (informazioni in stato ine*<br/>
Punta al documento OLE che contiene i collegamenti da modificare.

*Pview*<br/>
Punta alla vista corrente su *pDoc*.

*dwFlags*<br/>
Flag di creazione, che contiene 0 o ELF_SHOWHELP per specificare se il pulsante ?da visualizzare quando viene visualizzata la finestra di dialogo.

*pParentWnd (informazioni in due)*<br/>
Punta all'oggetto finestra padre o `CWnd`proprietario (di tipo ) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre della finestra di dialogo viene impostata sulla finestra principale dell'applicazione.

### <a name="remarks"></a>Osservazioni

Questa funzione costruisce `COleLinksDialog` solo un oggetto. Per visualizzare la finestra di dialogo, chiamare la funzione [DoModal](#domodal) .

## <a name="colelinksdialogm_el"></a><a name="m_el"></a>COleLinksDialog::m_el

Struttura di tipo OLEUIEDITLINKS utilizzata per controllare il comportamento della finestra di dialogo Modifica collegamenti.

```
OLEUIEDITLINKS m_el;
```

### <a name="remarks"></a>Osservazioni

I membri di questa struttura possono essere modificati direttamente o tramite funzioni membro.

Per ulteriori informazioni, vedere la struttura [OLEUIEDITLINKS](/windows/win32/api/oledlg/ns-oledlg-oleuieditlinksw) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Classe COleDialog](../../mfc/reference/coledialog-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDialog](../../mfc/reference/coledialog-class.md)
