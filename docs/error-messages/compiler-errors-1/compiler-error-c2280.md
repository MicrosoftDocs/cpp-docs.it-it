---
title: C2280 di errore del compilatore | Documenti Microsoft
ms.custom: 
ms.date: 04/25/2017
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C2280
helpviewer_keywords:
- C2280
dev_langs:
- C++
ms.assetid: e6c5b1fb-2b9b-4554-8ff9-775eeb37161b
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 66798adc96121837b4ac2dd238b9887d3c5b7eef
ms.openlocfilehash: bec93f1ee238184cbb4eed0d98921fb28e94e222
ms.lasthandoff: 04/29/2017

---
# <a name="compiler-error-c2280"></a>C2280 di errore del compilatore  
  
'*dichiarazione*': tentativo di fare riferimento a una funzione eliminata  
  
Il compilatore ha rilevato un tentativo di fare riferimento a un `deleted` (funzione). Questo errore può essere causato da una chiamata a una funzione membro che è stata contrassegnata in modo esplicito come `= deleted` nel codice sorgente. Questo errore può anche essere causato da una chiamata a una funzione membro speciale implicito di una struct o una classe che viene dichiarato e automaticamente contrassegnati come `deleted` dal compilatore. Per ulteriori informazioni quando il compilatore genera automaticamente `default` o `deleted` speciali funzioni membro, vedere [funzioni membro speciali](../../cpp/special-member-functions.md).  
  
## <a name="example-explicitly-deleted-functions"></a>Esempio: Eliminati in modo esplicito di funzioni  

Una chiamata a un in modo esplicito `deleted` funzione causa l'errore. Un in modo esplicito `deleted` funzione membro implica che la classe o struct è progettato appositamente per evitare l'uso, pertanto, per risolvere questo problema, è consigliabile modificare il codice per evitare questo problema.  
  
```cpp  
// C2280_explicit.cpp
// compile with: cl /c /W4 C2280_explicit.cpp
struct A {
    A();
    A(int) = delete;
};

struct B {
    A a1;
    A a2 = A(3); // C2280, calls deleted A::A(int)
    // To fix, remove the call to A(int)
};

void f() {
    B b;    // calls implicit B::B(void)
}
```  
  
## <a name="example-uninitialized-data-members"></a>Esempio: Membri dati non inizializzati  
  
Un membro dati di tipo riferimento non inizializzato o `const` (membro dati), il compilatore dichiarare in modo implicito un `deleted` costruttore predefinito. Per risolvere questo problema, inizializzare il membro dati quando vengono dichiarati.  
  
```cpp  
// C2280_uninit.cpp
// compile with: cl /c C2280_uninit.cpp
struct A {
    const int i; // uninitialized const-qualified data
    // members or reference type data members cause
    // the implicit default constructor to be deleted.
    // To fix, initialize the value in the declaration:
    // const int i = 42;
} a;    // C2280
```  
  
## <a name="example-reference-and-const-data-members"></a>Esempio: Membri dati const e riferimento  
  
Oggetto `const` o membro dati di tipo riferimento, il compilatore dichiarare un `deleted` operatore di assegnazione di copia. Dopo l'inizializzazione, questi membri non possono essere assegnati, in modo semplice copia o spostamento non è supportato. Per risolvere questo problema, si consiglia di che modificare la logica per rimuovere le operazioni di assegnazione che causano l'errore.  
  
```cpp  
// C2280_ref.cpp
// compile with: cl /c C2280_ref.cpp
extern int k;
struct A {
    A();
    int& ri = k; // a const or reference data member causes 
    // implicit copy assignment operator to be deleted.
};

void f() {
    A a1, a2;
    // To fix, consider removing this assignment.
    a2 = a1;    // C2280
}
```  
  
## <a name="example-movable-deletes-implicit-copy"></a>Esempio: Mobili Elimina copia implicita  
  
