---
title: CProviderTypes, CProviderInfo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- m_bIsLong
- m_szLocalTypeName
- m_guidType
- m_bCaseSensitive
- m_szVersion
- m_szCreateParams
- IS_NULLABLE
- m_bAutoUniqueValue
- LITERAL_SUFFIX
- COLUMN_SIZE
- CProviderTypes
- LOCAL_TYPE_NAME
- MINIMUM_SCALE
- m_nMinScale
- m_nColumnSize
- m_szLiteralSuffix
- m_bFixedPrecScale
- m_szLiteralPrefix
- m_nMaxScale
- m_szTypeLib
- m_nDataType
- m_bUnsignedAttribute
- m_nSearchable
- m_bBestMatch
- m_szTypeName
- DATA_TYPE
- MAXIMUM_SCALE
- CProviderInfo
- FIXED_PREC_SCALE
- m_bIsNullable
- IS_LONG
dev_langs:
- C++
helpviewer_keywords:
- DATA_TYPE
- MAXIMUM_SCALE
- m_nMinScale
- m_guidType
- LOCAL_TYPE_NAME
- m_bAutoUniqueValue
- m_bBestMatch
- m_bIsLong
- m_bUnsignedAttribute
- CProviderInfo parameter class
- FIXED_PREC_SCALE
- m_nColumnSize
- m_szVersion
- CProviderTypes typedef class
- m_szCreateParams
- IS_NULLABLE
- m_bIsNullable
- m_szTypeLib
- m_szLiteralPrefix
- m_nMaxScale
- m_nDataType
- m_bCaseSensitive
- m_bFixedPrecScale
- m_nSearchable
- MINIMUM_SCALE
- m_szTypeName
- m_szLocalTypeName
- IS_LONG
- LITERAL_SUFFIX
- COLUMN_SIZE
- m_szLiteralSuffix
ms.assetid: 6f1620ff-c2f0-4f5b-931c-27b0cd2a580d
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: a0218aa7774b08db2e8ee727fd1aa8343286d352
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="cprovidertypes-cproviderinfo"></a>CProviderTypes, CProviderInfo
Chiamare la classe typedef **CProviderTypes** per implementare la relativa classe di parametro **CProviderInfo**.  
  
## <a name="remarks"></a>Note  
 Vedere [classi Rowset dello Schema e classi Typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) per ulteriori informazioni sull'utilizzo delle classi typedef.  
  
 Questa classe identifica i tipi di dati (base) supportati dal provider di dati.  
  
 Nella tabella seguente sono elencati i membri dati della classe e le corrispondenti colonne BD OLE. Vedere [set di righe PROVIDER_TYPES](https://msdn.microsoft.com/en-us/library/ms709785.aspx) nel *riferimento per programmatori OLE DB* per ulteriori informazioni sullo schema e le colonne.  
  
|Membri dati|Colonne OLE DB|  
|------------------|--------------------|  
|m_szTypeName|TYPE_NAME|  
|m_nDataType|DATA_TYPE|  
|m_nColumnSize|COLUMN_SIZE|  
|m_szLiteralPrefix|LITERAL_PREFIX|  
|m_szLiteralSuffix|LITERAL_SUFFIX|  
|m_szCreateParams|CREATE_PARAMS|  
|m_bIsNullable|IS_NULLABLE|  
|m_bCaseSensitive|CASE_SENSITIVE|  
|m_nSearchable|RICERCA|  
|m_bUnsignedAttribute|UNSIGNED_ATTRIBUTE|  
|m_bFixedPrecScale|FIXED_PREC_SCALE|  
|m_bAutoUniqueValue|AUTO_UNIQUE_VALUE|  
|m_szLocalTypeName|LOCAL_TYPE_NAME|  
|m_nMinScale|MINIMUM_SCALE|  
|m_nMaxScale|MAXIMUM_SCALE|  
|m_guidType|GUID|  
|m_szTypeLib|TYPELIB|  
|m_szVersion|VERSION|  
|m_bIsLong|IS_LONG|  
|m_bBestMatch|BEST_MATCH|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbsch. h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CRestrictions](../../data/oledb/crestrictions-class.md)