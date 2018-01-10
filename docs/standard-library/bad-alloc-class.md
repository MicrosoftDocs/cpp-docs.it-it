---
title: Classe bad_alloc | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: new/std::bad_alloc
dev_langs: C++
helpviewer_keywords: bad_alloc class
ms.assetid: 6429a8e6-5a49-4907-8d56-f4a4ec8131d0
caps.latest.revision: "26"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: fc136f33d3653aef1e325a97f6e47ff3742b0182
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="badalloc-class"></a>Classe bad_alloc
La classe descrive un'eccezione generata per indicare che una richiesta di allocazione ha avuto esito negativo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class bad_alloc : public exception {  
    bad_alloc();
virtual ~bad_alloc();

};  
```  
  
## <a name="remarks"></a>Note  
 Il valore restituito da **what** è una stringa C definita dall'implementazione. Nessuna delle funzioni membro genera eccezioni.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<new>  
  
 **Spazio dei nomi:** std  
  
## <a name="example"></a>Esempio  
  
```cpp  
// bad_alloc.cpp  
// compile with: /EHsc  
#include<new>  
#include<iostream>  
using namespace std;  
  
int main() {  
   char* ptr;  
   try {  
      ptr = new char[(~unsigned int((int)0)/2) - 1];  
      delete[] ptr;  
   }  
   catch( bad_alloc &ba) {  
      cout << ba.what( ) << endl;  
   }  
}  
```  
  
## <a name="sample-output"></a>Esempio di output  
  
```  
bad allocation  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<new>  
  
## <a name="see-also"></a>Vedere anche
 [Classe exception](../standard-library/exception-class.md)  
 [Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)

