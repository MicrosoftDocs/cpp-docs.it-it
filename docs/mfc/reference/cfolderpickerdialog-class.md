---
description: 'Altre informazioni su: classe CFolderPickerDialog'
title: Classe CFolderPickerDialog
ms.date: 03/27/2019
f1_keywords:
- CFolderPickerDialog
- AFXDLGS/CFolderPickerDialog
- AFXDLGS/CFolderPickerDialog::CFolderPickerDialog
helpviewer_keywords:
- CFolderPickerDialog [MFC], CFolderPickerDialog
ms.assetid: 8db01684-dd1d-4e9c-989e-07a2318a8156
ms.openlocfilehash: f4a5bcc3162a5fffcc723d7ec420685b02be10f0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97184426"
---
# <a name="cfolderpickerdialog-class"></a>Classe CFolderPickerDialog

La classe CFolderPickerDialog implementa CFileDialog nella modalità di selezione cartelle.

## <a name="syntax"></a>Sintassi

```
class CFolderPickerDialog : public CFileDialog;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CFolderPickerDialog:: ~ CFolderPickerDialog](#_dtorcfolderpickerdialog)|Distruttore.|
|[CFolderPickerDialog:: CFolderPickerDialog](#cfolderpickerdialog)|Costruttore.|

## <a name="remarks"></a>Commenti

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

## <a name="cfolderpickerdialogcfolderpickerdialog"></a><a name="cfolderpickerdialog"></a> CFolderPickerDialog:: CFolderPickerDialog

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
Combinazione di uno o più flag che consentono di personalizzare la finestra di dialogo.

*pParentWnd*<br/>
Puntatore alla finestra padre o proprietaria dell'oggetto finestra di dialogo.

*dwSize*<br/>
Dimensione della struttura OPENFILENAME.

### <a name="remarks"></a>Commenti

## <a name="cfolderpickerdialogcfolderpickerdialog"></a><a name="_dtorcfolderpickerdialog"></a> CFolderPickerDialog:: ~ CFolderPickerDialog

Distruttore.

```
virtual ~CFolderPickerDialog();
```

### <a name="remarks"></a>Commenti

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
