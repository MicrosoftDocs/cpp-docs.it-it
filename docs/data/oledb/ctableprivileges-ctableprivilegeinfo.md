---
title: "CTablePrivileges, CTablePrivilegeInfo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "m_szCatalog"
  - "m_bIsGrantable"
  - "IS_GRANTABLE"
  - "m_szType"
  - "m_szSchema"
  - "m_szGrantor"
  - "GRANTOR"
  - "GRANTEE"
  - "CTablePrivileges"
  - "CTablePrivilegeInfo"
  - "m_szName"
  - "m_szGrantee"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CTablePrivilegeInfo (classe di parametri)"
  - "CTablePrivileges (classe typedef)"
  - "GRANTEE"
  - "GRANTOR"
  - "IS_GRANTABLE"
  - "m_bIsGrantable"
  - "m_szCatalog"
  - "m_szGrantee"
  - "m_szGrantor"
  - "m_szName"
  - "m_szSchema"
  - "m_szType"
  - "TABLE_CATALOG"
  - "TABLE_NAME"
  - "TABLE_SCHEMA"
ms.assetid: ffcd6f73-022e-452a-8342-f2b9362d256b
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# CTablePrivileges, CTablePrivilegeInfo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Chiamare la classe **CTablePrivileges** typedef per implementare la propria classe di parametri **CTablePrivilegeInfo**.  
  
## Note  
 Vedere [Classi di rowset dello schema e classi typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) per ulteriori informazioni sull'utilizzo delle classi typedef.  
  
 Questa classe identifica le tabelle definite nel catalogo accessibili a un utente specifico.  
  
 Nella tabella seguente sono elencati i membri dati di classi e le relative colonne corrispondenti di OLE DB.  Vedere [Rowset di TABLE\_PRIVILEGES](https://msdn.microsoft.com/en-us/library/ms725428.aspx)*in OLE DB Programmer's Reference* per ulteriori informazioni sullo schema e colonne.  
  
|Membri dati|Colonne OLE DB|  
|-----------------|--------------------|  
|m\_szGrantor|GRANTOR|  
|m\_szGrantee|GRANTEE|  
|m\_szCatalog|TABLE\_CATALOG|  
|m\_szSchema|TABLE\_SCHEMA|  
|m\_szName|TABLE\_NAME|  
|m\_szType|PRIVILEGE\_TYPE|  
|m\_bIsGrantable|IS\_GRANTABLE|  
  
## Requisiti  
 **Intestazione:** atldbsch.h  
  
## Vedere anche  
 [Classe CRestrictions](../../data/oledb/crestrictions-class.md)