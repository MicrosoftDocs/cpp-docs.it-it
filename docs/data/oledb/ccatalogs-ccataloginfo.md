---
title: CCatalogs, CCatalogInfo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CCatalogs
- m_szName
- CCatalogInfo
dev_langs: C++
helpviewer_keywords:
- DESCRIPTION class data member
- CCatalogInfo parameter class
- CCatalogs typedef class
- m_szName
- m_szDescription
ms.assetid: 8362cbbd-2f00-4272-8518-fc235c4de193
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 30ab92811c214e71534831f40e0a2fb144ed9017
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="ccatalogs-ccataloginfo"></a>CCatalogs, CCatalogInfo
Chiamare la classe typedef **CCatalogs** per implementare la relativa classe di parametro **CCatalogInfo**.  
  
## <a name="remarks"></a>Note  
 Vedere [classi Rowset dello Schema e classi Typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) per ulteriori informazioni sull'utilizzo delle classi typedef.  
  
 Questa classe identifica gli attributi fisici associati a cataloghi accessibili dal DBMS.  
  
 Nella tabella seguente sono elencati i membri dati della classe e le corrispondenti colonne BD OLE. Vedere [cataloghi Rowset](https://msdn.microsoft.com/en-us/library/ms721241.aspx) nel *riferimento per programmatori OLE DB* per ulteriori informazioni sullo schema e le colonne.  
  
|Membri dati|Colonne OLE DB|  
|------------------|--------------------|  
|m_szName|CATALOG_NAME|  
|m_szDescription|DESCRIZIONE|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbsch. h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CRestrictions](../../data/oledb/crestrictions-class.md)