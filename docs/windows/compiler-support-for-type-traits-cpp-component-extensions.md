---
title: Supporto del compilatore per tratti di tipo (C + c++ /CLI e c++ /CX)
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
ms.openlocfilehash: 5cd4d7feef01d1b7bedd407357c618ba208d06f4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50536188"
---
# <a name="compiler-support-for-type-traits-ccli-and-ccx"></a>Supporto del compilatore per tratti di tipo (C + c++ /CLI e c++ /CX)

Il compilatore Microsoft C++ supporta *tratti di tipo* per C + + c++ /CLI e c++ /CLI estensioni CX che indicano varie caratteristiche di un tipo in fase di compilazione.

## <a name="all-runtimes"></a>Tutti i runtime

### <a name="remarks"></a>Note

Tratti di tipo sono particolarmente utili per i programmatori che scrivono librerie.

Nell'elenco seguente contiene i tratti di tipo supportati dal compilatore. Tutti i tratti di tipo restituiscono **false** se non viene soddisfatta la condizione specificata dal nome del tratto di tipo.

(Nell'elenco seguente, gli esempi di codice sono scritti solo in C + + / CLI. Ma il tratto di tipo corrispondente è supportato anche in C + + c++ /CX se non specificato diversamente. Il termine "tipo di piattaforma" fa riferimento a tipi Windows Runtime o tipi common language runtime.)

- `__has_assign(` *Tipo* `)`

   Restituisce **true** se la piattaforma o un tipo nativo ha un operatore di assegnazione di copia.

    ```cpp
    ref struct R {
    void operator=(R% r) {}
    };

    int main() {
    System::Console::WriteLine(__has_assign(R));
    }
    ```

- `__has_copy(` *Tipo* `)`

   Restituisce **true** se la piattaforma o un tipo nativo ha un costruttore di copia.

    ```cpp
    ref struct R {
    R(R% r) {}
    };

    int main() {
    System::Console::WriteLine(__has_copy(R));
    }
    ```

- `__has_finalizer(` *Tipo* `)`

   (Non supportato in C + + c++ /CX.) Restituisce **true** se il tipo CLR ha un finalizzatore. Vedere [distruttori e finalizzatori nella procedura: definire e usare classi e struct (C + + / CLI)](../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers) per altre informazioni.

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

- `__has_nothrow_assign(` *Tipo* `)`

   Restituisce **true** se un operatore di assegnazione di copia ha una specifica di eccezione vuota.

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

- `__has_nothrow_constructor(` *Tipo* `)`

   Restituisce **true** se il costruttore predefinito ha una specifica di eccezione vuota.

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

- `__has_nothrow_copy(` *Tipo* `)`

   Restituisce **true** se il costruttore di copia ha una specifica di eccezione vuota.

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

- `__has_trivial_assign(` *Tipo* `)`

   Restituisce **true** se il tipo ha un operatore di assegnazione semplice, generato dal compilatore.

    ```cpp
    #include <stdio.h>
    struct S {};

    int main() {
    __has_trivial_assign(S) == true ?
    printf("true\n") : printf("false\n");
    }
    ```

- `__has_trivial_constructor(` *Tipo* `)`

   Restituisce **true** se il tipo ha un costruttore semplice, generato dal compilatore.

    ```cpp
    #include <stdio.h>
    struct S {};

    int main() {
    __has_trivial_constructor(S) == true ?
    printf("true\n") : printf("false\n");
    }
    ```

- `__has_trivial_copy(` *Tipo* `)`

   Restituisce **true** se il tipo ha un costruttore di copia semplice, generato dal compilatore.

    ```cpp
    #include <stdio.h>
    struct S {};

    int main() {
    __has_trivial_copy(S) == true ?
    printf("true\n") : printf("false\n");
    }
    ```

- `__has_trivial_destructor(` *Tipo* `)`

   Restituisce **true** se il tipo ha un distruttore semplice, generato dal compilatore.

    ``` cpp
    // has_trivial_destructor.cpp
    #include <stdio.h>
    struct S {};

    int main() {
    __has_trivial_destructor(S) == true ?
    printf("true\n") : printf("false\n");
    }
    ```

- `__has_user_destructor(` *Tipo* `)`

   Restituisce **true** se la piattaforma o un tipo nativo ha un distruttore dichiarato dall'utente.

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

- `__has_virtual_destructor(` *Tipo* `)`

   Restituisce **true** se il tipo ha un distruttore virtuale.

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

- `__is_abstract(` *Tipo* `)`

   Restituisce **true** se il tipo è un tipo astratto. Per altre informazioni sui tipi astratti nativi, vedere [classi astratte](../cpp/abstract-classes-cpp.md).

   `__is_abstract` funziona anche per i tipi di piattaforma. Un'interfaccia con almeno un membro è un tipo astratto perché è un tipo riferimento con almeno un membro astratto. Per altre informazioni sui tipi di piattaforma astratta, vedere [astratta](../windows/abstract-cpp-component-extensions.md).

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

   Restituisce **true** se il primo tipo è una classe di base del secondo tipo, se entrambi i tipi sono uguali.

   `__is_base_of` funziona anche sui tipi di piattaforma. Ad esempio, verrà restituito **true** se il primo tipo è un [classe interfaccia](../windows/interface-class-cpp-component-extensions.md) e il secondo tipo implementa l'interfaccia.

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

- `__is_class(` *Tipo* `)`

   Restituisce **true** se il tipo è una classe nativa o uno struct.

    ```cpp
    #include <stdio.h>
    struct S {};

    int main() {
    __is_class(S) == true ?
    printf("true\n") : printf("false\n");
    }
    ```

- `__is_convertible_to(` `from` `,`  `to` `)`

   Restituisce **true** se il primo tipo può essere convertito nel secondo tipo.

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

- `__is_delegate(` *Tipo* `)`

   Restituisce **true** se `type` è un delegato. Per altre informazioni, vedere [delegare (C + c++ /CLI e c++ /CLI CX)](../windows/delegate-cpp-component-extensions.md).

    ```cpp
    delegate void MyDel();
    int main() {
    System::Console::WriteLine(__is_delegate(MyDel));
    }
    ```

- `__is_empty(` *Tipo* `)`

   Restituisce **true** se il tipo non dispone di alcun membro dati di istanza.

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

- `__is_enum(` *Tipo* `)`

   Restituisce **true** se il tipo è un'enumerazione nativa.

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

- `__is_interface_class(` *Tipo* `)`

   Restituisce **true** se passata un'interfaccia di piattaforma. Per altre informazioni, vedere [classe di interfaccia](../windows/interface-class-cpp-component-extensions.md).

    ```cpp
    // is_interface_class.cpp

    using namespace System;
    interface class I {};
    int main() {
    Console::WriteLine(__is_interface_class(I));
    }
    ```

- `__is_pod(` *Tipo* `)`

   Restituisce **true** se il tipo è una classe o un'unione con alcun costruttore o membri non statici privati o protetti, senza classi di base e funzioni non virtuali. Per altre informazioni sui POD, vedere lo standard C++, sezioni 8.5.1/1, 9/4 e 3.9/10.

   `__is_pod` restituisce false per i  tipi fondamentali.

    ```cpp
    #include <stdio.h>
    struct S {};

    int main() {
    __is_pod(S) == true ?
    printf("true\n") : printf("false\n");
    }
    ```

- `__is_polymorphic(` *Tipo* `)`

   Restituisce **true** se un tipo nativo ha funzioni virtuali.

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

- `__is_ref_array(` *Tipo* `)`

   Restituisce **true** se passata una matrice di piattaforma. Per altre informazioni, vedere [matrici](../windows/arrays-cpp-component-extensions.md).

    ```cpp
    using namespace System;
    int main() {
    array<int>^ x = gcnew array<int>(10);
    Console::WriteLine(__is_ref_array(array<int>));
    }
    ```

- `__is_ref_class(` *Tipo* `)`

   Restituisce **true** se passata una classe di riferimento. Per altre informazioni sui tipi riferimento definiti dall'utente, vedere [classi e struct](../windows/classes-and-structs-cpp-component-extensions.md).

    ```cpp
    using namespace System;
    ref class R {};
    int main() {
    Console::WriteLine(__is_ref_class(Buffer));
    Console::WriteLine(__is_ref_class(R));
    }
    ```

- `__is_sealed(` *Tipo* `)`

   Restituisce **true** se passati una piattaforma o un tipo nativo contrassegnati come sealed. Per altre informazioni, vedere [sealed](../windows/sealed-cpp-component-extensions.md).

    ```cpp
    ref class R sealed{};
    int main() {
    System::Console::WriteLine(__is_sealed(R));
    }
    ```

- `__is_simple_value_class(` *Tipo* `)`

   Restituisce **true** se viene passato un tipo di valore che non contiene riferimenti all'heap sottoposto a garbage collection. Per altre informazioni sui tipi di valore definito dall'utente, vedere [classi e struct](../windows/classes-and-structs-cpp-component-extensions.md).

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

- `__is_union(` *Tipo* `)`

   Restituisce **true** se un tipo è un'unione.

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

- `__is_value_class(` *Tipo* `)`

   Restituisce **true** se viene passato un tipo di valore. Per altre informazioni sui tipi di valore definito dall'utente, vedere [classi e struct](../windows/classes-and-structs-cpp-component-extensions.md).

    ```cpp
    value struct V {};

    int main() {
    System::Console::WriteLine(__is_value_class(V));
    }
    ```

## <a name="windows-runtime"></a>Windows Runtime

### <a name="remarks"></a>Note

Il `__has_finalizer(` *tipo* `)` tratto di tipo non è supportato perché questa piattaforma non supporta i finalizzatori.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

## <a name="common-language-runtime"></a>Common Language Runtime

### <a name="remarks"></a>Note

Non esistono commenti specifici della piattaforma per questa funzionalità.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

### <a name="examples"></a>Esempi

**Esempio**

Nell'esempio di codice seguente viene illustrato come usare un modello di classe per esporre un tratto di tipo del compilatore per una compilazione `/clr`. Per altre informazioni, vedere [Windows Runtime e modelli gestiti](../windows/windows-runtime-and-managed-templates-cpp-component-extensions.md).

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

[Estensioni componenti per .NET e UWP](../windows/component-extensions-for-runtime-platforms.md)