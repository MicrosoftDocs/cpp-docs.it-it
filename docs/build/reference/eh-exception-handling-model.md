---
title: /EH (Modello di gestione delle eccezioni)
description: Guida di riferimento per le opzioni del compilatore Microsoft C++/EH (modello di gestione delle eccezioni) in Visual Studio.
ms.date: 04/14/2020
f1_keywords:
- VC.Project.VCCLWCECompilerTool.ExceptionHandling
- /eh
- VC.Project.VCCLCompilerTool.ExceptionHandling
helpviewer_keywords:
- exception handling, compiler model
- cl.exe compiler, exception handling
- EH compiler option [C++]
- -EH compiler option [C++]
- /EH compiler option [C++]
no-loc:
- ':::no-loc(SEH):::'
- ':::no-loc(try):::'
- ':::no-loc(catch):::'
- ':::no-loc(throw):::'
- ':::no-loc(extern):::'
- ':::no-loc(finally):::'
- ':::no-loc(noexcept):::'
ms.assetid: 754b916f-d206-4472-b55a-b6f1b0f2cb4d
ms.openlocfilehash: f158e951d595d5934ff513254871710db5920bf1
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87232716"
---
# <a name="eh-exception-handling-model"></a>/EH (Modello di gestione delle eccezioni)

Specifica il supporto del modello di gestione delle eccezioni generato dal compilatore. Gli argomenti specificano se applicare `:::no-loc(catch):::(...)` la sintassi alle eccezioni C++ strutturate e standard, se si presuppone che il codice ** :::no-loc(extern)::: "C"** venga usato per :::no-loc(throw)::: le eccezioni e se ottimizzare determinati **`:::no-loc(noexcept):::`** controlli.

## <a name="syntax"></a>Sintassi

> **`/EHa`**[**`-`**]\
> **`/EHs`**[**`-`**]\
> **`/EHc`**[**`-`**]\
> **`/EHr`**[**`-`**]

## <a name="arguments"></a>Argomenti

**`a`**\
Abilita la rimozione dello stack C++ standard. Rileva sia le eccezioni strutturate (asincrone) che quelle C++ standard (sincrone) quando si utilizza la `:::no-loc(catch):::(...)` sintassi. **`/EHa`** esegue l'override di entrambi gli **`/EHs`** **`/EHc`** argomenti e.

**`s`**\
Abilita la rimozione dello stack C++ standard. Rileva solo le eccezioni C++ standard quando si utilizza la `:::no-loc(catch):::(...)` sintassi. A meno **`/EHc`** che non sia specificato anche, il compilatore presuppone che le funzioni dichiarate come ** :::no-loc(extern)::: "C"** possano essere :::no-loc(throw)::: un'eccezione C++.

**`c`**\
Se usato con **`/EHs`** , il compilatore presuppone che le funzioni dichiarate come ** :::no-loc(extern)::: "C"** non siano mai :::no-loc(throw)::: un'eccezione C++. Non ha alcun effetto se usato con **`/EHa`** (ovvero **`/EHca`** equivale a **`/EHa`** ). **`/EHc`** viene ignorato se **`/EHs`** o **`/EHa`** non sono specificati.

**`r`**\
Indica al compilatore di generare sempre controlli di terminazione di runtime per tutte le **`:::no-loc(noexcept):::`** funzioni. Per impostazione predefinita, **`:::no-loc(noexcept):::`** è possibile ottimizzare i controlli di runtime per se il compilatore determina che la funzione chiama solo funzioni non di :::no-loc(throw)::: Ing. Questa opzione offre una rigorosa conformità C++ al costo di codice aggiuntivo. **`/EHr`** viene ignorato se **`/EHs`** o **`/EHa`** non sono specificati.

**`-`**\
Cancella l'argomento dell'opzione precedente. Ad esempio, **`/EHsc-`** viene interpretato come **`/EHs /EHc-`** ed è equivalente a **`/EHs`** .

**`/EH`** gli argomenti possono essere specificati separatamente o combinati in qualsiasi ordine. Se viene specificata più di un'istanza dello stesso argomento, l'ultima esegue l'override di quelle precedenti.  Ad esempio, **`/EHr- /EHc /EHs`** è uguale a **`/EHscr-`** e **`/EHscr- /EHr`** ha lo stesso effetto di **`/EHscr`** .

## <a name="remarks"></a>Osservazioni

### <a name="default-exception-handling-behavior"></a>Comportamento predefinito di gestione delle eccezioni

