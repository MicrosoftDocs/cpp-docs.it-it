---
title: Classe cache_chunklist | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- allocators/stdext::cache_chunklist
- allocators/stdext::cache_chunklist::allocate
- allocators/stdext::cache_chunklist::deallocate
dev_langs: C++
helpviewer_keywords:
- stdext::cache_chunklist
- stdext::cache_chunklist [C++], allocate
- stdext::cache_chunklist [C++], deallocate
ms.assetid: af19eccc-4ae7-4a34-bbb2-81e397424cb9
caps.latest.revision: "17"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 13d81e3eab6e93a138ac55ca53cbf8e61f195507
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cachechunklist-class"></a>Classe cache_chunklist
Definisce un [allocatore di blocco](../standard-library/allocators-header.md) che alloca e dealloca blocchi di memoria di un'unica dimensione.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <std::size_t Sz, std::size_t Nelts = 20>  
class cache_chunklist
```  
  
#### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`Sz`|Numero di elementi della matrice da allocare.|  
  
## <a name="remarks"></a>Note  
 Questa classe modello usa `operator new` per allocare porzioni di memoria non elaborata, con sottoallocazione dei blocchi per allocare memoria per un blocco di memoria quando necessario; archivia i blocchi di memoria deallocati in un elenco di disponibilità separato per ogni porzione e usa `operator delete` per deallocare una porzione quando nessuno dei relativi blocchi di memoria è in uso.  
  
 Ogni blocco di memoria contiene `Sz` byte di memoria utilizzabile e un puntatore alla porzione a cui appartiene. Ogni porzione contiene `Nelts` blocchi di memoria, tre puntatori, un int e i dati richiesti da `operator new` e `operator delete`.  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[cache_chunklist](#cache_chunklist)|Costruisce un oggetto di tipo `cache_chunklist`.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[allocate](#allocate)|Alloca un blocco di memoria.|  
|[deallocate](#deallocate)|Libera un numero specificato di oggetti dall'archiviazione iniziando da una posizione specificata.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<allocators>  
  
 **Spazio dei nomi:** stdext  
  
##  <a name="allocate"></a>  cache_chunklist::allocate  
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
  
##  <a name="cache_chunklist"></a>  cache_chunklist::cache_chunklist  
 Costruisce un oggetto di tipo `cache_chunklist`.  
  
```
cache_chunklist();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="deallocate"></a>  cache_chunklist::deallocate  
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



