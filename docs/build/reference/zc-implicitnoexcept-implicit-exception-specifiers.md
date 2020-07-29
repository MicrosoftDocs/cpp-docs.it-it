---
title: /Zc:implicitNoexcept (identificatori di eccezioni implicite)
ms.date: 03/06/2018
f1_keywords:
- /Zc:implicitNoexcept
helpviewer_keywords:
- /Zc:implicitNoexcept
- Zc:implicitNoexcept
- -Zc:implicitNoexcept
ms.assetid: 71807652-6f9d-436b-899e-f52daa6f500b
ms.openlocfilehash: bb1a632ffe684ac0777d0089a2edfd514bf66d0b
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87223798"
---
# <a name="zcimplicitnoexcept-implicit-exception-specifiers"></a>/Zc:implicitNoexcept (identificatori di eccezioni implicite)

Quando si specifica l'opzione **/Zc: implicitNoexcept** , il compilatore aggiunge un identificatore di eccezione [noexcept](../../cpp/noexcept-cpp.md) implicito alle funzioni membro speciali definite dal compilatore e ai distruttori e ai deallocatori definiti dall'utente. Per impostazione predefinita, **/Zc: implicitNoexcept** è abilitato per la conformità allo standard ISO c++ 11. La disattivazione di questa opzione Disabilita implicita **`noexcept`** in distruttori definiti dall'utente e deallocatori e funzioni membro speciali definite dal compilatore.

## <a name="syntax"></a>Sintassi

> **/Zc: implicitNoexcept**[ **-** ]

## <a name="remarks"></a>Osservazioni

**/Zc: implicitNoexcept** indica al compilatore di seguire la sezione 15,4 dello standard ISO c++ 11. Viene aggiunto implicitamente un **`noexcept`** identificatore di eccezione a ciascuna funzione membro speciale dichiarata in modo implicito o esplicitamente predefinita, ovvero il costruttore predefinito, il costruttore di copia, il costruttore di spostamento, il distruttore, l'operatore di assegnazione di copia o l'operatore di assegnazione di spostamento e ogni funzione di deallocatore o distruttore definito dall'utente. Un deallocatore definito dall'utente ha un identificatore di eccezione `noexcept(true)` implicita. Per i distruttori definiti dall'utente, l'identificatore di eccezione implicita è `noexcept(true)`, a meno che una classe di membro contenuta o una classe di base non abbia un distruttore diverso da `noexcept(true)`. Per le speciali funzioni membro generate dal compilatore, se una funzione richiamata direttamente da questa funzione è effettivamente `noexcept(false)`, l'identificatore di eccezione implicita è `noexcept(false)`. In caso contrario, l'identificatore di eccezione implicita è `noexcept(true)`.

Il compilatore non genera un identificatore di eccezione implicita per le funzioni dichiarate tramite gli **`noexcept`** identificatori o espliciti **`throw`** o un `__declspec(nothrow)` attributo.

Per impostazione predefinita, **/Zc: implicitNoexcept** è abilitato. L'opzione [/permissive-](permissive-standards-conformance.md) non influisce su **/Zc: implicitNoexcept**.

Se l'opzione è disabilitata specificando **/Zc: implicitNoexcept-**, il compilatore non genera identificatori di eccezione impliciti. Questo comportamento è identico a Visual Studio 2013, in cui i distruttori e i deallocatori che non hanno identificatori di eccezione potrebbero avere **`throw`** istruzioni. Per impostazione predefinita, e quando viene specificato **/Zc: implicitNoexcept** , se un' **`throw`** istruzione viene rilevata in fase di esecuzione in una funzione con un identificatore implicito `noexcept(true)` , causa una chiamata immediata a `std::terminate` e non è garantito il normale comportamento di rimozione per i gestori di eccezioni. Per identificare questa situazione, il compilatore genera un [Avviso del compilatore (livello 1) C4297](../../error-messages/compiler-warnings/compiler-warning-level-1-c4297.md). Se **`throw`** è intenzionale, è consigliabile modificare la dichiarazione di funzione per avere un identificatore esplicito `noexcept(false)` invece di usare **/Zc: implicitNoexcept-**.

Questo esempio mostra in che modo un distruttore definito dall'utente privo di identificatore di eccezione esplicito si comporta quando l'opzione **/Zc: implicitNoexcept** è impostata o disabilitata. Per visualizzare il comportamento durante l'impostazione, compilare utilizzando `cl /EHsc /W4 implicitNoexcept.cpp` . Per visualizzare il comportamento quando è disabilitato, compilare utilizzando `cl /EHsc /W4 /Zc:implicitNoexcept- implicitNoexcept.cpp` .

```cpp
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

Quando viene compilato usando l'impostazione predefinita **/Zc: implicitNoexcept**, l'esempio genera questo output:

```Output
~B Exception caught
Unexpected throw caused std::terminate
Exit returning EXIT_FAILURE
```

Quando viene compilato usando l'impostazione **/Zc: implicitNoexcept-**, l'esempio genera questo output:

```Output
~B Exception caught
~D Exception caught
Exit returning EXIT_SUCCESS
```

Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione**proprietà della riga di comando di  >  **c/C++**  >  **Command Line** .

1. Modificare la proprietà **Opzioni aggiuntive** in modo da includere **/Zc: implicitNoexcept** o **/Zc: implicitNoexcept,** quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[/Zc (Conformità)](zc-conformance.md)<br/>
[noexcept](../../cpp/noexcept-cpp.md)<br/>
[Specifiche di eccezione (throw)](../../cpp/exception-specifications-throw-cpp.md)<br/>
[terminare](../../standard-library/exception-functions.md#terminate)<br/>
