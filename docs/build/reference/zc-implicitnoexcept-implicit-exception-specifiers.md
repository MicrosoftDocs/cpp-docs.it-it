---
title: "/Zc:implicitNoexcept (identificatori di eccezioni implicite) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/Zc:implicitNoexcept"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Zc:implicitNoexcept"
  - "Zc:implicitNoexcept"
  - "-Zc:implicitNoexcept"
ms.assetid: 71807652-6f9d-436b-899e-f52daa6f500b
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# /Zc:implicitNoexcept (identificatori di eccezioni implicite)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Quando l'opzione **\/Zc:implicitNoexcept** è specificata, il compilatore aggiunge un identificatore di eccezione [noexcept](../../cpp/noexcept-cpp.md) implicita a speciali funzioni membro definite dal compilatore e a distruttori e deallocatori definiti dall'utente.  Per impostazione predefinita, **\/Zc:implicitNoexcept** è abilitata in modo conforme allo standard ISO C\+\+11.  La disattivazione di questa opzione disabilita l'eccezione `noexcept` implicita in distruttori e deallocatori definiti dall'utente e in speciali funzioni membro definite dal compilatore.  
  
## Sintassi  
  
```vb  
/Zc:implicitNoexcept[-]  
```  
  
#### Parametri  
  
## Note  
 Per impostazione predefinita e se **\/Zc:implicitNoexcept** è specificata, il compilatore segue la sezione 15.4 dello standard ISO C\+\+11 e aggiunge in modo implicito un identificatore di eccezione `noexcept` a ogni speciale funzione membro dichiarata implicitamente o impostata esplicitamente come predefinita \(costruttore predefinito, costruttore di copia, costruttore di spostamento, distruttore, operatore di assegnazione di copia o operatore di assegnazione di spostamento\) e a ogni funzione distruttore o deallocatore definita dall'utente.  Un deallocatore definito dall'utente ha un identificatore di eccezione `noexcept(true)` implicita.  Per i distruttori definiti dall'utente, l'identificatore di eccezione implicita è `noexcept(true)`, a meno che una classe di membro contenuta o una classe di base non abbia un distruttore diverso da `noexcept(true)`.  Per le speciali funzioni membro generate dal compilatore, se una funzione richiamata direttamente da questa funzione è effettivamente `noexcept(false)`, l'identificatore di eccezione implicita è `noexcept(false)`.  In caso contrario, l'identificatore di eccezione implicita è `noexcept(true)`.  
  
 Il compilatore non genera un identificatore di eccezione implicita per le funzioni dichiarate usando gli identificatori `noexcept` o `throw` espliciti o un attributo `__declspec(nothrow)`.  
  
 Se l'opzione viene disabilitata specificando **\/Zc:implicitNoexcept\-**, nessun identificatore di eccezione implicita viene generato dal compilatore.  Questo comportamento è identico in Visual Studio 2013, dove i distruttori e i deallocatori senza identificatori di eccezione possono avere istruzioni `throw`.  Per impostazione predefinita e quando **\/Zc:implicitNoexcept** è specificata, se un'istruzione `throw` viene rilevata in fase di esecuzione in una funzione con un identificatore `noexcept(true)` implicito, viene effettuata una chiamata immediata di `std::terminate` e non è garantito il normale comportamento di rimozione per i gestori di eccezioni.  Per permettere di identificare questa situazione, il compilatore genera l'[Avviso del compilatore \(livello 1\) C4297](../../error-messages/compiler-warnings/compiler-warning-level-1-c4297.md).  Se `throw` è intenzionale, è consigliabile modificare la dichiarazione di funzione per disporre di un identificatore `noexcept(false)` esplicito invece di usare **\/Zc:implicitNoexcept\-**.  
  
 Questo esempio mostra il comportamento di un distruttore definito dall'utente senza identificatori di eccezione esplicita quando l'opzione **\/Zc:implicitNoexcept** è impostata o è disabilitato.  Per mostrare il comportamento quando è impostata, eseguire la compilazione usando `cl /EHsc /W4 implicitNoexcept.cpp`.  Per mostrare il comportamento quando è disabilitata, eseguire la compilazione usando `cl /EHsc /W4 /Zc:implicitNoexcept- implicitNoexcept.cpp`.  
  
```  
// implicitNoexcept.cpp  
// Compile by using: cl /EHsc /W4 implicitNoexcept.cpp  
// Compile by using: cl /EHsc /W4 /Zc:implicitNoexcept- implicitNoexcept.cpp  
  
#include <iostream>  
#include <cstdlib>      // for std::exit, EXIT_FAILURE, EXIT_SUCCESS  
#include <exception>    // for std::set_terminate  
  
void my_terminate()  
{  
    std::cout << "Unexpected throw caused std::terminate" << std::endl;  
    std::cout << "Exit returning EXIT_FAILURE" << std::endl;  
    std::exit(EXIT_FAILURE);  
}  
  
struct A {  
    // Explicit noexcept overrides implicit exception specification  
    ~A() noexcept(false) {  
        throw 1;  
    }  
};  
  
struct B : public A {  
    // Compiler-generated ~B() definition inherits noexcept(false)  
    ~B() = default;  
};  
  
struct C {  
    // By default, the compiler generates an implicit noexcept(true)  
    // specifier for this user-defined destructor. To enable it to  
    // throw an exception, use an explicit noexcept(false) specifier,  
    // or compile by using /Zc:implicitNoexcept-  
    ~C() {    
        throw 1; // C4297, calls std::terminate() at run time  
    }  
};  
  
struct D : public C {  
    // This destructor gets the implicit specifier of its base.  
    ~D() = default;  
};  
  
int main()  
{  
    std::set_terminate(my_terminate);  
  
    try  
    {  
        {  
            B b;   
        }  
    }  
    catch (...)  
    {  
        // exception should reach here in all cases  
        std::cout << "~B Exception caught" << std::endl;  
    }  
    try  
    {  
        {  
            D d;  
        }  
    }  
    catch (...)  
    {  
        // exception should not reach here if /Zc:implicitNoexcept  
        std::cout << "~D Exception caught" << std::endl;  
    }  
    std::cout << "Exit returning EXIT_SUCCESS" << std::endl;  
    return EXIT_SUCCESS;  
}  
  
```  
  
 Quando la compilazione viene eseguita usando l'impostazione predefinita **\/Zc:implicitNoexcept**, l'esempio genera questo output:  
  
  **~B Exception caught**  
**Unexpected throw caused std::terminate**  
**Exit returning EXIT\_FAILURE** Quando la compilazione viene eseguita usando l'impostazione **\/Zc:implicitNoexcept\-**, l'esempio genera questo output:  
  
  **~B Exception caught**  
**~D Exception caught**  
**Exit returning EXIT\_SUCCESS** Per altre informazioni sui problemi di conformità in Visual C\+\+, vedere [Comportamento non standard](../../cpp/nonstandard-behavior.md).  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **C\/C\+\+**.  
  
3.  Selezionare la pagina delle proprietà **Riga di comando**.  
  
4.  Modificare la proprietà **Opzioni aggiuntive** in modo da includere **\/Zc:implicitNoexcept** o **\/Zc:implicitNoexcept\-** e quindi fare clic su **OK**.  
  
## Vedere anche  
 [\/Zc \(Conformità\)](../../build/reference/zc-conformance.md)   
 [noexcept](../../cpp/noexcept-cpp.md)   
 [Specifiche di eccezioni \(generazione\)](../../cpp/exception-specifications-throw-cpp.md)   
 [terminate](../Topic/terminate%20\(%3Cexception%3E\).md)