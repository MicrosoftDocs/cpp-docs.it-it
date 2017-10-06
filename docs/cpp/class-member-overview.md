---
title: Panoramica del membro di classe | Documenti Microsoft
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
- members [C++], types of class members
- members [C++]
- class members [C++], types of
- class members
ms.assetid: 8802cfa9-705d-4f37-acde-245d6838010c
caps.latest.revision: 9
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 0a5a62edf0e71b4fecf25cf10731af7d7c515da7
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="class-member-overview"></a>Panoramica dei membri di classe
Una classe o uno struct è costituito dai rispettivi membri. Il lavoro effettuato da una classe viene eseguito dalle rispettive funzioni membro. Lo stato mantenuto viene archiviato nei rispettivi membri dati. L'inizializzazione dei membri viene eseguita dai costruttori e operazioni di pulitura, ad esempio la liberazione di memoria e il rilascio delle risorse avviene mediante i distruttori. In C++11 e versioni successive i membri dati possono e in genere devono essere inizializzati in corrispondenza del momento della dichiarazione.  
  
## <a name="kinds-of-class-members"></a>Tipi di membri di classe  
 L'elenco completo delle categorie membro è il seguente:  
  
-   [Funzioni membro speciali](special-member-functions.md).  
  
-   [Cenni preliminari sulle funzioni membro](overview-of-member-functions.md).  
  
-   [Membri dati](static-members-cpp.md) inclusi tipi incorporati e altri tipi definiti dal.  
  
-   Operatori  
  
-   [Dichiarazioni di classi annidate](nested-class-declarations.md) e.)  
  
-   [Unioni](unions.md)  
  
-   [Enumerazioni](../cpp/enumerations-cpp.md).  
  
-   [I campi di bit](../cpp/cpp-bit-fields.md).  
  
-   [Elementi Friend](../cpp/friend-cpp.md).  
  
-   [Alias e typedef](../cpp/aliases-and-typedefs-cpp.md).  
  
    > [!NOTE]
    >  Gli elementi friend vengono inclusi nell'elenco precedente perché sono contenuti nella dichiarazione di classe. Non sono tuttavia membri effettivi della classe perché non si trovano nell'ambito della classe.  
  
## <a name="example-class-declaration"></a>Esempi di dichiarazione di classe  
 L'esempio seguente illustra una semplice dichiarazione di classe:  
  
```  
// TestRun.h  
  
class TestRun  
{  
    // Start member list.  
  
    //The class interface accessible to all callers.  
public:  
    // Use compiler-generated default constructor:  
    TestRun() = default;   
    // Don't generate a copy constructor:  
    TestRun(const TestRun&) = delete;    
    TestRun(std::string name);  
    void DoSomething();  
    int Calculate(int a, double d);  
    virtual ~TestRun();  
    enum class State { Active, Suspended };  
  
    // Accessible to this class and derived classes only.  
protected:  
    virtual void Initialize();  
    virtual void Suspend();  
    State GetState();  
  
    // Accessible to this class only.  
private:  
    // Default brace-initialization of instance members:  
    State _state{ State::Suspended };   
    std::string _testName{ "" };   
    int _index{ 0 };  
  
    // Non-const static member:  
    static int _instances;  
    // End member list.  
};  
  
// Define and initialize static member.  
int TestRun::_instances{ 0 };  
```  
  
## <a name="member-accessibility"></a>Accessibilità del membro  
 I membri di una classe vengono dichiarati nell'elenco dei membri. L'elenco dei membri di una classe può essere suddivisa in un numero qualsiasi di `private`, `protected` e **pubblica** sezioni utilizzando parole chiave note come identificatori di accesso.  I due punti **:** deve seguire l'identificatore di accesso.  Queste sezioni non devono essere contigue, ovvero, queste parole chiave possono essere visualizzate diverse volte nell'elenco dei membri.  La parola chiave consente di accedere a tutti i membri fino all'identificatore di accesso successivo o alla parentesi graffa di chiusura. Per ulteriori informazioni, vedere [il controllo di accesso membri (C++)](../cpp/member-access-control-cpp.md).  
  
## <a name="static-members"></a>Membri statici  
 Un membro dati può essere dichiarato come statico, ovvero tutti gli oggetti della classe possono accedere alla stessa copia del membro. Una funzione membro può essere dichiarata come statica, nel qual caso è possibile accedere solo ai membri dati statici della classe (e non ha alcun *questo* puntatore). Per ulteriori informazioni, vedere [membri dati statici](../cpp/static-members-cpp.md).  
  
## <a name="special-member-functions"></a>Funzioni membro speciali  
 Le funzioni membro speciali sono funzioni fornite automaticamente dal compilatore se non vengono specificate nel codice sorgente.  
  
1.  Costruttore predefinito  
  
2.  Costruttore di copia  
  
3.  **(C + + 11) ** Costruttore di spostamento  
  
4.  Operatore di assegnazione di copia  
  
5.  **(C + + 11) ** Operatore di assegnazione di spostamento  
  
6.  Distruttore  
  
Per ulteriori informazioni, vedere [funzioni membro speciali](../cpp/special-member-functions.md).
  
## <a name="memberwise-initialization"></a>Inizializzazione membro per membro  
 In C++11 e versioni successive i dichiaratori di membri non statici possono includere inizializzatori.  
  
```  
  
class CanInit  
{  
public:  
    long num {7};       // OK in C++11  
    int k = 9;          // OK in C++11  
    static int i = 9; // Error: must be defined and initialized  
                      // outside of class declaration.  
  
    // initializes num to 7 and k to 9  
    CanInit(){}  
  
    // overwrites original initialized value of num:  
    CanInit(int val) : num(val) {}  
};  
int main()  
{  
}  
```  
  
 Se a un membro viene assegnato un valore in un costruttore, tale valore sovrascrive il valore con cui il membro è stato inizializzato al momento della dichiarazione.  
  
 Esiste una sola copia condivisa dei membri dei dati statici per tutti gli oggetti di un tipo di classe specifico. I membri dei dati statici devono essere definiti e possono essere inizializzati in ambito file. (Per ulteriori informazioni sui membri dati statici, vedere [membri dati statici](../cpp/static-members-cpp.md).) Nell'esempio riportato di seguito viene mostrato come eseguire queste inizializzazioni.  
  
```  
// class_members2.cpp  
class CanInit2  
{  
public:  
    CanInit2() {} // Initializes num to 7 when new objects of type   
                 //  CanInit are created.  
    long     num {7};  
    static int i;  
    static int j;  
};  
  
// At file scope:  
  
// i is defined at file scope and initialized to 15.  
// The initializer is evaluated in the scope of CanInit.  
int CanInit2::i = 15;  
  
// The right side of the initializer is in the scope   
// of the object being initialized  
int CanInit2::j = i;  
```  
  
> [!NOTE]
>  Il nome della classe, `CanInit2`, deve precedere `i` per specificare che `i` da definire è un membro della classe `CanInit2`.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi e struct](../cpp/classes-and-structs-cpp.md)

