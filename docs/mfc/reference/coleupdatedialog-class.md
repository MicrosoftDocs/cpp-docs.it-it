---
title: Classe COleUpdateDialog
ms.date: 11/04/2016
f1_keywords:
- COleUpdateDialog
- AFXODLGS/COleUpdateDialog
- AFXODLGS/COleUpdateDialog::COleUpdateDialog
- AFXODLGS/COleUpdateDialog::DoModal
helpviewer_keywords:
- COleUpdateDialog [MFC], COleUpdateDialog
- COleUpdateDialog [MFC], DoModal
ms.assetid: 699ca980-52b1-4cf8-9ab1-ac6767ad5b0e
ms.openlocfilehash: 74607a2a145025533c660ae68f20ffb8e59d3fad
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57281733"
---
# <a name="coleupdatedialog-class"></a>Classe COleUpdateDialog

Utilizzata per un caso speciale della finestra di dialogo di modifica collegamenti OLE, che deve essere utilizzata quando è necessario aggiornare solo oggetti collegati o incorporati esistenti in un documento.

## <a name="syntax"></a>Sintassi

```
class COleUpdateDialog : public COleLinksDialog
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleUpdateDialog::COleUpdateDialog](#coleupdatedialog)|Costruisce un oggetto `COleUpdateDialog`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleUpdateDialog::DoModal](#domodal)|Consente di visualizzare il **Modifica collegamenti** finestra di dialogo in una modalità di aggiornamento.|

## <a name="remarks"></a>Note

Per altre informazioni sulle finestre di dialogo OLE specifici, vedere l'articolo [finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

[COleDialog](../../mfc/reference/coledialog-class.md)

[COleLinksDialog](../../mfc/reference/colelinksdialog-class.md)

`COleUpdateDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxodlgs. h

##  <a name="coleupdatedialog"></a>  COleUpdateDialog::COleUpdateDialog

Costruisce un oggetto `COleUpdateDialog`.

```
explicit COleUpdateDialog(
    COleDocument* pDoc,
    BOOL bUpdateLinks = TRUE,
    BOOL bUpdateEmbeddings = FALSE,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*pDoc*<br/>
Punta al documento che contiene i collegamenti che potrebbe essere necessario l'aggiornamento.

*bUpdateLinks*<br/>
Flag che determina se gli oggetti collegati devono essere aggiornati.

*bUpdateEmbeddings*<br/>
Flag che determina se gli oggetti incorporati sono da aggiornare.

*pParentWnd*<br/>
Punta all'oggetto finestra padre o proprietaria (di tipo `CWnd`) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre della finestra di dialogo verrà impostata nella finestra principale dell'applicazione.

### <a name="remarks"></a>Note

Questa funzione crea solo un `COleUpdateDialog` oggetto. Per visualizzare la finestra di dialogo, chiamare [DoModal](../../mfc/reference/colelinksdialog-class.md#domodal). Questa classe deve essere usata al posto della `COleLinksDialog` quando si desidera aggiornare solo esistenti elementi collegati o incorporati.

##  <a name="domodal"></a>  COleUpdateDialog::DoModal

Consente di visualizzare la finestra di dialogo Modifica collegamenti in modalità di aggiornamento.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

Stato di completamento della finestra di dialogo. Uno dei valori seguenti:

- IDOK se la finestra di dialogo restituito correttamente.

- IDCANCEL se nessuno degli elementi collegati o incorporati nel documento corrente devono essere aggiornati.

- IDABORT se si è verificato un errore. Se viene restituito IDABORT, chiamare il [COleDialog:: GetLastError](../../mfc/reference/coledialog-class.md#getlasterror) funzione membro per ottenere altre informazioni sul tipo di errore che si sono verificati. Per un elenco dei possibili errori, vedere la [OleUIEditLinks](/windows/desktop/api/oledlg/nf-oledlg-oleuieditlinksa) funzione nel SDK di Windows.

### <a name="remarks"></a>Note

Tutti i collegamenti e/o rappresentazioni distribuite vengono aggiornati, a meno che l'utente seleziona il pulsante Annulla.

## <a name="see-also"></a>Vedere anche

[Esempio MFC OCLIENT](../../visual-cpp-samples.md)<br/>
[Classe COleLinksDialog](../../mfc/reference/colelinksdialog-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe COleLinksDialog](../../mfc/reference/colelinksdialog-class.md)
