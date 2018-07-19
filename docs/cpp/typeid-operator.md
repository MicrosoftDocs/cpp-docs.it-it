---
title: Operatore typeid | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- typeid operator
ms.assetid: 8871cee6-d6b9-4301-a5cb-bf3dc9798d61
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9646678398ff1e18d0acf45c45bc931ce37cd54a
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37944001"
---
# <a name="typeid-operator"></a>Operatore typeid
## <a name="syntax"></a>Sintassi  
  
```  
  
typeid(type-id)  
typeid(expression)  
```  
  
## <a name="remarks"></a>Note  
 Il **typeid** operatore consente il tipo di un oggetto deve essere determinato in fase di esecuzione.  
  
 Il risultato del **typeid** è un `const type_info&`. Il valore è un riferimento a un `type_info` oggetto che rappresenta il *tipo-id* o il tipo del *espressione*, a seconda di quale forma di **typeid** viene usato. Visualizzare [classe type_info](../cpp/type-info-class.md) per altre informazioni.  
  
 Il **typeid** operatore non funziona con tipi gestiti (dichiaratori o istanze astratti), vedere [typeid](../windows/typeid-cpp-component-extensions.md) per informazioni su come ottenere il <xref:System.Type> di un tipo specificato.  
  
 Il **typeid** operatore esegue un controllo di runtime quando viene applicato a un l-value di un tipo classe polimorfico, in cui non è possibile determinare il tipo effettivo dell'oggetto dalle informazioni statiche fornite. I casi sono i seguenti:  
  
-   Un riferimento a una classe  
  
-   Un puntatore dereferenziato con *  
  
-   Un puntatore di indice, ovvero [ ]. Si noti che non è in genere consigliabile utilizzare un indice con un puntatore a un tipo polimorfico.  
  
 Se il *espressione* punta a un tipo di classe di base, ma l'oggetto è effettivamente di un tipo derivato da tale classe, un `type_info` di riferimento per la classe derivata è il risultato. Il *espressione* deve puntare a un tipo polimorfico (una classe con funzioni virtuali). In caso contrario, il risultato è il `type_info` della classe statica di cui il *espressione*. Inoltre, il puntatore deve essere dereferenziato in modo che venga utilizzato l'oggetto a cui fa riferimento. Senza dereferenziazione del puntatore, il risultato sarà il `type_info` del puntatore e non a cui fa riferimento. Ad esempio:  
  
```cpp 
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
  
 Se il *espressione* dereferenzia un puntatore, e che il valore dell'indicatore di misura è uguale a zero, **typeid** genera un [eccezione bad_typeid](../cpp/bad-typeid-exception.md). Se il puntatore non punta a un oggetto valido, un `__non_rtti_object` viene generata l'eccezione, che indica un tentativo di analizzare il RTTI che ha generato l'errore (ad esempio la violazione di accesso), perché l'oggetto non è valido (puntatore non valido o il codice non è stato compilato con [/GR](../build/reference/gr-enable-run-time-type-information.md)).  
  
 Se il *espressione* è un puntatore né un riferimento a una classe di base dell'oggetto, il risultato è un `type_info` riferimento che rappresenta il tipo statico del *espressione*. Il *tipo statico* di un'espressione fa riferimento al tipo di un'espressione come è noto in fase di compilazione. Durante la valutazione del tipo statico di un'espressione, la semantica di esecuzione viene ignorata. Inoltre, i riferimenti vengono, quando possibile, ignorati durante la determinazione del tipo statico di un'espressione.  
  
```cpp 
// expre_typeid_Operator_2.cpp  
#include <typeinfo>  
  
int main()  
{  
   typeid(int) == typeid(int&); // evaluates to true  
}  
```  
  
 **typeid** è anche utilizzabile nei modelli per determinare il tipo di un parametro di modello:  
  
```cpp 
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