Se una classe dichiara un costruttore di spostamento o l'operatore di assegnazione di spostamento, ma non dichiara in modo esplicito un costruttore di copia, il compilatore in modo implicito dichiara un costruttore di copia e la definisce come `deleted`. Analogamente, se una classe dichiara un costruttore di spostamento o l'operatore di assegnazione di spostamento, ma non dichiara in modo esplicito un operatore di assegnazione di copia, il compilatore in modo implicito dichiara un operatore di assegnazione di copia e definisce come `deleted`. Per risolvere questo problema, è necessario dichiarare in modo esplicito questi membri.  
 
Quando viene visualizzato l'errore C2280 in relazione un `unique_ptr`, è quasi certamente perché si sta tentando di richiamare il costruttore di copia, ovvero un `deleted` (funzione). Per impostazione predefinita, una `unique_ptr` non può essere copiato. Utilizzare un costruttore di spostamento per trasferire la proprietà invece.  

```cpp  
// C2280_move.cpp
// compile with: cl /c C2280_move.cpp
class base  
{  
public:  
    base();  
    ~base(); 
    base(base&&); 
    // Move constructor causes copy constructor to be
    // implicitly declared as deleted. To fix this 
    // issue, you can explicitly declare a copy constructor:
    // base(base&);
    // If you want the compiler default version, do this:
    // base(base&) = default;
};  

void copy(base *p)  
{  
    base b{*p};  // C2280
}  
```  

## <a name="example-variant-and-volatile-members"></a>Esempio: I membri di Variant e volatili  
  
Versioni del compilatore prima di Visual Studio 2015 Update 2 sono stati generati e non conformi per impostazione predefinita costruttori e distruttori per le unioni anonime. Queste sono ora in modo implicito dichiarate `deleted`. Tali versioni consentivano anche non conformi con la definizione implicita di `default` copiare e spostare i costruttori e `default` copiare e spostare gli operatori di assegnazione in classi e strutture che hanno `volatile` variabili membro. Il compilatore ora considera questi costruttori non comuni e gli operatori di assegnazione e non genera `default` implementazioni. Quando tale classe è un membro di un'unione o un'unione anonima all'interno di una classe, i costruttori di copia e spostamento e operatori di assegnazione di copia e spostamento della classe o unione sono definiti in modo implicito come `deleted`. Per risolvere questo problema, è necessario dichiarare in modo esplicito le funzioni membro speciali obbligatorio.  
  
```cpp  
// C2280_variant.cpp
// compile with: cl /c C2280_variant.cpp
struct A {  
    A() = default;
    A(const A&);
};  

struct B {  
    union {  
        A a;  
        int i;  
    };
    // To fix this issue, declare the required 
    // special member functions:
    // B(); 
    // B(const B& b);
};  

int main() {
    B b1;  
    B b2(b1);  // C2280  
}
```  
  
## <a name="example-indirect-base-members-deleted"></a>Esempio: Membri base indiretti eliminati  
  
Versioni del compilatore prima di Visual Studio 2015 Update 2 sono stati non conforme e una classe derivata per chiamare funzioni membro speciale di indirettamente derivate consentito `private virtual` classi di base. Il compilatore genera l'errore del compilatore C2280 ora quando viene effettuata una chiamata di questo tipo.  
  
In questo esempio, classe `top` deriva indirettamente da privata virtuale `base`. Nel codice conforme, in questo modo i membri di `base` inaccessibile a `top`; un oggetto di tipo `top` non può essere predefinito creato o eliminato. Per risolvere il problema nel codice che si basava sul comportamento del compilatore precedente, modificare la classe intermedia utilizzare `protected virtual` derivazione o modificare la `top` classe Usa la derivazione diretta:  

```cpp  
// C2280_indirect.cpp
// compile with: cl /c C2280_indirect.cpp
class base  
{  
protected:  
    base();  
    ~base();  
};  

class middle : private virtual base {}; 
// Possible fix: Replace line above with:
// class middle : protected virtual base {};
class top : public virtual middle {};    // C4594, C4624
// Another possible fix: use direct derivation:
// class top : public virtual middle, private virtual base {};   

void destroy(top *p)  
{  
    delete p;  // C2280  
}  
```  
  
