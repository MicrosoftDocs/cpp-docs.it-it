---
title: Supporto del compilatore per caratteristiche di tipo (C++/CLI e C++/CX)
ms.date: 10/12/2018
ms.topic: reference
f1_keywords:
- __is_simple_value_class
- __has_trivial_destructor
- __has_assign
- __is_union
- __is_class
- __is_abstract
- __has_trivial_assign
- __has_virtual_destructor
- __is_ref_array
- __is_base_of
- __has_copy
- __is_polymorphic
- __has_nothrow_constructor
- __is_ref_class
- __is_delegate
- __is_convertible_to
- __is_value_class
- __is_interface_class
- __has_nothrow_copy
- __is_sealed
- __has_trivial_constructor
- __has_trivial_copy
- __is_enum
- __has_nothrow_assign
- __has_finalizer
- __is_empty
- __is_pod
- __has_user_destructor
helpviewer_keywords:
- __is_class keyword [C++]
- __is_pod keyword [C++]
- __is_delegate keyword [C++]
- __is_value_class keyword [C++]
- __has_copy keyword [C++]
- __has_nothrow_copy keyword [C++]
- __is_interface_class keyword [C++]
- __is_sealed keyword [C++]
- __is_convertible_to keyword [C++]
- __is_ref_class keyword [C++]
- __has_trivial_copy keyword [C++]
- __has_user_destructor keyword [C++]
- __is_abstract keyword [C++]
- __is_empty keyword [C++]
- __has_trivial_assign keyword [C++]
- __has_nothrow_constructor keyword [C++]
- __is_ref_array keyword [C++]
- __is_base_of keyword [C++]
- __has_nothrow_assign keyword [C++]
- __has_virtual_destructor keyword [C++]
- __has_finalizer keyword [C++]
- __is_union keyword [C++]
- __has_assign keyword [C++]
- __has_trivial_destructor keyword [C++]
- __is_polymorphic keyword [C++]
- __is_enum keyword [C++]
- __is_simple_value_class keyword [C++]
- __has_trivial_constructor keyword [C++]
ms.assetid: cd440630-0394-48c0-a16b-1580b6ef5844
ms.openlocfilehash: 16c79e05c6ba6f50a3e6c0d6dd5f48963be40fa8
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87219781"
---
# <a name="compiler-support-for-type-traits-ccli-and-ccx"></a>Supporto del compilatore per caratteristiche di tipo (C++/CLI e C++/CX)

Il compilatore Microsoft C++ supporta le *caratteristiche di tipo* per estensioni C++/CLI e C++/CX, che indicano diverse caratteristiche di un tipo in fase di compilazione.

## <a name="all-runtimes"></a>Tutti i runtime

### <a name="remarks"></a>Osservazioni

Tratti di tipo sono particolarmente utili per i programmatori che scrivono librerie.

L'elenco seguente contiene le caratteristiche di tipo supportate dal compilatore. Tutti i tratti di tipo restituiscono **`false`** se la condizione specificata dal nome del tratto di tipo non viene soddisfatta.

Nell'elenco seguente gli esempi di codice sono scritti solo in C++/CLI. Tuttavia, la caratteristica di tipo corrispondente è anche supportata in C++/CX, se non specificato diversamente. Il termine "tipo piattaforma" fa riferimento ai tipi Windows Runtime o Common Language Runtime.

- `__has_assign(` *type* `)`

   Restituisce **`true`** se la piattaforma o il tipo nativo ha un operatore di assegnazione di copia.

    ```cpp
    ref struct R {
    void operator=(R% r) {}
    };

    int main() {
    System::Console::WriteLine(__has_assign(R));
    }
    ```

- `__has_copy(` *type* `)`

   Restituisce **`true`** se la piattaforma o il tipo nativo ha un costruttore di copia.

    ```cpp
    ref struct R {
    R(R% r) {}
    };

    int main() {
    System::Console::WriteLine(__has_copy(R));
    }
    ```

