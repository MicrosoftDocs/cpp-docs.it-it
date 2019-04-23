---
title: / permissive-(conformità agli standard)
ms.date: 03/08/2019
f1_keywords:
- /permissive
- VC.Project.VCCLCompilerTool.ConformanceMode
helpviewer_keywords:
- /permissive compiler options [C++]
- -permissive compiler options [C++]
- Standards conformance compiler options
- permissive compiler options [C++]
ms.assetid: db1cc175-6e93-4a2e-9396-c3725d2d8f71
ms.openlocfilehash: 05089ef4f0a516f932d82f13be979da572701ae2
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59424131"
---
# <a name="permissive--standards-conformance"></a>/ permissive-(conformità agli standard)

Specificare la modalità di conformità agli standard del compilatore. Usare questa opzione per identificare e risolvere i problemi di conformità nel codice per renderlo più portabile sia più corretto.

## <a name="syntax"></a>Sintassi

> **/permissive-**

## <a name="remarks"></a>Note

Questa opzione è supportata in Visual Studio 2017 e versioni successive.

È possibile usare la **/PERMISSIVE--** opzione del compilatore per specificare il comportamento del compilatore conforme agli standard. Questa opzione Disabilita permissivi dei comportamenti e imposta il [/Zc](zc-conformance.md) opzioni del compilatore per la conformità ai rigidi. Nell'IDE, questa opzione rende inoltre il codice non conforme di IntelliSense motore sottolineato.

Per impostazione predefinita, il **/PERMISSIVE--** opzione è impostata in nuovi progetti creati da Visual Studio 2017 versione 15.5 e versioni successive. Non è impostata per impostazione predefinita nelle versioni precedenti. Quando l'opzione è impostata, il compilatore genera errori di diagnostica o nel codice vengono rilevati avvisi durante la costrutti di linguaggio non standard, inclusi alcuni bug comuni in pre-C + + 11 codice.

Il **/PERMISSIVE--** opzione è compatibile con quasi tutti i file di intestazione da Kit di Windows più recenti, ad esempio il Software Development Kit (SDK) o Windows Driver Kit (WDK), a partire da Windows Fall Creators SDK (10.0.16299.0). Le versioni precedenti del SDK potrebbero non riuscire per la compilazione sotto **/PERMISSIVE--** per vari motivi di conformità di codice di origine. Il compilatore e la spedizione di SDK su sequenze temporali di versione diverso, pertanto sono presenti alcuni problemi rimanenti. Per problemi di file di intestazione specifici, vedere [problemi intestazione Windows](#windows-header-issues) sotto.

Il **/PERMISSIVE--** set di opzioni di [/Zc: referencebinding](zc-referencebinding-enforce-reference-binding-rules.md), [/Zc: strictstrings](zc-strictstrings-disable-string-literal-type-conversion.md), e [/Zc: rvaluecast](zc-rvaluecast-enforce-type-conversion-rules.md) opzioni a conforme comportamento. Queste impostazioni predefinite delle opzioni per comportamento non conforme. È possibile passare specifici **/Zc** opzioni dopo **/PERMISSIVE--** nella riga di comando per eseguire l'override di questo comportamento.

Nelle versioni di inizio del compilatore in Visual Studio 2017 versione 15.3, il **/PERMISSIVE--** set di opzioni di [/Zc: ternary](zc-ternary.md) opzione. Il compilatore implementa anche più i requisiti per la ricerca nome in due fasi. Quando la **/PERMISSIVE--** opzione è impostata, il compilatore analizza definizioni di modello di funzione e la classe e identifica i nomi dei dipendenti e non dipendente usati nei modelli. In questa versione, viene eseguita solo analisi delle dipendenze di nome.

Le estensioni specifiche dell'ambiente e le aree di linguaggio che lascia lo standard dall'implementazione non sono interessate dal **/PERMISSIVE--**. Ad esempio, le specifiche di Microsoft `__declspec`, convenzione di chiamata e structured exception handling attributi e le direttive pragma del compilatore specifiche o parole chiave, non sono contrassegnate dal compilatore in **/PERMISSIVE--** modalità.

Il **/PERMISSIVE--** opzione Usa il supporto della conformità nella versione corrente del compilatore per determinare i costrutti di linguaggio sono non conforme. L'opzione non determina se il codice sia conforme a una versione specifica di C++ standard. Per consentire tutto il supporto del compilatore implementate per lo standard bozza più recente, usare il [/std:latest](std-specify-language-standard-version.md) opzione. Per limitare il supporto del compilatore per l'attuale implementazione standard c++17, usare il [/std: c + + 17](std-specify-language-standard-version.md) opzione. Per limitare il supporto del compilatore in modo che corrisponda maggiormente il standard c++14, usare il [/std: c + + 14](std-specify-language-standard-version.md) opzione, ovvero l'impostazione predefinita.

Non tutti c++11, c++14 o c++17 conforme agli standard codice è supportato dal compilatore MSVC in tutte le versioni di Visual Studio 2017. A seconda della versione di Visual Studio, il **/PERMISSIVE--** opzione potrebbe non rilevare i problemi per quanto riguarda alcuni aspetti della ricerca del nome in due fasi, un riferimento non const a una posizione temporanea di associazione, considerando init copia come init diretto, consentendo più conversioni definite dall'utente nell'inizializzazione, o token alternativo per gli operatori logici e ad altre aree non supportate della conformità. Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md). Per sfruttare al meglio **/PERMISSIVE--**, l'aggiornamento di Visual Studio alla versione più recente.

