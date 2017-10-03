---
title: Classe cache_suballoc | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- allocators/stdext::cache_suballoc
- allocators/stdext::cache_suballoc::allocate
- allocators/stdext::cache_suballoc::deallocate
dev_langs:
- C++
helpviewer_keywords:
- stdext::cache_suballoc
- stdext::cache_suballoc [C++], allocate
- stdext::cache_suballoc [C++], deallocate
ms.assetid: 9ea9c5e9-1dcc-45d0-b3a7-a56a93d88898
caps.latest.revision: 17
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
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
ms.translationtype: MT
ms.sourcegitcommit: 65f4e356ad0d46333b0d443d0fd6ac0b9f2b6f58
ms.openlocfilehash: ab861704bfb44546a3dcb5a4a3b2f4210dbe8774
ms.contentlocale: it-it
ms.lasthandoff: 10/03/2017

---
# <a name="cachesuballoc-class"></a>Classe cache_suballoc
Definisce un [allocatore di blocco](../standard-library/allocators-header.md) che alloca e dealloca blocchi di memoria di un'unica dimensione.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <std::size_t Sz, size_t Nelts = 20>  
class cache_suballoc
```  
  
#### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`Sz`|Numero di elementi della matrice da allocare.|  
  
## <a name="remarks"></a>Note  
 La classe di modello cache_suballoc archivia blocchi di memoria deallocati in un elenco di disponibilità con lunghezza non vincolata, usando `freelist<sizeof(Type), max_unbounded>`, e sottoalloca blocchi di memoria da una porzione più grande allocata con `operator new` quando l'elenco di disponibilità è vuoto.  
  
 Ogni porzione contiene `Sz * Nelts` byte di memoria utilizzabile e i dati richiesti da `operator new` e `operator delete`. Le porzioni allocate non vengono mai liberate.  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[cache_suballoc](#cache_suballoc)|Costruisce un oggetto di tipo `cache_suballoc`.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[allocate](#allocate)|Alloca un blocco di memoria.|  
|[deallocate](#deallocate)|Libera un numero specificato di oggetti dall'archiviazione iniziando da una posizione specificata.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<allocators>  
  
 **Spazio dei nomi:** stdext  
  
##  <a name="allocate"></a>  cache_suballoc::allocate  
 Alloca un blocco di memoria.  
  
```
void *allocate(std::size_t count);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`count`|Numero di elementi della matrice da allocare.|  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore all'oggetto allocato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="cache_suballoc"></a>  cache_suballoc::cache_suballoc  
 Costruisce un oggetto di tipo `cache_suballoc`.  
  
```
cache_suballoc();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="deallocate"></a>  cache_suballoc::deallocate  
 Libera un numero specificato di oggetti dall'archiviazione iniziando da una posizione specificata.  
  
```
void deallocate(void* ptr, std::size_t count);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`ptr`|Puntatore al primo oggetto da deallocare dall'archivio.|  
|`count`|Numero di oggetti da deallocare dall'archivio.|  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [\<allocators>](../standard-library/allocators-header.md)