- `__has_finalizer(` *type* `)`

   (Non supportato in C++/CX.) Restituisce **`true`** se il tipo CLR dispone di un finalizzatore. Per ulteriori informazioni, vedere [distruttori e finalizzatori in procedura: definire e utilizzare classi e struct (C++/CLI)](../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers) .

    ```cpp
    using namespace System;
    ref struct R {
    ~R() {}
    protected:
    !R() {}
    };

    int main() {
    Console::WriteLine(__has_finalizer(R));
    }
    ```

- `__has_nothrow_assign(` *type* `)`

   Restituisce **`true`** se un operatore di assegnazione di copia ha una specifica di eccezione vuota.

    ```cpp
    #include <stdio.h>
    struct S {
    void operator=(S& r) throw() {}
    };

    int main() {
    __has_nothrow_assign(S) == true ?
    printf("true\n") : printf("false\n");
    }
    ```

- `__has_nothrow_constructor(` *type* `)`

   Restituisce **`true`** se il costruttore predefinito ha una specifica di eccezione vuota.

    ```cpp
    #include <stdio.h>
    struct S {
    S() throw() {}
    };

    int main() {
    __has_nothrow_constructor(S) == true ?
    printf("true\n") : printf("false\n");
    }
    ```

- `__has_nothrow_copy(` *type* `)`

   Restituisce **`true`** se il costruttore di copia ha una specifica di eccezione vuota.

    ```cpp
    #include <stdio.h>
    struct S {
    S(S& r) throw() {}
    };

    int main() {
    __has_nothrow_copy(S) == true ?
    printf("true\n") : printf("false\n");
    }
    ```

- `__has_trivial_assign(` *type* `)`

   Restituisce **`true`** se il tipo ha un operatore di assegnazione semplice generato dal compilatore.

    ```cpp
    #include <stdio.h>
    struct S {};

    int main() {
    __has_trivial_assign(S) == true ?
    printf("true\n") : printf("false\n");
    }
    ```

- `__has_trivial_constructor(` *type* `)`

   Restituisce **`true`** se il tipo ha un costruttore semplice generato dal compilatore.

    ```cpp
    #include <stdio.h>
    struct S {};

    int main() {
    __has_trivial_constructor(S) == true ?
    printf("true\n") : printf("false\n");
    }
    ```

- `__has_trivial_copy(` *type* `)`

   Restituisce **`true`** se il tipo ha un costruttore di copia semplice e generato dal compilatore.

    ```cpp
    #include <stdio.h>
    struct S {};

    int main() {
    __has_trivial_copy(S) == true ?
    printf("true\n") : printf("false\n");
    }
    ```

- `__has_trivial_destructor(` *type* `)`

   Restituisce **`true`** se il tipo ha un distruttore semplice generato dal compilatore.

    ``` cpp
    // has_trivial_destructor.cpp
    #include <stdio.h>
    struct S {};

    int main() {
    __has_trivial_destructor(S) == true ?
    printf("true\n") : printf("false\n");
    }
    ```

- `__has_user_destructor(` *type* `)`

   Restituisce **`true`** se la piattaforma o il tipo nativo ha un distruttore dichiarato dall'utente.

    ```cpp
    // has_user_destructor.cpp

    using namespace System;
    ref class R {
    ~R() {}
    };

    int main() {
    Console::WriteLine(__has_user_destructor(R));
    }
    ```

- `__has_virtual_destructor(` *type* `)`

   Restituisce **`true`** se il tipo ha un distruttore virtuale.

   `__has_virtual_destructor` funziona anche su tipi di piattaforma e gli eventuali distruttori definiti dall'utente in un tipo di piattaforma sono distruttori virtuali.

    ```cpp
    // has_virtual_destructor.cpp
    #include <stdio.h>
    struct S {
    virtual ~S() {}
    };

    int main() {
    __has_virtual_destructor(S) == true ?
    printf("true\n") : printf("false\n");
    }
    ```

