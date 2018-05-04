---
title: '/Zc: implicitnoexcept (identificatori di eccezioni implicite) | Documenti Microsoft'
ms.custom: ''
ms.date: 03/06/2018
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /Zc:implicitNoexcept
dev_langs:
- C++
helpviewer_keywords:
- /Zc:implicitNoexcept
- Zc:implicitNoexcept
- -Zc:implicitNoexcept
ms.assetid: 71807652-6f9d-436b-899e-f52daa6f500b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7e420017056d6857a2809ce6eb85fe99b6f3866f
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="zcimplicitnoexcept-implicit-exception-specifiers"></a>/Zc:implicitNoexcept (identificatori di eccezioni implicite)

Quando il **/Zc: implicitnoexcept** è specificata l'opzione, il compilatore aggiunge implicita [noexcept](../../cpp/noexcept-cpp.md) identificatore di eccezione per le funzioni membro speciali definite dal compilatore e i distruttori definiti dall'utente e deallocatori. Per impostazione predefinita, **/Zc: implicitnoexcept** è abilitata in modo conforme a ISO C++ 11 standard. La disattivazione di questa opzione disabilita l'eccezione `noexcept` implicita in distruttori e deallocatori definiti dall'utente e in speciali funzioni membro definite dal compilatore.

## <a name="syntax"></a>Sintassi

> **/Zc:implicitNoexcept**[**-**]

## <a name="remarks"></a>Note

**/Zc: implicitnoexcept** indica al compilatore di seguire sezione 15.4 dello standard c++11 ISO. Aggiunge in modo implicito un `noexcept` identificatore di eccezione per ogni funzione membro speciale dichiarata implicitamente o esplicitamente impostati come predefiniti, ovvero il costruttore predefinito, copiare costruttore, costruttore di spostamento, distruttore, operatore di assegnazione di copia o assegnazione di spostamento operatore: e ogni funzione distruttore o deallocatore definita dall'utente. Un deallocatore definito dall'utente ha un identificatore di eccezione `noexcept(true)` implicita. Per i distruttori definiti dall'utente, l'identificatore di eccezione implicita è `noexcept(true)`, a meno che una classe di membro contenuta o una classe di base non abbia un distruttore diverso da `noexcept(true)`. Per le speciali funzioni membro generate dal compilatore, se una funzione richiamata direttamente da questa funzione è effettivamente `noexcept(false)`, l'identificatore di eccezione implicita è `noexcept(false)`. In caso contrario, l'identificatore di eccezione implicita è `noexcept(true)`.

Il compilatore non genera un identificatore di eccezione implicita per le funzioni dichiarate usando gli identificatori `noexcept` o `throw` espliciti o un attributo `__declspec(nothrow)`.

Per impostazione predefinita **/Zc: implicitnoexcept** è abilitata. Il [/ permissiva-](permissive-standards-conformance.md) opzione non influisce sul **/Zc: implicitnoexcept**.

Se l'opzione è disabilitata specificando **/Zc:implicitNoexcept-**, gli identificatori di eccezione implicita non vengono generati dal compilatore. Questo comportamento è identico in Visual Studio 2013, dove i distruttori e i deallocatori senza identificatori di eccezione possono avere istruzioni `throw`. Per impostazione predefinita e quando **/Zc: implicitnoexcept** è specificato, se un `throw` viene rilevata l'istruzione in fase di esecuzione in una funzione con implicita `noexcept(true)` identificatore, fa sì che una chiamata immediata di `std::terminate`, e non è garantito normale comportamento di rimozione per gestori di eccezioni. Per identificare questa situazione, il compilatore genera [avviso del compilatore (livello 1) C4297](../../error-messages/compiler-warnings/compiler-warning-level-1-c4297.md). Se il `throw` è intenzionale, si consiglia di modificare la dichiarazione di funzione per avere un attributo esplicito `noexcept(false)` identificatore anziché **/Zc:implicitNoexcept-**.

Questo esempio viene illustrato come si comporta un distruttore definito dall'utente che non dispone di alcun identificatore di eccezione esplicita quando la **/Zc: implicitnoexcept** opzione è impostata o è disabilitato. Viene illustrato il comportamento quando è impostato, esegue la compilazione con `cl /EHsc /W4 implicitNoexcept.cpp`. Per visualizzare il comportamento quando è disabilitata, esegue la compilazione con `cl /EHsc /W4 /Zc:implicitNoexcept- implicitNoexcept.cpp`.

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

Quando viene compilato utilizzando l'impostazione predefinita **/Zc: implicitnoexcept**, l'esempio genera questo output:

```Output
~B Exception caught
Unexpected throw caused std::terminate
Exit returning EXIT_FAILURE
```

Quando viene compilato tramite l'impostazione **/Zc:implicitNoexcept-**, l'esempio genera questo output:

```Output
~B Exception caught
~D Exception caught
Exit returning EXIT_SUCCESS
```

Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **riga di comando** pagina delle proprietà.

1. Modificare il **opzioni aggiuntive** proprietà da includere **/Zc: implicitnoexcept** o **/Zc:implicitNoexcept-** e quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[/Zc (conformità)](../../build/reference/zc-conformance.md)<br/>
[noexcept](../../cpp/noexcept-cpp.md)<br/>
[Specifiche di eccezione (generazione)](../../cpp/exception-specifications-throw-cpp.md)<br/>
[terminate](../../standard-library/exception-functions.md#terminate)<br/>
