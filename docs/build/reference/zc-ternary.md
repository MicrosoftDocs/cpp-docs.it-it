---
title: /Zc:ternary (Applica le regole per l'operatore condizionale)
ms.date: 09/12/2019
f1_keywords:
- /Zc:ternary
helpviewer_keywords:
- /Zc:ternary
- Zc:ternary
- -Zc:ternary
ms.openlocfilehash: 7c95f061e195ccf7fef8a6a21d193b257baa5f39
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81335673"
---
# <a name="zcternary-enforce-conditional-operator-rules"></a>/Zc:ternary (Applica le regole per l'operatore condizionale)

Abilitare l'applicazione delle regole standard di C, per i tipi e la qualifica const o volatile (cv) del secondo e del terzo operando in un'espressione di operatore condizionale.

## <a name="syntax"></a>Sintassi

> **/-c:ternario****-**[ ]

## <a name="remarks"></a>Osservazioni

A partire da Visual Studio 2017, il comportamento dell'operatore condizionale standard di C,**? ?:**, è supportato dall'operatore *condizionale* standard di C. E 'noto anche come *l'operatore ternario*. Lo standard di C, richiede che gli operandi ternari soddisfino una delle tre condizioni seguenti: gli operandi devono essere dello stesso tipo e della qualifica **const** o **volatile** (cv-qualifica) oppure solo un operando deve essere convertibile in modo non ambiguo nello stesso tipo e nella qualifica cv dell'altro. In alternativa, uno o entrambi gli operandi devono essere un'espressione throw. Nelle versioni precedenti a Visual Studio 2017 versione 15.5, il compilatore consentiva conversioni considerate ambigue dallo standard.

Quando viene specificata l'opzione **/-c:ternary,** il compilatore è conforme allo standard. Rifiuta il codice che non soddisfa le regole per i tipi corrispondenti e la qualifica cv del secondo e del terzo operando.

Per impostazione predefinita, l'opzione **/oc:ternary** è disattivata in Visual Studio 2017. Utilizzare **/-c:ternary** per abilitare il comportamento conforme oppure / , **c:ternary-** per specificare in modo esplicito il comportamento del compilatore non conforme precedente. L'opzione [/permissive-](permissive-standards-conformance.md) abilita in modo implicito questa opzione, ma può essere sottoposta a override utilizzando **l'opzione //c:ternary-**.

### <a name="examples"></a>Esempi

In questo esempio viene illustrato come una classe che fornisce sia l'inizializzazione non esplicita da un tipo che la conversione in un tipo può portare a conversioni ambigue. Questo codice viene accettato dal compilatore per impostazione predefinita, ma viene rifiutato quando viene specificata **l'opzione //c:ternary** o **/permissive-.**

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

Per correggere questo codice, eseguire un cast esplicito al tipo comune preferito o impedire una direzione di conversione del tipo. È possibile impedire al compilatore di trovare la corrispondenza con una conversione di tipo rendendo esplicita la conversione.

Un'importante eccezione a questo modello comune è quando il tipo degli operandi `const char*`è `const char16_t*`uno dei tipi di stringa con terminazione null, ad esempio , e così via. È inoltre possibile riprodurre l'effetto con i tipi di matrice e i tipi di puntatore in cui decadono. Il comportamento quando il secondo o `?:` il terzo operando effettivo è un valore letterale stringa del tipo corrispondente dipende dallo standard del linguaggio utilizzato. Il numero 17 ha modificato la semantica per il caso a partire da C.14. Di conseguenza, il compilatore accetta il codice riportato nell'esempio seguente in base all'opzione predefinita **/std:c'14**, ma lo rifiuta quando si specifica **/std:c'17**.

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

Per correggere questo codice, eseguire il cast di uno degli operandi in modo esplicito.

In **/ ,** il compilatore rifiuta gli operatori condizionali in cui uno degli argomenti è di tipo **void**e l'altro non è un'espressione throw. Un uso comune di questo modello è nelle macro di tipo ASSERT:A common use of this pattern is in ASSERT-like macros:

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

La soluzione tipica consiste nel sostituire `void()`l'argomento non void con .

In questo esempio viene illustrato il codice che genera un errore in entrambi i campi di seguito / **, c:ternary** e **/ , c:ternary-**:

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

Questo codice in precedenza ha dato questo errore:

```Output
error C2446: ':': no conversion from 'foo::<lambda_f6cd18702c42f6cd636bfee362b37033>' to 'foo::<lambda_717fca3fc65510deea10bc47e2b06be4>'
note: No user-defined-conversion operator available that can perform this conversion, or the operator cannot be called
```

Con **l'opzione /oc:ternary**, il motivo dell'errore diventa più chiaro. Qualsiasi di diverse convenzioni di chiamata definite dall'implementazione potrebbe essere usato per generare ogni lambda. Tuttavia, il compilatore non dispone di alcuna regola di preferenza per evitare ambiguità nelle possibili firme lambda. Il nuovo output è simile al seguente:The new output looks like this:

```Output
error C2593: 'operator ?' is ambiguous
note: could be 'built-in C++ operator?(bool (__cdecl *)(int,int), bool (__cdecl *)(int,int))'
note: or       'built-in C++ operator?(bool (__stdcall *)(int,int), bool (__stdcall *)(int,int))'
note: or       'built-in C++ operator?(bool (__fastcall *)(int,int), bool (__fastcall *)(int,int))'
note: or       'built-in C++ operator?(bool (__vectorcall *)(int,int), bool (__vectorcall *)(int,int))'
note: while trying to match the argument list '(foo::<lambda_717fca3fc65510deea10bc47e2b06be4>, foo::<lambda_f6cd18702c42f6cd636bfee362b37033>)'
```

Una fonte comune di problemi riscontrati da **//c:ternary** proviene da operatori condizionali utilizzati nella metaprogrammazione dei modelli. Alcuni dei tipi di risultati cambiano in questa opzione. Nell'esempio seguente vengono illustrati due casi in cui **l'opzione //c:ternary** modifica il tipo di risultato di un'espressione condizionale in un contesto non di programmazione:::::1:1:ternary changes a conditional expression's result type in a non-meta-programming context:

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

La correzione tipica consiste `std::remove_reference` nell'applicare un tratto al tipo di risultato, se necessario per mantenere il comportamento precedente.

Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà **Riga** > di**comando** delle proprietà di configurazione**C/C.** > 

1. Modificare la proprietà **Opzioni aggiuntive** in modo da includere l'opzione **//c:ternary** o **//c:ternary-** , quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[/Zc (Conformità)](zc-conformance.md)
