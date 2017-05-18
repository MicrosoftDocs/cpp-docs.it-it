---
title: Classe CMFCWindowsManagerDialog | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCWindowsManagerDialog
- AFXWINDOWSMANAGERDIALOG/CMFCWindowsManagerDialog
- AFXWINDOWSMANAGERDIALOG/CMFCWindowsManagerDialog::CMFCWindowsManagerDialog
dev_langs:
- C++
helpviewer_keywords:
- CMFCWindowsManagerDialog class
ms.assetid: 35b4b0db-33c4-4b22-94d8-5e3396341340
caps.latest.revision: 25
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
ms.openlocfilehash: 9f1508cfd3844fed413edd69063f1b3e64e80195
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcwindowsmanagerdialog-class"></a>Classe CMFCWindowsManagerDialog
Il `CMFCWindowsManagerDialog` oggetto consente di gestire le finestre figlio MDI in un'applicazione MDI.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCWindowsManagerDialog : public CDialog  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCWindowsManagerDialog::CMFCWindowsManagerDialog](#cmfcwindowsmanagerdialog)|Costruisce un oggetto `CMFCWindowsManagerDialog`.|  
  
## <a name="remarks"></a>Note  
 Il `CMFCWindowsManagerDialog` contiene un elenco di finestre figlio MDI attualmente aperti nell'applicazione. L'utente può controllare manualmente lo stato delle finestre figlio MDI utilizzando questa finestra di dialogo.  
  
 `CMFCWindowsManagerDialog`è incorporato il [CMDIFrameWndEx Class](../../mfc/reference/cmdiframewndex-class.md). Il `CMFCWindowsManagerDialog` non è una classe che è necessario creare manualmente. Al contrario, chiamare la funzione [CMDIFrameWndEx::ShowWindowsDialog](../../mfc/reference/cmdiframewndex-class.md#showwindowsdialog), che creare e visualizzare un `CMFCWindowsManagerDialog` oggetto.  
  
## <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come costruire un `CMFCWindowsManagerDialog` oggetto chiamando `CMDIFrameWndEx::ShowWindowsDialog`. Questo frammento di codice fa parte di [esempio dimostrativo di Visual Studio](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo&#18;](../../mfc/codesnippet/cpp/cmfcwindowsmanagerdialog-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CMFCWindowsManagerDialog](../../mfc/reference/cmfcwindowsmanagerdialog-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxWindowsManagerDialog.h  
  
##  <a name="cmfcwindowsmanagerdialog"></a>CMFCWindowsManagerDialog::CMFCWindowsManagerDialog  
 Costruisce un [CMFCWindowsManagerDialog](../../mfc/reference/cmfcwindowsmanagerdialog-class.md) oggetto.  
  
```  
CMFCWindowsManagerDialog(
    CMDIFrameWndEx* pMDIFrame,  
    BOOL bHelpButton = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pMDIFrame`  
 Puntatore alla finestra padre o proprietaria.  
  
 [in] `bHelpButton`  
 Un parametro booleano che specifica se il framework visualizza un **Guida** pulsante.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni sui gestori visualizzazione, vedere [gestione visualizzazione](../../mfc/visualization-manager.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMDIFrameWndEx](../../mfc/reference/cmdiframewndex-class.md)

