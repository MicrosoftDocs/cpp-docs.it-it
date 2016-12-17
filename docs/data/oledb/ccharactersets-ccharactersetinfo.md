---
title: "CCharacterSets, CCharacterSetInfo | Microsoft Docs"
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
  - "m_szCollateName"
  - "m_szCatalog"
  - "DEFAULT_COLLATE_NAME"
  - "m_szCollateSchema"
  - "FORM_OF_USE"
  - "DEFAULT_COLLATE_SCHEMA"
  - "m_szCollateCatalog"
  - "CCharacterSets"
  - "CHARACTER_SET_NAME"
  - "DEFAULT_COLLATE_CATALOG"
  - "CHARACTER_SET_SCHEMA"
  - "m_szFormOfUse"
  - "NUMBER_OF_CHARACTERS"
  - "m_szSchema"
  - "CHARACTER_SET_CATALOG"
  - "CCharacterSetInfo"
  - "m_nNumCharacters"
  - "m_szName"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CCharacterSetInfo (classe di parametri)"
  - "CCharacterSets (classe typedef)"
  - "CHARACTER_SET_CATALOG"
  - "CHARACTER_SET_NAME"
  - "CHARACTER_SET_SCHEMA"
  - "DEFAULT_COLLATE_CATALOG"
  - "DEFAULT_COLLATE_NAME"
  - "DEFAULT_COLLATE_SCHEMA"
  - "FORM_OF_USE OLE DB (colonna)"
  - "m_nNumCharacters"
  - "m_szCatalog"
  - "m_szCollateCatalog"
  - "m_szCollateName"
  - "m_szCollateSchema"
  - "m_szFormOfUse"
  - "m_szName"
  - "m_szSchema"
  - "NUMBER_OF_CHARACTERS"
ms.assetid: 029d068c-8bb2-4fc0-8709-78ce7f74446e
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CCharacterSets, CCharacterSetInfo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Chiamare la classe **CCharacterSets** typedef per implementare la propria classe di parametri **CCharacterSetInfo**.  
  
## Note  
 Vedere [Classi di rowset dello schema e classi typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) per ulteriori informazioni sull'utilizzo delle classi typedef.  
  
 Questa classe identifica i set di caratteri definiti nel catalogo accessibili a un utente specifico.  
  
 Nella tabella seguente sono elencati i membri dati di classi e le relative colonne corrispondenti di OLE DB.  Vedere [Rowset di CHARACTER\_SETS](https://msdn.microsoft.com/en-us/library/ms722638.aspx) in *Riferimenti per Programmatori di OLE DB* per ulteriori informazioni sullo schema e le colonne.  
  
|Membri di dati|Colonne OLE DB|  
|--------------------|--------------------|  
|m\_szCatalog|CHARACTER\_SET\_CATALOG|  
|m\_szSchema|CHARACTER\_SET\_SCHEMA|  
|m\_szName|CHARACTER\_SET\_NAME|  
|m\_szFormOfUse|FORM\_OF\_USE|  
|m\_nNumCharacters|NUMBER\_OF\_CHARACTERS|  
|m\_szCollateCatalog|DEFAULT\_COLLATE\_CATALOG|  
|m\_szCollateSchema|DEFAULT\_COLLATE\_SCHEMA|  
|m\_szCollateName|DEFAULT\_COLLATE\_NAME|  
  
## Requisiti  
 **Intestazione:** atldbsch.h  
  
## Vedere anche  
 [Classe CRestrictions](../../data/oledb/crestrictions-class.md)