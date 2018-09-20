---
title: Classe COleLinksDialog | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- COleLinksDialog
- AFXODLGS/COleLinksDialog
- AFXODLGS/COleLinksDialog::COleLinksDialog
- AFXODLGS/COleLinksDialog::DoModal
- AFXODLGS/COleLinksDialog::m_el
dev_langs:
- C++
helpviewer_keywords:
- COleLinksDialog [MFC], COleLinksDialog
- COleLinksDialog [MFC], DoModal
- COleLinksDialog [MFC], m_el
ms.assetid: fb2eb638-2809-46db-ac74-392a732affc7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c7c89b6e149a6c8f0eab63ec3f2e1a6301734c9d
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46448168"
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
|[COleLinksDialog::DoModal](#domodal)|Consente di visualizzare la finestra di dialogo Modifica collegamenti OLE.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleLinksDialog::m_el](#m_el)|Una struttura di tipo OLEUIEDITLINKS che controlla il comportamento della finestra di dialogo.|

## <a name="remarks"></a>Note

Creare un oggetto della classe `COleLinksDialog` quando si desidera chiamare questa finestra di dialogo. Dopo una `COleLinksDialog` oggetto è stato costruito, è possibile usare il [m_el](#m_el) struttura per inizializzare i valori o degli stati dei controlli nella finestra di dialogo. Il `m_el` struttura è di tipo OLEUIEDITLINKS. Per altre informazioni sull'uso di questa classe di finestra di dialogo, vedere la [DoModal](#domodal) funzione membro.

> [!NOTE]
>  Il codice dell'applicazione contenitore generato dalla procedura guidata Usa questa classe.

Per altre informazioni, vedere la [OLEUIEDITLINKS](/windows/desktop/api/oledlg/ns-oledlg-tagoleuieditlinksa) struttura nel SDK di Windows.

Per altre informazioni sulle finestre di dialogo OLE specifici, vedere l'articolo [finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).

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

##  <a name="domodal"></a>  COleLinksDialog::DoModal

Consente di visualizzare la finestra di dialogo Modifica collegamenti OLE.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

Stato di completamento della finestra di dialogo. Uno dei valori seguenti:

- IDOK se la finestra di dialogo viene visualizzata correttamente.

- IDCANCEL, se l'utente ha annullato la finestra di dialogo.

- IDABORT se si è verificato un errore. Se viene restituito IDABORT, chiamare il `COleDialog::GetLastError` funzione membro per ottenere altre informazioni sul tipo di errore che si sono verificati. Per un elenco dei possibili errori, vedere la [OleUIEditLinks](/windows/desktop/api/oledlg/nf-oledlg-oleuieditlinksa) funzione nel SDK di Windows.

### <a name="remarks"></a>Note

Se si desidera inizializzare i vari controlli di finestra di dialogo impostando i membri del [m_el](#m_el) struttura, è consigliabile farlo prima di chiamare `DoModal`, ma dopo che viene costruito l'oggetto finestra di dialogo.

##  <a name="colelinksdialog"></a>  COleLinksDialog::COleLinksDialog

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
Punta al documento OLE che contiene i collegamenti da modificare.

*pView*<br/>
Punti di visualizzazione corrente *pDoc*.

*dwFlags*<br/>
Flag di creazione, che contiene 0 o ELF_SHOWHELP per specificare se il pulsante della Guida verrà visualizzato quando viene visualizzata la finestra di dialogo.

*pParentWnd*<br/>
Punta all'oggetto finestra padre o proprietaria (di tipo `CWnd`) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre della finestra di dialogo è impostata per la finestra principale dell'applicazione.

### <a name="remarks"></a>Note

Questa funzione crea solo un `COleLinksDialog` oggetto. Per visualizzare la finestra di dialogo, chiamare il [DoModal](#domodal) (funzione).

##  <a name="m_el"></a>  COleLinksDialog::m_el

Struttura di tipo OLEUIEDITLINKS consentono di controllare il comportamento della finestra di dialogo Modifica collegamenti.

```
OLEUIEDITLINKS m_el;
```

### <a name="remarks"></a>Note

I membri di questa struttura possono essere modificati direttamente o tramite le funzioni membro.

Per altre informazioni, vedere la [OLEUIEDITLINKS](/windows/desktop/api/oledlg/ns-oledlg-tagoleuieditlinksa) struttura nel SDK di Windows.

## <a name="see-also"></a>Vedere anche

[Classe COleDialog](../../mfc/reference/coledialog-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDialog](../../mfc/reference/coledialog-class.md)
