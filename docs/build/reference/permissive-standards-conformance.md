---
title: /permissive/ (Conformità agli standard)
description: Guida di riferimento all'opzione del compilatore Microsoft C, /permissive- (conformità agli standard).
ms.date: 04/14/2020
f1_keywords:
- /permissive
- VC.Project.VCCLCompilerTool.ConformanceMode
helpviewer_keywords:
- /permissive compiler options [C++]
- -permissive compiler options [C++]
- Standards conformance compiler options
- permissive compiler options [C++]
ms.assetid: db1cc175-6e93-4a2e-9396-c3725d2d8f71
ms.openlocfilehash: 695f84e64f07128ac7744dc99e736f2a71ab3e79
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81337407"
---
# <a name="permissive--standards-conformance"></a>/permissive/ (Conformità agli standard)

Specificare la modalità di conformità degli standard al compilatore. Utilizzare questa opzione per identificare e risolvere i problemi di conformità nel codice, per renderlo più corretto e più portabile.

## <a name="syntax"></a>Sintassi

> **/permissivo-**

## <a name="remarks"></a>Osservazioni

Questa opzione è supportata in Visual Studio 2017 e versioni successive.

È possibile utilizzare l'opzione del compilatore **/permissive** per specificare il comportamento del compilatore conforme agli standard. Questa opzione disabilita i comportamenti permissivi e imposta le opzioni del compilatore [//c](zc-conformance.md) per una conformità rigorosa. Nell'IDE, questa opzione rende anche il motore IntelliSense sottolineare il codice non conforme.

Per impostazione predefinita, l'opzione **/permissive-** è impostata nei nuovi progetti creati da Visual Studio 2017 versione 15.5 e versioni successive. Non è impostato per impostazione predefinita nelle versioni precedenti. Quando l'opzione è impostata, il compilatore genera errori o avvisi di diagnostica quando vengono rilevati costrutti di linguaggio non standard nel codice, inclusi alcuni bug comuni nel codice precedente a C.

L'opzione **/permissive-** è compatibile con quasi tutti i file di intestazione dei più recenti Kit di Windows, ad esempio Software Development Kit (SDK) o Windows Driver Kit (WDK), a partire da Windows Fall Creators SDK (10.0.16299.0). Le versioni precedenti dell'SDK potrebbero non essere compilate in **/permissive-** per vari motivi di conformità del codice sorgente. Il compilatore e gli SDK vengono riprodotti in diverse sequenze temporali di rilascio, pertanto ci sono alcuni problemi rimanenti. Per problemi specifici relativi ai file di intestazione, vedere Problemi di [intestazione](#windows-header-issues) di Windows di seguito.

L'opzione **/permissive-** consente di impostare le opzioni [/-c:referenceBinding](zc-referencebinding-enforce-reference-binding-rules.md), [/ , c:strictStrings](zc-strictstrings-disable-string-literal-type-conversion.md)e [/ : c:rvalueCast](zc-rvaluecast-enforce-type-conversion-rules.md) per il comportamento conforme. Per impostazione predefinita, queste opzioni hanno un comportamento non conforme. Per eseguire l'override di questo comportamento, è possibile passare opzioni **/oc** specifiche dopo **/permissive-** nella riga di comando.

Nelle versioni del compilatore a partire da Visual Studio 2017 versione 15.3, l'opzione **/permissive-** imposta l'opzione [/-c:ternary.](zc-ternary.md) Il compilatore implementa anche più dei requisiti per la ricerca di nomi in due fasi. Quando l'opzione **/permissive-** è impostata, il compilatore analizza le definizioni di modello di funzione e classe e identifica i nomi dipendenti e non dipendenti utilizzati nei modelli. In questa versione viene eseguita solo l'analisi delle dipendenze dei nomi.

Le estensioni specifiche dell'ambiente e le aree linguistiche che lo standard lascia all'implementazione non sono interessate da **/permissive-**. Ad esempio, la `__declspec`convenzione di chiamata specifica di Microsoft, le parole chiave di gestione delle eccezioni strutturate e le direttive o gli attributi pragma specifici del compilatore non vengono contrassegnati dal compilatore in modalità **/permissive.**

L'opzione **/permissive-** utilizza il supporto di conformità nella versione corrente del compilatore per determinare quali costrutti di linguaggio non sono conformi. L'opzione non determina se il codice è conforme a una versione specifica dello standard C. Per abilitare tutto il supporto del compilatore implementato per l'ultimo standard bozza, utilizzare l'opzione [/std:latest.](std-specify-language-standard-version.md) Per limitare il supporto del compilatore allo standard attualmente implementato di C, utilizzare l'opzione [/std:c'17.](std-specify-language-standard-version.md) Per limitare il supporto del compilatore in modo che corrisponda più strettamente allo standard C-14, utilizzare l'opzione [/std:c'14,](std-specify-language-standard-version.md) che è l'impostazione predefinita.

