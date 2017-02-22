---
title: "CTranslations, CTranslationInfo | Microsoft Docs"
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
  - "m_szSourceCatalog"
  - "m_szTargetSchema"
  - "m_szTargetCatalog"
  - "m_szTargetName"
  - "CTranslationInfo"
  - "m_szSourceName"
  - "m_szSchema"
  - "CTranslations"
  - "m_szName"
  - "m_szSourceSchema"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CTranslationInfo (classe di parametri)"
  - "CTranslations (classe typedef)"
  - "m_szCatalog"
  - "m_szName"
  - "m_szSchema"
  - "m_szSourceCatalog"
  - "m_szSourceName"
  - "m_szSourceSchema"
  - "m_szTargetCatalog"
  - "m_szTargetName"
  - "m_szTargetSchema"
ms.assetid: 19a64828-2d4c-42a0-8bfb-b010e334a9b3
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# CTranslations, CTranslationInfo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Chiamare la classe typedef **CTranslations** per implementare la propria classe di parametri **CTranslationInfo**.  
  
## Note  
 Vedere [Classi di Rowset dello Schema e Classi Typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) per ulteriori informazioni sull'utilizzo delle classi typedef.  
  
 Questa classe identifica i caratteri di traslazione definiti nel catalogo che sono accessibili per un utente specifico.  
  
 Nella tabella seguente sono elencati i membri dati di classi e le relative colonne corrispondenti di OLE DB.  Vedere [Rowset di TRANSLATIONS](https://msdn.microsoft.com/en-us/library/ms725365.aspx) in *OLE DB Programmer's Reference* per ulteriori informazioni sullo schema e le colonne.  
  
|Membri di dati|Colonne OLE DB|  
|--------------------|--------------------|  
|m\_szCatalog|TRANSLATION\_CATALOG|  
|m\_szSchema|TRANSLATION\_SCHEMA|  
|m\_szName|TRANSLATION\_NAME|  
|m\_szSourceCatalog|SOURCE\_CHARACTER\_SET\_CATALOG|  
|m\_szSourceSchema|SOURCE\_CHARACTER\_SET\_SCHEMA|  
|m\_szSourceName|SOURCE\_CHARACTER\_SET\_NAME|  
|m\_szTargetCatalog|TARGET\_CHARACTER\_SET\_CATALOG|  
|m\_szTargetSchema|TARGET\_CHARACTER\_SET\_SCHEMA|  
|m\_szTargetName|TARGET\_CHARACTER\_SET\_NAME|  
  
## Requisiti  
 **Intestazione:** atldbsch.h  
  
## Vedere anche  
 [CatDB](../../top/visual-cpp-samples.md)   
 [Classe CRestrictions](../../data/oledb/crestrictions-class.md)