### <a name="how-to-fix-your-code"></a>Come correggere il codice

Di seguito sono riportati alcuni esempi di codice che viene rilevato come non conformi quando si usa **/PERMISSIVE--**, insieme ai metodi consigliati per risolvere i problemi.

#### <a name="use-default-as-an-identifier-in-native-code"></a>Utilizzare l'impostazione predefinita come identificatore nel codice nativo

```cpp
void func(int default); // Error C2321: 'default' is a keyword, and
                        // cannot be used in this context
```

#### <a name="look-up-members-in-dependent-base"></a>Cercare i membri in base dipendenti

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

#### <a name="hidden-friend-name-lookup-rules"></a>Regole di ricerca nome friend nascosti

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

#### <a name="use-scoped-enums-in-array-bounds"></a>Usare le enumerazioni con ambito nei limiti della matrice

```cpp
enum class Color {
    Red, Green, Blue
};

int data[Color::Blue]; // error C3411: 'Color' is not valid as the size
                       // of an array as it is not an integer type.
                       // Cast to type size_t or int to fix.
```

#### <a name="use-for-each-in-native-code"></a>Utilizzo per ogni elemento nel codice nativo

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

Nelle versioni del compilatore prima di Visual Studio 2017 versione 15.3, il compilatore accettati gli argomenti per l'operatore condizionale (o un operatore ternario) `?:` che sono considerati ambigui dallo Standard. Nelle **/PERMISSIVE--** modalità, il compilatore genera ora uno o più diagnostica nei casi in cui è stato compilato senza la diagnostica nelle versioni precedenti.

Errori comuni che possono derivare da questa modifica includono:

- Errore C2593: 'operatore'? è ambiguo

- errore C2679: binario '?': è stato trovato alcun operatore che accetti un operando a destra del tipo 'B' (o nessuna conversione accettabili)

- errore C2678: binario '?': è stato trovato alcun operatore che accetti un operando sinistro di tipo "A" (o nessuna conversione accettabili)

- Errore C2446: ':': nessuna conversione da 'B' a 'A'

Un modello di codice tipico che può causare questo problema è quando una classe C fornisce un costruttore non esplicito da un altro tipo T e un operatore di conversione non esplicita di tipo T. In questo caso, la conversione del secondo argomento per il tipo del terzo argomento sia la conversione del terzo argomento per il tipo del secondo argomento, sono conversioni valide. Poiché entrambi sono validi, è ambiguo in base allo standard.

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

Si verifica un'eccezione importante a questo modello comune quando T rappresenta uno dei tipi di stringa a terminazione null (ad esempio, `const char *`, `const char16_t *`e così via) e l'argomento effettivo al `?:` è una stringa letterale di tipo corrispondente. C++17 è stata modificata la semantica di c++14. Di conseguenza, il codice di esempio 2 viene accettato sotto **/std: c + + 14** e viene rifiutata in **/std: c + + 17** quando **/Zc: ternary** o **/permissive-** viene usato.

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

Un altro caso in cui è possibile riscontrare errori è negli operatori condizionali con un solo argomento di tipo `void`. In questo caso potrebbe essere comune nelle macro simile a ASSERT.

