---
title: "Classi astratte (C ++) | Microsoft Docs"
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
  - "classi astratte"
  - "classi base, classi astratte"
  - "classi [C++], abstract"
  - "classi derivate, classi astratte"
ms.assetid: f0c5975b-39de-4d68-9640-6ce57f4632e6
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classi astratte (C ++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le classi astratte fungono da espressioni di concetti generali da cui è possibile derivare classi più specifiche.  Non è possibile creare un oggetto di un tipo di classe astratta; tuttavia, è possibile usare i puntatori e i riferimenti ai tipi di classe astratta.  
  
 Una classe che contiene almeno una funzione virtuale pura è considerata una classe astratta.  Le classi derivate dalla classe astratta devono implementare la funzione virtuale pura o sono anch'esse classi astratte.  
  
 Una funzione virtuale viene dichiarata come "pura" tramite la sintassi di *pure\-specifier*, descritta in [Implementazione del protocollo di classe](http://msdn.microsoft.com/it-it/a319f1b3-05e8-400e-950a-1ca6eb105ab5).  Si consideri l'esempio illustrato in [Funzioni virtuali](../cpp/virtual-functions.md).  Lo scopo della classe `Account` è di fornire la funzionalità generale, ma gli oggetti di tipo `Account` sono troppo generici per essere utili.  Pertanto, `Account` rappresenta una scelta valida per una classe astratta:  
  
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
  
 L'unica differenza tra questa dichiarazione e la precedente è che `PrintBalance` è dichiarato con l'identificatore pure \(`= 0`\).  
  
## Limitazioni alle classi astratte  
 Non è possibile usare le classi astratte per:  
  
-   Variabili o dati dei membri  
  
-   Tipi di argomento  
  
-   Tipi restituiti di funzione  
  
-   Tipi di conversioni esplicite  
  
 Un'altra restrizione è che se il costruttore per una classe astratta chiama direttamente o indirettamente una funzione virtuale pure, il risultato non è definito.  Tuttavia, i costruttori e i distruttori per le classi astratte possono chiamare altre funzioni membro.  
  
 Le funzioni virtuali pure possono essere definite per le classi astratte, ma possono essere chiamate direttamente solo usando la sintassi:  
  
 *abstract\-class\-name* `::` *function\-name***\( \)**  
  
 Questa operazione può essere utile quando si progettano le gerarchie di classe le cui classi base includono i distruttori virtuali pure, poiché i distruttori di classe base sono sempre chiamati nel processo di eliminazione di un oggetto.  Si consideri l'esempio seguente:  
  
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
  
 Quando l'oggetto a cui si fa riferimento `pDerived` viene eliminato, viene chiamato il distruttore della classe `derived` e quindi quello della classe `base`.  L'implementazione vuota per la funzione virtuale pure assicura che esiste almeno un'implementazione per la funzione.  
  
> [!NOTE]
>  Nell'esempio precedente, la funzione virtuale pure `base::~base` viene chiamata in modo implicito da `derived::~derived`.  È inoltre possibile chiamare le funzioni virtuali pure in modo esplicito usando un nome di funzione membro completo.  
  
## Vedere anche  
 [Ereditarietà](../cpp/inheritance-cpp.md)