---
title: "CCollations, CCollationInfo | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "COLLATION_CATALOG"
  - "m_szCatalog"
  - "CCollationInfo"
  - "CCollations"
  - "CHARACTER_SET_NAME"
  - "CHARACTER_SET_SCHEMA"
  - "m_szCharSetName"
  - "m_szSchema"
  - "CHARACTER_SET_CATALOG"
  - "m_szCharSetSchema"
  - "m_szCharSetCatalog"
  - "m_szPadAttribute"
  - "COLLATION_NAME"
  - "COLLATION_SCHEMA"
  - "m_szName"
  - "COLLATIONS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CCollationInfo (classe di parametri)"
  - "CCollations (classe typedef)"
  - "CHARACTER_SET_CATALOG"
  - "CHARACTER_SET_NAME"
  - "CHARACTER_SET_SCHEMA"
  - "COLLATION_CATALOG"
  - "COLLATION_NAME"
  - "COLLATION_SCHEMA"
  - "COLLATIONS (recordset)"
  - "m_szCatalog"
  - "m_szCharSetCatalog"
  - "m_szCharSetName"
  - "m_szCharSetSchema"
  - "m_szName"
  - "m_szPadAttribute"
  - "m_szSchema"
ms.assetid: d8b43c4d-9dd5-4043-b4c8-38c03bfa0c72
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CCollations, CCollationInfo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Chiamare la classe **CCollations** typedef per implementare la propria classe di parametri **CCollationInfo**.  
  
## Note  
 Vedere [Classi di rowset dello schema e classi typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) per ulteriori informazioni sull'utilizzo delle classi typedef.  
  
 Questa classe identifica le regole di confronto del carattere, definite nel catalogo, accessibili a un utente specifico.  
  
 Nella tabella seguente sono elencati i membri dati di classi e le relative colonne corrispondenti di OLE DB.  Vedere [Rowset di REGOLE UN CONFRONTO](https://msdn.microsoft.com/en-us/library/ms715783.aspx)*in OLE DB Programmer's Reference* per ulteriori informazioni sullo schema e colonne.  
  
|Membri dati|Colonne OLE DB|  
|-----------------|--------------------|  
|m\_szCatalog|COLLATION\_CATALOG|  
|m\_szSchema|COLLATION\_SCHEMA|  
|m\_szName|COLLATION\_NAME|  
|m\_szCharSetCatalog|CHARACTER\_SET\_CATALOG|  
|m\_szCharSetSchema|CHARACTER\_SET\_SCHEMA|  
|m\_szCharSetName|CHARACTER\_SET\_NAME|  
|m\_szPadAttribute|PAD\_ATTRIBUTE|  
  
## Requisiti  
 **Intestazione:** atldbsch.h  
  
## Vedere anche  
 [Classe CRestrictions](../../data/oledb/crestrictions-class.md)