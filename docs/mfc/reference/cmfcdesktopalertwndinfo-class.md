---
title: Classe CMFCDesktopAlertWndInfo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCDesktopAlertWndInfo
- AFXDESKTOPALERTDIALOG/CMFCDesktopAlertWndInfo
- AFXDESKTOPALERTDIALOG/CMFCDesktopAlertWndInfo::m_hIcon
- AFXDESKTOPALERTDIALOG/CMFCDesktopAlertWndInfo::m_nURLCmdID
- AFXDESKTOPALERTDIALOG/CMFCDesktopAlertWndInfo::m_strText
- AFXDESKTOPALERTDIALOG/CMFCDesktopAlertWndInfo::m_strURL
dev_langs:
- C++
helpviewer_keywords:
- CMFCDesktopAlertWndInfo [MFC], m_hIcon
- CMFCDesktopAlertWndInfo [MFC], m_nURLCmdID
- CMFCDesktopAlertWndInfo [MFC], m_strText
- CMFCDesktopAlertWndInfo [MFC], m_strURL
ms.assetid: 5c9bb84e-6c96-4748-8e74-6951b6ae8e84
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2f257575abbf405177b2524c4c803c0b3d250187
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cmfcdesktopalertwndinfo-class"></a>Classe CMFCDesktopAlertWndInfo
Il `CMFCDesktopAlertWndInfo` classe viene utilizzata con la [classe CMFCDesktopAlertWnd](../../mfc/reference/cmfcdesktopalertwnd-class.md). Specifica i controlli visualizzati se viene visualizzata la finestra di avviso.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCDesktopAlertWndInfo  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCDesktopAlertWndInfo::~CMFCDesktopAlertWndInfo`|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCDesktopAlertWndInfo::operator =](#operator_eq)||  
  
### <a name="data-members"></a>Membri di dati  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CMFCDesktopAlertWndInfo::m_hIcon](#m_hicon)|Handle per l'icona da visualizzare.|  
|[CMFCDesktopAlertWndInfo::m_nURLCmdID](#m_nurlcmdid)|L'ID di comando associata a un collegamento nella finestra di avviso.|  
|[CMFCDesktopAlertWndInfo::m_strText](#m_strtext)|Il testo visualizzato nella finestra di avviso.|  
|[CMFCDesktopAlertWndInfo::m_strURL](#m_strurl)|Il collegamento viene visualizzato nella finestra di avviso.|  
  
## <a name="remarks"></a>Note  
 Il `CMFCDesktopAlertWndInfo` classe viene passata al [cmfcdesktopalertwnd:: Create](../../mfc/reference/cmfcdesktopalertwnd-class.md#create) per specificare gli elementi che vengono visualizzati nella finestra di dialogo predefinita della finestra di avviso. La finestra di dialogo predefinita può contenere tre elementi:  
  
-   Un'icona, che viene impostata chiamando [CMFCDesktopAlertWndInfo::m_hIcon](#m_hicon).  
  
-   Un'etichetta o un messaggio di testo viene impostato chiamando [CMFCDesktopAlertWndInfo::m_strText](#m_strtext).  
  
-   Un collegamento, che viene impostato chiamando [CMFCDesktopAlertWndInfo::m_strURL](#m_strurl). Per impostare il comando che viene eseguito quando viene selezionato il collegamento, chiamare [CMFCDesktopAlertWndInfo::m_nURLCmdID](#m_nurlcmdid).  
  
 Se la finestra di dialogo predefinita non è sufficiente, è possibile creare una finestra di dialogo personalizzata e passarlo al [cmfcdesktopalertwnd:: Create](../../mfc/reference/cmfcdesktopalertwnd-class.md#create) metodo anziché utilizzare questa classe. Per ulteriori informazioni, vedere [CMFCDesktopAlertDialog classe](../../mfc/reference/cmfcdesktopalertdialog-class.md).  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i vari membri di `CMFCDesktopAlertWndInfo` classe. Nell'esempio viene illustrato come impostare l'handle dell'icona viene visualizzato il testo visualizzato nella finestra di avviso, il collegamento visualizzato nella finestra di avviso e l'ID di comando che è associata a un collegamento nella finestra di avviso. In questo esempio fa parte di [esempio dimostrativo avviso Desktop](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_DesktopAlertDemo#3](../../mfc/reference/codesnippet/cpp/cmfcdesktopalertwndinfo-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CMFCDesktopAlertWndInfo](../../mfc/reference/cmfcdesktopalertwndinfo-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdesktopalertdialog. H  
  
##  <a name="operator_eq"></a>CMFCDesktopAlertWndInfo::operator =  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CMFCDesktopAlertWndInfo& operator=(CMFCDesktopAlertWndInfo& src);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `src`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="m_hicon"></a>CMFCDesktopAlertWndInfo::m_hIcon  
 Handle per l'icona da visualizzare.  
  
```  
HICON m_hIcon;  
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="m_nurlcmdid"></a>CMFCDesktopAlertWndInfo::m_nURLCmdID  
 L'ID di comando associata a un collegamento nella finestra di avviso.  
  
```  
UINT m_nURLCmdID;  
```  
  
### <a name="remarks"></a>Note  
 L'ID di comando viene inviato al proprietario della finestra popup quando l'utente fa clic sul collegamento specificato dal [CMFCDesktopAlertWndInfo::m_strURL](#m_strurl).  
  
##  <a name="m_strtext"></a>CMFCDesktopAlertWndInfo::m_strText  
 Il testo visualizzato nella finestra di avviso.  
  
```  
CString m_strText;  
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="m_strurl"></a>CMFCDesktopAlertWndInfo::m_strURL  
 Il collegamento viene visualizzato nella finestra di avviso.  
  
```  
CString m_strURL;  
```  
  
### <a name="remarks"></a>Note  
 Quando l'utente fa clic sul collegamento, il comando che ha il [CMFCDesktopAlertWndInfo::m_nURLCmdID](#m_nurlcmdid) comando ID sarà inviato al proprietario della finestra popup.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCDesktopAlertWnd](../../mfc/reference/cmfcdesktopalertwnd-class.md)   
 [Cmfcdesktopalertwnd:: Create](../../mfc/reference/cmfcdesktopalertwnd-class.md#create)   
 [Classe CMFCDesktopAlertDialog](../../mfc/reference/cmfcdesktopalertdialog-class.md)
