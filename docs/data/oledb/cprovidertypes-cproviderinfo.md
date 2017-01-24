---
title: "CProviderTypes, CProviderInfo | Microsoft Docs"
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
  - "m_bIsLong"
  - "m_szLocalTypeName"
  - "m_guidType"
  - "m_bCaseSensitive"
  - "m_szVersion"
  - "m_szCreateParams"
  - "IS_NULLABLE"
  - "m_bAutoUniqueValue"
  - "LITERAL_SUFFIX"
  - "COLUMN_SIZE"
  - "CProviderTypes"
  - "LOCAL_TYPE_NAME"
  - "MINIMUM_SCALE"
  - "m_nMinScale"
  - "m_nColumnSize"
  - "m_szLiteralSuffix"
  - "m_bFixedPrecScale"
  - "m_szLiteralPrefix"
  - "m_nMaxScale"
  - "m_szTypeLib"
  - "m_nDataType"
  - "m_bUnsignedAttribute"
  - "m_nSearchable"
  - "m_bBestMatch"
  - "m_szTypeName"
  - "DATA_TYPE"
  - "MAXIMUM_SCALE"
  - "CProviderInfo"
  - "FIXED_PREC_SCALE"
  - "m_bIsNullable"
  - "IS_LONG"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COLUMN_SIZE"
  - "CProviderInfo (classe di parametri)"
  - "CProviderTypes (classe typedef)"
  - "DATA_TYPE"
  - "FIXED_PREC_SCALE"
  - "IS_LONG"
  - "IS_NULLABLE"
  - "LITERAL_SUFFIX"
  - "LOCAL_TYPE_NAME"
  - "m_bAutoUniqueValue"
  - "m_bBestMatch"
  - "m_bCaseSensitive"
  - "m_bFixedPrecScale"
  - "m_bIsLong"
  - "m_bIsNullable"
  - "m_bUnsignedAttribute"
  - "m_guidType"
  - "m_nColumnSize"
  - "m_nDataType"
  - "m_nMaxScale"
  - "m_nMinScale"
  - "m_nSearchable"
  - "m_szCreateParams"
  - "m_szLiteralPrefix"
  - "m_szLiteralSuffix"
  - "m_szLocalTypeName"
  - "m_szTypeLib"
  - "m_szTypeName"
  - "m_szVersion"
  - "MAXIMUM_SCALE"
  - "MINIMUM_SCALE"
ms.assetid: 6f1620ff-c2f0-4f5b-931c-27b0cd2a580d
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CProviderTypes, CProviderInfo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Chiamare la classe **CProviderTypes** typedef per implementare la propria classe di parametri **CProviderInfo**.  
  
## Note  
 Vedere [Classi di rowset dello schema e classi typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) per ulteriori informazioni sull'utilizzo delle classi typedef.  
  
 Questa classe identifica i tipi di dati \(base\) supportate dal provider di dati.  
  
 Nella tabella seguente sono elencati i membri dati di classi e le relative colonne corrispondenti di OLE DB.  Vedere [Rowset di PROVIDER\_TYPES](https://msdn.microsoft.com/en-us/library/ms709785.aspx)*in OLE DB Programmer's Reference* per ulteriori informazioni sullo schema e colonne.  
  
|Membri dati|Colonne OLE DB|  
|-----------------|--------------------|  
|m\_szTypeName|TYPE\_NAME|  
|m\_nDataType|DATA\_TYPE|  
|m\_nColumnSize|COLUMN\_SIZE|  
|m\_szLiteralPrefix|LITERAL\_PREFIX|  
|m\_szLiteralSuffix|LITERAL\_SUFFIX|  
|m\_szCreateParams|CREATE\_PARAMS|  
|m\_bIsNullable|IS\_NULLABLE|  
|m\_bCaseSensitive|CASE\_SENSITIVE|  
|m\_nSearchable|ESPLORABILE|  
|m\_bUnsignedAttribute|UNSIGNED\_ATTRIBUTE|  
|m\_bFixedPrecScale|FIXED\_PREC\_SCALE|  
|m\_bAutoUniqueValue|AUTO\_UNIQUE\_VALUE|  
|m\_szLocalTypeName|LOCAL\_TYPE\_NAME|  
|m\_nMinScale|MINIMUM\_SCALE|  
|m\_nMaxScale|MAXIMUM\_SCALE|  
|m\_guidType|GUID|  
|m\_szTypeLib|TYPELIB|  
|m\_szVersion|VERSION|  
|m\_bIsLong|IS\_LONG|  
|m\_bBestMatch|BEST\_MATCH|  
  
## Requisiti  
 **Intestazione:** atldbsch.h  
  
## Vedere anche  
 [Classe CRestrictions](../../data/oledb/crestrictions-class.md)