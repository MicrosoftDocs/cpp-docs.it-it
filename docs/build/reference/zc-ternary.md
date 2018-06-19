---
title: /Zc:ternary (applicare regole di operatore condizionale) | Documenti Microsoft
ms.date: 3/06/2018
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /Zc:ternary
dev_langs:
- C++
helpviewer_keywords:
- /Zc:ternary
- Zc:ternary
- -Zc:ternary
author: corob-msft
ms.author: corob
ms.openlocfilehash: 613381795fb962e1f10ec01598748b617b7543aa
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32380823"
---
# <a name="zcternary-enforce-conditional-operator-rules"></a>/Zc:ternary (applicare regole di operatore condizionale)

Abilitare l'applicazione di regole Standard di C++ per i tipi e const o volatile qualificazione (const) del secondo e terzo operando in un'espressione condizionale dell'operatore.

## <a name="syntax"></a>Sintassi

> **/Zc:ternary**[**-**]

## <a name="remarks"></a>Note

Visual Studio versione 15.3 Abilita il supporto del compilatore per l'operatore condizionale (o ternario) standard C++ (**?:**) comportamento. Lo Standard C++ richiede entrambi gli operandi di essere del tipo stesso e cv-qualifica, per un solo operando sia convertibile in modo non ambiguo per lo stesso tipo e cv-qualificazione di altro o per uno o entrambi gli operandi di un'espressione throw. Nelle versioni precedenti di Visual Studio versione 15,5, il compilatore ha consentito conversioni che sono considerate ambigue dallo standard. Quando il **/Zc:ternary** è specificata l'opzione, il compilatore è conforme allo standard e accetta il codice che non soddisfano le regole per i tipi corrispondenti e cv-qualifica del secondo e terzo operando.

Il **/Zc:ternary** opzione è disattivata per impostazione predefinita. Utilizzare **/Zc:ternary** per abilitare il comportamento conforme, o **/Zc:ternary-** specificare in modo esplicito il comportamento precedente del compilatore non conformi. Il [/ permissiva-](permissive-standards-conformance.md) opzione Abilita in modo implicito questa opzione, ma può essere sottoposto a override utilizzando **/Zc:ternary-**.

### <a name="examples"></a>Esempi

Questo esempio viene illustrato come una classe che fornisce sia l'inizializzazione non esplicita da un tipo e la conversione in un tipo può causare conversioni ambigue. Questo codice viene accettato dal compilatore per impostazione predefinita, ma rifiutati quando **/Zc:ternary** o **/ permissiva-** è specificato.

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

Per risolvere il problema richiesto è per rendere un cast esplicito per il tipo preferito di comune o impedire una direzione di conversione dalla partecipazione la ricerca del compilatore per trovare una corrispondenza di tipo, eseguendo la conversione esplicita.

Un'importante eccezione a questo modello comune è quando il tipo degli operandi è uno dei tipi di stringa con terminazione null, ad esempio `const char*`, `const char16_t*`e così via. È possibile riprodurre questo con tipi di matrice e che decay per i tipi di puntatore. Il comportamento quando il secondo o terzo operando effettivo per?: il linguaggio standard utilizzato dipende dal valore letterale di stringa di tipo corrispondente. C++ 17 è cambiato semantica per questo caso da C++ 14. Di conseguenza, il codice nell'esempio seguente viene accettato in **/std:c + + 14** (il valore predefinito del compilatore), ma viene rifiutato quando **/std:c + + 17** specificato.

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

Per correggere il codice, eseguire il cast uno degli operandi in modo esplicito.

In **/Zc:ternary**, i compilatore Rifiuta condizionali (operatori) in cui uno degli argomenti è di tipo void e l'altra non è un'espressione throw. Un utilizzo comune di questi è nelle macro ASSERT simile:

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

La soluzione tipica consiste nel sostituire semplicemente l'argomento di tipo non void con void().

Questo esempio viene illustrato il codice che genera un errore in entrambi **/Zc:ternary** e **/Zc:ternary-**:

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

Questo codice viene assegnato in precedenza questo errore:

```Output
error C2446: ':': no conversion from 'foo::<lambda_f6cd18702c42f6cd636bfee362b37033>' to 'foo::<lambda_717fca3fc65510deea10bc47e2b06be4>'
note: No user-defined-conversion operator available that can perform this conversion, or the operator cannot be called
```

Con **/Zc:ternary** il motivo dell'errore diventa più chiaro; nelle architetture in una delle diverse convenzioni di chiamata definito dall'implementazione può essere utilizzata per generare ciascun lambda, il compilatore non esprime alcuna preferenza tra di essi che potrebbe evitare ambiguità tra le firme lambda possibili. Il nuovo output simile al seguente:

```Output
error C2593: 'operator ?' is ambiguous
note: could be 'built-in C++ operator?(bool (__cdecl *)(int,int), bool (__cdecl *)(int,int))'
note: or       'built-in C++ operator?(bool (__stdcall *)(int,int), bool (__stdcall *)(int,int))'
note: or       'built-in C++ operator?(bool (__fastcall *)(int,int), bool (__fastcall *)(int,int))'
note: or       'built-in C++ operator?(bool (__vectorcall *)(int,int), bool (__vectorcall *)(int,int))'
note: while trying to match the argument list '(foo::<lambda_717fca3fc65510deea10bc47e2b06be4>, foo::<lambda_f6cd18702c42f6cd636bfee362b37033>)'
```

Un'origine dei problemi comune correlati all'adozione di **/Zc:ternary** proviene dall'utilizzo dell'operatore condizionale nel modello metaprogrammazione, alcuni dei tipi di risultati di modifica in questo commutatore. L'esempio seguente illustra due casi in cui **/Zc:ternary** Cambia tipo di risultato dell'espressione condizionale in un contesto di programmazione della meta:

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

La risoluzione tipica in questi casi è possibile applicare un `std::remove_reference` tratto sul risultato digitare dove necessario per mantenere il comportamento precedente.

Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **riga di comando** pagina delle proprietà.

1. Modificare il **opzioni aggiuntive** proprietà da includere **/Zc:ternary** o **/Zc:ternary-** e quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[/Zc (conformità)](../../build/reference/zc-conformance.md)  
