---
title: /permissive/ (Conformità agli standard)
description: Guida di riferimento all'opzione del compilatore Microsoft C++/permissive-(conformità agli standard).
ms.date: 10/28/2020
f1_keywords:
- /permissive
- VC.Project.VCCLCompilerTool.ConformanceMode
helpviewer_keywords:
- /permissive compiler options [C++]
- -permissive compiler options [C++]
- Standards conformance compiler options
- permissive compiler options [C++]
ms.assetid: db1cc175-6e93-4a2e-9396-c3725d2d8f71
ms.openlocfilehash: ae4ab62f6027d984217d750294f16138a6969f16
ms.sourcegitcommit: 25f6d52eb9e5d84bd0218c46372db85572af81da
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/10/2020
ms.locfileid: "94448477"
---
# <a name="permissive--standards-conformance"></a>/permissive/ (Conformità agli standard)

Specificare la modalità di conformità agli standard per il compilatore. Usare questa opzione per identificare e correggere i problemi di conformità nel codice, in modo da renderli più corretti e più portabili.

## <a name="syntax"></a>Sintassi

> **`/permissive-`**\
> **`/permissive`**

## <a name="remarks"></a>Osservazioni

L' **`/permissive-`** opzione è supportata in Visual Studio 2017 e versioni successive. **`/permissive`** è supportato in Visual Studio 2019 versione 16,8 e successive.

È possibile usare l' **`/permissive-`** opzione del compilatore per specificare il comportamento del compilatore conforme agli standard. Questa opzione Disabilita i comportamenti permissivi e imposta le opzioni del [`/Zc`](zc-conformance.md) compilatore per la conformità restrittiva. Nell'IDE, questa opzione rende anche il motore IntelliSense sottolineato il codice non conforme.

L' **`/permissive-`** opzione Usa il supporto della conformità nella versione corrente del compilatore per determinare quali costrutti di linguaggio non sono conformi. L'opzione non determina se il codice è conforme a una versione specifica dello standard C++. Per abilitare il supporto del compilatore implementato per l'ultima bozza standard, utilizzare l' [`/std:c++latest`](std-specify-language-standard-version.md) opzione. Per limitare il supporto del compilatore allo standard C++ 17 attualmente implementato, utilizzare l' [`/std:c++17`](std-specify-language-standard-version.md) opzione. Per limitare il supporto del compilatore allo standard C++ 14, utilizzare l' [`/std:c++14`](std-specify-language-standard-version.md) opzione, che corrisponde all'impostazione predefinita.

A partire da Visual Studio 2019 versione 16,8, l' **`/std:c++latest`** opzione imposta in modo implicito l' **`/permissive-`** opzione. È necessario per il supporto dei moduli C++ 20. È probabile che il codice non richieda il supporto dei moduli ma che ne richieda altre funzionalità **`/std:c++latest`** . È possibile abilitare in modo esplicito il supporto dell'estensione Microsoft utilizzando l' **`/permissive`** opzione senza il trattino finale.

Per impostazione predefinita, l' **`/permissive-`** opzione è impostata in nuovi progetti creati da Visual Studio 2017 versione 15,5 e versioni successive. Non è impostato per impostazione predefinita nelle versioni precedenti. Quando l'opzione è impostata, il compilatore genera errori di diagnostica o avvisi quando nel codice vengono rilevati costrutti di linguaggio non standard. Questi costrutti includono alcuni bug comuni nel codice precedente a C + + 11.

