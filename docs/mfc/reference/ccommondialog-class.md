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
ms.openlocfilehash: 853a4756df3b70f4f33deb7159b4d1aee610092c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369450"
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

## <a name="remarks"></a>Osservazioni

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

**Intestazione:** afxdlgs.h

## <a name="ccommondialogccommondialog"></a><a name="ccommondialog"></a>CCommonDialog::CCommonDialog

Costruisce un oggetto `CCommonDialog`.

```
explicit CCommonDialog(CWnd* pParentWnd);
```

### <a name="parameters"></a>Parametri

*pParentWnd (informazioni in due)*<br/>
Punta all'oggetto finestra padre o proprietario (di tipo [CWnd](../../mfc/reference/cwnd-class.md)) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre dell'oggetto finestra di dialogo viene impostata sulla finestra principale dell'applicazione.

### <a name="remarks"></a>Osservazioni

Vedere [CDialog::CDialog](../../mfc/reference/cdialog-class.md#cdialog) per informazioni complete.

## <a name="see-also"></a>Vedere anche

[Classe CDialog](../../mfc/reference/cdialog-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CFileDialog](../../mfc/reference/cfiledialog-class.md)<br/>
[Classe CFontDialog](../../mfc/reference/cfontdialog-class.md)<br/>
[Classe CColorDialog](../../mfc/reference/ccolordialog-class.md)<br/>
[Classe CPageSetupDialog](../../mfc/reference/cpagesetupdialog-class.md)<br/>
[Classe CPrintDialog](../../mfc/reference/cprintdialog-class.md)<br/>
[Classe CFindReplaceDialog](../../mfc/reference/cfindreplacedialog-class.md)<br/>
[Classe COleDialog](../../mfc/reference/coledialog-class.md)
