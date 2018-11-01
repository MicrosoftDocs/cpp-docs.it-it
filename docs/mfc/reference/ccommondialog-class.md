---
title: Classe CCommonDialog
ms.date: 11/04/2016
f1_keywords:
- CCommonDialog
- AFXDLGS/CCommonDialog
- AFXDLGS/CCommonDialog::CCommonDialog
helpviewer_keywords:
- CCommonDialog [MFC], CCommonDialog
ms.assetid: 1f68d65f-a0fd-4778-be22-ebbe51a95f95
ms.openlocfilehash: 47ef6591a69196ea93048e2ce3a77603b12ab4c4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50432736"
---
# <a name="ccommondialog-class"></a>Classe CCommonDialog

Classe di base per le classi che incapsulano la funzionalità delle finestre di dialogo comuni di Windows.

## <a name="syntax"></a>Sintassi

```
class CCommonDialog : public CDialog
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CCommonDialog::CCommonDialog](#ccommondialog)|Costruisce un oggetto `CCommonDialog`.|

## <a name="remarks"></a>Note

Le classi seguenti incapsulano la funzionalità delle finestre di dialogo comuni di Windows:

- [CFileDialog](../../mfc/reference/cfiledialog-class.md)

- [CFontDialog](../../mfc/reference/cfontdialog-class.md)

- [CColorDialog](../../mfc/reference/ccolordialog-class.md)

- [CPageSetupDialog](../../mfc/reference/cpagesetupdialog-class.md)

- [CPrintDialog](../../mfc/reference/cprintdialog-class.md)

- [CPrintDialogEx](../../mfc/reference/cprintdialogex-class.md)

- [CFindReplaceDialog.](../../mfc/reference/cfindreplacedialog-class.md)

- [COleDialog](../../mfc/reference/coledialog-class.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

`CCommonDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdlgs. h

##  <a name="ccommondialog"></a>  CCommonDialog::CCommonDialog

Costruisce un oggetto `CCommonDialog`.

```
explicit CCommonDialog(CWnd* pParentWnd);
```

### <a name="parameters"></a>Parametri

*pParentWnd*<br/>
Punta all'oggetto finestra padre o proprietaria (typu [CWnd](../../mfc/reference/cwnd-class.md)) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, finestra padre dell'oggetto finestra di dialogo è impostata per la finestra principale dell'applicazione.

### <a name="remarks"></a>Note

Visualizzare [CDialog::CDialog](../../mfc/reference/cdialog-class.md#cdialog) per informazioni complete.

## <a name="see-also"></a>Vedere anche

[Classe CDialog](../../mfc/reference/cdialog-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CFileDialog](../../mfc/reference/cfiledialog-class.md)<br/>
[Classe CFontDialog](../../mfc/reference/cfontdialog-class.md)<br/>
[Classe CColorDialog](../../mfc/reference/ccolordialog-class.md)<br/>
[Classe CPageSetupDialog](../../mfc/reference/cpagesetupdialog-class.md)<br/>
[Classe CPrintDialog](../../mfc/reference/cprintdialog-class.md)<br/>
[Classe CFindReplaceDialog](../../mfc/reference/cfindreplacedialog-class.md)<br/>
[Classe COleDialog](../../mfc/reference/coledialog-class.md)