L' **`/permissive-`** opzione è compatibile con quasi tutti i file di intestazione dei kit Windows più recenti, ad esempio il Software Development Kit (SDK) o Windows Driver Kit (WDK), a partire da Windows Fall CREATORS SDK (10.0.16299.0). Le versioni precedenti dell'SDK potrebbero non essere compilate in **`/permissive-`** per diversi motivi di conformità del codice sorgente. Il compilatore e gli SDK vengono forniti in diverse sequenze temporali di rilascio, quindi ci sono alcuni problemi rimanenti. Per problemi specifici dei file di intestazione, vedere [problemi di intestazione di Windows](#windows-header-issues) di seguito.

L' **`/permissive-`** opzione imposta le [`/Zc:referenceBinding`](zc-referencebinding-enforce-reference-binding-rules.md) [`/Zc:strictStrings`](zc-strictstrings-disable-string-literal-type-conversion.md) Opzioni, e [`/Zc:rvalueCast`](zc-rvaluecast-enforce-type-conversion-rules.md) in modo da conformare il comportamento. Per impostazione predefinita, queste opzioni hanno un comportamento non conforme. È possibile passare **`/Zc`** Opzioni specifiche dopo **`/permissive-`** nella riga di comando per eseguire l'override di questo comportamento.

Nelle versioni del compilatore a partire da Visual Studio 2017 versione 15,3, l'opzione **`/permissive-`** imposta l' [`/Zc:ternary`](zc-ternary.md) opzione. Il compilatore implementa inoltre più requisiti per la ricerca del nome in due fasi. Quando l' **`/permissive-`** opzione è impostata, il compilatore analizza le definizioni di funzioni e modelli di classe e identifica i nomi dipendenti e non dipendenti usati nei modelli. In questa versione viene eseguita solo l'analisi delle dipendenze del nome.

Le estensioni specifiche dell'ambiente e le aree di linguaggio che lo standard abbandona all'implementazione non sono interessate da **`/permissive-`** . Ad esempio, le parole chiave specifiche di Microsoft **`__declspec`** , la convenzione di chiamata e la gestione delle eccezioni strutturate e le direttive o gli attributi pragma specifici del compilatore non vengono contrassegnati dal compilatore in **`/permissive-`** modalità.

Non tutto il codice conforme agli standard C++ 11, C++ 14 o C++ 17 è supportato dal compilatore MSVC in tutte le versioni di Visual Studio 2017. A seconda della versione di Visual Studio, è **`/permissive-`** possibile che l'opzione non rilevi i problemi in alcuni aspetti della ricerca del nome in due fasi, associando un riferimento non const a un oggetto temporaneo, considerando la copia init come Direct init, consentendo più conversioni definite dall'utente nell'inizializzazione o token alternativi per gli operatori logici e altre aree di conformità non supportate. Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md). Per ottenere il massimo da **`/permissive-`** , aggiornare Visual Studio alla versione più recente.

### <a name="how-to-fix-your-code"></a>Come correggere il codice

Di seguito sono riportati alcuni esempi di codice che vengono rilevati come non conformi quando si usa **`/permissive-`** , insieme a metodi suggeriti per risolvere i problemi.

#### <a name="use-default-as-an-identifier-in-native-code"></a>Usa valore predefinito come identificatore nel codice nativo

```cpp
void func(int default); // Error C2321: 'default' is a keyword, and
                        // cannot be used in this context
```

#### <a name="look-up-members-in-dependent-base"></a>Cerca membri nella base dipendente

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

#### <a name="use-of-qualified-names-in-member-declarations"></a>Uso di nomi completi nelle dichiarazioni dei membri

```cpp
struct A {
    void A::f() { } // error C4596: illegal qualified name in member
                    // declaration.
                    // Remove redundant 'A::' to fix.
};
```

#### <a name="initialize-multiple-union-members-in-a-member-initializer"></a>Inizializzare più membri Unione in un inizializzatore di membro

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

#### <a name="hidden-friend-name-lookup-rules"></a>Regole di ricerca nome Friend nascoste

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

#### <a name="use-scoped-enums-in-array-bounds"></a>Usare enum con ambito nei limiti della matrice

```cpp
enum class Color {
    Red, Green, Blue
};

int data[Color::Blue]; // error C3411: 'Color' is not valid as the size
                       // of an array as it is not an integer type.
                       // Cast to type size_t or int to fix.
```

#### <a name="use-for-each-in-native-code"></a>Usare per ogni nel codice nativo

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

#### <a name="use-of-atl-attributes"></a>Uso di attributi ATL

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

#### <a name="ambiguous-conditional-operator-arguments"></a>Argomenti ambigui dell'operatore condizionale

Nelle versioni del compilatore precedenti a Visual Studio 2017 versione 15,3, il compilatore accettava gli argomenti per l'operatore condizionale (o l'operatore ternario) `?:` considerati ambigui dallo standard. In **`/permissive-`** modalità, il compilatore ora emette una o più diagnostica nei casi in cui sono stati compilati senza diagnostica nelle versioni precedenti.

Gli errori comuni che possono derivare da questa modifica includono:

- `error C2593: 'operator ?' is ambiguous`

- `error C2679: binary '?': no operator found which takes a right-hand operand of type 'B' (or there is no acceptable conversion)`

- `error C2678: binary '?': no operator found which takes a left-hand operand of type 'A' (or there is no acceptable conversion)`

- `error C2446: ':': no conversion from 'B' to 'A'`

Un modello di codice tipico che può causare questo problema è quando una classe C fornisce sia un costruttore non esplicito da un altro tipo T che un operatore di conversione non esplicito al tipo T. In questo caso, sia la conversione del secondo argomento nel tipo del terzo argomento che la conversione del terzo argomento nel tipo del secondo argomento sono conversioni valide. Poiché entrambi sono validi, sono ambigui in base allo standard.

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

