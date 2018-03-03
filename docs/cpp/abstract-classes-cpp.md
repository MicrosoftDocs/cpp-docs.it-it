---
title: Classi (C++) astratte | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- classes [C++], abstract
- base classes [C++], abstract classes [C++]
- abstract classes [C++]
- derived classes [C++], abstract classes [C++]
ms.assetid: f0c5975b-39de-4d68-9640-6ce57f4632e6
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 23cdff4d0e2eb213a98b2e90d7df41af226edd86
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="abstract-classes-c"></a>Classi astratte (C ++)
Le classi astratte fungono da espressioni di concetti generali da cui è possibile derivare classi più specifiche. Non è possibile creare un oggetto di un tipo di classe astratta; tuttavia, è possibile usare i puntatori e i riferimenti ai tipi di classe astratta.  
  
 Una classe che contiene almeno una funzione virtuale pura è considerata una classe astratta. Le classi derivate dalla classe astratta devono implementare la funzione virtuale pura o sono anch'esse classi astratte.  
  
 Una funzione virtuale viene dichiarata come "pura" utilizzando il *identificatore pure* sintassi (descritto in [implementazione della classe protocollo](http://msdn.microsoft.com/en-us/a319f1b3-05e8-400e-950a-1ca6eb105ab5)). Si consideri l'esempio presentato [funzioni virtuali](../cpp/virtual-functions.md). Lo scopo della classe `Account` è di fornire la funzionalità generale, ma gli oggetti di tipo `Account` sono troppo generici per essere utili. Pertanto, `Account` rappresenta una scelta valida per una classe astratta:  
  
```  
// deriv_AbstractClasses.cpp  
// compile with: /LD  
class Account {  
public:  
   Account( double d );   // Constructor.  
   virtual double GetBalance();   // Obtain balance.  
   virtual void PrintBalance() = 0;   // Pure virtual function.  
private:  
    double _balance;  
};  
  
```  
  
 L'unica differenza tra questa dichiarazione e la precedente è che `PrintBalance` è dichiarato con l'identificatore pure (`= 0`).  
  
## <a name="restrictions-on-abstract-classes"></a>Limitazioni alle classi astratte  
 Non è possibile usare le classi astratte per:  
  
-   Variabili o dati dei membri  
  
-   Tipi di argomento  
  
-   Tipi restituiti di funzione  
  
-   Tipi di conversioni esplicite  
  
 Un'altra restrizione è che se il costruttore per una classe astratta chiama direttamente o indirettamente una funzione virtuale pure, il risultato non è definito. Tuttavia, i costruttori e i distruttori per le classi astratte possono chiamare altre funzioni membro.  
  
 Le funzioni virtuali pure possono essere definite per le classi astratte, ma possono essere chiamate direttamente solo usando la sintassi:  
  
 *nome di classe astratta* `::` *-nome della funzione***)**  
  
 Questa operazione può essere utile quando si progettano le gerarchie di classe le cui classi base includono i distruttori virtuali pure, poiché i distruttori di classe base sono sempre chiamati nel processo di eliminazione definitiva di un oggetto. Si consideri l'esempio seguente:  
  
```  
// Declare an abstract base class with a pure virtual destructor.  
// deriv_RestrictionsonUsingAbstractClasses.cpp  
class base {  
public:  
    base() {}  
    virtual ~base()=0;  
};  
  
// Provide a definition for destructor.  
base::~base() {}  
  
class derived:public base {  
public:  
    derived() {}  
    ~derived(){}  
};  
  
int main() {  
    derived *pDerived = new derived;  
    delete pDerived;  
}  
```  
  
 Quando l'oggetto a cui si fa riferimento `pDerived` viene eliminato, viene chiamato il distruttore della classe `derived` e quindi quello della classe `base`. L'implementazione vuota per la funzione virtuale pure assicura che esiste almeno un'implementazione per la funzione.  
  
> [!NOTE]
>  Nell'esempio precedente, la funzione virtuale pure `base::~base` viene chiamata in modo implicito da `derived::~derived`. È inoltre possibile chiamare le funzioni virtuali pure in modo esplicito usando un nome di funzione membro completo.  
  
## <a name="see-also"></a>Vedere anche  
 [Ereditarietà](../cpp/inheritance-cpp.md)