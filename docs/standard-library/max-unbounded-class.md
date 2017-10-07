---
title: Classe max_unbounded | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- allocators/stdext::max_unbounded
- allocators/stdext::max_unbounded::allocated
- allocators/stdext::max_unbounded::deallocated
- allocators/stdext::max_unbounded::full
- allocators/stdext::max_unbounded::released
- allocators/stdext::max_unbounded::saved
dev_langs:
- C++
helpviewer_keywords:
- stdext::max_unbounded
- stdext::max_unbounded [C++], allocated
- stdext::max_unbounded [C++], deallocated
- stdext::max_unbounded [C++], full
- stdext::max_unbounded [C++], released
- stdext::max_unbounded [C++], saved
ms.assetid: e34627a9-c231-4031-a483-cbb0514fff46
caps.latest.revision: 18
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 65f4e356ad0d46333b0d443d0fd6ac0b9f2b6f58
ms.openlocfilehash: 499032343c20c308c2e2820420c725c8d6d43fee
ms.contentlocale: it-it
ms.lasthandoff: 10/03/2017

---
# <a name="maxunbounded-class"></a>Classe max_unbounded
Descrive un oggetto [classe max](../standard-library/allocators-header.md) che non limita la lunghezza massima di un oggetto [freelist](../standard-library/freelist-class.md).  
  
## <a name="syntax"></a>Sintassi  
  
```
class max_unbounded
```  
  
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
  
##  <a name="allocated"></a>  max_unbounded::allocated  
 Incrementa il conteggio dei blocchi di memoria allocati.  
  
```
void allocated(std::size_t _Nx = 1);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`_Nx`|Valore di incremento.|  
  
### <a name="remarks"></a>Note  
 Questa funzione membro non esegue alcuna operazione. Viene chiamata dopo ogni chiamata eseguita da `cache_freelist::allocate` all'operatore `new`. L'argomento `_Nx` è il numero di blocchi di memoria inclusi nel blocco allocato dall'operatore `new`.  
  
##  <a name="deallocated"></a>  max_unbounded::deallocated  
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
  
##  <a name="full"></a>  max_unbounded::full  
 Restituisce un valore che specifica se all'elenco di disponibilità devono essere aggiunti altri blocchi di memoria.  
  
```
bool full();
```  
  
### <a name="return-value"></a>Valore restituito  
 La funzione membro restituisce sempre `false`.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene chiamata da `cache_freelist::deallocate`. Se la chiamata restituisce `true`, `deallocate` inserisce il blocco di memoria nell'elenco di disponibilità; se restituisce false, `deallocate` chiama l'operatore `delete` per deallocare il blocco.  
  
##  <a name="released"></a>  max_unbounded::released  
 Decrementa il conteggio dei blocchi di memoria nell'elenco di disponibilità.  
  
```
void released();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione membro non esegue alcuna operazione. La funzione membro `released` della classe max corrente viene chiamata da `cache_freelist::allocate` ogni volta che rimuove un blocco di memoria dall'elenco di disponibilità.  
  
##  <a name="saved"></a>  max_unbounded::saved  
 Incrementa il conteggio dei blocchi di memoria nell'elenco di disponibilità.  
  
```
void saved();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione membro non esegue alcuna operazione. Viene chiamata da `cache_freelist::deallocate` ogni volta che inserisce un blocco di memoria nell'elenco di disponibilità.  
  
## <a name="see-also"></a>Vedere anche  
 [\<allocators>](../standard-library/allocators-header.md)




