---
title: CConstraintTableUsage, CConstraintTableUsageInfo | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CConstraintTableUsageInfo
- CONSTRAINT_TABLE_USAGE
- m_szTableSchema
- m_szConstraintCatalog
- CONSTRAINT_NAME
- m_szTableCatalog
- m_szConstraintSchema
- m_szTableName
- CONSTRAINT_CATALOG
- CONSTRAINT_SCHEMA
- CConstraintTableUsage
- m_szConstraintName
dev_langs:
- C++
helpviewer_keywords:
- CConstraintTableUsage typedef class
- m_szConstraintCatalog
- CONSTRAINT_CATALOG
- m_szTableSchema
- CConstraintTableUsageInfo parameter class
- TABLE_CATALOG
- CONSTRAINT_TABLE_USAGE
- TABLE_NAME
- CONSTRAINT_NAME
- CONSTRAINT_SCHEMA
- TABLE_SCHEMA
- m_szTableCatalog
- m_szConstraintName
- m_szTableName
- m_szConstraintSchema
ms.assetid: 666b44de-3922-4c5e-ad17-d5ea27120174
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 7662cc111101d63729b5cb37512988edd61ead14
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33095154"
---
# <a name="cconstrainttableusage-cconstrainttableusageinfo"></a>CConstraintTableUsage, CConstraintTableUsageInfo
Chiamare la classe typedef **CConstraintTableUsage** per implementare la relativa classe di parametro **CConstraintTableUsageInfo**.  
  
## <a name="remarks"></a>Note  
 Vedere [classi Rowset dello Schema e classi Typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) per ulteriori informazioni sull'utilizzo delle classi typedef.  
  
 Questa classe identifica le tabelle utilizzate da vincoli referenziali, vincoli unique, vincoli check e le asserzioni definite nel catalogo e appartenenti a un determinato utente.  
  
 Nella tabella seguente sono elencati i membri dati della classe e le corrispondenti colonne BD OLE. Vedere [set di righe CONSTRAINT_TABLE_USAGE](https://msdn.microsoft.com/en-us/library/ms724522.aspx) nel *riferimento per programmatori OLE DB* per ulteriori informazioni sullo schema e le colonne.  
  
|Membri dati|Colonne OLE DB|  
|------------------|--------------------|  
|m_szTableCatalog|TABLE_CATALOG|  
|m_szTableSchema|TABLE_SCHEMA|  
|m_szTableName|TABLE_NAME|  
|m_szConstraintCatalog|CONSTRAINT_CATALOG|  
|m_szConstraintSchema|CONSTRAINT_SCHEMA|  
|m_szConstraintName|CONSTRAINT_NAME|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbsch. h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CRestrictions](../../data/oledb/crestrictions-class.md)