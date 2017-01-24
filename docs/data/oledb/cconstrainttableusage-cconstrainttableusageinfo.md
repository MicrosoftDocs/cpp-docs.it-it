---
title: "CConstraintTableUsage, CConstraintTableUsageInfo | Microsoft Docs"
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
  - "CConstraintTableUsageInfo"
  - "CONSTRAINT_TABLE_USAGE"
  - "m_szTableSchema"
  - "m_szConstraintCatalog"
  - "CONSTRAINT_NAME"
  - "m_szTableCatalog"
  - "m_szConstraintSchema"
  - "m_szTableName"
  - "CONSTRAINT_CATALOG"
  - "CONSTRAINT_SCHEMA"
  - "CConstraintTableUsage"
  - "m_szConstraintName"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CConstraintTableUsage (classe typedef)"
  - "CConstraintTableUsageInfo (classe di parametri)"
  - "CONSTRAINT_CATALOG"
  - "CONSTRAINT_NAME"
  - "CONSTRAINT_SCHEMA"
  - "CONSTRAINT_TABLE_USAGE"
  - "m_szConstraintCatalog"
  - "m_szConstraintName"
  - "m_szConstraintSchema"
  - "m_szTableCatalog"
  - "m_szTableName"
  - "m_szTableSchema"
  - "TABLE_CATALOG"
  - "TABLE_NAME"
  - "TABLE_SCHEMA"
ms.assetid: 666b44de-3922-4c5e-ad17-d5ea27120174
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CConstraintTableUsage, CConstraintTableUsageInfo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Chiamare la classe **CConstraintTableUsage** typedef per implementare la propria classe di parametri **CConstraintTableUsageInfo**.  
  
## Note  
 Vedere [Classi di rowset dello schema e classi typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) per ulteriori informazioni sull'utilizzo delle classi typedef.  
  
 Questa classe identifica le tabelle utilizzate dai vincoli referenziali, dai vincoli univoci, dai vincoli CHECK e le asserzioni, definite nel catalogo e di proprietà da un utente specificato.  
  
 Nella tabella seguente sono elencati i membri dati di classi e le relative colonne corrispondenti di OLE DB.  Vedere [Rowset di CONSTRAINT\_TABLE\_USAGE](https://msdn.microsoft.com/en-us/library/ms724522.aspx)*in OLE DB Programmer's Reference* per ulteriori informazioni sullo schema e colonne.  
  
|Membri dati|Colonne OLE DB|  
|-----------------|--------------------|  
|m\_szTableCatalog|TABLE\_CATALOG|  
|m\_szTableSchema|TABLE\_SCHEMA|  
|m\_szTableName|TABLE\_NAME|  
|m\_szConstraintCatalog|CONSTRAINT\_CATALOG|  
|m\_szConstraintSchema|CONSTRAINT\_SCHEMA|  
|m\_szConstraintName|CONSTRAINT\_NAME|  
  
## Requisiti  
 **Intestazione:** atldbsch.h  
  
## Vedere anche  
 [Classe CRestrictions](../../data/oledb/crestrictions-class.md)