---
title: Classe max_fixed_size | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- allocators/stdext::max_fixed_size
- max_fixed_size
- stdext::max_fixed_size
- allocators/stdext::max_fixed_size::allocated
- allocators/stdext::max_fixed_size::deallocated
- allocators/stdext::max_fixed_size::full
- allocators/stdext::max_fixed_size::released
- allocators/stdext::max_fixed_size::saved
dev_langs:
- C++
helpviewer_keywords:
- max_fixed_size class
ms.assetid: 8c8f4588-37e9-4579-8168-ba3553800914
caps.latest.revision: 18
author: corob-msft
ms.author: corob
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
ms.sourcegitcommit: 66798adc96121837b4ac2dd238b9887d3c5b7eef
ms.openlocfilehash: b819bce3ce817983f8318aa0490884d7bd6e1cad
ms.contentlocale: it-it
ms.lasthandoff: 04/29/2017

---
# <a name="maxfixedsize-class"></a>Classe max_fixed_size
Descrive un oggetto [classe max](../standard-library/allocators-header.md) che limita un oggetto [freelist](../standard-library/freelist-class.md) a una lunghezza massima fissa.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <std::size_t Max>  
class max_fixed_size
```  
  
#### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`Max`|Classe max che determina il numero massimo di elementi da archiviare nell'oggetto `freelist`.|  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[max_fixed_size](#max_fixed_size)|Costruisce un oggetto di tipo `max_fixed_size`.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[allocated](#allocated)|Incrementa il conteggio dei blocchi di memoria allocati.|  
|[deallocated](#deallocated)|Decrementa il conteggio dei blocchi di memoria allocati.|  
|[full](#full)|Restituisce un valore che specifica se all'elenco di disponibilità devono essere aggiunti altri blocchi di memoria.|  
|[released](#released)|Decrementa il conteggio dei blocchi di memoria nell'elenco di disponibilità.|  
|[saved](#saved)|Incrementa il conteggio dei blocchi di memoria nell'elenco di disponibilità.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<allocators>  
  
 **Spazio dei nomi:** stdext  
  
##  <a name="allocated"></a>  max_fixed_size::allocated  
 Incrementa il conteggio dei blocchi di memoria allocati.  
  
```
void allocated(std::size_t _Nx = 1);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`_Nx`|Valore di incremento.|  
  
### <a name="remarks"></a>Note  
 La funzione membro non esegue alcuna operazione. Questa funzione viene chiamata dopo ogni chiamata eseguita da `cache_freelist::allocate` all'operatore `new`. L'argomento `_Nx` è il numero di blocchi di memoria inclusi nel blocco allocato dall'operatore `new`.  
  
##  <a name="deallocated"></a>  max_fixed_size::deallocated  
 Decrementa il conteggio dei blocchi di memoria allocati.  
  
```
void deallocated(std::size_t _Nx = 1);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`_Nx`|Valore di incremento.|  
  
### <a name="remarks"></a>Note  
 La funzione membro non esegue alcuna operazione. Questa funzione viene chiamata dopo ogni chiamata eseguita da `cache_freelist::deallocate` all'operatore `delete`. L'argomento `_Nx` è il numero di blocchi di memoria inclusi nel blocco deallocato dall'operatore `delete`.  
  
##  <a name="full"></a>  max_fixed_size::full  
 Restituisce un valore che specifica se all'elenco di disponibilità devono essere aggiunti altri blocchi di memoria.  
  
```
bool full();
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` se `Max <= _Nblocks`; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene chiamata da `cache_freelist::deallocate`. Se la chiamata restituisce `true`, `deallocate` inserisce il blocco di memoria nell'elenco di disponibilità; se restituisce false, `deallocate` chiama l'operatore `delete` per deallocare il blocco.  
  
##  <a name="max_fixed_size"></a>  max_fixed_size::max_fixed_size  
 Costruisce un oggetto di tipo `max_fixed_size`.  
  
```
max_fixed_size();
```  
  
### <a name="remarks"></a>Note  
 Questo costruttore inizializza il valore archiviato `_Nblocks` su zero.  
  
##  <a name="released"></a>  max_fixed_size::released  
 Decrementa il conteggio dei blocchi di memoria nell'elenco di disponibilità.  
  
```
void released();
```  
  
### <a name="remarks"></a>Note  
 Decrementa il valore archiviato `_Nblocks`. La funzione membro `released` della [classe max](../standard-library/allocators-header.md) corrente viene chiamata da `cache_freelist::allocate` ogni volta che rimuove un blocco di memoria dall'elenco di disponibilità.  
  
##  <a name="saved"></a>  max_fixed_size::saved  
 Incrementa il conteggio dei blocchi di memoria nell'elenco di disponibilità.  
  
```
void saved();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione membro incrementa il valore archiviato `_Nblocks`. Viene chiamata da `cache_freelist::deallocate` ogni volta che inserisce un blocco di memoria nell'elenco di disponibilità.  
  
## <a name="see-also"></a>Vedere anche  
 [\<allocators>](../standard-library/allocators-header.md)




