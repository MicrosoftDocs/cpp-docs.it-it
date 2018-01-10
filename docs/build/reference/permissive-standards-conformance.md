---
title: "-permissiva - (conformità agli standard) | Documenti Microsoft"
ms.date: 11/11/2016
ms.technology: cpp-tools
ms.topic: article
f1_keywords:
- /permissive
- VC.Project.VCCLCompilerTool.ConformanceMode
dev_langs: C++
helpviewer_keywords:
- /permissive compiler options [C++]
- -permissive compiler options [C++]
- Standards conformance compiler options
- permissive compiler options [C++]
ms.assetid: db1cc175-6e93-4a2e-9396-c3725d2d8f71
caps.latest.revision: "15"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 90ff6d2be6174f32d7d93252ebd8b693b422076d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="permissive--standards-conformance"></a>/ permissiva-(conformità agli standard)

Specificare la modalità di conformità agli standard al compilatore. Utilizzare questa opzione per identificare e risolvere i problemi di conformità nel codice, per renderlo più corretto sia portabile.

## <a name="syntax"></a>Sintassi

> **/ permissiva-**

## <a name="remarks"></a>Note

È possibile utilizzare il **/ permissiva-** l'opzione del compilatore per specificare il comportamento del compilatore conformi agli standard. Questa opzione Disabilita permissivi comportamenti e imposta il [/Zc](../../build/reference/zc-conformance.md) opzioni del compilatore per una rigida conformità. Nell'IDE, questa opzione consente inoltre il codice non conforme di IntelliSense motore sottolineato. 

Per impostazione predefinita, il **/ permissiva-** opzione è impostata in nuovi progetti creati dalla versione di Visual Studio 2017 15,5 e versioni successive. Non è impostata per impostazione predefinita nelle versioni precedenti. Quando l'opzione è impostata, il compilatore genera diagnostica errori o avvisi quando i costrutti di linguaggio non standard vengono rilevati nel codice, inclusi alcuni errori comuni in pre-C + + 11 codice.

