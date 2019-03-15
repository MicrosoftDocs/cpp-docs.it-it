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
ms.openlocfilehash: ec2b8c8fb4c7730a78c4403606d6fa61c0ddc374
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57810016"
---
# <a name="zcimplicitnoexcept-implicit-exception-specifiers"></a>/Zc:implicitNoexcept (identificatori di eccezioni implicite)

Quando la **/Zc: implicitnoexcept** opzione è specificata, il compilatore aggiunge implicita [noexcept](../../cpp/noexcept-cpp.md) identificatore di eccezione per le funzioni membro speciali definita dal compilatore e i distruttori definiti dall'utente e deallocatori. Per impostazione predefinita **/Zc: implicitnoexcept** è abilitata in modo conforme allo standard c++11 ISO. La disattivazione di questa opzione disabilita l'eccezione `noexcept` implicita in distruttori e deallocatori definiti dall'utente e in speciali funzioni membro definite dal compilatore.

## <a name="syntax"></a>Sintassi

> **/Zc:implicitNoexcept**[**-**]

## <a name="remarks"></a>Note

**/Zc: implicitnoexcept** indica al compilatore di attenersi alla sezione 15.4 dello standard c++11 ISO. Viene aggiunta implicitamente un `noexcept` dell'identificatore di eccezione per ogni funzione membro speciale dichiarata implicitamente o esplicitamente impostate come predefinite, ovvero il costruttore predefinito, copiare costruttore, costruttore di spostamento, distruttore, operatore di assegnazione di copia o assegnazione di spostamento operatore: e ogni funzione distruttore o deallocatore definita dall'utente. Un deallocatore definito dall'utente ha un identificatore di eccezione `noexcept(true)` implicita. Per i distruttori definiti dall'utente, l'identificatore di eccezione implicita è `noexcept(true)`, a meno che una classe di membro contenuta o una classe di base non abbia un distruttore diverso da `noexcept(true)`. Per le speciali funzioni membro generate dal compilatore, se una funzione richiamata direttamente da questa funzione è effettivamente `noexcept(false)`, l'identificatore di eccezione implicita è `noexcept(false)`. In caso contrario, l'identificatore di eccezione implicita è `noexcept(true)`.

Il compilatore non genera un identificatore di eccezione implicita per le funzioni dichiarate usando gli identificatori `noexcept` o `throw` espliciti o un attributo `__declspec(nothrow)`.

Per impostazione predefinita **/Zc: implicitnoexcept** è abilitata. Il [/PERMISSIVE--](permissive-standards-conformance.md) opzione non riguarda **/Zc: implicitnoexcept**.

Se l'opzione è disabilitata, specificando **/Zc**, non gli identificatori di eccezioni implicite sono generati dal compilatore. Questo comportamento è identico in Visual Studio 2013, dove i distruttori e i deallocatori senza identificatori di eccezione possono avere istruzioni `throw`. Per impostazione predefinita e il momento **/Zc: implicitnoexcept** è specificato, se un `throw` viene rilevata l'istruzione in fase di esecuzione in una funzione con implicita `noexcept(true)` identificatore, effettuata una chiamata immediata di `std::terminate`, e comportamento di rimozione normale per i gestori di eccezioni non è garantito. Per identificare questa situazione, il compilatore genera [avviso del compilatore (livello 1) C4297](../../error-messages/compiler-warnings/compiler-warning-level-1-c4297.md). Se il `throw` è intenzionale, si consiglia di modificare la dichiarazione di funzione per avere esplicita `noexcept(false)` identificatore invece di usare **/Zc**.

Questo esempio viene illustrato come si comporta un distruttore definito dall'utente che non dispone di alcun identificatore di eccezione esplicita quando la **/Zc: implicitnoexcept** opzione è impostata o disabilitato. Viene illustrato il comportamento quando è impostato, esegue la compilazione usando `cl /EHsc /W4 implicitNoexcept.cpp`. Per mostrare il comportamento quando è disabilitata, esegue la compilazione usando `cl /EHsc /W4 /Zc:implicitNoexcept- implicitNoexcept.cpp`.

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

Quando viene compilato usando l'impostazione predefinita **/Zc: implicitnoexcept**, l'esempio genera questo output:

```Output
~B Exception caught
Unexpected throw caused std::terminate
Exit returning EXIT_FAILURE
```

Quando viene compilato usando l'impostazione **/Zc**, l'esempio genera questo output:

```Output
~B Exception caught
~D Exception caught
Exit returning EXIT_SUCCESS
```

Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **della riga di comando** pagina delle proprietà.

1. Modificare il **opzioni aggiuntive** proprietà da includere **/Zc: implicitnoexcept** oppure **/Zc** e quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[/Zc (conformità)](zc-conformance.md)<br/>
[noexcept](../../cpp/noexcept-cpp.md)<br/>
[Specifiche di eccezione (generazione)](../../cpp/exception-specifications-throw-cpp.md)<br/>
[terminate](../../standard-library/exception-functions.md#terminate)<br/>