Esiste un'importante eccezione a questo modello comune quando T rappresenta uno dei tipi di stringa con terminazione null (ad esempio, `const char *` , `const char16_t *` e così via) e l'argomento effettivo a `?:` è un valore letterale stringa di tipo corrispondente. In c++ 17 è stata modificata la semantica da C++ 14. Di conseguenza, il codice nell'esempio 2 viene accettato in **`/std:c++14`** e rifiutato in **`/std:c++17`** quando **`/Zc:ternary`** **`/permissive-`** viene usato o.

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

Un altro caso in cui è possibile che si verifichino errori si verifica negli operatori condizionali con un argomento di tipo **`void`** . Questo caso può essere comune nelle macro di tipo ASSERZIONe.

```cpp
// Example 3: void arguments
void myassert(const char* text, const char* file, int line);
// Accepted when /Zc:ternary or /permissive- is not used:
#define ASSERT_A(ex) (void)((ex) ? 1 : myassert(#ex, __FILE__, __LINE__))
// Accepted always:
#define ASSERT_B(ex) (void)((ex) ? void() : myassert(#ex, __FILE__, __LINE__))
```

È anche possibile che vengano visualizzati errori nella metaprogrammazione del modello, in cui i tipi di risultati dell'operatore condizionale possono cambiare in **`/Zc:ternary`** e **`/permissive-`** . Un modo per risolvere questo problema consiste nell'usare [`std::remove_reference`](../../standard-library/remove-reference-class.md) sul tipo risultante.

```cpp
// Example 4: different result types
extern bool cond;
extern int count;
char  a = 'A';
const char  b = 'B';
decltype(auto) x = cond ? a : b; // char without, const char& with /Zc:ternary
const char (&z)[2] = count > 3 ? "A" : "B"; // const char* without /Zc:ternary
```

#### <a name="two-phase-name-look-up"></a>Ricerca nome in due fasi

Quando l' **`/permissive-`** opzione è impostata, il compilatore analizza le definizioni di funzioni e modelli di classe, identificando i nomi dipendenti e non dipendenti usati nei modelli come richiesto per la ricerca del nome in due fasi. In Visual Studio 2017 versione 15,3 viene eseguita l'analisi delle dipendenze dei nomi. In particolare, i nomi non dipendenti che non sono dichiarati nel contesto di una definizione di modello generano un messaggio di diagnostica come richiesto dagli standard ISO C++. In Visual Studio 2017 versione 15,7, viene eseguita anche l'associazione di nomi non dipendenti che richiedono la ricerca dipendente dall'argomento nel contesto della definizione.

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

Se si vuole un comportamento legacy per la ricerca in due fasi, ma in caso contrario si vuole usare **`/permissive-`** il comportamento, aggiungere l' **`/Zc:twoPhase-`** opzione.

### <a name="windows-header-issues"></a>Problemi di intestazione di Windows

L' **`/permissive-`** opzione è troppo restrittiva per le versioni di Windows Kit prima di Windows Fall Creators Update SDK (10.0.16299.0) o Windows Driver Kit (WDK) versione 1709. Si consiglia di eseguire l'aggiornamento alle versioni più recenti dei kit Windows da usare **`/permissive-`** nel codice di Windows o del driver di dispositivo.

Alcuni file di intestazione in Windows April 2018 Update SDK (10.0.17134.0), Windows Fall Creators Update SDK (10.0.16299.0) o Windows Driver Kit (WDK) 1709, presentano comunque problemi che li rendono incompatibili con l'uso di **`/permissive-`** . Per ovviare a questi problemi, è consigliabile limitare l'uso di queste intestazioni solo ai file di codice sorgente che li richiedono e rimuovere l' **`/permissive-`** opzione quando si compilano tali file di codice sorgente specifici.

Queste intestazioni WinRT WRL rilasciate nell'SDK di aggiornamento di Windows aprile 2018 (10.0.17134.0) non sono pulite con **`/permissive-`** . Per ovviare a questi problemi, non usare **`/permissive-`** o usare **`/permissive-`** con **`/Zc:twoPhase-`** quando si utilizzano queste intestazioni:

- Problemi in WinRT/WRL/Async. h

   ```Output
   C:\Program Files (x86)\Windows Kits\10\Include\10.0.17134.0\winrt\wrl\async.h(483): error C3861: 'TraceDelegateAssigned': identifier not found
   C:\Program Files (x86)\Windows Kits\10\Include\10.0.17134.0\winrt\wrl\async.h(491): error C3861: 'CheckValidStateForDelegateCall': identifier not found
   C:\Program Files (x86)\Windows Kits\10\Include\10.0.17134.0\winrt\wrl\async.h(509): error C3861: 'TraceProgressNotificationStart': identifier not found
   C:\Program Files (x86)\Windows Kits\10\Include\10.0.17134.0\winrt\wrl\async.h(513): error C3861: 'TraceProgressNotificationComplete': identifier not found
   ```

