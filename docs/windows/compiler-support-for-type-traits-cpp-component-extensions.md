---
title: "Supporto del compilatore per tratti di tipo (Estensioni del componente C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__is_simple_value_class"
  - "__has_trivial_destructor"
  - "__has_assign"
  - "__is_union"
  - "__is_class"
  - "__is_abstract"
  - "__has_trivial_assign"
  - "__has_virtual_destructor"
  - "__is_ref_array"
  - "__is_base_of"
  - "__has_copy"
  - "__is_polymorphic"
  - "__has_nothrow_constructor"
  - "__is_ref_class"
  - "__is_delegate"
  - "__is_convertible_to"
  - "__is_value_class"
  - "__is_interface_class"
  - "__has_nothrow_copy"
  - "__is_sealed"
  - "__has_trivial_constructor"
  - "__has_trivial_copy"
  - "__is_enum"
  - "__has_nothrow_assign"
  - "__has_finalizer"
  - "__is_empty"
  - "__is_pod"
  - "__has_user_destructor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__is_class (parola chiave) [C++]"
  - "__is_pod (parola chiave) [C++]"
  - "__is_delegate (parola chiave) [C++]"
  - "__is_value_class (parola chiave) [C++]"
  - "__has_copy (parola chiave) [C++]"
  - "__has_nothrow_copy (parola chiave) [C++]"
  - "__is_interface_class (parola chiave) [C++]"
  - "__is_sealed (parola chiave) [C++]"
  - "__is_convertible_to (parola chiave) [C++]"
  - "__is_ref_class (parola chiave) [C++]"
  - "__has_trivial_copy (parola chiave) [C++]"
  - "__has_user_destructor (parola chiave) [C++]"
  - "__is_abstract (parola chiave) [C++]"
  - "__is_empty (parola chiave) [C++]"
  - "__has_trivial_assign (parola chiave) [C++]"
  - "__has_nothrow_constructor (parola chiave) [C++]"
  - "__is_ref_array (parola chiave) [C++]"
  - "__is_base_of (parola chiave) [C++]"
  - "__has_nothrow_assign (parola chiave) [C++]"
  - "__has_virtual_destructor (parola chiave) [C++]"
  - "__has_finalizer (parola chiave) [C++]"
  - "__is_union (parola chiave) [C++]"
  - "__has_assign (parola chiave) [C++]"
  - "__has_trivial_destructor (parola chiave) [C++]"
  - "__is_polymorphic (parola chiave) [C++]"
  - "__is_enum (parola chiave) [C++]"
  - "__is_simple_value_class (parola chiave) [C++]"
  - "__has_trivial_constructor (parola chiave) [C++]"
