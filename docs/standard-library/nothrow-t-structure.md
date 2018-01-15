---
title: Struttura nothrow_t | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: nothrow_t
dev_langs: C++
helpviewer_keywords: nothrow_t class
ms.assetid: dc7d5d42-ed5a-4919-88fe-bbad519b7a1d
caps.latest.revision: "20"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 9975df6ca866ce45a0e4859d19c6cfd6f3f96db2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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



