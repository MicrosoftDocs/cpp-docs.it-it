---
title: Classe CSimpleArrayEqualHelper | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CSimpleArrayEqualHelper
- ATLSIMPCOLL/ATL::CSimpleArrayEqualHelper
- ATLSIMPCOLL/ATL::CSimpleArrayEqualHelper::IsEqual
dev_langs:
- C++
helpviewer_keywords:
- CSimpleArrayEqualHelper class
ms.assetid: a2b55d89-78c9-42ef-842c-5304c6d20ad6
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 5a0c6a1062330f952bb8fa52bc934f6754465513
ms.openlocfilehash: 4a87879683257c66de5fe4e720dd29fa4c47031d
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="csimplearrayequalhelper-class"></a>Classe CSimpleArrayEqualHelper
Questa classe è un supporto per il [CSimpleArray](../../atl/reference/csimplearray-class.md) (classe).  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T>  
class CSimpleArrayEqualHelper
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Una classe derivata.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSimpleArrayEqualHelper::IsEqual](#isequal)|(Statico) Verifica due `CSimpleArray` elementi per stabilirne l'uguaglianza dell'oggetto.|  
  
## <a name="remarks"></a>Note  
 Questa classe di tratti è sostituisca la `CSimpleArray` classe. Fornisce un metodo per il confronto di due elementi archiviati in un `CSimpleArray` oggetto. Per impostazione predefinita, gli elementi vengono confrontati mediante **operator=()**, tuttavia, se la matrice contiene i tipi di dati complessi che non dispongono di propri operatore di uguaglianza, è necessario eseguire l'override di questa classe.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlsimpcoll. h  
  
##  <a name="isequal"></a>CSimpleArrayEqualHelper::IsEqual  
 Verifica due `CSimpleArray` elementi per stabilirne l'uguaglianza dell'oggetto.  
  
```
static bool IsEqual(
    const T& t1,
    const T& t2);
```  
  
### <a name="parameters"></a>Parametri  
 *T1*  
 Un oggetto di tipo T.  
  
 *T2*  
 Un oggetto di tipo T.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se gli elementi sono uguali, false in caso contrario.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CSimpleArray](../../atl/reference/csimplearray-class.md)   
 [Classe CSimpleArrayEqualHelperFalse](../../atl/reference/csimplearrayequalhelperfalse-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

