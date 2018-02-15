---
title: 'CEnumerator:: Find | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CEnumerator::Find
- ATL::CEnumerator::Find
- ATL.CEnumerator.Find
- CEnumerator.Find
dev_langs:
- C++
helpviewer_keywords:
- Find method
ms.assetid: 69a153af-d6c3-40fd-9018-27c7d2f344c6
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 863832f41c866764883336c7de76fa343eb1cbac
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="cenumeratorfind"></a>CEnumerator::Find
Cerca un nome specificato tra i provider disponibili.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
      bool Find(TCHAR* szSearchName) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 *szSearchName*  
 [in] Il nome per la ricerca.  
  
## <a name="return-value"></a>Valore restituito  
 **true** se il nome è stato trovato. in caso contrario, **false**.  
  
## <a name="remarks"></a>Note  
 Esegue il mapping a questo nome di **SOURCES_NAME** appartenente il [ISourcesRowset](https://msdn.microsoft.com/en-us/library/ms715969.aspx) interfaccia.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CEnumerator](../../data/oledb/cenumerator-class.md)