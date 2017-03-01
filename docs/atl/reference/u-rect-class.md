---
title: Classe _U_RECT | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL::_U_RECT
- _U_RECT
- ATL._U_RECT
dev_langs:
- C++
helpviewer_keywords:
- U_RECT class
- _U_RECT class
ms.assetid: 5f880a2d-09cf-4327-bf32-a3519c4dcd63
caps.latest.revision: 20
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: 5a375921fd51b19eb2e9020d3175a56df8549461
ms.lasthandoff: 02/24/2017

---
# <a name="urect-class"></a>Classe _U_RECT
Questa classe di adattatori di argomento consente `RECT` puntatori o riferimenti deve essere passato a una funzione che viene implementata in termini di puntatori.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
class _U_RECT```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[_U_RECT::_U_RECT](#_u_rect___u_rect)|The constructor.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[_U_RECT::m_lpRect](#_u_rect__m_lprect)|Pointer to a `RECT`.|  
  
## Remarks  
 The class defines two constructor overloads: one accepts a **RECT&** argument and the other accepts an `LPRECT` argument. The first constructor stores the address of the reference argument in the class's single data member, [m_lpRect](#_u_rect__m_lprect). The argument to the pointer constructor is stored directly without conversion.  
  
## Requirements  
 **Header:** atlwin.h  
  
##  <a name="_u_rect__m_lprect"></a>  _U_RECT::m_lpRect  
 The class holds the value passed to either of its constructors as a public `LPRECT` data member.  
  
```
LPRECT m_lpRect;
```  
  
##  <a name="_u_rect___u_rect"></a>  _U_RECT::_U_RECT  
 The address of the reference argument is stored in the class's single data member, [m_lpRect](#_u_rect__m_lprect).  
  
```
_U_RECT (RECT / rc);  
_U_RECT (LPRECT lpRect);
```  
  
### Parameters  
 `rc`  
 A `RECT` reference.  
  
 `lpRect`  
 A `RECT` pointer.  
  
### Remarks  
 The argument to the pointer constructor is stored directly without conversion.  
  
## See Also  
 [Class Overview](../../atl/atl-class-overview.md)