Il **/ permissiva-** è compatibile con quasi tutti i file di intestazione del Kit di Windows più recente, ad esempio il Software Development Kit (SDK) o Windows Driver Kit (WDK), a partire da Windows SDK per Windows rientrano creatori (10.0.16299.0). Le versioni precedenti del SDK potrebbero non riuscire compilare in **/ permissiva-** per vari motivi di conformità di codice di origine. Il compilatore e il SDK di spedizione su sequenze temporali di rilasci differenti, pertanto esistono alcuni problemi rimanenti. Per problemi di file di intestazione specifici, vedere [problemi intestazione Windows](#windows-header-issues) sotto.

Il **/ permissiva-** opzione imposta la [/Zc: strictstrings](../../build/reference/zc-conformance.md) e [/Zc: rvaluecast](../../build/reference/zc-conformance.md) le opzioni per il comportamento conforme. Per impostazione predefinita al comportamento non conformi. È possibile passare specifico **/Zc** opzioni dopo **/ permissiva-** nella riga di comando per eseguire l'override di questo comportamento.

Nelle versioni di inizio del compilatore in Visual Studio 2017 versione 15.3, il **/ permissiva-** opzione imposta la **/Zc:ternary** opzione. Il compilatore implementa anche più i requisiti per la ricerca nome in due fasi. Quando il **/ permissiva-** opzione è impostata, il compilatore analizza definizioni di modello di funzione e della classe, che identifica i nomi dei dipendenti e non dipendente utilizzati nei modelli. In questa versione, viene eseguita l'analisi delle dipendenze solo nome.

Le estensioni specifiche dell'ambiente e aree di linguaggio che lascia lo standard dall'implementazione non sono interessate da **/ permissiva-**. Ad esempio, le specifiche di Microsoft `__declspec`, convenzione di chiamata e structured exception handling parole chiave e direttive pragma specifici del compilatore o attributi non sono contrassegnati dal compilatore in **/ permissiva-** modalità.

Il **/ permissiva-** opzione Usa il supporto di conformità nella versione corrente del compilatore per determinare quali costrutti del linguaggio sono non conformi. L'opzione non determina se il codice sia conforme a una versione specifica di C++ standard. Per abilitare il supporto del compilatore implementato per bozza di standard più recente, usare il [/std:latest](../../build/reference/std-specify-language-standard-version.md) opzione. Per limitare il supporto del compilatore per l'attuale implementazione standard C++ 17, utilizzare il [/std:c + + 17](../../build/reference/std-specify-language-standard-version.md) opzione. Per limitare il supporto del compilatore per una maggiore similarità con lo standard C++ 14, utilizzare il [/std:c + + 14](../../build/reference/std-specify-language-standard-version.md) opzione, ovvero il valore predefinito.

Non tutti C++ 11, C++ 14 o conformi agli standard C++ 17 codice è supportato dal compilatore Visual C++ in Visual Studio 2017. Il **/ permissiva-** opzione potrebbe non rilevare problemi per quanto riguarda alcuni aspetti della ricerca del nome in due fasi, associazione di un riferimento non const a un elemento temporaneo, considerato init copia diretta init, consentendo più conversioni definite dall'utente in inizializzazione o token alternativo per gli operatori logici e altre aree di conformità non supportato. Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

### <a name="how-to-fix-your-code"></a>Come correggere il codice

Di seguito sono riportati alcuni esempi di codice che viene rilevato come non conformi quando si utilizza **/ permissiva-**, unitamente a suggeriti modi per risolvere i problemi.

#### <a name="use-default-as-an-identifier-in-native-code"></a>Utilizzare l'impostazione predefinita come identificatore nel codice nativo

```cpp
void func(int default); // Error C2321: 'default' is a keyword, and
                        // cannot be used in this context
```

#### <a name="lookup-members-in-dependent-base"></a>Membri di ricerca in base dipendenti

```cpp
template <typename T>
struct B {
    void f();
};

template <typename T>
struct D : public B<T> // B is a dependent base because its type
                       // depends on the type of T.
{
    // One possible fix is to uncomment the following line.
    // If this is a type, don't forget the 'typename' keyword.
    // using B<T>::f;

    void g() {
        f(); // error C3861: 'f': identifier not found
             // Another fix is to change it to 'this->f();'
    }
};

void h() {
    D<int> d;
    d.g();
}
```

#### <a name="use-of-qualified-names-in-member-declarations"></a>Utilizzo di nomi completi nelle dichiarazioni di membro

```cpp
struct A {
    void A::f() { } // error C4596: illegal qualified name in member
                    // declaration.
                    // Remove redundant 'A::' to fix.
};
```

#### <a name="initialize-multiple-union-members-in-a-member-initializer"></a>Inizializzare più membri dell'unione in un inizializzatore di membro

```cpp
union U
{
    U()
        : i(1), j(1) // error C3442: Initializing multiple members of
                     // union: 'U::i' and 'U::j'.
                     // Remove all but one of the initializations to fix.
    {}
    int i;
    int j;
};
```

#### <a name="hidden-friend-name-lookup-rules"></a>Regole di ricerca nome nascosto friend

```cpp
// Example 1
struct S {
    friend void f(S *);
};
// Uncomment this declaration to make the hidden friend visible:
// void f(S *); // This declaration makes the hidden friend visible

using type = void (*)(S *);
type p = &f; // error C2065: 'f': undeclared identifier.
```

```cpp
// Example 2
struct S {
    friend void f(S *);
};
void g() {
    // Using nullptr instead of S prevents argument dependent lookup in S
    f(nullptr); // error C3861: 'f': identifier not found

    S *p = nullptr;
    f(S); // Hidden friend now found via argument-dependent lookup.
}
```

#### <a name="use-scoped-enums-in-array-bounds"></a>Utilizzare le enumerazioni con ambite nei limiti della matrice

```cpp
enum class Color {
    Red, Green, Blue
};

int data[Color::Blue]; // error C3411: 'Color' is not valid as the size
                       // of an array as it is not an integer type.
                       // Cast to type size_t or int to fix.
```

#### <a name="use-for-each-in-native-code"></a>Utilizzare per ciascuno di essi in codice nativo

```cpp
void func() {
    int array[] = {1, 2, 30, 40};
    for each (int i in array) // error C4496: nonstandard extension
                              // 'for each' used: replace with
                              // ranged-for statement:
                              // for (int i: array)
    {
        // ...
    }
}
```

#### <a name="use-of-atl-attributes"></a>Utilizzo di attributi ATL

```cpp
// Example 1
[uuid("594382D9-44B0-461A-8DE3-E06A3E73C5EB")]
class A {};
```

```cpp
// Fix for example 1
class __declspec(uuid("594382D9-44B0-461A-8DE3-E06A3E73C5EB")) B {};
```

```cpp
// Example 2
[emitidl];
[module(name="Foo")];

[object, local, uuid("9e66a290-4365-11d2-a997-00c04fa37ddb")]
__interface ICustom {
    HRESULT Custom([in] longl, [out, retval] long*pLong);
    [local] HRESULT CustomLocal([in] longl, [out, retval] long*pLong);
};

[coclass, appobject, uuid("9e66a294-4365-11d2-a997-00c04fa37ddb")]
class CFoo : public ICustom
{};
```

```cpp
// Fix for example 2
// First, create the *.idl file. The vc140.idl generated file can be 
// used to automatically obtain a *.idl file for the interfaces with 
// annotation. Second, add a midl step to your build system to make 
// sure that the C++ interface definitions are outputted. 
// Last, adjust your existing code to use ATL directly as shown in 
// the atl implementation section.

-- IDL  FILE--
import "docobj.idl";

[object, local, uuid(9e66a290-4365-11d2-a997-00c04fa37ddb)]
interface ICustom : IUnknown {
    HRESULT Custom([in] longl, [out,retval] long*pLong);
    [local] HRESULT CustomLocal([in] longl, [out,retval] long*pLong);
};

[ version(1.0), uuid(29079a2c-5f3f-3325-99a1-3ec9c40988bb) ]
library Foo {
    importlib("stdole2.tlb");
    importlib("olepro32.dll");

    [version(1.0), appobject, uuid(9e66a294-4365-11d2-a997-00c04fa37ddb)]
    coclass CFoo { interface ICustom; };
}

-- ATL IMPLEMENTATION--
#include <idl.header.h>
#include <atlbase.h>

class ATL_NO_VTABLE CFooImpl : public ICustom,
    public ATL::CComObjectRootEx<CComMultiThreadModel>
{
    public:BEGIN_COM_MAP(CFooImpl)
    COM_INTERFACE_ENTRY(ICustom)
    END_COM_MAP()
};
```

#### <a name="ambiguous-conditional-operator-arguments"></a>Argomenti dell'operatore condizionale ambiguo

Nelle versioni del compilatore prima di Visual Studio 2017 versione 15.3, il compilatore accettati gli argomenti per l'operatore condizionale (o un operatore ternario) `?:` che sono considerati ambigui dallo Standard. In **/ permissiva-** modalità, il compilatore genera ora uno o più diagnostica nei casi in cui è stato compilato senza diagnostica nelle versioni precedenti.

Gli errori comuni che possono derivare da questa modifica includono:

- Errore C2593: 'operator'? è ambiguo

- errore C2679: binario '?': è stato trovato alcun operatore che accetti un operando di destra di tipo 'B' (o nessuna conversione accettabile)

- l'errore C2678: binario '?': è stato trovato alcun operatore che accetti un operando sinistro di tipo 'A' (o nessuna conversione accettabile)

- Errore C2446: ':': nessuna conversione da 'B' a 'A'

Un modello di codice tipico che può causare questo problema è una classe C fornisce sia un costruttore non esplicito da un altro tipo T e un operatore di conversione non esplicito al tipo T. In questo caso, la conversione dell'argomento 2 per il tipo di 3rd sia la conversione dell'argomento 3 per il tipo del 2 ° sono conversioni valide, che è ambiguo in base allo standard.

```cpp
// Example 1: class that provides conversion to and initialization from some type T
struct A
{
    A(int);
    operator int() const;
};

extern bool cond;

A a(42);
// Accepted when /Zc:ternary or /permissive- is not used:
auto x = cond ? 7 : a; // A: permissive behavior prefers A(7) over (int)a
// Accepted always:
auto y = cond ? 7 : int(a);
auto z = cond ? A(7) : a;
```

Si verifica un'eccezione importante per questo modello comune quando T rappresenta uno dei tipi di stringa con terminazione null (ad esempio, `const char *`, `const char16_t *`e così via) e l'argomento `?:` è una stringa letterale di tipo corrispondente. C++ 17 è cambiato semantica da C++ 14. Di conseguenza, il codice di esempio 2 viene accettato in **/std:c + + 14** e rifiutati in **/std:c + + 17** quando **/Zc:ternary** o **/permissive-**viene utilizzato.

```cpp
// Example 2: exception from the above
struct MyString
{
    MyString(const char* s = "") noexcept;  // from char*
    operator const char* () const noexcept; //   to char*
};

extern bool cond;

MyString s; 
// Using /std:c++14, /permissive- or /Zc:ternary behavior
// is to prefer MyString("A") over (const char*)s
// but under /std:c++17 this line causes error C2445:
auto x = cond ? "A" : s;
// You can use a static_cast to resolve the ambiguity:
auto y = cond ? "A" : static_cast<const char*>(s);
```

È un altro caso in cui vengono visualizzati errori nella condizionali (operatori) con un argomento di tipo `void`. In questo caso potrebbe essere comune nelle macro ASSERT simile.

```cpp
// Example 3: void arguments
void myassert(const char* text, const char* file, int line);
// Accepted when /Zc:ternary or /permissive- is not used:
#define ASSERT_A(ex) (void)((ex) ? 1 : myassert(#ex, __FILE__, __LINE__))
// Accepted always:
#define ASSERT_B(ex) (void)((ex) ? void() : myassert(#ex, __FILE__, __LINE__))
```

È inoltre possibile visualizzare gli errori nel modello di metaprogrammazione basato su, in cui possono modificare i tipi di risultato dell'operatore condizionale in **/Zc:ternary** e **/ permissiva-**. Un modo per risolvere questo problema consiste nell'utilizzare [std::remove_reference](../../standard-library/remove-reference-class.md) del tipo risultante.

```cpp
// Example 4: different result types 
extern bool cond;
extern int count;
char  a = 'A'; 
const char  b = 'B'; 
decltype(auto) x = cond ? a : b; // char without, const char& with /Zc:ternary 
const char (&z)[2] = count > 3 ? "A" : "B"; // const char* without /Zc:ternary 
```

#### <a name="two-phase-name-look-up-partial"></a>Ricerca nome in due fasi (parziale)

Quando il **/ permissiva-** opzione è impostata in Visual Studio 2017 versione 15.3, il compilatore analizza definizioni di modello di funzione e della classe, che identifica i nomi dei dipendenti e non dipendenti utilizzati nei modelli in base alle esigenze per nome in due fasi ricerca. In questa versione, viene eseguita l'analisi delle dipendenze solo nome. In particolare, i nomi non dipendenti che non vengono dichiarati nel contesto di una definizione di modello causano un messaggio di diagnostica come richiesto dagli standard ISO C++. Tuttavia, l'associazione di nomi non dipendenti che non richiedono argomenti dipendenti tramite ricerca nel contesto di definizione non viene eseguita.

```cpp
// dependent base
struct B {
    void g();
};

template<typename T>
struct D : T {
    void f() {
        // The call to g was incorrectly allowed in VS2017:
        g();  // Now under /permissive-: C3861
        // Possible fixes:
        // this->g();
        // T::g();
    }
};

int main()
{
    D<B> d;
    d.f();
}
```

### <a name="windows-header-issues"></a>Argomenti relativi alle intestazioni di Windows

Il **/ permissiva-** opzione è troppo limitato per le versioni del Kit di Windows prima dell'aggiornamento di Windows rientrano creatori SDK (10.0.16299.0) o la versione di Windows Driver Kit (WDK) 1709. È consigliabile aggiornare le versioni più recenti del Kit di Windows per poter utilizzare **/ permissiva-** nel codice di driver di Windows o un dispositivo.

Alcuni file di intestazione in autunno creatori di aggiornamento Windows SDK per Windows (10.0.16299.0) o Windows Driver Kit (WDK) 1709, avere problemi che li rendono incompatibili con l'uso di **/ permissiva-**. Per risolvere questi problemi, è consigliabile limitare l'utilizzo di queste intestazioni per solo i file di codice sorgente che li richiedono e rimuovere il **/ permissiva-** opzione quando si compilano i file di codice di origine specifico. I problemi seguenti sono specifici per il SDK di Windows rientrano creatori di aggiornamento (10.0.16299.0):

#### <a name="issue-in-umqueryh"></a>Problema nel um\Query.h

Quando si utilizza il **/ permissiva-** opzione del compilatore, il `tagRESTRICTION` struttura non viene compilato a causa del membro case(RTOr) 'o'.

```cpp
struct tagRESTRICTION
    {
    ULONG rt;
    ULONG weight;
    /* [switch_is][switch_type] */ union _URes
        {
        /* [case()] */ NODERESTRICTION ar;
        /* [case()] */ NODERESTRICTION or;  // error C2059: syntax error: '||'
        /* [case()] */ NODERESTRICTION pxr;
        /* [case()] */ VECTORRESTRICTION vr;
        /* [case()] */ NOTRESTRICTION nr;
        /* [case()] */ CONTENTRESTRICTION cr;
        /* [case()] */ NATLANGUAGERESTRICTION nlr;
        /* [case()] */ PROPERTYRESTRICTION pr;
        /* [default] */  /* Empty union arm */
        } res;
    };
```

Per risolvere questo problema, compilare i file che includono Query.h senza il **/ permissiva-** opzione.

#### <a name="issue-in-umcellularapioemh"></a>Problema nel um\cellularapi_oem.h

Quando si utilizza il **/ permissiva-** opzione del compilatore, la dichiarazione con prototipo di `enum UICCDATASTOREACCESSMODE` viene emesso un avviso:

```cpp
typedef enum UICCDATASTOREACCESSMODE UICCDATASTOREACCESSMODE; // C4471
```

La dichiarazione con prototipo di enum senza ambito è un'estensione Microsoft. Per risolvere questo problema, compilare i file che includono cellularapi_oem.h senza il **/ permissiva-** , o utilizzare il [/wd](../../build/reference/compiler-option-warning-level.md) opzione Disattiva avviso C4471.

#### <a name="issue-in-umomscripth"></a>Problema nel um\omscript.h

In C++ 03, una conversione da valore letterale stringa BSTR (che è un typedef di ' wchar_t *') è deprecato, ma è consentito. In C++ 11, la conversione non è più consentita.

```cpp
virtual /* [id] */ HRESULT STDMETHODCALLTYPE setExpression(
    /* [in] */ __RPC__in BSTR propname,
    /* [in] */ __RPC__in BSTR expression,
    /* [in][defaultvalue] */ __RPC__in BSTR language = L"") = 0; // C2440
```

Per risolvere questo problema, compilare i file che includono omscript.h senza il **/ permissiva-** , o utilizzare **/Zc:strictStrings-** invece.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

Nella versione di Visual Studio 2017 15,5 e versioni successive, utilizzare questa procedura:

1. Aprire il progetto **pagine delle proprietà** la finestra di dialogo.

1. In **le proprietà di configurazione**, espandere il **C/C++** cartella e scegliere il **Language** pagina delle proprietà.

1. Modifica il **modalità conformità** valore della proprietà da **Sì (/ permissiva-)**. Scegliere **OK** o **applica** per salvare le modifiche.

Nelle versioni precedenti di Visual Studio 2017 versione 15,5, utilizzare questa procedura:

1. Aprire il progetto **pagine delle proprietà** la finestra di dialogo.

1. In **le proprietà di configurazione**, espandere il **C/C++** cartella e scegliere il **riga di comando** pagina delle proprietà.

1. Immettere il **/ permissiva-** opzione del compilatore nella **opzioni aggiuntive** casella. Scegliere **OK** o **applica** per salvare le modifiche.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)   
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
