---
title: Classe overflow_error | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: stdexcept/std::overflow_error
dev_langs: C++
helpviewer_keywords: overflow_error class
ms.assetid: bae7128d-e36b-4a45-84f1-2f89da441d20
caps.latest.revision: "20"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: eff6eb00c6658983cb734b7db53e909a17b9bfd5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="overflowerror-class"></a>Classe overflow_error
La classe funge da classe di base per tutte le eccezioni generate per segnalare un overflow aritmetico.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class overflow_error : public runtime_error {  
public:  
    explicit overflow_error(const string& message);

    explicit overflow_error(const char *message);

};  
```  
  
## <a name="remarks"></a>Note  
 Il valore restituito da [what](../standard-library/exception-class.md) è una copia di **message**`.`[data](../standard-library/basic-string-class.md#data).  
  
## <a name="example"></a>Esempio  
  
```cpp  
// overflow_error.cpp  
// compile with: /EHsc /GR  
#include <bitset>  
#include <iostream>  
  
using namespace std;  
  
int main( )  
{  
   try   
   {  
      bitset< 33 > bitset;  
      bitset[32] = 1;  
      bitset[0] = 1;  
      unsigned long x = bitset.to_ulong( );  
   }  
   catch ( exception &e )   
   {  
      cerr << "Caught " << e.what( ) << endl;  
      cerr << "Type " << typeid( e ).name( ) << endl;  
   };  
}  
\* Output:   
Caught bitset<N> overflow  
Type class std::overflow_error  
*\  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<stdexcept>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Classe runtime_error](../standard-library/runtime-error-class.md)   
 [Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)