Il compilatore genera sempre il codice che supporta la gestione delle eccezioni strutturata asincrona ( :::no-loc(SEH)::: ). Per impostazione predefinita, ovvero se non **`/EHsc`** **`/EHs`** viene specificata alcuna opzione, o, **`/EHa`** il compilatore supporta i :::no-loc(SEH)::: gestori nella clausola C++ nativa `:::no-loc(catch):::(...)` . Tuttavia, genera anche codice che supporta solo parzialmente le eccezioni C++. Il codice di rimozione dell'eccezione predefinito non elimina definitivamente gli oggetti C++ automatici all'esterno dei [:::no-loc(try):::](../../cpp/:::no-loc(try):::-:::no-loc(throw):::-and-:::no-loc(catch):::-statements-cpp.md) blocchi che non rientrano nell'ambito a causa di un'eccezione. Le perdite di risorse e il comportamento indefinito possono verificarsi quando un'eccezione C++ è :::no-loc(throw)::: n.

### <a name="standard-c-exception-handling"></a>Gestione delle eccezioni standard C++

Supporto completo del compilatore per il modello di gestione delle eccezioni C++ standard che richiede la rimozione sicura degli oggetti Stack **`/EHsc`** (scelta consigliata), **`/EHs`** o **`/EHa`** .

Se si usa **`/EHs`** o **`/EHsc`** , le `:::no-loc(catch):::(...)` clausole non consentono :::no-loc(catch)::: eccezioni strutturate asincrone. Eventuali violazioni di accesso e le <xref:System.Exception?displayProperty=fullName> eccezioni gestite non vengono rilevate. Gli oggetti nell'ambito quando si verifica un'eccezione asincrona non vengono eliminati definitivamente, anche se il codice gestisce l'eccezione asincrona. Questo comportamento è un argomento per lasciare non gestite eccezioni strutturate. In alternativa, considerare le eccezioni irreversibili.

Quando si usa **`/EHs`** o **`/EHsc`** , il compilatore presuppone che le eccezioni possano verificarsi solo in corrispondenza di un' **`:::no-loc(throw):::`** istruzione o in una chiamata di funzione. Questo presupposto consente al compilatore di eliminare il codice per tenere traccia della durata di molti oggetti non rimovibili, che possono ridurre significativamente le dimensioni del codice. Se si usa **`/EHa`** , l'immagine eseguibile potrebbe essere più grande e più lenta, perché il compilatore non ottimizza i **`:::no-loc(try):::`** blocchi in modo aggressivo. Lascia anche i filtri eccezioni che puliscono automaticamente gli oggetti locali, anche se il compilatore non Visualizza codice che può avere :::no-loc(throw)::: un'eccezione C++.

### <a name="structured-and-standard-c-exception-handling"></a>Gestione delle eccezioni C++ strutturata e standard

L' **`/EHa`** opzione del compilatore consente la rimozione dello stack sicura sia per le eccezioni asincrone sia per le eccezioni C++. Supporta la gestione di standard C++ e delle eccezioni strutturate tramite la clausola C++ nativa `:::no-loc(catch):::(...)` . Per implementare :::no-loc(SEH)::: senza specificare **`/EHa`** , è possibile usare la **sintassi :::no-loc(try)::: _ _**, **`__except`** e **`__:::no-loc(finally):::`** . Per altre informazioni, vedere [gestione delle eccezioni strutturata](../../cpp/structured-exception-handling-c-cpp.md).

> [!IMPORTANT]
> La specifica di **`/EHa`** e :::no-loc(try)::: di per gestire tutte le eccezioni tramite `:::no-loc(catch):::(...)` può essere pericolosa. Nella maggior parte dei casi, le eccezioni asincrone sono irreversibili e devono essere gestite come tali. Il tentativo di intercettarle per procedere potrebbe causare il danneggiamento del processo ed errori difficili da trovare e risolvere.
>
> Anche se Windows e Visual C++ supportano :::no-loc(SEH)::: , è consigliabile usare la gestione delle eccezioni C++ standard ISO ( **`/EHsc`** o **`/EHs`** ). Rende il codice più portabile e flessibile. È comunque possibile che sia necessario utilizzare :::no-loc(SEH)::: nel codice legacy o per determinati tipi di programmi. È necessario nel codice compilato per supportare il Common Language Runtime ([/CLR](clr-common-language-runtime-compilation.md)), ad esempio. Per altre informazioni, vedere [gestione delle eccezioni strutturata](../../cpp/structured-exception-handling-c-cpp.md).
>
> Si consiglia di non collegare mai i file oggetto compilati usando **`/EHa`** a quelli compilati con **`/EHs`** o **`/EHsc`** nello stesso modulo eseguibile. Se è necessario gestire un'eccezione asincrona usando **`/EHa`** in qualsiasi punto del modulo, usare **`/EHa`** per compilare tutto il codice nel modulo. È possibile usare la sintassi di gestione delle eccezioni strutturata nello stesso modulo del codice compilato usando **`/EHs`** . Tuttavia, non è possibile combinare la :::no-loc(SEH)::: sintassi con C++ **`:::no-loc(try):::`** , **`:::no-loc(throw):::`** e **`:::no-loc(catch):::`** nella stessa funzione.