Non tutti i codici conforme agli standard C, 11, C,14 o C'17 sono supportati dal compilatore MSVC in tutte le versioni di Visual Studio 2017. A seconda della versione di Visual Studio, l'opzione **/permissive-** potrebbe non rilevare problemi relativi ad alcuni aspetti della ricerca di nomi in due fasi, associando un riferimento non conforme a una copia temporanea, trattando la copia init come init diretto, consentendo più conversioni definite dall'utente nell'inizializzazione o token alternativi per gli operatori logici e altre aree di conformità non supportate. Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md). Per ottenere il massimo da **/permissive-**, aggiornare Visual Studio alla versione più recente.

### <a name="how-to-fix-your-code"></a>Come risolvere il codice

Di seguito sono riportati alcuni esempi di codice rilevato come non conforme quando si utilizza **/permissive-**, insieme a i modi suggeriti per risolvere i problemi.

#### <a name="use-default-as-an-identifier-in-native-code"></a>Usare il valore predefinito come identificatore nel codice nativoUse default as an identifier in native code

```cpp
void func(int default); // Error C2321: 'default' is a keyword, and
                        // cannot be used in this context
```

#### <a name="look-up-members-in-dependent-base"></a>Cercare membri nella base dipendente

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

#### <a name="use-of-qualified-names-in-member-declarations"></a>Utilizzo di nomi completi nelle dichiarazioni dei membri

```cpp
struct A {
    void A::f() { } // error C4596: illegal qualified name in member
                    // declaration.
                    // Remove redundant 'A::' to fix.
};
```

#### <a name="initialize-multiple-union-members-in-a-member-initializer"></a>Inizializzare più membri dell'unione in un inizializzatore di membroInitialize multiple union members in a member initializer

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

#### <a name="hidden-friend-name-lookup-rules"></a>Regole di ricerca del nome amico nascosto

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
    f(p); // Hidden friend now found via argument-dependent lookup.
}
```

#### <a name="use-scoped-enums-in-array-bounds"></a>Usare enumerazioni con ambito nei limiti della matriceUse scoped enums in array bounds

```cpp
enum class Color {
    Red, Green, Blue
};

int data[Color::Blue]; // error C3411: 'Color' is not valid as the size
                       // of an array as it is not an integer type.
                       // Cast to type size_t or int to fix.