ms.assetid: cd440630-0394-48c0-a16b-1580b6ef5844
caps.latest.revision: 27
caps.handback.revision: 27
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Supporto del compilatore per tratti di tipo (Estensioni del componente C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il compilatore supporta *digitare tratti*, che indicano varie caratteristiche di un tipo in fase di compilazione.  
  
## <a name="all-runtimes"></a>Tutti i runtime  
 **Sezione Osservazioni**  
  
 Tratti di tipo sono particolarmente utili per i programmatori che scrivono librerie.  
  
 Nell'elenco seguente contiene i tratti di tipo supportate dal compilatore. Tutti i tratti di tipo restituiscono `false` se non viene soddisfatta la condizione specificata dal nome del tratto di tipo.  
  
 (Nell'elenco seguente, gli esempi di codice sono scritti solo in [!INCLUDE[cppcli](../build/reference/includes/cppcli_md.md)]. Ma il tratto di tipo corrispondente è supportato anche in [!INCLUDE[cppwrt](../build/reference/includes/cppwrt_md.md)], se non diversamente specificato. Il termine "tipo di piattaforma" fa riferimento ai tipi [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] o ai tipi Common Language Runtime.)  
  
-   `__has_assign(` `type` `)`  
  
     Restituisce true se la piattaforma o il tipo nativo ha un operatore di assegnazione di copia.  
  
    ```  
  
    ref struct R {  
    void operator=(R% r) {}  
    };  
  
    int main() {  
    System::Console::WriteLine(__has_assign(R));  
    }  
  
    ```  
  
-   `__has_copy(` `type` `)`  
  
     Restituisce true se la piattaforma o il tipo nativo ha un costruttore di copia.  
  
    ```  
  
    ref struct R {  
    R(R% r) {}  
    };  
  
    int main() {  
    System::Console::WriteLine(__has_copy(R));  
    }  
  
    ```  
  
-   `__has_finalizer(` `type` `)`  
  
     (Non supportato in [!INCLUDE[cppwrt](../build/reference/includes/cppwrt_md.md)].) Restituisce true se il tipo CLR ha un finalizzatore. Vedere [distruttori e finalizzatori in Visual C++](../misc/destructors-and-finalizers-in-visual-cpp.md) Per ulteriori informazioni.  
  
    ```  
  
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
  
-   `__has_nothrow_assign(` `type` `)`  
  
     Restituisce true se un operatore di assegnazione di copia ha una specifica di eccezione vuota.  
  
    ```  
  
    #include <stdio.h>  
    struct S {  
    void operator=(S& r) throw() {}  
    };  
  
    int main() {  
    __has_nothrow_assign(S) == true ?  
    printf("true\n") : printf("false\n");  
    }  
  
    ```  
  
-   `__has_nothrow_constructor(` `type` `)`  
  
     Restituisce true se il costruttore predefinito ha una specifica di eccezione vuota.  
  
    ```  
  
    #include <stdio.h>  
    struct S {  
    S() throw() {}  
    };  
  
    int main() {  
    __has_nothrow_constructor(S) == true ?  
    printf("true\n") : printf("false\n");  
    }  
  
    ```  
  
-   `__has_nothrow_copy(` `type` `)`  
  
     Restituisce true se il costruttore di copia ha una specifica di eccezione vuota.  
  
    ```  
  
    #include <stdio.h>  
    struct S {  
    S(S& r) throw() {}  
    };  
  
    int main() {  
    __has_nothrow_copy(S) == true ?  
    printf("true\n") : printf("false\n");  
    }  
  
    ```  
  
-   `__has_trivial_assign(` `type` `)`  
  
     Restituisce true se il tipo ha un operatore di assegnazione semplice, generato dal compilatore.  
  
    ```  
  
    #include <stdio.h>  
    struct S {};  
  
    int main() {  
    __has_trivial_assign(S) == true ?  
    printf("true\n") : printf("false\n");  
    }  
  
    ```  
  
-   `__has_trivial_constructor(` `type` `)`  
  
     Restituisce true se il tipo ha un costruttore semplice, generato dal compilatore.  
  
    ```  
  
    #include <stdio.h>  
    struct S {};  
  
    int main() {  
    __has_trivial_constructor(S) == true ?  
    printf("true\n") : printf("false\n");  
    }  
  
    ```  
  
-   `__has_trivial_copy(` `type` `)`  
  
     Restituisce true se il tipo ha un costruttore di copia semplice, generato dal compilatore.  
  
    ```  
  
    #include <stdio.h>  
    struct S {};  
  
    int main() {  
    __has_trivial_copy(S) == true ?  
    printf("true\n") : printf("false\n");  
    }  
  
    ```  
  
-   `__has_trivial_destructor(` `type` `)`  
  
     Restituisce true se il tipo ha un distruttore semplice, generato dal compilatore.  
  
    ```  
  
    // has_trivial_destructor.cpp  
    #include <stdio.h>  
    struct S {};  
  
    int main() {  
    __has_trivial_destructor(S) == true ?  
    printf("true\n") : printf("false\n");  
    }  
  
    ```  
  
-   `__has_user_destructor(` `type` `)`  
  
     Restituisce true se la piattaforma o il tipo nativo ha un distruttore dichiarato dall'utente.  
  
    ```  
  
    // has_user_destructor.cpp  
  
    using namespace System;  
    ref class R {  
    ~R() {}  
    };  
  
    int main() {  
    Console::WriteLine(__has_user_destructor(R));  
    }  
  
    ```  
  
-   `__has_virtual_destructor(` `type` `)`  
  
     Restituisce true se il tipo ha un distruttore virtuale.  
  
     `__has_virtual_destructor` funziona anche su tipi di piattaforma e gli eventuali distruttori definiti dall'utente in un tipo di piattaforma sono distruttori virtuali.  
  
    ```  
  
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
  
-   `__is_abstract(` `type` `)`  
  
     Restituisce true se il tipo è un tipo astratto. Per ulteriori informazioni sui tipi astratti native, vedere [astratta](../windows/abstract-cpp-component-extensions.md).  
  
     `__is_abstract` funziona anche per i tipi di piattaforma. Un'interfaccia con almeno un membro è un tipo astratto perché è un tipo riferimento con almeno un membro astratto. Per ulteriori informazioni sui tipi astratti piattaforma, vedere [classi astratte](../cpp/abstract-classes-cpp.md)  
  
    ```  
  
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
  
-   `__is_base_of(` `base` `,` `derived` `)`  
  
     Restituisce true se il primo tipo è una classe di base del secondo tipo o se entrambi i tipi sono uguali.  
  
     `__is_base_of` funziona anche sui tipi di piattaforma. Ad esempio, verrà restituito true se il primo tipo è un [classe interfaccia](../windows/interface-class-cpp-component-extensions.md) e il secondo tipo implementa l'interfaccia.  
  
    ```  
  
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
  
-   `__is_class(` `type` `)`  
  
     Restituisce true se il tipo è una classe nativa o uno struct.  
  
    ```  
  
    #include <stdio.h>  
    struct S {};  
  
    int main() {  
    __is_class(S) == true ?  
    printf("true\n") : printf("false\n");  
    }  
  
    ```  
  
-   `__is_convertible_to(` `from` `,`  `to` `)`  
  
     Restituisce true se il primo tipo può essere convertito nel secondo tipo.  
  
    ```  
  
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
  
-   `__is_delegate(` `type` `)`  
  
     Restituisce true se `type` è un delegato. Per ulteriori informazioni, vedere [delegato (estensioni del componente C++)](../windows/delegate-cpp-component-extensions.md).  
  
    ```  
  
    delegate void MyDel();  
    int main() {  
    System::Console::WriteLine(__is_delegate(MyDel));  
    }  
  
    ```  
  
-   `__is_empty(` `type` `)`  
  
     Restituisce true se il tipo non dispone di alcun membro dati di istanza.  
  
    ```  
  
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
  
-   `__is_enum(` `type` `)`  
  
     Restituisce true se il tipo è un'enumerazione nativa.  
  
    ```  
  
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
  
-   `__is_interface_class(` `type` `)`  
  
     Restituisce true se viene passata un'interfaccia di piattaforma. Per ulteriori informazioni, vedere [classe interfaccia](../windows/interface-class-cpp-component-extensions.md).  
  
    ```  
  
    // is_interface_class.cpp  
  
    using namespace System;  
    interface class I {};  
    int main() {  
    Console::WriteLine(__is_interface_class(I));  
    }  
  
    ```  
  
-   `__is_pod(` `type` `)`  
  
     Restituisce true se il tipo è una classe o unione senza costruttori o membri non statici privati o protetti, senza classi di base e funzioni virtuali. Per altre informazioni sui POD, vedere lo standard C++, sezioni 8.5.1/1, 9/4 e 3.9/10.  
  
     `__is_pod` restituisce false per i  tipi fondamentali.  
  
    ```  
  
    #include <stdio.h>  
    struct S {};  
  
    int main() {  
    __is_pod(S) == true ?  
    printf("true\n") : printf("false\n");  
    }  
  
    ```  
  
-   `__is_polymorphic(` `type` `)`  
  
     Restituisce true se un tipo nativo ha funzioni virtuali.  
  
    ```  
  
    #include <stdio.h>  
    struct S {  
    virtual void Test(){}  
    };  
  
    int main() {  
    __is_polymorphic(S) == true ?  
    printf("true\n") : printf("false\n");  
    }  
  
    ```  
  
-   `__is_ref_array(` `type` `)`  
  
     Restituisce true se viene passata una matrice di piattaforma. Per ulteriori informazioni, vedere [matrici](../windows/arrays-cpp-component-extensions.md).  
  
    ```  
  
    using namespace System;  
    int main() {  
    array<int>^ x = gcnew array<int>(10);  
    Console::WriteLine(__is_ref_array(array<int>));  
    }  
  
    ```  
  
-   `__is_ref_class(` `type` `)`  
  
     Restituisce true se viene passata una classe di riferimento. Per ulteriori informazioni sui tipi di riferimento definita dall'utente, vedere [classi e struct](../windows/classes-and-structs-cpp-component-extensions.md).  
  
    ```  
  
    using namespace System;  
    ref class R {};  
    int main() {  
    Console::WriteLine(__is_ref_class(Buffer));  
    Console::WriteLine(__is_ref_class(R));  
    }  
  
    ```  
  
-   `__is_sealed(` `type` `)`  
  
     Restituisce true se vengono passati una piattaforma o un tipo nativo contrassegnati come sealed. Per ulteriori informazioni, vedere [sealed](../windows/sealed-cpp-component-extensions.md).  
  
    ```  
  
    ref class R sealed{};  
    int main() {  
    System::Console::WriteLine(__is_sealed(R));  
    }  
  
    ```  
  
-   `__is_simple_value_class(` `type` `)`  
  
     Restituisce true se viene passato un tipo valore che non contiene riferimenti all'heap sottoposto a Garbage Collection. Per ulteriori informazioni sui tipi di valore definito dall'utente, vedere [classi e struct](../windows/classes-and-structs-cpp-component-extensions.md).  
  
    ```  
  
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
  
-   `__is_union(` `type` `)`  
  
     Restituisce true se un tipo è un'unione.  
  
    ```  
  
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
  
-   `__is_value_class(` `type` `)`  
  
     Restituisce true se viene passato un tipo valore. Per ulteriori informazioni sui tipi di valore definito dall'utente, vedere [classi e struct](../windows/classes-and-structs-cpp-component-extensions.md).  
  
    ```  
  
    value struct V {};  
  
    int main() {  
    System::Console::WriteLine(__is_value_class(V));  
    }  
  
    ```  
  
## [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]  
 **Sezione Osservazioni**  
  
 Il `__has_finalizer(`*tipo*`)` tratto di tipo non è supportato perché questa piattaforma non supporta i finalizzatori.  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/ZW**  
  
## [!INCLUDE[clr_for_headings](../dotnet/includes/clr_for_headings_md.md)]  
 **Sezione Osservazioni**  
  
 Non esistono commenti specifici della piattaforma per questa funzionalità.  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/clr**  
  
### <a name="examples"></a>Esempi  
 **Esempio**  
  
 Esempio di codice riportato di seguito viene illustrato come utilizzare un modello di classe per esporre un tratto di tipo del compilatore per un **/clr** compilazione. Per ulteriori informazioni, vedere [Windows Runtime e modelli gestiti](../windows/windows-runtime-and-managed-templates-cpp-component-extensions.md).  
  
```  
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
  
 **Output**  
  
```Output  
R is a ref class  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni del componente per le piattaforme Runtime](../windows/component-extensions-for-runtime-platforms.md)