- `__is_abstract(` *type* `)`

   Restituisce **`true`** se il tipo è un tipo astratto. Per altre informazioni sui tipi astratti nativi, vedere [Classi astratte](../cpp/abstract-classes-cpp.md).

   `__is_abstract` funziona anche per i tipi di piattaforma. Un'interfaccia con almeno un membro è un tipo astratto perché è un tipo riferimento con almeno un membro astratto. Per altre informazioni sui tipi piattaforma astratti, vedere [abstract](abstract-cpp-component-extensions.md).

    ```cpp
    // is_abstract.cpp
    #include <stdio.h>
    struct S {
    virtual void Test() = 0;
    };

    int main() {
    __is_abstract(S) == true ?
    printf("true\n") : printf("false\n");
    }
    ```

- `__is_base_of(` `base` `,` `derived` `)`

   Restituisce **`true`** se il primo tipo è una classe di base del secondo tipo, di se entrambi i tipi sono uguali.

   `__is_base_of` funziona anche sui tipi di piattaforma. Ad esempio, verrà restituito **`true`** se il primo tipo è una [classe di interfaccia](interface-class-cpp-component-extensions.md) e il secondo tipo implementa l'interfaccia.

    ```cpp
    // is_base_of.cpp
    #include <stdio.h>
    struct S {};
    struct T : public S {};

    int main() {
    __is_base_of(S, T) == true ?
    printf("true\n") : printf("false\n");

    __is_base_of(S, S) == true ?
    printf("true\n") : printf("false\n");
    }
    ```

- `__is_class(` *type* `)`

   Restituisce **`true`** se il tipo è una classe o uno struct nativo.

    ```cpp
    #include <stdio.h>
    struct S {};

    int main() {
    __is_class(S) == true ?
    printf("true\n") : printf("false\n");
    }
    ```

- `__is_convertible_to(` `from` `,`  `to` `)`

   Restituisce **`true`** se il primo tipo può essere convertito nel secondo tipo.

    ```cpp
    #include <stdio.h>
    struct S {};
    struct T : public S {};

    int main() {
    S * s = new S;
    T * t = new T;
    s = t;
    __is_convertible_to(T, S) == true ?
    printf("true\n") : printf("false\n");
    }
    ```

- `__is_delegate(` *type* `)`

   Restituisce **`true`** se `type` è un delegato. Per altre informazioni, vedere [delegate (C++/CLI e C++/CX)](delegate-cpp-component-extensions.md).

    ```cpp
    delegate void MyDel();
    int main() {
    System::Console::WriteLine(__is_delegate(MyDel));
    }
    ```

- `__is_empty(` *type* `)`

   Restituisce **`true`** se il tipo non dispone di membri dati dell'istanza.

    ```cpp
    #include <stdio.h>
    struct S {
    int Test() {}
    static int i;
    };
    int main() {
    __is_empty(S) == true ?
    printf("true\n") : printf("false\n");
    }
    ```

- `__is_enum(` *type* `)`

   Restituisce **`true`** se il tipo è un'enumerazione nativa.

    ```cpp
    // is_enum.cpp
    #include <stdio.h>
    enum E { a, b };

    struct S {
    enum E2 { c, d };
    };

    int main() {
    __is_enum(E) == true ?
    printf("true\n") : printf("false\n");

    __is_enum(S::E2) == true ?
    printf("true\n") : printf("false\n");
    }
    ```

- `__is_interface_class(` *type* `)`

   Restituisce **`true`** se viene passata un'interfaccia di piattaforma. Per altre informazioni, vedere [interface class](interface-class-cpp-component-extensions.md).

    ```cpp
    // is_interface_class.cpp

    using namespace System;
    interface class I {};
    int main() {
    Console::WriteLine(__is_interface_class(I));
    }
    ```

- `__is_pod(` *type* `)`

   Restituisce **`true`** se il tipo è una classe o un'Unione senza costruttori o membri non statici privati o protetti, senza classi base e funzioni virtuali. Per altre informazioni sui POD, vedere lo standard C++, sezioni 8.5.1/1, 9/4 e 3.9/10.

   `__is_pod` restituisce false per i  tipi fondamentali.

    ```cpp
    #include <stdio.h>
    struct S {};

    int main() {
    __is_pod(S) == true ?
    printf("true\n") : printf("false\n");
    }
    ```

