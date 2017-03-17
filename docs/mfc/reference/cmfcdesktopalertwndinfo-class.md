---
title: Classe CMFCDesktopAlertWndInfo | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
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
- CMFCDesktopAlertWndInfo class
ms.assetid: 5c9bb84e-6c96-4748-8e74-6951b6ae8e84
caps.latest.revision: 26
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
ms.openlocfilehash: 7013a7c9b29c6dc9e6324ca0490a667ed79c88f7
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcdesktopalertwndinfo-class"></a>Classe CMFCDesktopAlertWndInfo
Il `CMFCDesktopAlertWndInfo` classe viene utilizzata con la [CMFCDesktopAlertWnd classe](../../mfc/reference/cmfcdesktopalertwnd-class.md). Specifica i controlli visualizzati se viene visualizzata la finestra di avviso.  
  
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
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCDesktopAlertWndInfo::m_hIcon](#m_hicon)|Handle per l'icona da visualizzare.|  
|[CMFCDesktopAlertWndInfo::m_nURLCmdID](#m_nurlcmdid)|L'ID di comando associato a un collegamento nella finestra di avviso.|  
|[CMFCDesktopAlertWndInfo::m_strText](#m_strtext)|Il testo visualizzato nella finestra di avviso.|  
|[CMFCDesktopAlertWndInfo::m_strURL](#m_strurl)|Il collegamento visualizzato nella finestra di avviso.|  
  
## <a name="remarks"></a>Note  
 Il `CMFCDesktopAlertWndInfo` classe viene passata al [CMFCDesktopAlertWnd::Create](../../mfc/reference/cmfcdesktopalertwnd-class.md#create) per specificare gli elementi che vengono visualizzati nella finestra di dialogo predefinita della finestra di avviso. La finestra di dialogo predefinita può contenere tre elementi:  
  
-   Un'icona, che viene impostata chiamando [CMFCDesktopAlertWndInfo::m_hIcon](#m_hicon).  
  
-   Un'etichetta o un messaggio di testo viene impostato chiamando [CMFCDesktopAlertWndInfo::m_strText](#m_strtext).  
  
-   Un collegamento, che viene impostato chiamando [CMFCDesktopAlertWndInfo::m_strURL](#m_strurl). Per impostare il comando che viene eseguito quando si fa clic sul collegamento, chiamare [CMFCDesktopAlertWndInfo::m_nURLCmdID](#m_nurlcmdid).  
  
 Se la finestra di dialogo predefinita non è sufficiente, è possibile creare una finestra di dialogo personalizzata e passarlo al [CMFCDesktopAlertWnd::Create](../../mfc/reference/cmfcdesktopalertwnd-class.md#create) metodo anziché utilizzare questa classe. Per ulteriori informazioni, vedere [CMFCDesktopAlertDialog classe](../../mfc/reference/cmfcdesktopalertdialog-class.md).  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare diversi membri di `CMFCDesktopAlertWndInfo` (classe). Nell'esempio viene illustrato come impostare l'handle dell'icona che viene visualizzato il testo visualizzato nella finestra di avviso, il collegamento visualizzato nella finestra di avviso e l'ID di comando che è associata a un collegamento nella finestra di avviso. Questo esempio fa parte il [esempio dimostrativo avviso Desktop](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_DesktopAlertDemo n.&3;](../../mfc/reference/codesnippet/cpp/cmfcdesktopalertwndinfo-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CMFCDesktopAlertWndInfo](../../mfc/reference/cmfcdesktopalertwndinfo-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxDesktopAlertDialog.h  
  
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
 L'ID di comando associato a un collegamento nella finestra di avviso.  
  
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
 Il collegamento visualizzato nella finestra di avviso.  
  
```  
CString m_strURL;  
```  
  
### <a name="remarks"></a>Note  
 Quando l'utente fa clic sul collegamento, il comando che ha il [CMFCDesktopAlertWndInfo::m_nURLCmdID](#m_nurlcmdid) comando ID sarà inviato al proprietario della finestra popup.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCDesktopAlertWnd](../../mfc/reference/cmfcdesktopalertwnd-class.md)   
 [CMFCDesktopAlertWnd::Create](../../mfc/reference/cmfcdesktopalertwnd-class.md#create)   
 [Classe CMFCDesktopAlertDialog](../../mfc/reference/cmfcdesktopalertdialog-class.md)

