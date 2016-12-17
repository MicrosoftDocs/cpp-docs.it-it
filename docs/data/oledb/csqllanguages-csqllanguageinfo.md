---
title: "CSQLLanguages, CSQLLanguageInfo | Microsoft Docs"
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
  - "CSQLLanguageInfo"
  - "m_szProgrammingLanguage"
  - "m_szImplementation"
  - "m_szIntegrity"
  - "m_szBindingStyle"
  - "m_szConformance"
  - "m_szSource"
  - "m_szYear"
  - "CSQLLanguages"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSQLLanguageInfo (classe di parametri)"
  - "CSQLLanguages (classe typedef)"
  - "m_szBindingStyle"
  - "m_szConformance"
  - "m_szImplementation"
  - "m_szIntegrity"
  - "m_szProgrammingLanguage"
  - "m_szSource"
  - "m_szYear"
ms.assetid: 9c36c5bb-6917-49c3-9ac3-942339893f19
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CSQLLanguages, CSQLLanguageInfo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Chiamare la classe **CSQLLanguages** typedef per implementare la propria classe di parametri **CSQLLanguageInfo**.  
  
## Note  
 Vedere [Classi di rowset dello schema e classi typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) per ulteriori informazioni sull'utilizzo delle classi typedef.  
  
 Questa classe identifica i livelli, e le opzioni di sottolinguaggi di conformità supportate dai dati di elaborazione di SQL\- implementazione definiti nel catalogo.  
  
 Nella tabella seguente sono elencati i membri dati di classi e le relative colonne corrispondenti di OLE DB.  Vedere [Rowset di SQL\_LANGUAGES](https://msdn.microsoft.com/en-us/library/ms714374.aspx)*in OLE DB Programmer's Reference* per ulteriori informazioni sullo schema e colonne.  
  
|Membri dati|Colonne OLE DB|  
|-----------------|--------------------|  
|m\_szSource|SQL\_LANGUAGE\_SOURCE|  
|m\_szYear|SQL\_LANGUAGE\_YEAR|  
|m\_szConformance|SQL\_LANGUAGE\_CONFORMANCE|  
|m\_szIntegrity|SQL\_LANGUAGE\_INTEGRITY|  
|m\_szImplementation|SQL\_LANGUAGE\_IMPLEMENTATION|  
|m\_szBindingStyle|SQL\_LANGUAGE\_BINDING\_STYLE|  
|m\_szProgrammingLanguage|SQL\_LANGUAGE\_PROGRAMMING\_LANGUAGE|  
  
## Requisiti  
 **Intestazione:** atldbsch.h  
  
## Vedere anche  
 [Classe CRestrictions](../../data/oledb/crestrictions-class.md)