```cpp
// Example 3: void arguments
void myassert(const char* text, const char* file, int line);
// Accepted when /Zc:ternary or /permissive- is not used:
#define ASSERT_A(ex) (void)((ex) ? 1 : myassert(#ex, __FILE__, __LINE__))
// Accepted always:
#define ASSERT_B(ex) (void)((ex) ? void() : myassert(#ex, __FILE__, __LINE__))
```

È inoltre possibile visualizzare gli errori nel modello di metaprogrammazione, in cui i tipi di risultato dell'operatore condizionale possono cambiare in **/Zc: ternary** e **/PERMISSIVE--**. Un modo per risolvere questo problema consiste nell'usare [std::remove_reference](../../standard-library/remove-reference-class.md) nel tipo risultante.

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

Quando la **/PERMISSIVE--** opzione è impostata, il compilatore analizza definizioni di modello di funzione e di classe, che identifica i nomi dei dipendenti e non dipendente utilizzati nei modelli in base alle esigenze per la ricerca nome in due fasi. In Visual Studio 2017 versione 15.3, viene eseguita l'analisi delle dipendenze di nome. In particolare, i nomi non dipendente che non sono dichiarati nel contesto di una definizione di modello causano un messaggio di diagnostica come richiesto dagli standard ISO C++. In Visual Studio 2017 versione 15.7, viene eseguita anche associazione dei nomi non dipendente che richiedono la ricerca dipendente dall'argomento nel contesto di definizione.

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

Se si desidera che il comportamento legacy per la ricerca in due fasi, ma in caso contrario **/PERMISSIVE--** comportamento, aggiungere il **/Zc:twoPhase-** opzione.

### <a name="windows-header-issues"></a>Argomenti relativi alle intestazioni di Windows

Il **/PERMISSIVE--** opzione è troppo limitato per le versioni del Kit di Windows prima di Windows Fall Creators Update SDK (10.0.16299.0) o la versione 1709 di Windows Driver Kit (WDK). È consigliabile aggiornare per le versioni più recenti del Kit di Windows per usare **/PERMISSIVE--** nel codice driver Windows o un dispositivo.

Alcuni file di intestazione di Windows di aprile 2018 Update SDK (10.0.17134.0), Windows Fall Creators Update SDK (10.0.16299.0) o Windows Driver Kit (WDK) 1709, avere problemi che li rendono incompatibile con uso di **/permissive-**. Per risolvere questi problemi, è consigliabile limitare l'utilizzo di queste intestazioni al solo i file di codice sorgente che li richiedono e rimuovere i **/PERMISSIVE--** opzione quando si compilano i file del codice sorgente specifici.

Queste intestazioni WRL WinRT rilasciate in di Windows aprile 2018 Update SDK (10.0.17134.0) non sono pulita con **/PERMISSIVE--**. Per risolvere questi problemi, non usare **/PERMISSIVE--**, oppure utilizzare **/PERMISSIVE--** con **/Zc:twoPhase-** quando si lavora con queste intestazioni:

- Problemi in winrt/wrl/async.h

   ```Output
   C:\Program Files (x86)\Windows Kits\10\Include\10.0.17134.0\winrt\wrl\async.h(483): error C3861: 'TraceDelegateAssigned': identifier not found
   C:\Program Files (x86)\Windows Kits\10\Include\10.0.17134.0\winrt\wrl\async.h(491): error C3861: 'CheckValidStateForDelegateCall': identifier not found
   C:\Program Files (x86)\Windows Kits\10\Include\10.0.17134.0\winrt\wrl\async.h(509): error C3861: 'TraceProgressNotificationStart': identifier not found
   C:\Program Files (x86)\Windows Kits\10\Include\10.0.17134.0\winrt\wrl\async.h(513): error C3861: 'TraceProgressNotificationComplete': identifier not found
   ```

- Rilasciare in winrt/wrl/implements.h

   ```Output
   C:\Program Files (x86)\Windows Kits\10\include\10.0.17134.0\winrt\wrl\implements.h(2086): error C2039: 'SetStrongReference': is not a member of 'Microsoft::WRL::Details::WeakReferenceImpl'
   ```

Queste intestazioni in modalità utente rilasciate in di Windows aprile 2018 Update SDK (10.0.17134.0) non sono pulita con **/PERMISSIVE--**. Per risolvere questi problemi, non utilizzare **/PERMISSIVE--** quando si lavora con queste intestazioni:

