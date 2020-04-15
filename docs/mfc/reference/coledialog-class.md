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
ms.openlocfilehash: 6a1983d426e97dd8063aee2857dc36557aa20677
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366086"
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
|[COleDialog::GetLastError](#getlasterror)|Ottiene il codice di errore restituito dalla finestra di dialogo.|

## <a name="remarks"></a>Osservazioni

La libreria Microsoft Foundation Class `COleDialog`fornisce diverse classi derivate da:

- [COleInsertDialog](../../mfc/reference/coleinsertdialog-class.md)

- [COleConvertDialog](../../mfc/reference/coleconvertdialog-class.md)

- [COleChangeIconDialog](../../mfc/reference/colechangeicondialog-class.md)

- [COleLinksDialog](../../mfc/reference/colelinksdialog-class.md)

- [COleBusyDialog](../../mfc/reference/colebusydialog-class.md)

- [Classe COleUpdateDialog](../../mfc/reference/coleupdatedialog-class.md)

- [COlePasteSpecialDialog](../../mfc/reference/colepastespecialdialog-class.md)

- [COlePropertiesDialog](../../mfc/reference/colepropertiesdialog-class.md)

- [COleChangeSourceDialog](../../mfc/reference/colechangesourcedialog-class.md)

Per ulteriori informazioni sulle finestre di dialogo specifiche di OLE, vedere l'articolo [Finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

`COleDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxodlgs.h

## <a name="coledialoggetlasterror"></a><a name="getlasterror"></a>COleDialog::GetLastError

Chiamare `GetLastError` la funzione membro per `DoModal` ottenere informazioni aggiuntive sull'errore quando restituisce IDABORT.

```
UINT GetLastError() const;
```

### <a name="return-value"></a>Valore restituito

I codici di `GetLastError` errore restituiti da dipendono dalla finestra di dialogo specifica visualizzata.

### <a name="remarks"></a>Osservazioni

Vedere `DoModal` la funzione membro nelle classi derivate per informazioni su messaggi di errore specifici.

## <a name="see-also"></a>Vedere anche

[Classe CCommonDialog](../../mfc/reference/ccommondialog-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
