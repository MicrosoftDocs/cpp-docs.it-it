---
title: "CTables, CTableInfo | Microsoft Docs"
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
  - "TABLE_SCHEMA"
  - "CTables"
  - "TABLE_NAME"
  - "TABLE_CATALOG"
  - "CTableInfo"
  - "m_guidTable"
  - "m_szType"
  - "m_szSchema"
  - "m_szName"
  - "TABLE_GUID"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CTableInfo (classe di parametri)"
  - "CTables (classe typedef)"
  - "DESCRIPTION (membro dati classe)"
  - "m_guidTable"
  - "m_szCatalog"
  - "m_szDescription"
  - "m_szName"
  - "m_szSchema"
  - "m_szType"
  - "TABLE_CATALOG"
  - "TABLE_GUID"
  - "TABLE_NAME"
  - "TABLE_SCHEMA"
ms.assetid: 57670f1b-ba99-43b0-b406-4c75b44f14f6
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# CTables, CTableInfo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Chiamare la classe **CTables** typedef per implementare la propria classe di parametri **CTableInfo**.  
  
## Note  
 Vedere [Classi di rowset dello schema e classi typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) per ulteriori informazioni sull'utilizzo delle classi typedef.  
  
 Questa classe identifica i privilegi alle tabelle, definite nel catalogo, a cui sia disponibile o concesso da un utente specificato.  
  
 Nella tabella seguente sono elencati i membri dati di classi e le relative colonne corrispondenti di OLE DB.  Vedere [Rowset TABLES](https://msdn.microsoft.com/en-us/library/ms716980.aspx)*in OLE DB Programmer's Reference* per ulteriori informazioni sullo schema e colonne.  
  
|Membri dati|Colonne OLE DB|  
|-----------------|--------------------|  
|m\_szCatalog|TABLE\_CATALOG|  
|m\_szSchema|TABLE\_SCHEMA|  
|m\_szName|TABLE\_NAME|  
|m\_szType|TABLE\_TYPE|  
|m\_guidTable|TABLE\_GUID|  
|m\_szDescription|DESCRIPTION|  
  
## Requisiti  
 **Intestazione:** atldbsch.h  
  
## Vedere anche  
 [Classe CRestrictions](../../data/oledb/crestrictions-class.md)