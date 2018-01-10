---
title: CProcedures, CProcedureInfo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CProcedures
- m_szCatalog
- CProcedureInfo
- m_szSchema
- m_szDefinition
- m_szName
- m_nType
dev_langs: C++
helpviewer_keywords:
- DESCRIPTION class data member
- m_szSchema
- m_nType
- m_szCatalog
- CProcedureInfo parameter class
- m_szName
- m_szDescription
- m_szDefinition
- CProcedures typedef class
ms.assetid: d0c7375e-ee0c-441d-aae6-6108150860a0
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 66cf60f5697c9fea951dd167256cab83e71ce003
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cprocedures-cprocedureinfo"></a>CProcedures, CProcedureInfo
Chiamare la classe typedef **CProcedures** per implementare la relativa classe di parametro **CProcedureInfo**.  
  
## <a name="remarks"></a>Note  
 Vedere [classi Rowset dello Schema e classi Typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) per ulteriori informazioni sull'utilizzo delle classi typedef.  
  
 Questa classe sono incluse le procedure definite nel catalogo, che appartengono a un determinato utente.  
  
 Nella tabella seguente sono elencati i membri dati della classe e le corrispondenti colonne BD OLE. Vedere [procedure Rowset](https://msdn.microsoft.com/en-us/library/ms724021.aspx) nel *riferimento per programmatori OLE DB* per ulteriori informazioni sullo schema e le colonne.  
  
|Membri dati|Colonne OLE DB|  
|------------------|--------------------|  
|m_szCatalog|PROCEDURE_CATALOG|  
|m_szSchema|PROCEDURE_SCHEMA|  
|m_szName|PROCEDURE_NAME|  
|m_nType|PROCEDURE_TYPE|  
|m_szDefinition|PROCEDURE_DEFINITION|  
|m_szDescription|DESCRIPTION|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbsch. h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CRestrictions](../../data/oledb/crestrictions-class.md)