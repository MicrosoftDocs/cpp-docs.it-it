---
title: "CColumnDomainUsage, CColumnDomainUsageInfo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "m_szTableSchema"
  - "m_szCatalog"
  - "m_nColumnPropID"
  - "CColumnDomainUsageInfo"
  - "COLUMN_GUID"
  - "DOMAIN_NAME"
  - "m_szColumnName"
  - "DOMAIN_SCHEMA"
  - "DOMAIN_CATALOG"
  - "m_szTableCatalog"
  - "m_szSchema"
  - "COLUMN_PROPID"
  - "m_guidColumn"
  - "CColumnDomainUsage"
  - "m_szTableName"
  - "m_szName"
  - "COLUMN_DOMAIN_USAGE"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CColumnDomainUsage (classe typedef)"
  - "CColumnDomainUsageInfo (classe di parametri)"
  - "COLUMN_DOMAIN_USAGE"
  - "COLUMN_GUID"
  - "COLUMN_NAME"
  - "COLUMN_PROPID"
  - "DOMAIN_CATALOG"
  - "DOMAIN_NAME"
  - "DOMAIN_SCHEMA"
  - "m_guidColumn"
  - "m_nColumnPropID"
  - "m_szCatalog"
  - "m_szColumnName"
  - "m_szName"
  - "m_szSchema"
  - "m_szTableCatalog"
  - "m_szTableName"
  - "m_szTableSchema"
  - "TABLE_CATALOG"
  - "TABLE_NAME"
  - "TABLE_SCHEMA"
ms.assetid: 5ff331f1-b99c-4002-9e04-367708c5759f
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# CColumnDomainUsage, CColumnDomainUsageInfo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Chiamare la classe **CColumnDomainUsage** typedef per implementare la propria classe di parametri **CColumnDomainUsageInfo**.  
  
## Note  
 Vedere [Classi di rowset dello schema e classi typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) per ulteriori informazioni sull'utilizzo delle classi typedef.  
  
 Questa classe identifica le colonne, definite nel catalogo, che dipendono da un dominio definito nel catalogo e di proprietà da un utente specificato.  
  
 Nella tabella seguente sono elencati i membri dati di classi e le relative colonne corrispondenti di OLE DB.  Vedere [Rowset di COLUMN\_DOMAIN\_USAGE](https://msdn.microsoft.com/en-us/library/ms711240.aspx)*in OLE DB Programmer's Reference* per ulteriori informazioni sullo schema e colonne.  
  
|Membri dati|Colonne OLE DB|  
|-----------------|--------------------|  
|m\_szCatalog|DOMAIN\_CATALOG|  
|m\_szSchema|DOMAIN\_SCHEMA|  
|m\_szName|DOMAIN\_NAME|  
|m\_szTableCatalog|TABLE\_CATALOG|  
|m\_szTableSchema|TABLE\_SCHEMA|  
|m\_szTableName|TABLE\_NAME|  
|m\_szColumnName|COLUMN\_NAME|  
|m\_guidColumn|COLUMN\_GUID|  
|m\_nColumnPropID|COLUMN\_PROPID|  
  
## Requisiti  
 **Intestazione:** atldbsch.h  
  
## Vedere anche  
 [Classe CRestrictions](../../data/oledb/crestrictions-class.md)