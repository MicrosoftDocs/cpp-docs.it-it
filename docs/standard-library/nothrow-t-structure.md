---
title: Struttura nothrow_t | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- nothrow_t
dev_langs:
- C++
helpviewer_keywords:
- nothrow_t class
ms.assetid: dc7d5d42-ed5a-4919-88fe-bbad519b7a1d
caps.latest.revision: 20
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
ms.openlocfilehash: 69b654efb796b567f6a24ca2b6d2b65139a3a8c8
ms.contentlocale: it-it
ms.lasthandoff: 04/29/2017

---
# <a name="nothrowt-structure"></a>Struttura nothrow_t
La struttura viene usata come parametro di funzione di operator new per indicare che la funzione deve restituire un puntatore Null per segnalare un errore di allocazione, anziché generare un'eccezione.  
  
## <a name="syntax"></a>Sintassi  
  
```
struct std::nothrow_t {};
```  
  
## <a name="remarks"></a>Note  
 La struttura consente al compilatore di selezionare la versione corretta del costruttore. [nothrow](../standard-library/new-functions.md#nothrow) è un sinonimo degli oggetti di tipo `std::nothrow_t`.  
  
## <a name="example"></a>Esempio  
 Vedere [operator new](../standard-library/new-operators.md#op_new) e [operator new&#91;&#93;](../standard-library/new-operators.md#op_new_arr) per esempi relativi all'uso di `std::nothrow_t` come parametro di funzione.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<new>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md) (Thread safety nella libreria standard C++)




