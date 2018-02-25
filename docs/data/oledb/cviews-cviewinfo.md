---
title: CViews, CViewInfo | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- m_szTableSchema
- m_bCheckOption
- CViews
- CHECK_OPTION
- CViewInfo
- m_szTableCatalog
- IS_UPDATABLE
- m_szDefinition
- m_szTableName
- m_bIsUpdatable
dev_langs:
- C++
helpviewer_keywords:
- DESCRIPTION class data member
- CHECK_OPTION
- m_szTableSchema
- TABLE_CATALOG
- TABLE_NAME
- m_bCheckOption
- TABLE_SCHEMA
- m_szTableCatalog
- m_szDescription
- m_szDefinition
- m_szTableName
- CViewInfo parameter class
- m_bIsUpdatable
- IS_UPDATABLE
- CViews typedef class
ms.assetid: ad864181-4fab-4919-b0fd-45df5da230d9
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: af8afa49f2290c179afab00330df480ce3a787c9
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="cviews-cviewinfo"></a>CViews, CViewInfo
Chiamare la classe typedef **CViews** per implementare la relativa classe di parametro **CViewInfo**.  
  
## <a name="remarks"></a>Note  
 Vedere [classi Rowset dello Schema e classi Typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) per ulteriori informazioni sull'utilizzo delle classi typedef.  
  
 Questa classe identifica le tabelle su cui visualizzare tabelle, definite nel catalogo e appartenenti a un determinato utente sono dipendenti.  
  
 Nella tabella seguente sono elencati i membri dati della classe e le corrispondenti colonne BD OLE. Vedere [viste Rowset](https://msdn.microsoft.com/en-us/library/ms723122.aspx) nel *riferimento per programmatori OLE DB* per ulteriori informazioni sullo schema e le colonne.  
  
|Membri dati|Colonne OLE DB|  
|------------------|--------------------|  
|m_szTableCatalog|TABLE_CATALOG|  
|m_szTableSchema|TABLE_SCHEMA|  
|m_szTableName|TABLE_NAME|  
|m_szDefinition|VIEW_DEFINITION|  
|m_bCheckOption|CHECK_OPTION|  
|m_bIsUpdatable|IS_UPDATABLE|  
|m_szDescription|DESCRIPTION|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbsch. h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CRestrictions](../../data/oledb/crestrictions-class.md)