Usare **`/EHa`** se si vuole :::no-loc(catch)::: un'eccezione generata da un elemento diverso da un oggetto **`:::no-loc(throw):::`** . Questo esempio genera ed :::no-loc(catch)::: es un'eccezione strutturata:

```cpp
// compiler_options_EHA.cpp
// compile with: /EHa
#include <iostream>
#include <excpt.h>
using namespace std;

void fail()
{
    // generates SE and attempts to :::no-loc(catch)::: it using :::no-loc(catch):::(...)
    :::no-loc(try):::
    {
        int i = 0, j = 1;
        j /= i;   // This will :::no-loc(throw)::: a SE (divide by zero).
        printf("%d", j);
    }
    :::no-loc(catch):::(...)
    {
        // :::no-loc(catch)::: block will only be executed under /EHa
        cout << "Caught an exception in :::no-loc(catch):::(...)." << endl;
    }
}

int main()
{
    __:::no-loc(try):::
    {
        fail();
    }

    // __except will only :::no-loc(catch)::: an exception here
    __except(EXCEPTION_EXECUTE_HANDLER)
    {
        // if the exception was not caught by the :::no-loc(catch):::(...) inside fail()
        cout << "An exception was caught in __except." << endl;
    }
}
```

### <a name="exception-handling-under-clr"></a>Gestione delle eccezioni in/CLR

L' **`/clr`** opzione implica **`/EHa`** (ovvero **`/clr /EHa`** è ridondante). Il compilatore genera un errore se **`/EHs`** **`/EHsc`** viene usato o dopo **`/clr`** . Le ottimizzazioni non influiscono su questo comportamento. Quando viene rilevata un'eccezione, il compilatore richiama i distruttori di classe per tutti gli oggetti che si trovano nello stesso ambito dell'eccezione. Se un'eccezione non viene intercettata, questi distruttori non vengono eseguiti.

Per informazioni sulle restrizioni relative alla gestione delle eccezioni in **`/clr`** , vedere [_set_se_translator](../../c-runtime-library/reference/set-se-translator.md).

### <a name="runtime-exception-checks"></a>Controlli delle eccezioni di runtime

L' **`/EHr`** opzione forza i controlli di terminazione di runtime in tutte le funzioni che hanno un **`:::no-loc(noexcept):::`** attributo. Per impostazione predefinita, i controlli di runtime possono essere ottimizzati se il back-end del compilatore determina che una funzione chiama solo funzioni *non di :::no-loc(throw)::: ing* . :::no-loc(throw):::Le funzioni non di ING sono funzioni con un attributo che specifica che nessuna eccezione può essere :::no-loc(throw)::: n. Sono incluse funzioni contrassegnate come,, **`:::no-loc(noexcept):::`** `:::no-loc(throw):::()` `__declspec(no:::no-loc(throw):::)` e, quando **`/EHc`** si specificano le funzioni ** :::no-loc(extern)::: "C"** . :::no-loc(throw):::Le funzioni non di Ing includono anche quelle che il compilatore ha determinato non sono :::no-loc(throw)::: da ispezionare. È possibile impostare in modo esplicito il comportamento predefinito usando **`/EHr-`** .

Un attributo non- :::no-loc(throw)::: ing non garantisce che le eccezioni non possano essere :::no-loc(throw)::: n da una funzione. A differenza del comportamento di una **`:::no-loc(noexcept):::`** funzione, il compilatore MSVC considera un'eccezione :::no-loc(throw)::: n da una funzione dichiarata con `:::no-loc(throw):::()` , `__declspec(no:::no-loc(throw):::)` o ** :::no-loc(extern)::: "C"** come comportamento non definito. Le funzioni che usano questi tre attributi di dichiarazione non applicano i controlli di terminazione di runtime per le eccezioni. È possibile utilizzare l' **`/EHr`** opzione per identificare questo comportamento non definito, forzando il compilatore a generare controlli di runtime per le eccezioni non gestite che sfuggono a una **`:::no-loc(noexcept):::`** funzione.

## <a name="set-the-option-in-visual-studio-or-programmatically"></a>Impostare l'opzione in Visual Studio o a livello di codice

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare **proprietà di configurazione**  >  generazione codice**C/C++**  >  **Code Generation**.

1. Modificare la proprietà **Abilita eccezioni C++** .

   In alternativa, impostare **Abilita eccezioni C++** su **No**, quindi nella casella **Opzioni aggiuntive** della pagina delle proprietà **Riga di comando** aggiungere l'opzione del compilatore.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ExceptionHandling%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)\
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)\
[Errori e gestione delle eccezioni](../../cpp/errors-and-exception-handling-modern-cpp.md)\
[Specifiche di eccezione ( :::no-loc(throw)::: )](../../cpp/exception-specifications-:::no-loc(throw):::-cpp.md)\
[Structured Exception Handling (C/C++)](../../cpp/structured-exception-handling-c-cpp.md)