- `__is_polymorphic(` *type* `)`

   Restituisce **`true`** se un tipo nativo dispone di funzioni virtuali.

    ```cpp
    #include <stdio.h>
    struct S {
    virtual void Test(){}
    };

    int main() {
    __is_polymorphic(S) == true ?
    printf("true\n") : printf("false\n");
    }
    ```

- `__is_ref_array(` *type* `)`

   Restituisce **`true`** se viene passata una matrice di piattaforme. Per altre informazioni, vedere [Matrici](arrays-cpp-component-extensions.md).

    ```cpp
    using namespace System;
    int main() {
    array<int>^ x = gcnew array<int>(10);
    Console::WriteLine(__is_ref_array(array<int>));
    }
    ```

- `__is_ref_class(` *type* `)`

   Restituisce **`true`** se viene passata una classe di riferimento. Per altre informazioni sui tipi riferimento definiti dall'utente, vedere [Classi e struct](classes-and-structs-cpp-component-extensions.md).

    ```cpp
    using namespace System;
    ref class R {};
    int main() {
    Console::WriteLine(__is_ref_class(Buffer));
    Console::WriteLine(__is_ref_class(R));
    }
    ```

- `__is_sealed(` *type* `)`

   Restituisce **`true`** se viene passato un tipo di piattaforma o nativo contrassegnato come sealed. Per altre informazioni, vedere [sealed](sealed-cpp-component-extensions.md).

    ```cpp
    ref class R sealed{};
    int main() {
    System::Console::WriteLine(__is_sealed(R));
    }
    ```

- `__is_simple_value_class(` *type* `)`

   Restituisce **`true`** se viene passato un tipo valore che non contiene riferimenti all'heap sottoposti a Garbage Collection. Per altre informazioni sui tipi valore definiti dall'utente, vedere [Classi e struct](classes-and-structs-cpp-component-extensions.md).

    ```cpp
    using namespace System;
    ref class R {};
    value struct V {};
    value struct V2 {
    R ^ r;   // not a simnple value type
    };

    int main() {
    Console::WriteLine(__is_simple_value_class(V));
    Console::WriteLine(__is_simple_value_class(V2));
    }
    ```

- `__is_union(` *type* `)`

   Restituisce **`true`** se un tipo è un'Unione.

    ```cpp
    #include <stdio.h>
    union A {
    int i;
    float f;
    };

    int main() {
    __is_union(A) == true ?
    printf("true\n") : printf("false\n");
    }
    ```

- `__is_value_class(` *type* `)`

   Restituisce **`true`** se viene passato un tipo valore. Per altre informazioni sui tipi valore definiti dall'utente, vedere [Classi e struct](classes-and-structs-cpp-component-extensions.md).

    ```cpp
    value struct V {};

    int main() {
    System::Console::WriteLine(__is_value_class(V));
    }
    ```

## <a name="windows-runtime"></a>Windows Runtime

### <a name="remarks"></a>Osservazioni

Il `__has_finalizer(` tratto del tipo di *tipo* `)` non è supportato perché questa piattaforma non supporta i finalizzatori.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

## <a name="common-language-runtime"></a>Common Language Runtime

### <a name="remarks"></a>Osservazioni

Non esistono commenti specifici della piattaforma per questa funzionalità.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

### <a name="examples"></a>Esempi

**Esempio**

Nell'esempio di codice seguente viene illustrato come usare un modello di classe per esporre un tratto di tipo del compilatore per una compilazione `/clr`. Per altre informazioni, vedere [Windows Runtime e modelli gestiti](windows-runtime-and-managed-templates-cpp-component-extensions.md).

```cpp
// compiler_type_traits.cpp
// compile with: /clr
using namespace System;

template <class T>
ref struct is_class {
   literal bool value = __is_ref_class(T);
};

ref class R {};

int main () {
   if (is_class<R>::value)
      Console::WriteLine("R is a ref class");
   else
      Console::WriteLine("R is not a ref class");
}
```

```Output
R is a ref class
```

## <a name="see-also"></a>Vedere anche

[Estensioni del componente per .NET e UWP](component-extensions-for-runtime-platforms.md)
