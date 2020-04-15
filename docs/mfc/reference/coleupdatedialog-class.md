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
ms.openlocfilehash: 9e2c7a8d79ebf5e6483a06354b280e474d7b8e61
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374845"
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
|[COleUpdateDialog::DoModal](#domodal)|Visualizza la finestra di dialogo **Modifica collegamenti** in modalità di aggiornamento.|

## <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sulle finestre di dialogo specifiche di OLE, vedere l'articolo [Finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).

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

**Intestazione:** afxodlgs.h

## <a name="coleupdatedialogcoleupdatedialog"></a><a name="coleupdatedialog"></a>COleUpdateDialog::COleUpdateDialog

Costruisce un oggetto `COleUpdateDialog`.

```
explicit COleUpdateDialog(
    COleDocument* pDoc,
    BOOL bUpdateLinks = TRUE,
    BOOL bUpdateEmbeddings = FALSE,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*pDoc (informazioni in stato ine*<br/>
Punta al documento contenente i collegamenti che potrebbero essere necessari per l'aggiornamento.

*bAggiornare i collegamenti*<br/>
Flag che determina se gli oggetti collegati devono essere aggiornati.

*bAggiornamenti di aggiornamento*<br/>
Flag che determina se gli oggetti incorporati devono essere aggiornati.

*pParentWnd (informazioni in due)*<br/>
Punta all'oggetto finestra padre o `CWnd`proprietario (di tipo ) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre della finestra di dialogo verrà impostata sulla finestra principale dell'applicazione.

### <a name="remarks"></a>Osservazioni

Questa funzione costruisce `COleUpdateDialog` solo un oggetto. Per visualizzare la finestra di dialogo, chiamare [DoModal](../../mfc/reference/colelinksdialog-class.md#domodal). Questa classe deve essere `COleLinksDialog` utilizzata al posto di quando si desidera aggiornare solo gli elementi collegati o incorporati esistenti.

## <a name="coleupdatedialogdomodal"></a><a name="domodal"></a>COleUpdateDialog::DoModal

Visualizza la finestra di dialogo Modifica collegamenti in modalità di aggiornamento.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

Stato di completamento per la finestra di dialogo. Uno dei valori seguenti:

- IDOK se la finestra di dialogo ha restituito correttamente.

- IDCANCEL se nessuno degli elementi collegati o incorporati nel documento corrente deve essere aggiornato.

- IDABORT se si è verificato un errore. Se viene restituito IDABORT, chiamare il [COleDialog::GetLastError](../../mfc/reference/coledialog-class.md#getlasterror) funzione membro per ottenere ulteriori informazioni sul tipo di errore che si è verificato. Per un elenco dei possibili errori, vedere la funzione [OleUIEditLinks](/windows/win32/api/oledlg/nf-oledlg-oleuieditlinksw) in Windows SDK.

### <a name="remarks"></a>Osservazioni

Tutti i collegamenti e/o gli incorporamenti vengono aggiornati a meno che l'utente non selezioni il pulsante Annulla.

## <a name="see-also"></a>Vedere anche

[Esempio MFC OCLIENT](../../overview/visual-cpp-samples.md)<br/>
[Classe COleLinksDialog](../../mfc/reference/colelinksdialog-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleLinksDialog](../../mfc/reference/colelinksdialog-class.md)
