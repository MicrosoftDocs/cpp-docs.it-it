---
title: "CForeignKeys, CForeignKeysInfo | Microsoft Docs"
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
  - "m_nOrdinal"
  - "m_szPKColumnName"
  - "FK_TABLE_NAME"
  - "m_guidFKColumn"
  - "FK_COLUMN_NAME"
  - "m_guidPKColumn"
  - "DELETE_RULE"
  - "m_szPKTableSchema"
  - "FK_COLUMN_PROPID"
  - "m_nFKColumnPropID"
  - "m_szFKTableCatalog"
  - "CForeignKeysInfo"
  - "FK_TABLE_SCHEMA"
  - "m_szPKTableCatalog"
  - "m_szDeleteRule"
  - "m_szUpdateRule"
  - "m_szPKTableName"
  - "m_szFKTableSchema"
  - "ORDINAL"
  - "m_nPKColumnPropID"
  - "m_szFKColumnName"
  - "FK_TABLE_CATALOG"
  - "FK_COLUMN_GUID"
  - "m_szFKTableName"
  - "CForeignKeys"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CForeignKeys (classe typedef)"
  - "CForeignKeysInfo (classe di parametri)"
  - "DELETE_RULE"
  - "FK_COLUMN_GUID"
  - "FK_COLUMN_NAME"
  - "FK_COLUMN_PROPID"
  - "FK_TABLE_CATALOG"
  - "FK_TABLE_NAME"
  - "FK_TABLE_SCHEMA"
  - "m_guidFKColumn"
  - "m_guidPKColumn"
  - "m_nFKColumnPropID"
  - "m_nOrdinal"
  - "m_nPKColumnPropID"
  - "m_szDeleteRule"
  - "m_szFKColumnName"
  - "m_szFKTableCatalog"
  - "m_szFKTableName"
  - "m_szFKTableSchema"
  - "m_szPKColumnName"
  - "m_szPKTableCatalog"
  - "m_szPKTableName"
  - "m_szPKTableSchema"
  - "m_szUpdateRule"
  - "ORDINAL (membro dati)"
ms.assetid: 1c401a4a-0827-4255-9214-bc893e1cd79d
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CForeignKeys, CForeignKeysInfo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Chiamare la classe typedef **CForeignKeys** per implementare la propria classe di parametri **CForeignKeysInfo**.  
  
## Note  
 Vedere [Classi di Rowset dello Schema e Classi Typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) per ulteriori informazioni sull'utilizzo delle classi typedef.  
  
 Questa classe identica le colonne della chiave esterna definite nel catalogo da un determinato utente.  
  
 Nella tabella seguente sono elencati i membri dati di classi e le relative colonne corrispondenti di OLE DB.  Vedere [Rowset di FOREIGN\_KEYS](https://msdn.microsoft.com/en-us/library/ms711276.aspx) in *OLE DB Programmer's Reference* per ulteriori informazioni sullo schema e le colonne.  
  
|Membri di dati|Colonne OLE DB|  
|--------------------|--------------------|  
|m\_szPKTableCatalog|PK\_TABLE\_CATALOG|  
|m\_szPKTableSchema|PK\_TABLE\_SCHEMA|  
|m\_szPKTableName|PK\_TABLE\_NAME|  
|m\_szPKColumnName|PK\_COLUMN\_NAME|  
|m\_guidPKColumn|PK\_COLUMN\_NAME|  
|m\_nPKColumnPropID|FK\_COLUMN\_PROPID|  
|m\_szFKTableCatalog|FK\_TABLE\_CATALOG|  
|m\_szFKTableSchema|FK\_TABLE\_SCHEMA|  
|m\_szFKTableName|FK\_TABLE\_NAME|  
|m\_szFKColumnName|FK\_COLUMN\_NAME|  
|m\_guidFKColumn|FK\_COLUMN\_GUID|  
|m\_nFKColumnPropID|FK\_COLUMN\_PROPID|  
|m\_nOrdinal|ORDINAL|  
|m\_szUpdateRule|UPDATE\_RULE|  
|m\_szDeleteRule|DELETE\_RULE|  
  
## Requisiti  
 **Intestazione:** atldbsch.h  
  
## Vedere anche  
 [Classe CRestrictions](../../data/oledb/crestrictions-class.md)