- Problemi in um/Tune.h

   ```Output
   C:\ProgramFiles(x86)\Windows Kits\10\include\10.0.17134.0\um\tune.h(139): error C3861: 'Release': identifier not found
   C:\Program Files (x86)\Windows Kits\10\include\10.0.17134.0\um\tune.h(559): error C3861: 'Release': identifier not found
   C:\Program Files (x86)\Windows Kits\10\include\10.0.17134.0\um\tune.h(1240): error C3861: 'Release': identifier not found
   C:\Program Files (x86)\Windows Kits\10\include\10.0.17134.0\um\tune.h(1240): note: 'Release': function declaration must be available as none of the arguments depend on a template parameter
   ```

- Rilasciare in um/spddkhlp.h

   ```Output
   C:\Program Files (x86)\Windows Kits\10\include\10.0.17134.0\um\spddkhlp.h(759): error C3861: 'pNode': identifier not found
   ```

- Problemi in um/refptrco.h

   ```Output
   C:\Program Files (x86)\Windows Kits\10\include\10.0.17134.0\um\refptrco.h(179): error C2760: syntax error: unexpected token 'identifier', expected 'type specifier'
   C:\Program Files (x86)\Windows Kits\10\include\10.0.17134.0\um\refptrco.h(342): error C2760: syntax error: unexpected token 'identifier', expected 'type specifier'
   C:\Program Files (x86)\Windows Kits\10\include\10.0.17134.0\um\refptrco.h(395): error C2760: syntax error: unexpected token 'identifier', expected 'type specifier'
   ```

Questi problemi sono specifici per le intestazioni in modalità utente di Windows Fall Creators Update SDK (10.0.16299.0):

- Rilasciare in um/Query.h

   Quando si usa la **/PERMISSIVE--** opzione del compilatore, il `tagRESTRICTION` struttura non viene compilato a causa di un membro case(RTOr) 'o'.

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

   Per risolvere questo problema, compilare i file che includono Query.h senza il **/PERMISSIVE--** opzione.

- Rilasciare in um/cellularapi_oem.h

   Quando si usa la **/PERMISSIVE--** opzione del compilatore, la dichiarazione con prototipo di `enum UICCDATASTOREACCESSMODE` genera un avviso:

   ```cpp
   typedef enum UICCDATASTOREACCESSMODE UICCDATASTOREACCESSMODE; // C4471
   ```

   La dichiarazione con prototipo di enumerazione senza ambito è un'estensione Microsoft. Per risolvere questo problema, compilare i file che includono cellularapi_oem.h senza il **/PERMISSIVE--** , oppure utilizzare il [/wd](compiler-option-warning-level.md) opzione per ignorare l'avviso C4471.

- Rilasciare in um/omscript.h

   In c++03, una conversione da valore letterale stringa BSTR (ovvero un typedef per ' wchar_t *') è deprecato, ma è consentita. In c++11, la conversione non è più consentita.

   ```cpp
   virtual /* [id] */ HRESULT STDMETHODCALLTYPE setExpression(
       /* [in] */ __RPC__in BSTR propname,
       /* [in] */ __RPC__in BSTR expression,
       /* [in][defaultvalue] */ __RPC__in BSTR language = L"") = 0; // C2440
   ```

   Per risolvere questo problema, compilare i file che includono omscript.h senza il **/PERMISSIVE--** , oppure utilizzare **/Zc:strictStrings-** invece.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

In Visual Studio 2017 versione 15.5 e versioni successive, usare questa procedura:

1. Aprire il progetto **pagine delle proprietà** nella finestra di dialogo.

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **lingua** pagina delle proprietà.

1. Modifica il **modalità di conformità** valore della proprietà **Sì (/PERMISSIVE--)**. Scegli **OK** oppure **applica** per salvare le modifiche.

Nelle versioni precedenti di Visual Studio 2017 versione 15.5, utilizzare questa procedura:

1. Aprire il progetto **pagine delle proprietà** nella finestra di dialogo.

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **della riga di comando** pagina delle proprietà.

1. Immettere il **/PERMISSIVE--** opzione del compilatore nella **opzioni aggiuntive** casella. Scegli **OK** oppure **applica** per salvare le modifiche.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

- [Opzioni del compilatore MSVC](compiler-options.md)
- [Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
