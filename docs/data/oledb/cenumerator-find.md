---
title: 'CEnumerator:: Find | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 2466127dab53fa6646a4f149400e4318aed59970
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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