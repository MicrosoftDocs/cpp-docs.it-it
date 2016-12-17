---
title: "Operatore typeid | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "typeid (operatore)"
ms.assetid: 8871cee6-d6b9-4301-a5cb-bf3dc9798d61
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore typeid
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
  
      typeid(   
      type-id  
       )  
typeid( expression )  
```  
  
## Note  
 L'operatore `typeid` consente la determinazione del tipo di un oggetto in fase di esecuzione.  
  
 Il risultato di `typeid` è un oggetto **const type\_info&**.  Il valore è un riferimento a un oggetto **type\_info** che rappresenta *type\-id* o il tipo di *expression*, a seconda della forma di `typeid` utilizzata.  Per ulteriori informazioni, vedere [Classe type\_info](../cpp/type-info-class.md).  
  
 L'operatore `typeid` non funziona con i tipi gestiti \(dichiaratori o istanze astratti\). Per informazioni su come ottenere <xref:System.Type> di un tipo specificato, vedere [typeid](../windows/typeid-cpp-component-extensions.md).  
  
 L'operatore `typeid` esegue un controllo di runtime se applicato a un l\-value di un tipo classe polimorfico, in cui il tipo effettivo dell'oggetto non può essere determinato dalle informazioni statiche fornite.  I casi sono i seguenti:  
  
-   Un riferimento a una classe  
  
-   Un puntatore dereferenziato con \*  
  
-   Un puntatore di indice, ovvero \[ \]. Si noti che non è in genere consigliabile utilizzare un indice con un puntatore a un tipo polimorfico.  
  
 Se *expression* fa riferimento a un tipo di classe base, ma l'oggetto è di un tipo derivato da tale classe base, il risultato è un riferimento **type\_info** per la classe derivata.  *expression* deve fare riferimento a un tipo polimorfico \(una classe con funzioni virtuali\).  In caso contrario, il risultato è l'oggetto **type\_info** della classe statica a cui si fa riferimento in *expression*.  Inoltre, il puntatore deve essere dereferenziato in modo che venga utilizzato l'oggetto a cui fa riferimento.  Senza la dereferenziazione del puntatore, il risultato sarà l'oggetto **type\_info** del puntatore e non l'oggetto a cui fa riferimento.  Di seguito è riportato un esempio.  
  
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
  
 Se *expression* dereferenzia un puntatore e il valore del puntatore è zero, **typeid** genera un'[eccezione bad\_typeid](../cpp/bad-typeid-exception.md).  Se il puntatore non fa riferimento a un oggetto valido, viene generata un'eccezione `__non_rtti_object`, che indica un tentativo di analizzare l'RTTI che ha generato un errore \(ad esempio, una violazione di accesso\), perché l'oggetto non è valido \(puntatore non valido o impossibile compilare il codice con [\/GR](../build/reference/gr-enable-run-time-type-information.md)\).  
  
 Se *expression* non è un puntatore o un riferimento a una classe base dell'oggetto, il risultato è un riferimento **type\_info** che rappresenta il tipo statico di *expression*.  Il *tipo statico* di un'espressione fa riferimento al tipo di un'espressione noto in fase di compilazione.  Durante la valutazione del tipo statico di un'espressione, la semantica di esecuzione viene ignorata.  Inoltre, i riferimenti vengono, quando possibile, ignorati durante la determinazione del tipo statico di un'espressione.  
  
```  
// expre_typeid_Operator_2.cpp  
#include <typeinfo>  
  
int main()  
{  
   typeid(int) == typeid(int&); // evaluates to true  
}  
```  
  
 **typeid** può inoltre essere utilizzato nei modelli per determinare il tipo di un parametro di modello:  
  
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
  
## Vedere anche  
 [Informazioni sui tipi di runtime](../cpp/run-time-type-information.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)