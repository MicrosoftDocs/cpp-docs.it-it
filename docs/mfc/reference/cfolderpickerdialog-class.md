---
title: Classe CFolderPickerDialog | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CFolderPickerDialog
- AFXDLGS/CFolderPickerDialog
- AFXDLGS/CFolderPickerDialog::CFolderPickerDialog
dev_langs:
- C++
helpviewer_keywords:
- CFolderPickerDialog [MFC], CFolderPickerDialog
ms.assetid: 8db01684-dd1d-4e9c-989e-07a2318a8156
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ded586e6d8ad5252d73e0972424915d174b8b1f3
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36956523"
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
 *lpszFolder*  
 Cartella iniziale.  
  
 *dwFlags*  
 Una combinazione di uno o più flag che consentono di personalizzare la finestra di dialogo.  
  
 *pParentWnd*  
 Puntatore alla finestra padre o proprietaria dell'oggetto finestra di dialogo.  
  
 *dwSize diverso da*  
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
