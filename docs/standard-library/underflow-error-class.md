---
title: "Classe underflow_error | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "stdexcept/std::underflow_error"
  - "underflow_error"
  - "std.underflow_error"
  - "std::underflow_error"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "underflow_error (classe)"
ms.assetid: d632f1f9-9c6c-4954-b96b-03041bfab22d
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 20
---
# Classe underflow_error
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe funge da classe di base per tutte le eccezioni generate per segnalare un underflow aritmetico.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class underflow_error : public runtime_error {  
public:  
    explicit underflow_error(const string& message);

    explicit underflow_error(const char *message);

};  
```  
  
## <a name="remarks"></a>Note  
 Il valore restituito da [cosa](../standard-library/exception-class1.md) è una copia di **messaggio**`.`[dati](../standard-library/basic-string-class.md#basic_string__data).  
  
## <a name="example"></a>Esempio  
  
```  
// underflow_error.cpp  
// compile with: /EHsc /GR  
#include <iostream>  
  
using namespace std;  
  
int main( )  
{  
   try   
   {  
      throw underflow_error( "The number's a bit small, captain!" );  
   }  
   catch ( exception &e ) {  
      cerr << "Caught: " << e.what( ) << endl;  
      cerr << "Type: " << typeid( e ).name( ) << endl;  
   };  
}  
\* Output:   
Caught: The number's a bit small, captain!  
Type: class std::underflow_error  
*\  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \< stdexcept>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [\< stdexcept> membri](http://msdn.microsoft.com/it-it/7b6b0a73-916e-44aa-9a3f-f5b6b3ce98e6)   
 [Classe runtime_error](../standard-library/runtime-error-class.md)   
 [Sicurezza dei thread nella libreria Standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)

