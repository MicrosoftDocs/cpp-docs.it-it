---
title: Classe CSimpleArrayEqualHelperFalse | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CSimpleArrayEqualHelperFalse
- ATLSIMPCOLL/ATL::CSimpleArrayEqualHelperFalse
- ATLSIMPCOLL/ATL::CSimpleArrayEqualHelperFalse::IsEqual
dev_langs:
- C++
helpviewer_keywords:
- CSimpleArrayEqualHelperFalse class
ms.assetid: 6918af6f-d23d-49eb-8482-c44272f5ffeb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7e22d67634f29b60bdc983c892c5fe266df61d08
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32358205"
---
# <a name="csimplearrayequalhelperfalse-class"></a>Classe CSimpleArrayEqualHelperFalse
Questa classe è un supporto per il [CSimpleArray](../../atl/reference/csimplearray-class.md) classe.  
  
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
 Questa classe di tratti è un complemento di `CSimpleArray` classe. IT sempre restituisce false e, inoltre, verranno chiamato `ATLASSERT` con un argomento di false se vi viene mai fatto riferimento. In situazioni in cui non è definito sufficientemente i test di uguaglianza, questa classe consente a una matrice contenente gli elementi per funzionare correttamente per la maggior parte dei metodi, ma non in modo ben definito per i metodi che dipendono da confronti, ad esempio [CSimpleArray:: Trovare](../../atl/reference/csimplearray-class.md#find).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlsimpcoll. h  
  
##  <a name="isequal"></a>  CSimpleArrayEqualHelperFalse::IsEqual  
 Restituisce false.  
  
```
static bool IsEqual(const T&, const T&);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce false.  
  
### <a name="remarks"></a>Note  
 Questo metodo sempre restituisce false e chiamerà `ATLASSERT` con un argomento di false se viene fatto riferimento. Lo scopo di `CSimpleArrayEqualHelperFalse::IsEqual` consiste nel forzare metodi mediante i confronti esito negativo in modo ben definito quando il test di uguaglianza non è stato definito in modo adeguato.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CSimpleArrayEqualHelper](../../atl/reference/csimplearrayequalhelper-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