```

#### <a name="use-for-each-in-native-code"></a>Usare per ognuno nel codice nativoUse for each in native code

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

#### <a name="use-of-atl-attributes"></a>Utilizzo degli attributi ATL

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

Nelle versioni del compilatore precedenti a Visual Studio 2017 versione 15.3, il compilatore accettava argomenti per l'operatore condizionale (o operatore ternario) `?:` che sono considerati ambigui dallo Standard. In modalità **/permissive,** il compilatore ora rilascia una o più diagnostica nei casi compilati senza diagnostica nelle versioni precedenti.

Gli errori comuni che possono derivare da questa modifica includono:Common errors that may result from this change include:

- errore C2593: 'operatore ?' è ambiguo

- errore C2679: binario '?': nessun operatore trovato che accetta un operando di destra di tipo 'B' (o non esiste alcuna conversione accettabile)

- errore C2678: binario '?': nessun operatore trovato che accetta un operando di sinistra di tipo 'A' (o non esiste alcuna conversione accettabile)

- errore C2446: ':': nessuna conversione da 'B' a 'A'

Un modello di codice tipico che può causare questo problema è quando una classe C fornisce sia un costruttore non esplicito da un altro tipo T che un operatore di conversione non esplicito al tipo T. In questo caso, sia la conversione del secondo argomento nel tipo del terzo argomento, sia la conversione del terzo argomento nel tipo del secondo argomento, sono conversioni valide. Poiché entrambi sono validi, è ambiguo secondo lo standard.

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

Esiste un'eccezione importante a questo modello comune quando T rappresenta uno dei `const char *` `const char16_t *`tipi di stringa con terminazione `?:` null (ad esempio, , e così via) e l'argomento effettivo a è un valore letterale stringa del tipo corrispondente. Il numero 17 ha modificato la semantica rispetto a C.14. Di conseguenza, il codice nell'esempio 2 viene accettato in **/std:c'14** e viene rifiutato in **/std:c'17** quando viene utilizzato **/-c:ternary** o **/permissive-.**

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

Un altro caso in cui è possibile visualizzare `void`errori è negli operatori condizionali con un argomento di tipo . Questo caso può essere comune nelle macro di tipo ASSERT.

```cpp
// Example 3: void arguments
void myassert(const char* text, const char* file, int line);
// Accepted when /Zc:ternary or /permissive- is not used:
#define ASSERT_A(ex) (void)((ex) ? 1 : myassert(#ex, __FILE__, __LINE__))
// Accepted always:
#define ASSERT_B(ex) (void)((ex) ? void() : myassert(#ex, __FILE__, __LINE__))
```

È inoltre possibile che vengano visualizzati errori nella metaprogrammazione dei modelli, in cui i tipi di risultato dell'operatore condizionale possono cambiare in / , **c:ternary** e **/permissive-**. Un modo per risolvere questo problema consiste [nell'utilizzare std::remove_reference](../../standard-library/remove-reference-class.md) sul tipo risultante.

```cpp
// Example 4: different result types
extern bool cond;
extern int count;
char  a = 'A';
const char  b = 'B';
decltype(auto) x = cond ? a : b; // char without, const char& with /Zc:ternary
const char (&z)[2] = count > 3 ? "A" : "B"; // const char* without /Zc:ternary
```

#### <a name="two-phase-name-look-up"></a>Ricerca di nomi in due fasi

Quando l'opzione **/permissive-** è impostata, il compilatore analizza le definizioni di modello di classe e funzione, identificando i nomi dipendenti e non utilizzati nei modelli come richiesto per la ricerca di nomi in due fasi. In Visual Studio 2017 versione 15.3 viene eseguita l'analisi delle dipendenze dei nomi. In particolare, i nomi non dipendenti che non sono dichiarati nel contesto di una definizione di modello causano un messaggio di diagnostica come richiesto dagli standard ISO C. In Visual Studio 2017 versione 15.7, viene eseguita anche l'associazione di nomi non dipendenti che richiedono la ricerca dipendente dagli argomenti nel contesto della definizione.

```cpp
// dependent base
struct B {
    void g() {}
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

Se si desidera un comportamento legacy per la ricerca in due fasi, ma in caso contrario si desidera **/permissive-** comportamento, aggiungere l'opzione **/-c:twoPhase-.**

### <a name="windows-header-issues"></a>Problemi relativi all'intestazione di Windows

L'opzione **/permissive-** è troppo rigida per le versioni dei kit di Windows prima di Windows Fall Creators Update SDK (10.0.16299.0) o Windows Driver Kit (WDK) versione 1709. Si consiglia di eseguire l'aggiornamento alle versioni più recenti dei kit di Windows per utilizzare **/permissive-** nel codice windows o driver di dispositivo.

Alcuni file di intestazione in Windows Aprile 2018 Update SDK (10.0.17134.0), Windows Fall Creators Update SDK (10.0.16299.0) o Windows Driver Kit (WDK) 1709, presentano ancora problemi incompatibili con l'utilizzo di **/permissive-**. Per risolvere questi problemi, è consigliabile limitare l'utilizzo di queste intestazioni solo ai file di codice sorgente che li richiedono e rimuovere l'opzione **/permissive-** quando si compilano i file di codice sorgente specifici.

Queste intestazioni WRL WinRT rilasciate in Windows April 2018 Update SDK (10.0.17134.0) non sono pulite con **/permissive-**. Per risolvere questi problemi, non utilizzare **/permissive-**, oppure utilizzare **/permissive-** con **/-c:twoPhase-** quando si utilizzano queste intestazioni:

- Problemi in winrt/wrl/async.h

   ```Output
   C:\Program Files (x86)\Windows Kits\10\Include\10.0.17134.0\winrt\wrl\async.h(483): error C3861: 'TraceDelegateAssigned': identifier not found
   C:\Program Files (x86)\Windows Kits\10\Include\10.0.17134.0\winrt\wrl\async.h(491): error C3861: 'CheckValidStateForDelegateCall': identifier not found
   C:\Program Files (x86)\Windows Kits\10\Include\10.0.17134.0\winrt\wrl\async.h(509): error C3861: 'TraceProgressNotificationStart': identifier not found
   C:\Program Files (x86)\Windows Kits\10\Include\10.0.17134.0\winrt\wrl\async.h(513): error C3861: 'TraceProgressNotificationComplete': identifier not found
   ```

- Problema in winrt/wrl/implements.h

   ```Output
   C:\Program Files (x86)\Windows Kits\10\include\10.0.17134.0\winrt\wrl\implements.h(2086): error C2039: 'SetStrongReference': is not a member of 'Microsoft::WRL::Details::WeakReferenceImpl'
   ```

Queste intestazioni in modalità utente rilasciate in Windows April 2018 Update SDK (10.0.17134.0) non sono pulite con **/permissive-**. Per risolvere questi problemi, non utilizzare **/permissive-** quando si lavora con queste intestazioni:

- Problemi in um/Tune.h

