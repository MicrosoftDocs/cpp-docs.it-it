---
description: 'Altre informazioni su: classe CCommonDialog'
title: Classe CCommonDialog
ms.date: 11/04/2016
f1_keywords:
- CCommonDialog
- AFXDLGS/CCommonDialog
- AFXDLGS/CCommonDialog::CCommonDialog
helpviewer_keywords:
- CCommonDialog [MFC], CCommonDialog
ms.assetid: 1f68d65f-a0fd-4778-be22-ebbe51a95f95
ms.openlocfilehash: 927348982529f14eb0ad762019bb4463aaa77c99
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97227897"
---
# <a name="ccommondialog-class"></a>Classe CCommonDialog

Classe di base per le classi che incapsulano la funzionalità delle finestre di dialogo comuni di Windows.

## <a name="syntax"></a>Sintassi

```
class CCommonDialog : public CDialog
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CCommonDialog::CCommonDialog](#ccommondialog)|Costruisce un oggetto `CCommonDialog`.|

## <a name="remarks"></a>Commenti

Le classi seguenti incapsulano la funzionalità delle finestre di dialogo comuni di Windows:

- [CFileDialog](../../mfc/reference/cfiledialog-class.md)

- [CFontDialog](../../mfc/reference/cfontdialog-class.md)

- [CColorDialog](../../mfc/reference/ccolordialog-class.md)

- [CPageSetupDialog](../../mfc/reference/cpagesetupdialog-class.md)

- [CPrintDialog](../../mfc/reference/cprintdialog-class.md)

- [CPrintDialogEx](../../mfc/reference/cprintdialogex-class.md)

- [CFindReplaceDialog](../../mfc/reference/cfindreplacedialog-class.md)

- [COleDialog](../../mfc/reference/coledialog-class.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

`CCommonDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdlgs. h

## <a name="ccommondialogccommondialog"></a><a name="ccommondialog"></a> CCommonDialog::CCommonDialog

Costruisce un oggetto `CCommonDialog`.

```
explicit CCommonDialog(CWnd* pParentWnd);
```

### <a name="parameters"></a>Parametri

*pParentWnd*<br/>
Punta all'oggetto padre o alla finestra proprietaria (di tipo [CWnd](../../mfc/reference/cwnd-class.md)) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre dell'oggetto finestra di dialogo viene impostata sulla finestra principale dell'applicazione.

### <a name="remarks"></a>Commenti

Per informazioni complete, vedere [CDialog:: CDialog](../../mfc/reference/cdialog-class.md#cdialog) .

## <a name="see-also"></a>Vedi anche

[Classe CDialog](../../mfc/reference/cdialog-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CFileDialog](../../mfc/reference/cfiledialog-class.md)<br/>
[Classe CFontDialog](../../mfc/reference/cfontdialog-class.md)<br/>
[Classe CColorDialog](../../mfc/reference/ccolordialog-class.md)<br/>
[Classe CPageSetupDialog](../../mfc/reference/cpagesetupdialog-class.md)<br/>
[Classe CPrintDialog](../../mfc/reference/cprintdialog-class.md)<br/>
[Classe CFindReplaceDialog.](../../mfc/reference/cfindreplacedialog-class.md)<br/>
[Classe COleDialog](../../mfc/reference/coledialog-class.md)
