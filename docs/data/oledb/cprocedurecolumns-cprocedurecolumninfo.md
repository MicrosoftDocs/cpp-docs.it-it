---
title: CProcedureColumns, CProcedureColumnInfo | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- m_guidType
- CProcedureColumnInfo
- IS_NULLABLE
- m_szCatalog
- m_nRowsetNumber
- m_nColumnPropID
- ORDINAL_POSITION
- m_nOrdinalPosition
- COLUMN_GUID
- m_szColumnName
- NUMERIC_PRECISION
- m_nDataType
- m_szSchema
- CHARACTER_OCTET_LENGTH
- NUMERIC_SCALE
- COLUMN_PROPID
- m_guidColumn
- m_nMaxLength
- CHARACTER_MAXIMUM_LENGTH
- m_nPrecision
- m_szName
- CProcedureColumns
- DATA_TYPE
- m_nOctetLength
- m_bIsNullable
- m_nScale
dev_langs:
- C++
helpviewer_keywords:
- NUMERIC_PRECISION
- COLUMN_PROPID
- DATA_TYPE
- ORDINAL_POSITION
- m_nMaxLength
- DESCRIPTION class data member
- m_guidType
- m_szSchema
- CHARACTER_OCTET_LENGTH
- m_szCatalog
- CProcedureColumns typedef class
- m_nPrecision
- m_nOrdinalPosition
- m_nColumnPropID
- NUMERIC_SCALE
- m_nRowsetNumber
- m_szColumnName
- COLUMN_NAME
- m_nOctetLength
- IS_NULLABLE
- m_szName
- m_bIsNullable
- m_szDescription
- m_nDataType
- m_nScale
- COLUMN_GUID
- CHARACTER_MAXIMUM_LENGTH
- m_guidColumn
- CProcedureColumnInfo parameter class
ms.assetid: c82626c4-8047-4b9c-b342-e35bf37b7611
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 10ef42723ed19e12e2d15602cdca7f30121de55d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33097991"
---
# <a name="cprocedurecolumns-cprocedurecolumninfo"></a>CProcedureColumns, CProcedureColumnInfo
Chiamare la classe typedef **CProcedureColumns** per implementare la relativa classe di parametro **CProcedureColumnInfo**.  
  
## <a name="remarks"></a>Note  
 Vedere [classi Rowset dello Schema e classi Typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) per ulteriori informazioni sull'utilizzo delle classi typedef.  
  
 Questa classe restituisce informazioni sulle colonne di set di righe restituiti dalle stored procedure.  
  
 Nella tabella seguente sono elencati i membri dati della classe e le corrispondenti colonne BD OLE. Vedere [set di righe PROCEDURE_COLUMNS](https://msdn.microsoft.com/en-us/library/ms723092.aspx) nel *riferimento per programmatori OLE DB* per ulteriori informazioni sullo schema e le colonne.  
  
|Membri dati|Colonne OLE DB|  
|------------------|--------------------|  
|m_szCatalog|PROCEDURE_CATALOG|  
|m_szSchema|PROCEDURE_SCHEMA|  
|m_szName|PROCEDURE_NAME|  
|m_szColumnName|COLUMN_NAME|  
|m_guidColumn|COLUMN_GUID|  
|m_nColumnPropID|COLUMN_PROPID|  
|m_nRowsetNumber|ROWSET_NUMBER|  
|m_nOrdinalPosition|ORDINAL_POSITION|  
|m_bIsNullable|IS_NULLABLE|  
|m_nDataType|DATA_TYPE|  
|m_guidType|TYPE_GUID|  
|m_nMaxLength|CHARACTER_MAXIMUM_LENGTH|  
|m_nOctetLength|CHARACTER_OCTET_LENGTH|  
|m_nPrecision|NUMERIC_PRECISION|  
|m_nScale|NUMERIC_SCALE|  
|m_szDescription|DESCRIPTION|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbsch. h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CRestrictions](../../data/oledb/crestrictions-class.md)