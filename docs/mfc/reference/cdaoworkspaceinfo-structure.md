---
title: Struttura CDaoWorkspaceInfo | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CDaoWorkspaceInfo
dev_langs:
- C++
helpviewer_keywords:
- CDaoWorkspaceInfo structure [MFC]
- DAO (Data Access Objects), Workspaces collection
ms.assetid: a1f4b25e-f9c6-4196-b075-d1df99c54124
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: dd6979124916e8a9cc1dc723008491bababc0322
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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
 Identifica in modo univoco l'oggetto dell'area di lavoro. Per recuperare direttamente il valore di questa proprietà, chiamare l'oggetto querydef [GetName](../../mfc/reference/cdaoquerydef-class.md#getname) funzione membro. Per ulteriori informazioni, vedere l'argomento "Proprietà di nome" nella Guida di DAO.  
  
 *m_strUserName*  
 Un valore che rappresenta il proprietario di un oggetto dell'area di lavoro. Per informazioni correlate, vedere l'argomento "Proprietà UserName" nella Guida di DAO.  
  
 *m_bIsolateODBCTrans*  
 Un valore che indica se sono isolate più transazioni che implicano lo stesso database ODBC. Per ulteriori informazioni, vedere [CDaoWorkspace::SetIsolateODBCTrans](../../mfc/reference/cdaoworkspace-class.md#setisolateodbctrans). Per informazioni correlate, vedere l'argomento "Proprietà IsolateODBCTrans" nella Guida di DAO.  
  
## <a name="remarks"></a>Note  
 L'area di lavoro è un oggetto della classe [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md). I riferimenti al database primario, secondario e tutti sopra indicano la modalità in cui vengono restituite le informazioni per il [funzione membro GetWorkspaceInfo](../../mfc/reference/cdaoworkspace-class.md#getworkspaceinfo) funzione membro nella classe `CDaoWorkspace`.  
  
 Le informazioni recuperate dal [CDaoWorkspace::GetWorkspaceInfo](../../mfc/reference/cdaoworkspace-class.md#getworkspaceinfo) le funzioni membro vengono archiviate un `CDaoWorkspaceInfo` struttura. `CDaoWorkspaceInfo` definisce inoltre un `Dump` compila la funzione membro in modalità debug. È possibile utilizzare `Dump` per scaricare il contenuto di un `CDaoWorkspaceInfo` oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [Classe CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md)
