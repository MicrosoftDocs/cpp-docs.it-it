---
title: '/Zc: ternary (Applica regole di operatore condizionale)'
ms.date: 3/06/2018
f1_keywords:
- /Zc:ternary
helpviewer_keywords:
- /Zc:ternary
- Zc:ternary
- -Zc:ternary
ms.openlocfilehash: 2bc9e924656b9e1cb914255780adc4ae50220275
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50618192"
---
# <a name="zcternary-enforce-conditional-operator-rules"></a>/Zc: ternary (Applica regole di operatore condizionale)

Abilitare l'imposizione di regole Standard di C++ per i tipi e const o volatile qualificazione (Visualizzatore di concorrenza) del secondo e terzo operando in un'espressione con operatore condizionale.

## <a name="syntax"></a>Sintassi

> **/Zc:ternary**[**-**]

## <a name="remarks"></a>Note

Visual Studio versione 15.3 Abilita il supporto del compilatore per l'operatore condizionale (o ternario) standard C++ (**?:**) comportamento. Lo Standard C++ richiede entrambi gli operandi di essere dello stesso tipo e cv-qualificazione, per un solo operando sia convertibile in modo non ambiguo per lo stesso tipo e curriculum la qualifica a livello di altro o per uno o entrambi gli operandi essere un'espressione throw. Nelle versioni precedenti di Visual Studio versione 15.5, il compilatore ha consentito le conversioni per cui sono considerate ambigue dallo standard. Quando la **/Zc: ternary** opzione è specificata, il compilatore conforme allo standard e non accetta il codice che non soddisfano le regole per i tipi corrispondenti e curriculum la qualifica a livello del secondo e terzo operando.

Il **/Zc: ternary** opzione è disattivata per impostazione predefinita. Uso **/Zc: ternary** per abilitare il comportamento conforme, o **/Zc:ternary-** specificare in modo esplicito il comportamento del compilatore precedente non conforme. Il [/PERMISSIVE--](permissive-standards-conformance.md) opzione Abilita in modo implicito questa opzione, ma può essere sottoposto a override utilizzando **/Zc:ternary-**.

### <a name="examples"></a>Esempi

Questo esempio viene illustrato come una classe che fornisce sia l'inizializzazione non esplicita da un tipo e la conversione a un tipo può condurre a conversioni ambigue. Questo codice viene accettato dal compilatore per impostazione predefinita, ma rifiutati quando **/Zc: ternary** oppure **/PERMISSIVE--** è specificato.

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

La correzione necessaria consiste nel rendere un cast esplicito per il tipo comune preferito o impedire una direzione di conversione dalla partecipazione la ricerca del compilatore per trovare una corrispondenza di tipo effettuando la conversione esplicita.

Un'eccezione importante a questo modello comune è quando il tipo degli operandi è uno dei tipi di stringa a terminazione null, ad esempio `const char*`, `const char16_t*`e così via. È anche possibile riprodurre questo con i tipi di matrice e i tipi di puntatore per che è decay. Il comportamento quando il secondo o terzo operando effettivo per?: è un valore letterale stringa di tipo corrispondente dipende lo standard del linguaggio usato. C++17 è stata modificata la semantica per questo caso da c++14. Di conseguenza, il codice nell'esempio seguente viene accettato sotto **/std: c + + 14** (il valore predefinito del compilatore), ma è rifiutati quando **/std: c + + 17** è specificato.

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

Per correggere questo codice, eseguire il cast uno degli operandi in modo esplicito.

Sotto **/Zc: ternary**, i compilatore rifiuta gli operatori condizionali in cui uno degli argomenti è di tipo void e l'altro non è un'espressione throw. Un utilizzo comune di questi consiste nelle macro simile a ASSERT:

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

La soluzione tipica consiste nel sostituire semplicemente l'argomento non void con void().

Questo esempio viene illustrato il codice che genera un errore in entrambe **/Zc: ternary** e **/Zc:ternary-**:

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

Questo codice ha offerto in precedenza questo errore:

```Output
error C2446: ':': no conversion from 'foo::<lambda_f6cd18702c42f6cd636bfee362b37033>' to 'foo::<lambda_717fca3fc65510deea10bc47e2b06be4>'
note: No user-defined-conversion operator available that can perform this conversion, or the operator cannot be called
```

Con **/Zc: ternary** diventa più chiaro il motivo dell'errore; nelle architetture in uno qualsiasi di diverse convenzioni di chiamata definito dall'implementazione può essere utilizzato per generare ogni espressione lambda, il compilatore è espressa alcuna preferenza tra di essi che è stato possibile risolvere l'ambiguità le firme possibili lambda. Il nuovo output è simile alla seguente:

```Output
error C2593: 'operator ?' is ambiguous
note: could be 'built-in C++ operator?(bool (__cdecl *)(int,int), bool (__cdecl *)(int,int))'
note: or       'built-in C++ operator?(bool (__stdcall *)(int,int), bool (__stdcall *)(int,int))'
note: or       'built-in C++ operator?(bool (__fastcall *)(int,int), bool (__fastcall *)(int,int))'
note: or       'built-in C++ operator?(bool (__vectorcall *)(int,int), bool (__vectorcall *)(int,int))'
note: while trying to match the argument list '(foo::<lambda_717fca3fc65510deea10bc47e2b06be4>, foo::<lambda_f6cd18702c42f6cd636bfee362b37033>)'
```

Un'origine dei problemi comune correlati all'adozione del **/Zc: ternary** deriva dall'uso dell'operatore condizionale nel modello di metaprogrammazione, man mano che alcuni dei tipi di risultato cambiano in questo commutatore. L'esempio seguente illustra due casi in cui **/Zc: ternary** Cambia tipo di risultato dell'espressione condizionale in un contesto non meta-programmazione:

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

La soluzione tipica in questi casi consiste nell'applicare un `std::remove_reference` tratto sul risultato digitare dove necessario per mantenere il comportamento precedente.

Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **della riga di comando** pagina delle proprietà.

1. Modificare il **opzioni aggiuntive** proprietà da includere **/Zc: ternary** oppure **/Zc:ternary-** e quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[/Zc (conformità)](../../build/reference/zc-conformance.md)
