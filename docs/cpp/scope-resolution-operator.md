---
title: "Operatore di risoluzione dell'ambito: `::`"
description: Informazioni sul funzionamento dell'operatore di risoluzione dell'ambito `::` in C++ standard.
ms.date: 12/06/2020
f1_keywords:
- '::'
helpviewer_keywords:
- scope, scope resolution operator
- operators [C++], scope resolution
- scope resolution operator
- ':: operator'
ms.openlocfilehash: ff774d9fcca9f68cb2925af82c55ef438ab4d71a
ms.sourcegitcommit: 7b131db4ed39bddb4a456ebea402f47c5cbd69d3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/07/2020
ms.locfileid: "96776531"
---
# <a name="scope-resolution-operator-"></a>Operatore di risoluzione dell'ambito: `::`

L'operatore di risoluzione dell'ambito **`::`** viene usato per identificare e risolvere le ambiguità degli identificatori usati in ambiti diversi. Per ulteriori informazioni sull'ambito, vedere [ambito](../cpp/scope-visual-cpp.md).

## <a name="syntax"></a>Sintassi

> *`qualified-id`*:\
> &emsp;*`nested-name-specifier`***`template`** <sub>consenso esplicito</sub>*`unqualified-id`*

> *`nested-name-specifier`*:\
> &emsp;**`::`**\
> &emsp;*`type-name`* **`::`**\
> &emsp;*`namespace-name`* **`::`**\
> &emsp;*`decltype-specifier`* **`::`**\
> &emsp;*`nested-name-specifier`* *`identifier`* **`::`**\
> &emsp;*`nested-name-specifier`***`template`** <sub>consenso esplicito</sub> *`simple-template-id`***`::`**

> *`unqualified-id`*:\
> &emsp;*`identifier`*\
> &emsp;*`operator-function-id`*\
> &emsp;*`conversion-function-id`*\
> &emsp;*`literal-operator-id`*\
> &emsp;**`~`** *`type-name`*\
> &emsp;**`~`** *`decltype-specifier`*\
> &emsp;*`template-id`*

## <a name="remarks"></a>Commenti

`identifier` può essere una variabile una funzione oppure un valore di enumerazione.

## <a name="use--for-classes-and-namespaces"></a>`::`Da usare per classi e spazi dei nomi

L'esempio seguente mostra in che modo l'operatore di risoluzione dell'ambito viene usato con gli spazi dei nomi e le classi:

```cpp
namespace NamespaceA{
    int x;
    class ClassA {
    public:
        int x;
    };
}

int main() {

    // A namespace name used to disambiguate
    NamespaceA::x = 1;

    // A class name used to disambiguate
    NamespaceA::ClassA a1;
    a1.x = 2;
}
```

Un operatore di risoluzione dell'ambito senza un qualificatore dell'ambito fa riferimento allo spazio dei nomi globale.

```cpp
namespace NamespaceA{
    int x;
}

int x;

int main() {
    int x;

    // the x in main()
    x = 0;
    // The x in the global namespace
    ::x = 1;

    // The x in the A namespace
    NamespaceA::x = 2;
}
```

È possibile utilizzare l'operatore di risoluzione dell'ambito per identificare un membro di un oggetto **`namespace`** o per identificare uno spazio dei nomi che designa lo spazio dei nomi del membro in una **`using`** direttiva. Nell'esempio seguente, è possibile usare `NamespaceC` per qualificare `ClassB` , anche se `ClassB` è stato dichiarato nello spazio dei nomi `NamespaceB` , perché `NamespaceB` è stato nominato `NamespaceC` da una **`using`** direttiva.

```cpp
namespace NamespaceB {
    class ClassB {
    public:
        int x;
    };
}

namespace NamespaceC{
    using namespace NamespaceB;
}

int main() {
    NamespaceB::ClassB b_b;
    NamespaceC::ClassB c_b;

    b_b.x = 3;
    c_b.x = 4;
}
```

È possibile usare catene di operatori di risoluzione dell'ambito. Nell'esempio seguente, `NamespaceD::NamespaceD1` identifica lo spazio dei nomi annidato `NamespaceD1` e `NamespaceE::ClassE::ClassE1` identifica la classe annidata `ClassE1`.

```cpp
namespace NamespaceD{
    namespace NamespaceD1{
        int x;
    }
}

namespace NamespaceE{
    class ClassE{
    public:
        class ClassE1{
        public:
            int x;
        };
    };
}

int main() {
    NamespaceD:: NamespaceD1::x = 6;
    NamespaceE::ClassE::ClassE1 e1;
    e1.x = 7  ;
}
```

## <a name="use--for-static-members"></a>`::`Da usare per i membri statici

Per chiamare i membri statici delle classi è necessario usare l'operatore di risoluzione dell'ambito.

```cpp
class ClassG {
public:
    static int get_x() { return x;}
    static int x;
};

int ClassG::x = 6;

int main() {

    int gx1 = ClassG::x;
    int gx2 = ClassG::get_x();
}
```

## <a name="use--for-scoped-enumerations"></a>Usare `::` per enumerazioni con ambito

L'operatore di risoluzione con ambito viene usato anche con i valori di una dichiarazione di [enumerazione](../cpp/enumerations-cpp.md)di enumerazione con ambito, come nell'esempio seguente:

```cpp
enum class EnumA{
    First,
    Second,
    Third
};

int main() {
    EnumA enum_value = EnumA::First;
}
```

## <a name="see-also"></a>Vedi anche

[Operatori, precedenza e associatività predefiniti di C++](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Namespaces](../cpp/namespaces-cpp.md) (Spazi dei nomi)
