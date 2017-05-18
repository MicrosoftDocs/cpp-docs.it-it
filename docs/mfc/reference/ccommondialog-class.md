---
title: Classe CCommonDialog | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CCommonDialog
- AFXDLGS/CCommonDialog
- AFXDLGS/CCommonDialog::CCommonDialog
dev_langs:
- C++
helpviewer_keywords:
- dialog boxes [C++], Windows common dialogs
- common dialog boxes [C++], common dialog classes
- common dialog classes [C++]
- MFC dialog boxes, Windows common dialogs
- Windows common dialogs [C++]
- CCommonDialog class
- dialog classes [C++], common
ms.assetid: 1f68d65f-a0fd-4778-be22-ebbe51a95f95
caps.latest.revision: 20
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 93d4cd4ca794095c225641bc67353b9a53080c3c
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

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
 Le classi seguenti incapsulano la funzionalità di finestre di dialogo comuni di Windows:  
  
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
  
##  <a name="ccommondialog"></a>CCommonDialog::CCommonDialog  
 Costruisce un oggetto `CCommonDialog`.  
  
```  
explicit CCommonDialog(CWnd* pParentWnd);
```  
  
### <a name="parameters"></a>Parametri  
 `pParentWnd`  
 Punta all'oggetto finestra padre o proprietaria (di tipo [CWnd](../../mfc/reference/cwnd-class.md)) a cui appartiene l'oggetto finestra di dialogo. In questo caso **NULL**, finestra padre dell'oggetto finestra di dialogo è impostata nella finestra principale dell'applicazione.  
  
### <a name="remarks"></a>Note  
 Vedere [CDialog::CDialog](../../mfc/reference/cdialog-class.md#cdialog) per informazioni complete.  
  
## <a name="see-also"></a>Vedere anche  
 [CDialog (classe)](../../mfc/reference/cdialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CFileDialog](../../mfc/reference/cfiledialog-class.md)   
 [Classe CFontDialog](../../mfc/reference/cfontdialog-class.md)   
 [Classe CColorDialog](../../mfc/reference/ccolordialog-class.md)   
 [Classe CPageSetupDialog](../../mfc/reference/cpagesetupdialog-class.md)   
 [Classe CPrintDialog](../../mfc/reference/cprintdialog-class.md)   
 [Classe CFindReplaceDialog.](../../mfc/reference/cfindreplacedialog-class.md)   
 [Classe COleDialog](../../mfc/reference/coledialog-class.md)

