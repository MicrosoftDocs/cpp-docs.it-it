---
title: "Classe overflow_error | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::overflow_error"
  - "std.overflow_error"
  - "overflow_error"
  - "stdexcept/std::overflow_error"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "overflow_error (classe)"
ms.assetid: bae7128d-e36b-4a45-84f1-2f89da441d20
caps.latest.revision: 20
caps.handback.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe overflow_error
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

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
 Il valore restituito da [cosa](../standard-library/exception-class1.md) è una copia di **messaggio**`.`[dati](../standard-library/basic-string-class.md#basic_string__data).  
  
## <a name="example"></a>Esempio  
  
```  
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
 **Intestazione:** \< stdexcept>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Classe runtime_error](../standard-library/runtime-error-class.md)   
 [Sicurezza dei thread nella libreria Standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)

