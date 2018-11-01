---
title: Classe CFolderPickerDialog
ms.date: 11/04/2016
f1_keywords:
- CFolderPickerDialog
- AFXDLGS/CFolderPickerDialog
- AFXDLGS/CFolderPickerDialog::CFolderPickerDialog
helpviewer_keywords:
- CFolderPickerDialog [MFC], CFolderPickerDialog
ms.assetid: 8db01684-dd1d-4e9c-989e-07a2318a8156
ms.openlocfilehash: ba189badaa9b1605e3467526e7b92a18a1bb5a73
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50561304"
---
# <a name="cfolderpickerdialog-class"></a>Classe CFolderPickerDialog

Classe CFolderPickerDialog implementa CFileDialog nella modalità di selezione cartelle.

## <a name="syntax"></a>Sintassi

```
class CFolderPickerDialog : public CFileDialog;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFolderPickerDialog:: ~ CFolderPickerDialog](#cfolderpickerdialog__~cfolderpickerdialog)|Distruttore.|
|[CFolderPickerDialog::CFolderPickerDialog](#cfolderpickerdialog)|Costruttore.|

## <a name="remarks"></a>Note

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

[CFileDialog](../../mfc/reference/cfiledialog-class.md)

`CFolderPickerDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdlgs. h

##  <a name="cfolderpickerdialog"></a>  CFolderPickerDialog::CFolderPickerDialog

Costruttore.

```
explicit CFolderPickerDialog(
    LPCTSTR lpszFolder = NULL,
    DWORD dwFlags = 0,
    CWnd* pParentWnd = NULL,
    DWORD dwSize = 0);
```

### <a name="parameters"></a>Parametri

*lpszFolder*<br/>
Cartella iniziale.

*dwFlags*<br/>
Una combinazione di uno o più flag che consentono di personalizzare la finestra di dialogo.

*pParentWnd*<br/>
Puntatore alla finestra padre o il proprietario dell'oggetto finestra di dialogo.

*dwSize diverso da*<br/>
Le dimensioni della struttura OPENFILENAME.

### <a name="remarks"></a>Note

##  <a name="_dtorcfolderpickerdialog"></a>  CFolderPickerDialog:: ~ CFolderPickerDialog

Distruttore.

```
virtual ~CFolderPickerDialog();
```

### <a name="remarks"></a>Note

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
