---
title: Struttura CDaoWorkspaceInfo | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CDaoWorkspaceInfo
dev_langs:
- C++
helpviewer_keywords:
- CDaoWorkspaceInfo structure
- DAO (Data Access Objects), Workspaces collection
ms.assetid: a1f4b25e-f9c6-4196-b075-d1df99c54124
caps.latest.revision: 13
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
ms.openlocfilehash: 44c1ce365a1eecdb2a500998c082c6a9245dffb2
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cdaoworkspaceinfo-structure"></a>Struttura CDaoWorkspaceInfo
Il `CDaoWorkspaceInfo` struttura contiene informazioni su un'area di lavoro definito per l'accesso al database data access Object (DAO).  
  
## <a name="syntax"></a>Sintassi  
  
```  
struct CDaoWorkspaceInfo  
{  
    CString m_strName;           // Primary  
    CString m_strUserName;       // Secondary  
    BOOL m_bIsolateODBCTrans;    // All  
};  
```  
  
#### <a name="parameters"></a>Parametri  
 `m_strName`  
 Identifica in modo univoco l'oggetto workspace. Per recuperare direttamente il valore di questa proprietà, chiamare l'oggetto querydef [GetName](../../mfc/reference/cdaoquerydef-class.md#getname) funzione membro. Per ulteriori informazioni, vedere l'argomento "Proprietà di nome" nella Guida di DAO.  
  
 *m_strUserName*  
 Un valore che rappresenta il proprietario di un oggetto workspace. Per informazioni correlate, vedere l'argomento "Proprietà UserName" nella Guida di DAO.  
  
 *m_bIsolateODBCTrans*  
 Un valore che indica se più transazioni che implicano lo stesso database ODBC sono isolate. Per ulteriori informazioni, vedere [CDaoWorkspace::SetIsolateODBCTrans](../../mfc/reference/cdaoworkspace-class.md#setisolateodbctrans). Per informazioni correlate, vedere l'argomento "Proprietà IsolateODBCTrans" nella Guida di DAO.  
  
## <a name="remarks"></a>Note  
 L'area di lavoro è un oggetto della classe [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md). I riferimenti a primario, secondario e tutti sopra indicano la modalità in cui vengono restituite le informazioni dal [funzione membro GetWorkspaceInfo](../../mfc/reference/cdaoworkspace-class.md#getworkspaceinfo) funzione membro nella classe `CDaoWorkspace`.  
  
 Le informazioni recuperate dal [CDaoWorkspace::GetWorkspaceInfo](../../mfc/reference/cdaoworkspace-class.md#getworkspaceinfo) funzione membro viene archiviata in una `CDaoWorkspaceInfo` struttura. `CDaoWorkspaceInfo`definisce inoltre un `Dump` si basa la funzione membro in modalità debug. È possibile utilizzare `Dump` per scaricare il contenuto di un `CDaoWorkspaceInfo` oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDaoWorkspace (classe)](../../mfc/reference/cdaoworkspace-class.md)

