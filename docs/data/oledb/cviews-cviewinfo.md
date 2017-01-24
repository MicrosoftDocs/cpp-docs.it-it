---
title: "CViews, CViewInfo | Microsoft Docs"
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
  - "m_szTableSchema"
  - "m_bCheckOption"
  - "CViews"
  - "CHECK_OPTION"
  - "CViewInfo"
  - "m_szTableCatalog"
  - "IS_UPDATABLE"
  - "m_szDefinition"
  - "m_szTableName"
  - "m_bIsUpdatable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CHECK_OPTION"
  - "CViewInfo (classe di parametri)"
  - "CViews (classe typedef)"
  - "DESCRIPTION (membro dati classe)"
  - "IS_UPDATABLE"
  - "m_bCheckOption"
  - "m_bIsUpdatable"
  - "m_szDefinition"
  - "m_szDescription"
  - "m_szTableCatalog"
  - "m_szTableName"
  - "m_szTableSchema"
  - "TABLE_CATALOG"
  - "TABLE_NAME"
  - "TABLE_SCHEMA"
ms.assetid: ad864181-4fab-4919-b0fd-45df5da230d9
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CViews, CViewInfo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Chiamare la classe **CViews** typedef per implementare la propria classe di parametri **CViewInfo**.  
  
## Note  
 Vedere [Classi di rowset dello schema e classi typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) per ulteriori informazioni sull'utilizzo delle classi typedef.  
  
 Questa classe identifica le tabelle su cui è visualizzato, le tabelle definite nel catalogo e di proprietà di un determinato utente, è dipendente.  
  
 Nella tabella seguente sono elencati i membri dati di classi e le relative colonne corrispondenti di OLE DB.  Vedere [Rowset di VISUALIZZAZIONI](https://msdn.microsoft.com/en-us/library/ms723122.aspx)*in OLE DB Programmer's Reference* per ulteriori informazioni sullo schema e colonne.  
  
|Membri dati|Colonne OLE DB|  
|-----------------|--------------------|  
|m\_szTableCatalog|TABLE\_CATALOG|  
|m\_szTableSchema|TABLE\_SCHEMA|  
|m\_szTableName|TABLE\_NAME|  
|m\_szDefinition|VIEW\_DEFINITION|  
|m\_bCheckOption|CHECK\_OPTION|  
|m\_bIsUpdatable|IS\_UPDATABLE|  
|m\_szDescription|DESCRIPTION|  
  
## Requisiti  
 **Intestazione:** atldbsch.h  
  
## Vedere anche  
 [Classe CRestrictions](../../data/oledb/crestrictions-class.md)