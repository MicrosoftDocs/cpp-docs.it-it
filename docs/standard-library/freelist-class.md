---
title: Classe freelist | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- allocators/stdext::freelist
- allocators/stdext::freelist::pop
- allocators/stdext::freelist::push
dev_langs:
- C++
helpviewer_keywords:
- stdext::freelist
- stdext::freelist [C++], pop
- stdext::freelist [C++], push
ms.assetid: 8ad7e35c-4c80-4479-8ede-1a2497b06d71
caps.latest.revision: 17
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 65f4e356ad0d46333b0d443d0fd6ac0b9f2b6f58
ms.openlocfilehash: 7e4e636045d91cfaa4bc9532344cf73e68cec911
ms.contentlocale: it-it
ms.lasthandoff: 10/03/2017

---
# <a name="freelist-class"></a>Classe freelist
Gestisce un elenco di blocchi di memoria.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <std::size_t Sz, class Max>  
class freelist
 : public Max
```  
  
#### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`Sz`|Numero di elementi della matrice da allocare.|  
|`Max`|Classe max che rappresenta il numero massimo di elementi da archiviare nell'elenco di disponibilità. La classe max può essere [max_none](../standard-library/max-none-class.md), [max_unbounded](../standard-library/max-unbounded-class.md), [max_fixed_size](../standard-library/max-fixed-size-class.md) o [max_variable_size](../standard-library/max-variable-size-class.md).|  
  
## <a name="remarks"></a>Note  
 Questa classe modello gestisce un elenco di blocchi di memoria di dimensione `Sz` in cui la lunghezza massima dell'elenco è determinata dalla classe max passata in `Max`.  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[freelist](#freelist)|Costruisce un oggetto di tipo `freelist`.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[pop](#pop)|Rimuove il primo blocco di memoria dall'elenco di disponibilità.|  
|[push](#push)|Aggiunge un blocco di memoria all'elenco.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<allocators>  
  
 **Spazio dei nomi:** stdext  
  
##  <a name="freelist"></a>  freelist::freelist  
 Costruisce un oggetto di tipo `freelist`.  
  
```
freelist();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="pop"></a>  freelist::pop  
 Rimuove il primo blocco di memoria dall'elenco di disponibilità.  
  
```
void *pop();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore al blocco di memoria rimosso dall'elenco.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce `NULL` se l'elenco è vuoto. In caso contrario, rimuove il primo blocco di memoria dall'elenco.  
  
##  <a name="push"></a>  freelist::push  
 Aggiunge un blocco di memoria all'elenco.  
  
```
bool push(void* ptr);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`ptr`|Puntatore al blocco di memoria da aggiungere all'elenco di disponibilità.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se la funzione `full` della classe max restituisce `false`; in caso contrario, la funzione `push` restituisce `false`.  
  
### <a name="remarks"></a>Note  
 Se la funzione `full` della classe max restituisce `false`, questa funzione membro aggiunge all'inizio dell'elenco il blocco di memoria a cui punta `ptr`.  
  
## <a name="see-also"></a>Vedere anche  
 [\<allocators>](../standard-library/allocators-header.md)




