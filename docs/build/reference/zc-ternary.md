---
title: /Zc:ternary (Applica le regole per l'operatore condizionale)
ms.date: 09/12/2019
f1_keywords:
- /Zc:ternary
helpviewer_keywords:
- /Zc:ternary
- Zc:ternary
- -Zc:ternary
ms.openlocfilehash: 5c38a09b92b4173ca962412a413abc283db590ff
ms.sourcegitcommit: effb516760c0f956c6308eeded48851accc96b92
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70927501"
---
# <a name="zcternary-enforce-conditional-operator-rules"></a>/Zc:ternary (Applica le regole per l'operatore condizionale)

Consente di applicare le regole C++ standard per i tipi e la qualificazione const o volatile (CV) del secondo e del terzo operando in un'espressione di operatore condizionale.

## <a name="syntax"></a>Sintassi

> **/Zc:ternary**[ **-** ]

## <a name="remarks"></a>Note

A partire da Visual Studio 2017, il compilatore C++ supporta il comportamento dell' *operatore condizionale* ( **?:** ) standard. È noto anche come *operatore ternario*. Lo C++ standard richiede che gli operandi ternari soddisfino una delle tre condizioni seguenti: Gli operandi devono essere dello stesso tipo e qualificazione **const** o **volatile** (qualifica CV) oppure un solo operando deve essere convertibile in modo non ambiguo allo stesso tipo e alla qualificazione CV come altro. Oppure, uno o entrambi gli operandi devono essere un'espressione throw. Nelle versioni precedenti a Visual Studio 2017 versione 15,5, il compilatore consentiva le conversioni considerate ambigue dallo standard.

Quando si specifica l'opzione **/Zc: ternaria** , il compilatore è conforme allo standard. Rifiuta il codice che non soddisfa le regole per i tipi corrispondenti e la qualificazione CV del secondo e del terzo operando.

L'opzione **/Zc: ternaria** è disattivata per impostazione predefinita in Visual Studio 2017. Usare **/Zc: ternaria** per abilitare il comportamento conforme oppure **/Zc: ternaria** per specificare in modo esplicito il comportamento del compilatore non conforme precedente. L'opzione [/permissive-](permissive-standards-conformance.md) Abilita in modo implicito questa opzione, ma è possibile eseguirne l'override usando **/Zc: ternaria-** .

### <a name="examples"></a>Esempi

In questo esempio viene illustrato come una classe che fornisce l'inizializzazione non esplicita da un tipo e la conversione in un tipo può causare conversioni ambigue. Questo codice viene accettato dal compilatore per impostazione predefinita, ma rifiutato quando viene specificato **/Zc: ternaria** o **/permissive-** .

```cpp
// zcternary1.cpp
// Compile by using: cl /EHsc /W4 /nologo /Zc:ternary zcternary1.cpp

struct A
{
   long l;
   A(int i) : l{i} {}    // explicit prevents conversion of int
   operator int() const { return static_cast<int>(l); }
};

int main()
{
   A a(42);
   // Accepted when /Zc:ternary (or /permissive-) is not used
   auto x = true ? 7 : a;  // old behavior prefers A(7) over (int)a
   auto y = true ? A(7) : a;   // always accepted
   auto z = true ? 7 : (int)a; // always accepted
   return x + y + z;
}
```

Per correggere questo codice, eseguire un cast esplicito al tipo comune preferito oppure impedire una direzione di conversione del tipo. È possibile evitare che il compilatore corrisponda a una conversione di tipi rendendo esplicita la conversione.

Un'importante eccezione a questo modello comune è quando il tipo degli operandi è uno dei tipi stringa con terminazione null, ad esempio `const char*`, `const char16_t*`e così via. È anche possibile riprodurre l'effetto con i tipi di matrice e i tipi di puntatore in cui decadono. Il comportamento quando il secondo o il terzo operando `?:` effettivo per è un valore letterale stringa di tipo corrispondente dipende dallo standard del linguaggio usato. In c++ 17 è stata modificata la semantica per questo caso da C++ 14. Di conseguenza, il compilatore accetta il codice nell'esempio seguente sotto il valore predefinito **/std: c++ 14**, ma lo rifiuta quando si specifica **/std: c++ 17**.

```cpp
// zcternary2.cpp
// Compile by using: cl /EHsc /W4 /nologo /Zc:ternary /std:c++17 zcternary2.cpp

struct MyString
{
   const char * p;
   MyString(const char* s = "") noexcept : p{s} {} // from char*
   operator const char*() const noexcept { return p; } // to char*
};

int main()
{
   MyString s;
   auto x = true ? "A" : s; // MyString: permissive prefers MyString("A") over (const char*)s
}
```

Per correggere questo codice, eseguire il cast esplicito di uno degli operandi.

In **/Zc: ternaria**, il compilatore rifiuta gli operatori condizionali in cui uno degli argomenti è di tipo **void**e l'altro non è un'espressione throw. Un uso comune di questo modello è in macro simili a ASSERT:

```cpp
// zcternary3.cpp
// Compile by using: cl /EHsc /W4 /nologo /Zc:ternary /c zcternary3.cpp

void myassert(const char* text, const char* file, int line);
#define ASSERT(ex) (void)((ex) ? 0 : myassert(#ex, __FILE__, __LINE__))
// To fix, define it this way instead:
// #define ASSERT(ex) (void)((ex) ? void() : myassert(#ex, __FILE__, __LINE__))

int main()
{
   ASSERT(false);  // C3447
}
```

La soluzione tipica consiste nel sostituire l'argomento non void con `void()`.

Questo esempio mostra il codice che genera un errore in **/Zc: ternaria** e **/Zc: ternaria-** :

```cpp
// zcternary4.cpp
// Compile by using:
//   cl /EHsc /W4 /nologo /Zc:ternary zcternary4.cpp
//   cl /EHsc /W4 /nologo /Zc:ternary zcternary4.cpp

int main() {
   auto p1 = [](int a, int b) { return a > b; };
   auto p2 = [](int a, int b) { return a > b; };
   auto p3 = true ? p1 : p2; // C2593 under /Zc:ternary, was C2446
}
```

Questo errore è stato fornito in precedenza dal codice seguente:

```Output
error C2446: ':': no conversion from 'foo::<lambda_f6cd18702c42f6cd636bfee362b37033>' to 'foo::<lambda_717fca3fc65510deea10bc47e2b06be4>'
note: No user-defined-conversion operator available that can perform this conversion, or the operator cannot be called
```

Con **/Zc: ternaria**, il motivo dell'errore diventa più chiaro. Per generare ogni espressione lambda, è possibile usare una delle diverse convenzioni di chiamata definite dall'implementazione. Tuttavia, il compilatore non ha alcuna regola di preferenza per distinguere le possibili firme lambda. Il nuovo output ha un aspetto simile al seguente:

```Output
error C2593: 'operator ?' is ambiguous
note: could be 'built-in C++ operator?(bool (__cdecl *)(int,int), bool (__cdecl *)(int,int))'
note: or       'built-in C++ operator?(bool (__stdcall *)(int,int), bool (__stdcall *)(int,int))'
note: or       'built-in C++ operator?(bool (__fastcall *)(int,int), bool (__fastcall *)(int,int))'
note: or       'built-in C++ operator?(bool (__vectorcall *)(int,int), bool (__vectorcall *)(int,int))'
note: while trying to match the argument list '(foo::<lambda_717fca3fc65510deea10bc47e2b06be4>, foo::<lambda_f6cd18702c42f6cd636bfee362b37033>)'
```

Una fonte comune di problemi rilevati da **/Zc: ternaria** deriva da operatori condizionali utilizzati nella metaprogrammazione dei modelli. Alcuni dei tipi di risultato cambiano in base a questa opzione. Nell'esempio seguente vengono illustrati due casi in cui **/Zc: ternari** modifica il tipo di risultato di un'espressione condizionale in un contesto non di programmazione:

```cpp
// zcternary5.cpp
// Compile by using: cl /EHsc /W4 /nologo /Zc:ternary zcternary5.cpp

int main(int argc, char**) {
   char a = 'A';
   const char b = 'B';
   decltype(auto) x = true ? a : b; // char without, const char& with /Zc:ternary
   const char(&z)[2] = argc > 3 ? "A" : "B"; // const char* without /Zc:ternary
   return x > *z;
}
```

La correzione tipica consiste nell'applicare un `std::remove_reference` tratto al tipo di risultato, laddove necessario per mantenere il comportamento precedente.

Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare le proprietà del compilatore e di compilazione C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà **Proprietà di configurazione** > **C/C++**  > **Riga di comando**.

1. Modificare la proprietà **Opzioni aggiuntive** in modo da includere **/Zc: ternaria** o **/Zc: ternaria** , quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[/Zc (conformità)](zc-conformance.md)
