---
title: "Struttura CDaoWorkspaceInfo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CDaoWorkspaceInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDaoWorkspaceInfo (struttura)"
  - "DAO (Data Access Objects), raccolta Aree di lavoro"
ms.assetid: a1f4b25e-f9c6-4196-b075-d1df99c54124
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# Struttura CDaoWorkspaceInfo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura di `CDaoWorkspaceInfo` contiene informazioni su un'area di lavoro definito per l'accesso al database di \(DAO\) data access objects.  
  
## Sintassi  
  
```  
  
      struct CDaoWorkspaceInfo  
{  
   CString m_strName;           // Primary  
   CString m_strUserName;       // Secondary  
   BOOL m_bIsolateODBCTrans;    // All  
};  
```  
  
#### Parametri  
 `m_strName`  
 In modo univoco assegnare all'oggetto dell'area di lavoro.  Per recuperare direttamente il valore di questa proprietà, chiamare la funzione membro di [GetName](../Topic/CDaoQueryDef::GetName.md) l'oggetto pulsante querydef.  Per ulteriori informazioni, vedere l'argomento "proprietà name" nella Guida di DAO.  
  
 *m\_strUserName*  
 Un valore che rappresenta il proprietario di un oggetto area di lavoro.  Per informazioni correlate, vedere l'argomento "proprietà username" nella Guida di DAO.  
  
 *m\_bIsolateODBCTrans*  
 Un valore che indica se più transazioni che includono lo stesso database ODBC è isolato.  Per ulteriori informazioni, vedere [CDaoWorkspace::SetIsolateODBCTrans](../Topic/CDaoWorkspace::SetIsolateODBCTrans.md).  Per informazioni correlate, vedere l'argomento "proprietà di IsolateODBCTrans" nella Guida di DAO.  
  
## Note  
 L'area di lavoro è un oggetto di classe [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md).  I riferimenti a principale, secondario e a tutti su indicano quali le informazioni restituite dalla funzione membro di [GetWorkspaceInfo](../Topic/CDaoWorkspace::GetWorkspaceInfo.md) nella classe `CDaoWorkspace`.  
  
 Le informazioni recuperate dalla funzione membro di [CDaoWorkspace::GetWorkspaceInfo](../Topic/CDaoWorkspace::GetWorkspaceInfo.md) vengono archiviate in una struttura di `CDaoWorkspaceInfo`.  `CDaoWorkspaceInfo` definisce anche una funzione membro di `Dump` nelle build di debug.  È possibile utilizzare `Dump` per eseguire il dump del contenuto di un oggetto di `CDaoWorkspaceInfo`.  
  
## Requisiti  
 **Intestazione:** afxdao.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDaoWorkspace Class](../../mfc/reference/cdaoworkspace-class.md)