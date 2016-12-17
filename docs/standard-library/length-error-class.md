---
title: "Classe length_error | Microsoft Docs"
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
  - "stdexcept/std::length_error"
  - "length_error"
  - "std::length_error"
  - "std.length_error"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "length_error (classe)"
ms.assetid: d53c46c5-4626-400d-bd76-bf3e1e0f64ae
caps.latest.revision: 21
caps.handback.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe length_error
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe funge da classe di base per tutte le eccezioni generate per segnalare un tentativo di generare un oggetto troppo lungo da specificare.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class length_error : public logic_error {  
public:  
    explicit length_error(const string& message);

    explicit length_error(const char *message);

};  
```  
  
## <a name="remarks"></a>Note  
 Il valore restituito da [cosa](../standard-library/exception-class1.md) è una copia di **messaggio**`.`[dati](../standard-library/basic-string-class.md#basic_string__data).  
  
## <a name="example"></a>Esempio  
  
```  
// length_error.cpp  
// compile with: /EHsc /GR /MDd  
#include <vector>  
#include <iostream>  
  
using namespace std;  
  
template<class  T>  
class stingyallocator : public allocator< T>  
{  
public:  
   template <class U>  
      struct rebind { typedef stingyallocator<U> other; };  
   _SIZT max_size( ) const  
   {  
         return 10;  
   };  
  
};  
  
int main( )  
{  
   try  
   {  
      vector<int, stingyallocator< int > > myv;  
      for ( int i = 0; i < 11; i++ ) myv.push_back( i );  
   }  
   catch ( exception &e )  
   {  
      cerr << "Caught " << e.what( ) << endl;  
      cerr << "Type " << typeid( e ).name( ) << endl;  
   };  
}  
\* Output:   
Caught vector<T> too long  
Type class std::length_error  
*\  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \< stdexcept>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Classe logic_error](../standard-library/logic-error-class.md)   
 [Sicurezza dei thread nella libreria Standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)

