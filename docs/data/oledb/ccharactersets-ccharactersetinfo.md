---
title: CCharacterSets, CCharacterSetInfo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- m_szCollateName
- m_szCatalog
- DEFAULT_COLLATE_NAME
- m_szCollateSchema
- FORM_OF_USE
- DEFAULT_COLLATE_SCHEMA
- m_szCollateCatalog
- CCharacterSets
- CHARACTER_SET_NAME
- DEFAULT_COLLATE_CATALOG
- CHARACTER_SET_SCHEMA
- m_szFormOfUse
- NUMBER_OF_CHARACTERS
- m_szSchema
- CHARACTER_SET_CATALOG
- CCharacterSetInfo
- m_nNumCharacters
- m_szName
dev_langs:
- C++
helpviewer_keywords:
- DEFAULT_COLLATE_SCHEMA
- m_nNumCharacters
- m_szSchema
- NUMBER_OF_CHARACTERS
- m_szCollateCatalog
- CCharacterSetInfo parameter class
- m_szCatalog
- CCharacterSets typedef class
- m_szCollateName
- m_szName
- m_szCollateSchema
- FORM_OF_USE OLE DB column
- CHARACTER_SET_NAME
- DEFAULT_COLLATE_CATALOG
- DEFAULT_COLLATE_NAME
- m_szFormOfUse
- CHARACTER_SET_SCHEMA
- CHARACTER_SET_CATALOG
ms.assetid: 029d068c-8bb2-4fc0-8709-78ce7f74446e
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 532e988be4a76784a2b81e8b96c302dfb9d7e98c
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="ccharactersets-ccharactersetinfo"></a>CCharacterSets, CCharacterSetInfo
Chiamare la classe typedef **CCharacterSets** per implementare la relativa classe di parametro **CCharacterSetInfo**.  
  
## <a name="remarks"></a>Note  
 Vedere [classi Rowset dello Schema e classi Typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) per ulteriori informazioni sull'utilizzo delle classi typedef.  
  
 Questa classe identifica i set di caratteri definiti nel catalogo a cui un determinato utente può accedere.  
  
 Nella tabella seguente sono elencati i membri dati della classe e le corrispondenti colonne BD OLE. Vedere [Rowset CHARACTER_SETS](https://msdn.microsoft.com/en-us/library/ms722638.aspx) nel *riferimento per programmatori OLE DB* per ulteriori informazioni sullo schema e le colonne.  
  
|Membri dati|Colonne OLE DB|  
|------------------|--------------------|  
|m_szCatalog|CHARACTER_SET_CATALOG|  
|m_szSchema|CHARACTER_SET_SCHEMA|  
|m_szName|CHARACTER_SET_NAME|  
|m_szFormOfUse|FORM_OF_USE|  
|m_nNumCharacters|NUMBER_OF_CHARACTERS|  
|m_szCollateCatalog|DEFAULT_COLLATE_CATALOG|  
|m_szCollateSchema|DEFAULT_COLLATE_SCHEMA|  
|m_szCollateName|DEFAULT_COLLATE_NAME|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbsch. h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CRestrictions](../../data/oledb/crestrictions-class.md)