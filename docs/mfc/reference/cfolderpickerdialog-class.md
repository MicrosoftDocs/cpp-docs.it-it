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
ms.openlocfilehash: 435c91082fa901f0bc9726316f0358fc5a669b29
ms.sourcegitcommit: 309dc532f13242854b47759cef846de59bb807f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/28/2019
ms.locfileid: "58565009"
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
|[CFolderPickerDialog:: ~ CFolderPickerDialog](#_dtorcfolderpickerdialog)|Distruttore.|
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

*dwSize*<br/>
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
