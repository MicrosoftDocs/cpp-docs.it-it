---
title: Classe CFolderPickerDialog
ms.date: 03/27/2019
f1_keywords:
- CFolderPickerDialog
- AFXDLGS/CFolderPickerDialog
- AFXDLGS/CFolderPickerDialog::CFolderPickerDialog
helpviewer_keywords:
- CFolderPickerDialog [MFC], CFolderPickerDialog
ms.assetid: 8db01684-dd1d-4e9c-989e-07a2318a8156
ms.openlocfilehash: ed3dc151060519bce216cf4a2f3d6559d6b8937e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373863"
---
# <a name="cfolderpickerdialog-class"></a>Classe CFolderPickerDialog

La classe CFolderPickerDialog implementa CFileDialog nella modalità di selezione cartella.

## <a name="syntax"></a>Sintassi

```
class CFolderPickerDialog : public CFileDialog;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFolderPickerDialog::CFolderPickerDialog](#_dtorcfolderpickerdialog)|Distruttore.|
|[CFolderPickerDialog::CFolderPickerDialog](#cfolderpickerdialog)|Costruttore.|

## <a name="remarks"></a>Osservazioni

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

[CFileDialog](../../mfc/reference/cfiledialog-class.md)

`CFolderPickerDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdlgs.h

## <a name="cfolderpickerdialogcfolderpickerdialog"></a><a name="cfolderpickerdialog"></a>CFolderPickerDialog::CFolderPickerDialog

Costruttore.

```
explicit CFolderPickerDialog(
    LPCTSTR lpszFolder = NULL,
    DWORD dwFlags = 0,
    CWnd* pParentWnd = NULL,
    DWORD dwSize = 0);
```

### <a name="parameters"></a>Parametri

*cartella lpsz*<br/>
Cartella iniziale.

*dwFlags*<br/>
Combinazione di uno o più flag che consentono di personalizzare la finestra di dialogo.

*pParentWnd (informazioni in due)*<br/>
Puntatore alla finestra padre o proprietario dell'oggetto finestra di dialogo.

*dwSize (Dimensioni dwSize)*<br/>
Dimensione della struttura OPENFILENAME.

### <a name="remarks"></a>Osservazioni

## <a name="cfolderpickerdialogcfolderpickerdialog"></a><a name="_dtorcfolderpickerdialog"></a>CFolderPickerDialog::CFolderPickerDialog

Distruttore.

```
virtual ~CFolderPickerDialog();
```

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
