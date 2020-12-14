---
description: 'Altre informazioni su: classe COleLinksDialog'
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
ms.openlocfilehash: 036fc2b97fe4ad529e87c3573e280c99ac157848
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97226922"
---
# <a name="colelinksdialog-class"></a>Classe COleLinksDialog

Utilizzato per la finestra di dialogo di modifica collegamenti OLE.

## <a name="syntax"></a>Sintassi

```
class COleLinksDialog : public COleDialog
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[COleLinksDialog:: COleLinksDialog](#colelinksdialog)|Costruisce un oggetto `COleLinksDialog`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[COleLinksDialog::D oModal](#domodal)|Consente di visualizzare la finestra di dialogo Modifica collegamenti OLE.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[COleLinksDialog:: m_el](#m_el)|Struttura di tipo OLEUIEDITLINKS che controlla il comportamento della finestra di dialogo.|

## <a name="remarks"></a>Commenti

Creare un oggetto della classe `COleLinksDialog` quando si desidera chiamare questa finestra di dialogo. Dopo la `COleLinksDialog` costruzione di un oggetto, è possibile utilizzare la struttura [m_el](#m_el) per inizializzare i valori o gli Stati dei controlli nella finestra di dialogo. La `m_el` struttura è di tipo OLEUIEDITLINKS. Per ulteriori informazioni sull'utilizzo di questa classe della finestra di dialogo, vedere la funzione membro [DoModal](#domodal) .

> [!NOTE]
> Il codice contenitore generato dalla creazione guidata applicazione usa questa classe.

Per ulteriori informazioni, vedere la struttura [OLEUIEDITLINKS](/windows/win32/api/oledlg/ns-oledlg-oleuieditlinksw) nel Windows SDK.

Per ulteriori informazioni sulle finestre di dialogo specifiche di OLE, vedere l'articolo finestre [di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

[COleDialog](../../mfc/reference/coledialog-class.md)

`COleLinksDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxodlgs. h

## <a name="colelinksdialogdomodal"></a><a name="domodal"></a> COleLinksDialog::D oModal

Consente di visualizzare la finestra di dialogo Modifica collegamenti OLE.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

Stato di completamento della finestra di dialogo. Uno dei valori seguenti:

- IDOK se la finestra di dialogo è stata visualizzata correttamente.

- IDCANCEL se l'utente ha annullato la finestra di dialogo.

- IDABORT se si è verificato un errore. Se viene restituito IDABORT, chiamare la `COleDialog::GetLastError` funzione membro per ottenere ulteriori informazioni sul tipo di errore che si è verificato. Per un elenco di possibili errori, vedere la funzione [OLEUIEDITLINKS](/windows/win32/api/oledlg/nf-oledlg-oleuieditlinksw) nella Windows SDK.

### <a name="remarks"></a>Commenti

Se si desidera inizializzare i vari controlli della finestra di dialogo impostando i membri della struttura [m_el](#m_el) , è necessario eseguire questa operazione prima di chiamare `DoModal` , ma dopo la costruzione dell'oggetto finestra di dialogo.

## <a name="colelinksdialogcolelinksdialog"></a><a name="colelinksdialog"></a> COleLinksDialog:: COleLinksDialog

Costruisce un oggetto `COleLinksDialog`.

```
COleLinksDialog (
    COleDocument* pDoc,
    CView* pView,
    DWORD dwFlags = 0,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*pDoc*<br/>
Punta al documento OLE contenente i collegamenti da modificare.

*pView*<br/>
Punta alla visualizzazione corrente di *pDoc*.

*dwFlags*<br/>
Flag di creazione, che contiene 0 o ELF_SHOWHELP per specificare se il pulsante della Guida verrà visualizzato quando viene visualizzata la finestra di dialogo.

*pParentWnd*<br/>
Punta all'oggetto padre o alla finestra proprietaria (di tipo `CWnd` ) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre della finestra di dialogo viene impostata sulla finestra principale dell'applicazione.

### <a name="remarks"></a>Commenti

Questa funzione costruisce solo un `COleLinksDialog` oggetto. Per visualizzare la finestra di dialogo, chiamare la funzione [DoModal](#domodal) .

## <a name="colelinksdialogm_el"></a><a name="m_el"></a> COleLinksDialog:: m_el

Struttura di tipo OLEUIEDITLINKS utilizzata per controllare il comportamento della finestra di dialogo Modifica collegamenti.

```
OLEUIEDITLINKS m_el;
```

### <a name="remarks"></a>Commenti

I membri di questa struttura possono essere modificati direttamente o tramite le funzioni membro.

Per ulteriori informazioni, vedere la struttura [OLEUIEDITLINKS](/windows/win32/api/oledlg/ns-oledlg-oleuieditlinksw) nel Windows SDK.

## <a name="see-also"></a>Vedi anche

[Classe COleDialog](../../mfc/reference/coledialog-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDialog](../../mfc/reference/coledialog-class.md)
