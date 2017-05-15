---
title: Classe cache_freelist | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- allocators/stdext::cache_freelist
- stdext::cache_freelist
- cache_freelist
- allocators/stdext::cache_freelist::allocate
- allocators/stdext::cache_freelist::deallocate
dev_langs:
- C++
helpviewer_keywords:
- cache_freelist class
ms.assetid: 840694de-36ba-470f-8dae-2b723d5a8cd9
caps.latest.revision: 19
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 66798adc96121837b4ac2dd238b9887d3c5b7eef
ms.openlocfilehash: 7d15c40a0116e8d6de2346a7da74045c2a7ee795
ms.contentlocale: it-it
ms.lasthandoff: 04/29/2017

---
# <a name="cachefreelist-class"></a>Classe cache_freelist
Definisce un [allocatore di blocco](../standard-library/allocators-header.md) che alloca e dealloca blocchi di memoria di un'unica dimensione.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <std::size_t Sz, class Max>  
class cache_freelist
```  
  
#### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`Sz`|Numero di elementi della matrice da allocare.|  
|`Max`|La classe max che rappresenta la dimensione massima dell'elenco di disponibilità. Può essere [max_none](../standard-library/max-fixed-size-class.md), [max_unbounded](../standard-library/max-none-class.md), [max_fixed_size](../standard-library/max-unbounded-class.md) o [max_variable_size](../standard-library/max-variable-size-class.md).|  
  
## <a name="remarks"></a>Note  
 La classe di modello cache_freelist gestisce un elenco di disponibilità dei blocchi di memoria di dimensioni `Sz`. Quando l'elenco di disponibilità è pieno usa `operator delete` per deallocare i blocchi di memoria. Quando l'elenco di disponibilità è vuoto usa `operator new` per allocare nuovi blocchi di memoria. La dimensione massima dell'elenco di disponibilità è determinata dalla classe max passata nel parametro `Max`.  
  
 Ogni blocco di memoria contiene `Sz` byte di memoria utilizzabile e i dati richiesti da `operator new` e `operator delete`.  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[cache_freelist](#cache_freelist)|Costruisce un oggetto di tipo `cache_freelist`.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[allocate](#allocate)|Alloca un blocco di memoria.|  
|[deallocate](#deallocate)|Libera un numero specificato di oggetti dall'archiviazione iniziando da una posizione specificata.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<allocators>  
  
 **Spazio dei nomi:** stdext  
  
##  <a name="allocate"></a>  cache_freelist::allocate  
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
  
##  <a name="cache_freelist"></a>  cache_freelist::cache_freelist  
 Costruisce un oggetto di tipo `cache_freelist`.  
  
```
cache_freelist();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="deallocate"></a>  cache_freelist::deallocate  
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




