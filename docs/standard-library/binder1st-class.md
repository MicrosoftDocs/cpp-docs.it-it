---
title: "Classe binder1st | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "xfunctional/std::binder1st"
  - "std::binder1st"
  - "binder1st"
  - "std.binder1st"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "binder1st (classe)"
ms.assetid: 6b8ee343-c82f-48f8-867d-06f9d1d324c0
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 22
---
# Classe binder1st
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una classe modello che fornisce un costruttore che converte un oggetto funzione binario in un oggetto funzione unario associando il primo argomento della funzione binaria a un valore specificato.  
  
## Sintassi  
  
```  
template<class Operation>  
class binder1st  
   : public unary_function <  
      typename Operation::second_argument_type,  
      typename Operation::result_type>   
  {  
   public:  
   typedef typename Operation::argument_type argument_type;  
   typedef typename Operation::result_type result_type;  
   binder1st(  
      const Operation & _Func,  
      const typename Operation::first_argument_type& _Left  
   );  
   result_type operator()(  
      const argument_type& _Right  
   ) const;  
   result_type operator()(  
      const argument_type& _Right  
   ) const;  
   protected:  
   Operation op;  
   typename Operation::first_argument_type value;  
   };  
```  
  
#### Parametri  
 `_Func`  
 L'oggetto function binario da convertire in un oggetto funzione unario.  
  
 `_Left`  
 Il valore che il primo argomento dell'oggetto funzione binario deve essere associato.  
  
 `_Right`  
 Il valore dell'argomento che l'oggetto binario adatto confronta il valore fisso del secondo argomento.  
  
## Valore restituito  
 L'oggetto function unario che risultati dell'associazione il primo argomento dell'oggetto funzione binario il valore `_Left.`  
  
## Note  
 La classe modello archivia una copia di un oggetto funzione `_Func` binario in **op** e una copia di `_Left` in **valore**.  Definisce la relativa funzione membro `operator()` come restituire **op**\(**valore**, `_Right`\).  
  
 Se `_Func` è un oggetto di tipo **Operation** e `c` è una costante , allora [bind1st](../Topic/bind1st%20Function.md) \( `_Func`, `c` \) è equivalente al costruttore di classe `binder1st``binder1st`\<**Operation**\> \( `_Func`, `c` \) e più semplice.  
  
## Esempio  
  
```  
// functional_binder1st.cpp  
// compile with: /EHsc  
#include <vector>  
#include <functional>  
#include <algorithm>  
#include <iostream>  
  
using namespace std;  
  
int main()  
{  
    vector<int> v1;  
    vector<int>::iterator Iter;  
  
    int i;  
    for (i = 0; i <= 5; i++)  
    {  
        v1.push_back(5 * i);  
    }  
  
    cout << "The vector v1 = ( ";  
    for (Iter = v1.begin(); Iter != v1.end(); Iter++)  
        cout << *Iter << " ";  
    cout << ")" << endl;  
  
    // Count the number of integers > 10 in the vector  
    vector<int>::iterator::difference_type result1;  
    result1 = count_if(v1.begin(), v1.end(),  
        binder1st<less<int> >(less<int>(), 10));  
    cout << "The number of elements in v1 greater than 10 is: "  
         << result1 << "." << endl;  
  
    // Compare use of binder2nd fixing 2nd argument:  
    // count the number of integers < 10 in the vector  
    vector<int>::iterator::difference_type result2;  
    result2 = count_if(v1.begin(), v1.end(),  
        binder2nd<less<int> >(less<int>(), 10));  
    cout << "The number of elements in v1 less than 10 is: "  
         << result2 << "." << endl;  
}  
```  
  
  **The vector v1 \= \( 0 5 10 15 20 25 \)**  
**Il numero di elementi in v1 maggiore di 10 è: 3.**  
**Il numero di elementi in v1 minore di 10 è: 2.**   
## Requisiti  
 **Intestazione:** \<funzionale\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)