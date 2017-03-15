---
title: Classe CDefaultHashTraits | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CDefaultHashTraits
- ATL.CDefaultHashTraits<T>
- ATL::CDefaultHashTraits<T>
- ATL.CDefaultHashTraits
- ATL::CDefaultHashTraits
dev_langs:
- C++
helpviewer_keywords:
- CDefaultHashTraits class
ms.assetid: d8ec4b37-6d58-447b-a0c1-8580c5b1ab85
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
ms.sourcegitcommit: 5a0c6a1062330f952bb8fa52bc934f6754465513
ms.openlocfilehash: 5191327e5e60935829750c7d1e04ba89fcddc771
ms.lasthandoff: 02/24/2017

---
# <a name="cdefaulthashtraits-class"></a>Classe CDefaultHashTraits
Questa classe fornisce una funzione statica per il calcolo dei valori hash.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<typename T>  
class CDefaultHashTraits
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo di dati da archiviare nella raccolta.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDefaultHashTraits::Hash](#hash)|(Statico) Chiamare questa funzione per calcolare un valore hash per un determinato elemento.|  
  
## <a name="remarks"></a>Note  
 Questa classe contiene una singola funzione statica che restituisce un valore hash per un determinato elemento. Questa classe viene utilizzata per la [CDefaultElementTraits classe](../../atl/reference/cdefaultelementtraits-class.md).  
  
 Per ulteriori informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcoll. h  
  
##  <a name="a-namehasha--cdefaulthashtraitshash"></a><a name="hash"></a>CDefaultHashTraits::Hash  
 Chiamare questa funzione per calcolare un valore hash per un determinato elemento.  
  
```
static ULONG Hash(const T& element) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `element`  
 Elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore hash.  
  
### <a name="remarks"></a>Note  
 L'algoritmo hash predefinito è molto semplice: il valore restituito è il numero di elementi. Eseguire l'override di questa funzione se è necessario un algoritmo più complesso.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

