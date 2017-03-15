---
title: "CCatalogs, CCatalogInfo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CCatalogs"
  - "m_szName"
  - "CCatalogInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CCatalogInfo (classe di parametri)"
  - "CCatalogs (classe typedef)"
  - "DESCRIPTION (membro dati classe)"
  - "m_szDescription"
  - "m_szName"
ms.assetid: 8362cbbd-2f00-4272-8518-fc235c4de193
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# CCatalogs, CCatalogInfo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Chiamare la classe **CCatalogs** typedef per implementare la propria classe di parametri **CCatalogInfo**.  
  
## Note  
 Vedere [Classi di rowset dello schema e classi typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) per ulteriori informazioni sull'utilizzo delle classi typedef.  
  
 Questa classe consente di identificare gli attributi fisici associati ai cataloghi accessibili dal DBMS.  
  
 Nella tabella seguente sono elencati i membri dati di classi e le relative colonne corrispondenti di OLE DB.  Vedere [Rowset di CATALOGHI](https://msdn.microsoft.com/en-us/library/ms721241.aspx)*in OLE DB Programmer's Reference* per ulteriori informazioni sullo schema e colonne.  
  
|Membri dati|Colonne OLE DB|  
|-----------------|--------------------|  
|m\_szName|CATALOG\_NAME|  
|m\_szDescription|DESCRIPTION|  
  
## Requisiti  
 **Intestazione:** atldbsch.h  
  
## Vedere anche  
 [Classe CRestrictions](../../data/oledb/crestrictions-class.md)