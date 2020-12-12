---
description: 'Altre informazioni su: classe COleDialog'
title: Classe COleDialog
ms.date: 11/04/2016
f1_keywords:
- COleDialog
- AFXODLGS/COleDialog
- AFXODLGS/COleDialog::GetLastError
helpviewer_keywords:
- COleDialog [MFC], GetLastError
ms.assetid: b1ed0aca-3914-4b00-af34-4a4fb491aec7
ms.openlocfilehash: 9bdb532d58136ac2aac622fa88f674e60ec7221e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97227299"
---
# <a name="coledialog-class"></a>Classe COleDialog

Fornisce la funzionalità comune alle finestre di dialogo per OLE.

## <a name="syntax"></a>Sintassi

```
class COleDialog : public CCommonDialog
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[COleDialog:: GetLastError](#getlasterror)|Ottiene il codice di errore restituito dalla finestra di dialogo.|

## <a name="remarks"></a>Commenti

Il libreria Microsoft Foundation Class fornisce diverse classi derivate da `COleDialog` :

- [COleInsertDialog](../../mfc/reference/coleinsertdialog-class.md)

- [COleConvertDialog](../../mfc/reference/coleconvertdialog-class.md)

- [COleChangeIconDialog](../../mfc/reference/colechangeicondialog-class.md)

- [COleLinksDialog](../../mfc/reference/colelinksdialog-class.md)

- [COleBusyDialog](../../mfc/reference/colebusydialog-class.md)

- [Classe COleUpdateDialog](../../mfc/reference/coleupdatedialog-class.md)

- [COlePasteSpecialDialog](../../mfc/reference/colepastespecialdialog-class.md)

- [COlePropertiesDialog](../../mfc/reference/colepropertiesdialog-class.md)

- [COleChangeSourceDialog](../../mfc/reference/colechangesourcedialog-class.md)

Per ulteriori informazioni sulle finestre di dialogo specifiche di OLE, vedere l'articolo finestre [di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

`COleDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxodlgs. h

## <a name="coledialoggetlasterror"></a><a name="getlasterror"></a> COleDialog:: GetLastError

Chiamare la `GetLastError` funzione membro per ottenere informazioni aggiuntive sull'errore quando `DoModal` restituisce IDABORT.

```
UINT GetLastError() const;
```

### <a name="return-value"></a>Valore restituito

I codici di errore restituiti da dipendono dalla finestra di `GetLastError` dialogo specifica visualizzata.

### <a name="remarks"></a>Commenti

`DoModal`Per informazioni su messaggi di errore specifici, vedere la funzione membro nelle classi derivate.

## <a name="see-also"></a>Vedi anche

[Classe CCommonDialog](../../mfc/reference/ccommondialog-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
