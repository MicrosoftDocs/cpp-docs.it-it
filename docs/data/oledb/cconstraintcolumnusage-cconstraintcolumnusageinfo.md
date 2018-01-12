---
title: CConstraintColumnUsage, CConstraintColumnUsageInfo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- m_szTableSchema
- m_szConstraintCatalog
- CConstraintColumnUsage
- m_nColumnPropID
- COLUMN_GUID
- CONSTRAINT_NAME
- m_szColumnName
- m_szTableCatalog
- m_szConstraintSchema
- COLUMN_PROPID
- m_guidColumn
- CONSTRAINT_COLUMN_USAGE
- m_szTableName
- CONSTRAINT_CATALOG
- CONSTRAINT_SCHEMA
- CConstraintColumnUsageInfo
- m_szConstraintName
dev_langs: C++
helpviewer_keywords:
- COLUMN_PROPID
- m_szConstraintCatalog
- CONSTRAINT_COLUMN_USAGE
- CONSTRAINT_CATALOG
- CConstraintColumnUsageInfo parameter class
- m_szTableSchema
- TABLE_CATALOG
- TABLE_NAME
- CONSTRAINT_NAME
- CConstraintColumnUsage typedef class
- m_nColumnPropID
- CONSTRAINT_SCHEMA
- TABLE_SCHEMA
- m_szColumnName
- COLUMN_NAME
- m_szTableCatalog
- m_szConstraintName
- m_szTableName
- m_szConstraintSchema
- COLUMN_GUID
- m_guidColumn
ms.assetid: 7d4d94e8-2025-4fcc-a176-c9b231eca77b
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: d73239fbd3cab69d722f9d3c9546295685a6bd81
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cconstraintcolumnusage-cconstraintcolumnusageinfo"></a>CConstraintColumnUsage, CConstraintColumnUsageInfo
Chiamare la classe typedef **CConstraintColumnUsage** per implementare la relativa classe di parametro **CConstraintColumnUsageInfo**.  
  
## <a name="remarks"></a>Note  
 Vedere [classi Rowset dello Schema e classi Typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) per ulteriori informazioni sull'utilizzo delle classi typedef.  
  
 Questa classe identifica le colonne utilizzate da vincoli referenziali, vincoli unique, vincoli check e le asserzioni definite nel catalogo e appartenenti a un determinato utente.  
  
 Nella tabella seguente sono elencati i membri dati della classe e le corrispondenti colonne BD OLE. Vedere [set di righe CONSTRAINT_COLUMN_USAGE](https://msdn.microsoft.com/en-us/library/ms724522.aspx) nel *riferimento per programmatori OLE DB* per ulteriori informazioni sullo schema e le colonne.  
  
|Membri dati|Colonne OLE DB|  
|------------------|--------------------|  
|m_szTableCatalog|TABLE_CATALOG|  
|m_szTableSchema|TABLE_SCHEMA|  
|m_szTableName|TABLE_NAME|  
|m_szColumnName|COLUMN_NAME|  
|m_guidColumn|COLUMN_GUID|  
|m_nColumnPropID|COLUMN_PROPID|  
|m_szConstraintCatalog|CONSTRAINT_CATALOG|  
|m_szConstraintSchema|CONSTRAINT_SCHEMA|  
|m_szConstraintName|CONSTRAINT_NAME|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbsch. h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CRestrictions](../../data/oledb/crestrictions-class.md)