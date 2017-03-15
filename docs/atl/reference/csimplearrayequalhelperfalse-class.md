---
title: Classe CSimpleArrayEqualHelperFalse | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL.CSimpleArrayEqualHelperFalse<T>
- ATL::CSimpleArrayEqualHelperFalse
- ATL.CSimpleArrayEqualHelperFalse
- ATL::CSimpleArrayEqualHelperFalse<T>
- CSimpleArrayEqualHelperFalse
dev_langs:
- C++
helpviewer_keywords:
- CSimpleArrayEqualHelperFalse class
ms.assetid: 6918af6f-d23d-49eb-8482-c44272f5ffeb
caps.latest.revision: 19
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
ms.openlocfilehash: cd5ed7058194880ef1ceaebe788e3deb60d4ac8e
ms.lasthandoff: 02/24/2017

---
# <a name="csimplearrayequalhelperfalse-class"></a>Classe CSimpleArrayEqualHelperFalse
Questa classe è un supporto per il [CSimpleArray](../../atl/reference/csimplearray-class.md) (classe).  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T>  
class CSimpleArrayEqualHelperFalse
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Una classe derivata.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSimpleArrayEqualHelperFalse::IsEqual](#isequal)|(Statico) Restituisce false.|  
  
## <a name="remarks"></a>Note  
 Questa classe di tratti è un complemento di `CSimpleArray` (classe). IT sempre restituisce false, inoltre, chiamerà `ATLASSERT` con un argomento di false se vi è mai fatto riferimento. In situazioni in cui non è definito sufficientemente i test di uguaglianza, questa classe consente a una matrice contenente gli elementi per funzionare correttamente per la maggior parte dei metodi ma funziona in modo ben definito per i metodi che dipendono da confronti, ad esempio [CSimpleArray::Find](../../atl/reference/csimplearray-class.md#find).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlsimpcoll. h  
  
##  <a name="a-nameisequala--csimplearrayequalhelperfalseisequal"></a><a name="isequal"></a>CSimpleArrayEqualHelperFalse::IsEqual  
 Restituisce false.  
  
```
static bool IsEqual(const T&, const T&);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce false.  
  
### <a name="remarks"></a>Note  
 Questo metodo sempre restituisce false e chiamerà `ATLASSERT` con un argomento di false se a cui fa riferimento. Lo scopo di `CSimpleArrayEqualHelperFalse::IsEqual` consiste nel forzare metodi utilizzano confronti per avere esito negativo in modo ben definito quando il test di uguaglianza non è stato definito in modo adeguato.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CSimpleArrayEqualHelper](../../atl/reference/csimplearrayequalhelper-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

