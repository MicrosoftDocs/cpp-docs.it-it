---
title: Struttura atomic_flag | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- atomic/std::atomic_flag
- atomic/std::atomic_flag::clear
- atomic/std::atomic_flag::test_and_set
dev_langs:
- C++
ms.assetid: 17f0c2f5-fd39-4a44-873a-b569720a670e
caps.latest.revision: 14
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 65f4e356ad0d46333b0d443d0fd6ac0b9f2b6f58
ms.openlocfilehash: 94ab743545518fdaa9baa7817b4865673e2d8e56
ms.contentlocale: it-it
ms.lasthandoff: 10/03/2017

---
# <a name="atomicflag-structure"></a>Struttura atomic_flag
Descrive un oggetto che imposta e rimuove atomicamente un flag `bool`. Le operazioni sui flag atomici sono sempre senza blocco.  
  
## <a name="syntax"></a>Sintassi  
  
```
struct atomic_flag;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[clear](#clear)|Imposta il flag archiviato su `false`.|  
|[test_and_set](#test_and_set)|Imposta il flag archiviato su `true` e restituisce il valore del flag iniziale.|  
  
## <a name="remarks"></a>Note  
 Gli oggetti `atomic_flag` possono essere passati alle funzioni non membro [atomic_flag_clear](../standard-library/atomic-functions.md#atomic_flag_clear), [atomic_flag_clear_explicit](../standard-library/atomic-functions.md#atomic_flag_clear_explicit), [atomic_flag_test_and_set](../standard-library/atomic-functions.md#atomic_flag_test_and_set) e [atomic_flag_test_and_set_explicit](../standard-library/atomic-functions.md#atomic_flag_test_and_set_explicit). Tali oggetti possono essere inizializzati tramite il valore `ATOMIC_FLAG_INIT`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<atomic >  
  
 **Spazio dei nomi:** std  
  
##  <a name="clear"></a>atomic_flag:: Clear
 Imposta il flag `bool` archiviato in `*this` su `false` nei limiti dei vincoli [memory_order](../standard-library/atomic-enums.md#memory_order_enum) specificati.  
  
```
void atomic_flag::clear(memory_order Order = memory_order_seq_cst) volatile noexcept;
void atomic_flag::clear(memory_order Order = memory_order_seq_cst) noexcept;
```  
  
### <a name="parameters"></a>Parametri  
 `Order`  
 Un [memory_order](../standard-library/atomic-enums.md#memory_order_enum).  
  
##  <a name="test_and_set"></a>atomic_flag:: test_and_set
 Imposta il flag `bool` archiviato in `*this` su `true` nei limiti dei vincoli [memory_order](../standard-library/atomic-enums.md#memory_order_enum) specificati.  
  
```
bool atomic_flag::test_and_set(memory_order Order = memory_order_seq_cst) volatile noexcept;
bool atomic_flag::test_and_set(memory_order Order = memory_order_seq_cst) noexcept;
```  
  
### <a name="parameters"></a>Parametri  
 `Order`  
 Un [memory_order](../standard-library/atomic-enums.md#memory_order_enum).  
  
### <a name="return-value"></a>Valore restituito  
 Valore iniziale del flag archiviato in `*this`.  
  
## <a name="see-also"></a>Vedere anche  
 [\<atomic>](../standard-library/atomic.md)



