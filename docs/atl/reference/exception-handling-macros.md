---
title: Macro di gestione delle eccezioni | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- atldef/ATL::_ATLCATCH
- atldef/ATL::_ATLCATCHALL
- atldef/ATL::_ATLTRY
dev_langs:
- C++
helpviewer_keywords:
- exception handling, macros
- C++ exception handling, macros
ms.assetid: a8385d34-3fb0-4006-a42a-de045cacf0f4
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 424a65c44d7bb22d1fef6e21e1892967ecd3e9b8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="exception-handling-macros"></a>Macro di gestione delle eccezioni
Queste macro forniscono supporto per la gestione delle eccezioni.  
  
|||  
|-|-|  
|[_ATLCATCH](#_atlcatch)|Le istruzioni per gestire gli errori generati nel blocco `_ATLTRY`.|  
|[_ATLCATCHALL](#_atlcatchall)|Le istruzioni per gestire gli errori generati nel blocco `_ATLTRY`.|  
|[_ATLTRY](#_atltry)|Contrassegna una sezione di codice protetto in cui potrebbe verificarsi un errore.|  
  
## <a name="requirements"></a>Requisiti:
**Intestazione:** atldef.h

##  <a name="_atlcatch"></a>_ATLCATCH  
 Le istruzioni per gestire gli errori generati nel blocco `_ATLTRY`.  
  
```
_ATLCATCH(e)
```  
  
### <a name="parameters"></a>Parametri  
 *e*  
 Eccezione da intercettare.  
  
### <a name="remarks"></a>Note  
 Usato in combinazione con `_ATLTRY`. Si risolve in C++ [catch (e CAtlException)](../../cpp/try-throw-and-catch-statements-cpp.md) per la gestione di un determinato tipo di eccezioni di C++.  
  
##  <a name="_atlcatchall"></a>_ATLCATCHALL  
 Le istruzioni per gestire gli errori generati nel blocco `_ATLTRY`.  
  
```
_ATLCATCHALL
```  
  
### <a name="remarks"></a>Note  
 Usato in combinazione con `_ATLTRY`. Si risolve in C++ [catch ](../../cpp/try-throw-and-catch-statements-cpp.md) per la gestione di tutti i tipi di eccezioni C++.  
  
##  <a name="_atltry"></a>_ATLTRY  
 Contrassegna una sezione di codice protetto in cui potrebbe verificarsi un errore.  
  
```
_ATLTRY
```  
  
### <a name="remarks"></a>Note  
 Usato in combinazione con [_ATLCATCH](#_atlcatch) o [_ATLCATCHALL](#_atlcatchall). Consente di risolvere il simbolo C++ [provare](../../cpp/try-throw-and-catch-statements-cpp.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Macro](../../atl/reference/atl-macros.md)