   ```Output
   C:\ProgramFiles(x86)\Windows Kits\10\include\10.0.17134.0\um\tune.h(139): error C3861: 'Release': identifier not found
   C:\Program Files (x86)\Windows Kits\10\include\10.0.17134.0\um\tune.h(559): error C3861: 'Release': identifier not found
   C:\Program Files (x86)\Windows Kits\10\include\10.0.17134.0\um\tune.h(1240): error C3861: 'Release': identifier not found
   C:\Program Files (x86)\Windows Kits\10\include\10.0.17134.0\um\tune.h(1240): note: 'Release': function declaration must be available as none of the arguments depend on a template parameter
   ```

- Problema in um/spddkhlp.h

   ```Output
   C:\Program Files (x86)\Windows Kits\10\include\10.0.17134.0\um\spddkhlp.h(759): error C3861: 'pNode': identifier not found
   ```

- Problemi in um/refptrco.h

   ```Output
   C:\Program Files (x86)\Windows Kits\10\include\10.0.17134.0\um\refptrco.h(179): error C2760: syntax error: unexpected token 'identifier', expected 'type specifier'
   C:\Program Files (x86)\Windows Kits\10\include\10.0.17134.0\um\refptrco.h(342): error C2760: syntax error: unexpected token 'identifier', expected 'type specifier'
   C:\Program Files (x86)\Windows Kits\10\include\10.0.17134.0\um\refptrco.h(395): error C2760: syntax error: unexpected token 'identifier', expected 'type specifier'
   ```

Questi problemi sono specifici delle intestazioni in modalità utente in Windows Fall Creators Update SDK (10.0.16299.0):

- Problema in um/Query.h

   Quando si utilizza l'opzione del compilatore **/permissive,** la `tagRESTRICTION` struttura non viene compilata a causa del membro case(RTOr) 'or'.

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

   Per risolvere questo problema, compilare i file che includono Query.h senza l'opzione **/permissive-.**

- Problema in um/cellularapi_oem.h

   Quando si utilizza l'opzione del compilatore /permissive- , la dichiarazione con prototipo genera un avviso:When using the **/permissive-** compiler switch, the forward declaration of `enum UICCDATASTOREACCESSMODE` causes a warning:

   ```cpp
   typedef enum UICCDATASTOREACCESSMODE UICCDATASTOREACCESSMODE; // C4471
   ```

   La dichiarazione con prototipo di enumerazione senza ambito è un'estensione Microsoft.The forward declaration of unscoped enum is a Microsoft extension. Per risolvere questo problema, compilare i file che includono cellularapi_oem.h senza l'opzione **/permissive-** oppure utilizzare l'opzione [/wd](compiler-option-warning-level.md) per disattivare l'avviso C4471.

- Problema in um/omscript.h

   Una conversione da un valore letterale stringa a BSTR (che è un typedef a 'wchar_t '') è deprecata ma consentita. La conversione non è più consentita in C: 11.

   ```cpp
   virtual /* [id] */ HRESULT STDMETHODCALLTYPE setExpression(
       /* [in] */ __RPC__in BSTR propname,
       /* [in] */ __RPC__in BSTR expression,
       /* [in][defaultvalue] */ __RPC__in BSTR language = L"") = 0; // C2440
   ```

   Per risolvere questo problema, compilare i file che includono omscript.h senza l'opzione **/permissive-** oppure utilizzare **invece /-c:strictStrings-.**

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

In Visual Studio 2017 versione 15.5 e versioni successive, utilizzare questa procedura:In Visual Studio 2017 version 15.5 and later versions, use this procedure:

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.

1. Selezionare la pagina**delle** proprietà **Proprietà** > di configurazione**c/C.** > 

1. Impostare il valore della proprietà **Modalità di conformità** su **Sì (/permissive-)**. Scegliere **OK** o **Applica** per salvare le modifiche.

Nelle versioni precedenti a Visual Studio 2017 versione 15.5, usare questa procedura:In versions before Visual Studio 2017 version 15.5, use this procedure:

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.

1. Selezionare la pagina delle proprietà **Riga** > di**comando** delle proprietà di configurazione**C/C.** > 

1. Immettere l'opzione **/permissive-** compiler nella casella **Opzioni aggiuntive** . Scegliere **OK** o **Applica** per salvare le modifiche.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)\
[Sintassi della riga di comando del compilatore MSVCMSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
