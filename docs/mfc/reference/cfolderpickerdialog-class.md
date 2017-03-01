---
title: Classe CFolderPickerDialog | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- afxdlgs/CFolderPickerDialog
- CFolderPickerDialog
dev_langs:
- C++
helpviewer_keywords:
- CFolderPickerDialog class
ms.assetid: 8db01684-dd1d-4e9c-989e-07a2318a8156
caps.latest.revision: 22
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 0d020544a16056d3f4db538750ed5a16b54f9a51
ms.lasthandoff: 02/24/2017

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
  
##  <a name="a-namecfolderpickerdialoga--cfolderpickerdialogcfolderpickerdialog"></a><a name="cfolderpickerdialog"></a>CFolderPickerDialog::CFolderPickerDialog  
 Costruttore.  
  
```  
explicit CFolderPickerDialog(
    LPCTSTR lpszFolder = NULL,  
    DWORD dwFlags = 0,  
    CWnd* pParentWnd = NULL,  
    DWORD dwSize = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszFolder`  
 Cartella iniziale.  
  
 `dwFlags`  
 Una combinazione di uno o più flag che consentono di personalizzare la finestra di dialogo.  
  
 `pParentWnd`  
 Puntatore alla finestra padre o proprietaria dell'oggetto finestra di dialogo.  
  
 `dwSize`  
 Le dimensioni della struttura OPENFILENAME.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namedtorcfolderpickerdialoga--cfolderpickerdialogcfolderpickerdialog"></a><a name="_dtorcfolderpickerdialog"></a>CFolderPickerDialog:: ~ CFolderPickerDialog  
 Distruttore.  
  
```  
virtual ~CFolderPickerDialog();
```  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

