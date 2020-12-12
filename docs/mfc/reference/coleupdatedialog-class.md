---
description: 'Altre informazioni su: classe COleUpdateDialog'
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
ms.openlocfilehash: e7f1d1e7f67fd80fd7042e53a7ccdee46dc6531f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97226597"
---
# <a name="coleupdatedialog-class"></a>Classe COleUpdateDialog

Utilizzata per un caso speciale della finestra di dialogo di modifica collegamenti OLE, che deve essere utilizzata quando è necessario aggiornare solo oggetti collegati o incorporati esistenti in un documento.

## <a name="syntax"></a>Sintassi

```
class COleUpdateDialog : public COleLinksDialog
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[COleUpdateDialog:: COleUpdateDialog](#coleupdatedialog)|Costruisce un oggetto `COleUpdateDialog`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[COleUpdateDialog::D oModal](#domodal)|Consente di visualizzare la finestra di dialogo **Modifica collegamenti** in modalità di aggiornamento.|

## <a name="remarks"></a>Commenti

Per ulteriori informazioni sulle finestre di dialogo specifiche di OLE, vedere l'articolo finestre [di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).

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

## <a name="coleupdatedialogcoleupdatedialog"></a><a name="coleupdatedialog"></a> COleUpdateDialog:: COleUpdateDialog

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
Punta al documento contenente i collegamenti che possono richiedere l'aggiornamento.

*bUpdateLinks*<br/>
Flag che determina se gli oggetti collegati devono essere aggiornati.

*bUpdateEmbeddings*<br/>
Flag che determina se gli oggetti incorporati devono essere aggiornati.

*pParentWnd*<br/>
Punta all'oggetto padre o alla finestra proprietaria (di tipo `CWnd` ) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre della finestra di dialogo verrà impostata sulla finestra principale dell'applicazione.

### <a name="remarks"></a>Commenti

Questa funzione costruisce solo un `COleUpdateDialog` oggetto. Per visualizzare la finestra di dialogo, chiamare [DoModal](../../mfc/reference/colelinksdialog-class.md#domodal). Questa classe deve essere utilizzata al posto di `COleLinksDialog` quando si desidera aggiornare solo gli elementi collegati o incorporati esistenti.

## <a name="coleupdatedialogdomodal"></a><a name="domodal"></a> COleUpdateDialog::D oModal

Consente di visualizzare la finestra di dialogo Modifica collegamenti in modalità di aggiornamento.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

Stato di completamento della finestra di dialogo. Uno dei valori seguenti:

- IDOK se la finestra di dialogo viene restituita correttamente.

- IDCANCEL se non è necessario aggiornare nessuno degli elementi collegati o incorporati nel documento corrente.

- IDABORT se si è verificato un errore. Se viene restituito IDABORT, chiamare la funzione membro [COleDialog:: GetLastError](../../mfc/reference/coledialog-class.md#getlasterror) per ottenere ulteriori informazioni sul tipo di errore che si è verificato. Per un elenco di possibili errori, vedere la funzione [OLEUIEDITLINKS](/windows/win32/api/oledlg/nf-oledlg-oleuieditlinksw) nella Windows SDK.

### <a name="remarks"></a>Commenti

Tutti i collegamenti e/o gli incorporamenti vengono aggiornati a meno che l'utente non selezioni il pulsante Annulla.

## <a name="see-also"></a>Vedi anche

[OCLIENT di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe COleLinksDialog](../../mfc/reference/colelinksdialog-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleLinksDialog](../../mfc/reference/colelinksdialog-class.md)
