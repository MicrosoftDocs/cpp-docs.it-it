---
title: Operatore typeid | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-language
ms.tgt_pltfrm: ''
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- typeid operator
ms.assetid: 8871cee6-d6b9-4301-a5cb-bf3dc9798d61
caps.latest.revision: 10
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b27f3bcb7358b3ea05907df1a4372c107538dfb4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="typeid-operator"></a>Operatore typeid
## <a name="syntax"></a>Sintassi  
  
```  
  
      typeid(   
      type-id  
       )  
typeid( expression )  
```  
  
## <a name="remarks"></a>Note  
 L'operatore `typeid` consente la determinazione del tipo di un oggetto in fase di esecuzione.  
  
 Il risultato di `typeid` è un **const type_info &**. Il valore è un riferimento a un **type_info** oggetto che rappresenta il *id tipo* o il tipo del *espressione*, a seconda della forma di `typeid` viene utilizzato . Vedere [classe type_info](../cpp/type-info-class.md) per ulteriori informazioni.  
  
 Il `typeid` operatore non funziona con i tipi gestiti (i dichiaratori astratti o istanze), vedere [typeid](../windows/typeid-cpp-component-extensions.md) per informazioni su come ottenere il <xref:System.Type> di un tipo specificato.  
  
 L'operatore `typeid` esegue un controllo di runtime se applicato a un l-value di un tipo classe polimorfico, in cui il tipo effettivo dell'oggetto non può essere determinato dalle informazioni statiche fornite. I casi sono i seguenti:  
  
-   Un riferimento a una classe  
  
-   Un puntatore dereferenziato con *  
  
-   Un puntatore di indice, ovvero [ ]. Si noti che non è in genere consigliabile utilizzare un indice con un puntatore a un tipo polimorfico.  
  
 Se il *espressione* punta a un tipo di classe di base, ma l'oggetto è effettivamente di un tipo derivato da tale classe di base, un **type_info** fanno riferimento per la classe derivata è il risultato. Il *espressione* deve puntare a un tipo polimorfico (una classe con funzioni virtuali). In caso contrario, il risultato è il **type_info** della classe statica a cui il *espressione*. Inoltre, il puntatore deve essere dereferenziato in modo che venga utilizzato l'oggetto a cui fa riferimento. Senza dereferenziazione del puntatore, il risultato sarà il **type_info** per il puntatore, non l'oggetto a cui fa riferimento alla. Ad esempio:  
  
```  
// expre_typeid_Operator.cpp  
// compile with: /GR /EHsc  
#include <iostream>  
#include <typeinfo.h>  
  
class Base {  
public:  
   virtual void vvfunc() {}  
};  
  
class Derived : public Base {};  
  
using namespace std;  
int main() {  
   Derived* pd = new Derived;  
   Base* pb = pd;  
   cout << typeid( pb ).name() << endl;   //prints "class Base *"  
   cout << typeid( *pb ).name() << endl;   //prints "class Derived"  
   cout << typeid( pd ).name() << endl;   //prints "class Derived *"  
   cout << typeid( *pd ).name() << endl;   //prints "class Derived"  
   delete pd;  
}  
```  
  
 Se il *espressione* dereferenziazione di un puntatore, e che il valore dell'indicatore di misura è zero, **typeid** genera un [bad_typeid (eccezione)](../cpp/bad-typeid-exception.md). Se il puntatore non punta a un oggetto valido, un `__non_rtti_object` viene generata l'eccezione, che indica un tentativo di analizzare il RTTI che ha generato un errore (ad esempio la violazione di accesso), perché l'oggetto non è valido (puntatore non valido o il codice non è stato compilato con [/GR](../build/reference/gr-enable-run-time-type-information.md)).  
  
 Se il *espressione* è un puntatore né un riferimento a una classe di base dell'oggetto, il risultato è un **type_info** riferimento che rappresenta il tipo statico del *espressione*. Il *tipo statico* di un'espressione fa riferimento al tipo di un'espressione come è noto in fase di compilazione. Durante la valutazione del tipo statico di un'espressione, la semantica di esecuzione viene ignorata. Inoltre, i riferimenti vengono, quando possibile, ignorati durante la determinazione del tipo statico di un'espressione.  
  
```  
// expre_typeid_Operator_2.cpp  
#include <typeinfo>  
  
int main()  
{  
   typeid(int) == typeid(int&); // evaluates to true  
}  
```  
  
 **typeid** utilizzabile anche nei modelli per determinare il tipo di un parametro di modello:  
  
```  
// expre_typeid_Operator_3.cpp  
// compile with: /c  
#include <typeinfo>  
template < typename T >   
T max( T arg1, T arg2 ) {  
   cout << typeid( T ).name() << "s compared." << endl;  
   return ( arg1 > arg2 ? arg1 : arg2 );  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Informazioni sui tipi di runtime](../cpp/run-time-type-information.md)   
 [Parole chiave](../cpp/keywords-cpp.md)