- Problema in WinRT/WRL/Implements. h

   ```Output
   C:\Program Files (x86)\Windows Kits\10\include\10.0.17134.0\winrt\wrl\implements.h(2086): error C2039: 'SetStrongReference': is not a member of 'Microsoft::WRL::Details::WeakReferenceImpl'
   ```

Queste intestazioni della modalità utente rilasciate nell'SDK degli aggiornamenti di Windows aprile 2018 (10.0.17134.0) non sono pulite con **`/permissive-`** . Per risolvere questi problemi, non usare quando si utilizzano **`/permissive-`** queste intestazioni:

- Problemi in um/Tune. h

   ```Output
   C:\ProgramFiles(x86)\Windows Kits\10\include\10.0.17134.0\um\tune.h(139): error C3861: 'Release': identifier not found
   C:\Program Files (x86)\Windows Kits\10\include\10.0.17134.0\um\tune.h(559): error C3861: 'Release': identifier not found
   C:\Program Files (x86)\Windows Kits\10\include\10.0.17134.0\um\tune.h(1240): error C3861: 'Release': identifier not found
   C:\Program Files (x86)\Windows Kits\10\include\10.0.17134.0\um\tune.h(1240): note: 'Release': function declaration must be available as none of the arguments depend on a template parameter
   ```

- Problema in um/spddkhlp. h

   ```Output
   C:\Program Files (x86)\Windows Kits\10\include\10.0.17134.0\um\spddkhlp.h(759): error C3861: 'pNode': identifier not found
   ```

- Problemi in um/refptrco. h

   ```Output
   C:\Program Files (x86)\Windows Kits\10\include\10.0.17134.0\um\refptrco.h(179): error C2760: syntax error: unexpected token 'identifier', expected 'type specifier'
   C:\Program Files (x86)\Windows Kits\10\include\10.0.17134.0\um\refptrco.h(342): error C2760: syntax error: unexpected token 'identifier', expected 'type specifier'
   C:\Program Files (x86)\Windows Kits\10\include\10.0.17134.0\um\refptrco.h(395): error C2760: syntax error: unexpected token 'identifier', expected 'type specifier'
   ```

Questi problemi sono specifici delle intestazioni della modalità utente nell'SDK di Windows Fall Creators Update (10.0.16299.0):

- Problema in um/query. h

   Quando si usa l' **`/permissive-`**  opzione del compilatore, la `tagRESTRICTION` struttura non viene compilata a causa del membro del case (RTOr).

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

   Per risolvere questo problema, compilare i file che includono query. h senza l' **`/permissive-`** opzione.

- Problema in um/cellularapi_oem. h

   Quando si usa l' **`/permissive-`**  opzione del compilatore, la dichiarazione con cui viene `enum UICCDATASTOREACCESSMODE` generato un avviso:

   ```cpp
   typedef enum UICCDATASTOREACCESSMODE UICCDATASTOREACCESSMODE; // C4471
   ```

   La dichiarazione con server di enum senza ambito è un'estensione Microsoft. Per risolvere questo problema, compilare i file che includono cellularapi_oem. h senza l' **`/permissive-`** opzione oppure usare l' [`/wd`](compiler-option-warning-level.md) opzione per tacitare l'avviso C4471.

- Problema in um/omscript. h

   In C++ 03, una conversione da un valore letterale stringa a BSTR (che è un typedef a' wchar_t *') è deprecata ma consentita. In C++ 11 la conversione non è più consentita.

   ```cpp
   virtual /* [id] */ HRESULT STDMETHODCALLTYPE setExpression(
       /* [in] */ __RPC__in BSTR propname,
       /* [in] */ __RPC__in BSTR expression,
       /* [in][defaultvalue] */ __RPC__in BSTR language = L"") = 0; // C2440
   ```

   Per risolvere questo problema, compilare i file che includono omscript. h senza l' **`/permissive-`** opzione oppure usare in **`/Zc:strictStrings-`** alternativa.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

In Visual Studio 2017 versione 15,5 e versioni successive usare questa procedura:

1. Aprire la finestra di dialogo **pagine delle proprietà** del progetto.

1. Selezionare la pagina delle proprietà di **configurazione** proprietà del  >  **linguaggio C/C++**  >  **Language** .

1. Modificare il valore della proprietà **modalità di conformità** in **Sì (/permissive-)**. Scegliere **OK** o **applica** per salvare le modifiche.

Nelle versioni precedenti a Visual Studio 2017 versione 15,5, usare questa procedura:

1. Aprire la finestra di dialogo **pagine delle proprietà** del progetto.

1. Selezionare la pagina delle proprietà di **configurazione** proprietà della riga di comando di  >  **c/C++**  >  **Command Line** .

1. Immettere l'opzione del compilatore **/permissive-** nella casella **Opzioni aggiuntive** . Scegliere **OK** o **applica** per salvare le modifiche.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)\
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
