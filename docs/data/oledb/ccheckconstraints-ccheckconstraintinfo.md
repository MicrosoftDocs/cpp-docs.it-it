---
title: "CCheckConstraints, CCheckConstraintInfo | Microsoft Docs"
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
  - "CCheckConstraintInfo"
  - "CHECK_CONSTRAINTS"
  - "m_szCatalog"
  - "CCheckConstraints"
  - "CONSTRAINT_NAME"
  - "m_szSchema"
  - "CHECK_CLAUSE"
  - "m_szCheckClause"
  - "m_szName"
  - "CONSTRAINT_CATALOG"
  - "CONSTRAINT_SCHEMA"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CCheckConstraintInfo (classe di parametri)"
  - "CCheckConstraints (classe typedef)"
  - "CHECK_CLAUSE"
  - "CHECK_CONSTRAINTS"
  - "CONSTRAINT_CATALOG"
  - "CONSTRAINT_NAME"
  - "CONSTRAINT_SCHEMA"
  - "DESCRIPTION (membro dati classe)"
  - "m_szCatalog"
  - "m_szCheckClause"
  - "m_szDescription"
  - "m_szName"
  - "m_szSchema"
ms.assetid: e53e79a5-01e5-42b7-aa8c-164aec94b011
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CCheckConstraints, CCheckConstraintInfo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Chiamare la classe **CCheckConstraints** typedef per implementare la propria classe di parametri **CCheckConstraintInfo**.  
  
## Note  
 Vedere [Classi di rowset dello schema e classi typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) per ulteriori informazioni sull'utilizzo delle classi typedef.  
  
 Questa classe identifica i vincoli CHECK, definiti nel catalogo, appartenenti a un determinato utente.  Un vincolo CHECK specifica i valori o i formati di dati accettabili in una o più colonne di una tabella.  
  
 Nella tabella seguente sono elencati i membri dati di classi e le relative colonne corrispondenti di OLE DB.  Vedere [Rowset di CHECK\_CONSTRAINTS](https://msdn.microsoft.com/en-us/library/ms712845.aspx)*in OLE DB Programmer's Reference* per ulteriori informazioni sullo schema e colonne.  
  
|Membri dati|Colonne OLE DB|  
|-----------------|--------------------|  
|m\_szCatalog|CONSTRAINT\_CATALOG|  
|m\_szSchema|CONSTRAINT\_SCHEMA|  
|m\_szName|CONSTRAINT\_NAME|  
|m\_szCheckClause|CHECK\_CLAUSE|  
|m\_szDescription|DESCRIPTION|  
  
## Requisiti  
 **Intestazione:** atldbsch.h  
  
## Vedere anche  
 [Classe CRestrictions](../../data/oledb/crestrictions-class.md)