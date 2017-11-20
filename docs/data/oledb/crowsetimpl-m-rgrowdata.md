---
title: 'CRowsetImpl:: M_rgrowdata | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CRowsetImpl.m_rgRowData
- CRowsetImpl::m_rgRowData
dev_langs: C++
helpviewer_keywords: m_rgRowData
ms.assetid: e4e75ca7-12e8-4a0b-94e8-e395c21385b2
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: cb6c4c3a993e439eeae4abf8ec4830ea1fb47372
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="crowsetimplmrgrowdata"></a>CRowsetImpl::m_rgRowData
Per impostazione predefinita, un `CAtlArray` che templatizes per l'argomento di modello di record utente per `CRowsetImpl`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
ArrayType CRowsetBaseImpl::m_rgRowData;  
  
```  
  
## <a name="remarks"></a>Note  
 **ArrayType** è un parametro di modello `CRowsetImpl`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CRowsetImpl](../../data/oledb/crowsetimpl-class.md)   
 [CRowsetImpl:: M_strcommandtext](../../data/oledb/crowsetimpl-m-strcommandtext.md)   
 [CRowsetImpl::m_strIndexText](../../data/oledb/crowsetimpl-m-strindextext.md)