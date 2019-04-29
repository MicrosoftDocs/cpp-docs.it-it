---
title: Classe COleDialog
ms.date: 11/04/2016
f1_keywords:
- COleDialog
- AFXODLGS/COleDialog
- AFXODLGS/COleDialog::GetLastError
helpviewer_keywords:
- COleDialog [MFC], GetLastError
ms.assetid: b1ed0aca-3914-4b00-af34-4a4fb491aec7
ms.openlocfilehash: 353e2ed312fa7dbb9ef7bdfabc2b174abf8e1e1d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62375717"
---
# <a name="coledialog-class"></a>Classe COleDialog

Fornisce la funzionalità comune alle finestre di dialogo per OLE.

## <a name="syntax"></a>Sintassi

```
class COleDialog : public CCommonDialog
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDialog:: GetLastError](#getlasterror)|Ottiene il codice di errore restituito dalla finestra di dialogo.|

## <a name="remarks"></a>Note

La libreria Microsoft Foundation Class fornisce diverse classi derivate da `COleDialog`:

- [Classe COleInsertDialog](../../mfc/reference/coleinsertdialog-class.md)

- [COleConvertDialog](../../mfc/reference/coleconvertdialog-class.md)

- [COleChangeIconDialog](../../mfc/reference/colechangeicondialog-class.md)

- [COleLinksDialog](../../mfc/reference/colelinksdialog-class.md)

- [COleBusyDialog](../../mfc/reference/colebusydialog-class.md)

- [COleUpdateDialog](../../mfc/reference/coleupdatedialog-class.md)

- [COlePasteSpecialDialog](../../mfc/reference/colepastespecialdialog-class.md)

- [COlePropertiesDialog](../../mfc/reference/colepropertiesdialog-class.md)

- [COleChangeSourceDialog](../../mfc/reference/colechangesourcedialog-class.md)

Per altre informazioni sulle finestre di dialogo OLE specifici, vedere l'articolo [finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

`COleDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxodlgs. h

##  <a name="getlasterror"></a>  COleDialog:: GetLastError

Chiamare il `GetLastError` funzione di membro per ottenere informazioni aggiuntive sull'errore quando `DoModal` restituisce IDABORT.

```
UINT GetLastError() const;
```

### <a name="return-value"></a>Valore restituito

I codici di errore restituiti da `GetLastError` dipendono specifica finestra di dialogo visualizzata.

### <a name="remarks"></a>Note

Vedere il `DoModal` funzione membro nelle classi derivate per informazioni sui messaggi di errore specifico.

## <a name="see-also"></a>Vedere anche

[Classe CCommonDialog](../../mfc/reference/ccommondialog-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)
