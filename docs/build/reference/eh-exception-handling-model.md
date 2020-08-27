---
title: /EH (Modello di gestione delle eccezioni)
description: Guida di riferimento per le opzioni del compilatore Microsoft C++/EH (modello di gestione delle eccezioni) in Visual Studio.
ms.date: 08/25/2020
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
- SEH
- try
- catch
- throw
- extern
- finally
- noexcept
ms.assetid: 754b916f-d206-4472-b55a-b6f1b0f2cb4d
ms.openlocfilehash: 0d18d0f1d73b1de46b12262deecb2436c34e6176
ms.sourcegitcommit: efc8c32205c9d610f40597556273a64306dec15d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/26/2020
ms.locfileid: "88898385"
---
# <a name="eh-exception-handling-model"></a>`/EH` (Modello di gestione delle eccezioni)

Specifica il supporto del modello di gestione delle eccezioni generato dal compilatore. Gli argomenti specificano se applicare `catch(...)` la sintassi alle eccezioni C++ strutturate e standard, se si presuppone che il codice ** extern "C"** venga usato per throw le eccezioni e se ottimizzare determinati **`noexcept`** controlli.

## <a name="syntax"></a>Sintassi

> **`/EHa`**[**`-`**]\
> **`/EHs`**[**`-`**]\
> **`/EHc`**[**`-`**]\
> **`/EHr`**[**`-`**]

## <a name="arguments"></a>Argomenti

**`a`**\
Abilita la rimozione dello stack C++ standard. Rileva sia le eccezioni strutturate (asincrone) che quelle C++ standard (sincrone) quando si utilizza la `catch(...)` sintassi. **`/EHa`** esegue l'override di entrambi gli **`/EHs`** **`/EHc`** argomenti e.

**`s`**\
Abilita la rimozione dello stack C++ standard. Rileva solo le eccezioni C++ standard quando si utilizza la `catch(...)` sintassi. A meno **`/EHc`** che non sia specificato anche, il compilatore presuppone che le funzioni dichiarate come ** extern "C"** possano essere throw un'eccezione C++.

**`c`**\
Se usato con **`/EHs`** , il compilatore presuppone che le funzioni dichiarate come ** extern "C"** non siano mai throw un'eccezione C++. Non ha alcun effetto se usato con **`/EHa`** (ovvero **`/EHca`** equivale a **`/EHa`** ). **`/EHc`** viene ignorato se **`/EHs`** o **`/EHa`** non sono specificati.

**`r`**\
Indica al compilatore di generare sempre controlli di terminazione di runtime per tutte le **`noexcept`** funzioni. Per impostazione predefinita, **`noexcept`** è possibile ottimizzare i controlli di runtime per se il compilatore determina che la funzione chiama solo funzioni non di throw Ing. Questa opzione offre una rigorosa conformità C++ al costo di codice aggiuntivo. **`/EHr`** viene ignorato se **`/EHs`** o **`/EHa`** non sono specificati.

**`-`**\
Cancella l'argomento dell'opzione precedente. Ad esempio, **`/EHsc-`** viene interpretato come **`/EHs /EHc-`** ed è equivalente a **`/EHs`** .

**`/EH`** gli argomenti possono essere specificati separatamente o combinati in qualsiasi ordine. Se viene specificata più di un'istanza dello stesso argomento, l'ultima esegue l'override di quelle precedenti.  Ad esempio, **`/EHr- /EHc /EHs`** è uguale a **`/EHscr-`** e **`/EHscr- /EHr`** ha lo stesso effetto di **`/EHscr`** .

## <a name="remarks"></a>Osservazioni

### <a name="default-exception-handling-behavior"></a>Comportamento predefinito di gestione delle eccezioni

Il compilatore genera sempre il codice che supporta la gestione delle eccezioni strutturata asincrona ( SEH ). Per impostazione predefinita, ovvero se non **`/EHsc`** **`/EHs`** viene specificata alcuna opzione, o, **`/EHa`** il compilatore supporta i SEH gestori nella clausola C++ nativa `catch(...)` . Tuttavia, genera anche codice che supporta solo parzialmente le eccezioni C++. Il codice di rimozione dell'eccezione predefinito non elimina definitivamente gli oggetti C++ automatici all'esterno dei [`try`](../../cpp/try-throw-and-catch-statements-cpp.md) blocchi che non rientrano nell'ambito a causa di un'eccezione. Le perdite di risorse e il comportamento indefinito possono verificarsi quando un'eccezione C++ è throw n.

### <a name="standard-c-exception-handling"></a>Gestione delle eccezioni standard C++

Supporto completo del compilatore per il modello di gestione delle eccezioni C++ standard che richiede la rimozione sicura degli oggetti Stack **`/EHsc`** (scelta consigliata), **`/EHs`** o **`/EHa`** .

Se si usa **`/EHs`** o **`/EHsc`** , le `catch(...)` clausole non consentono catch eccezioni strutturate asincrone. Eventuali violazioni di accesso e le <xref:System.Exception?displayProperty=fullName> eccezioni gestite non vengono rilevate. Gli oggetti nell'ambito quando si verifica un'eccezione asincrona non vengono eliminati definitivamente, anche se il codice gestisce l'eccezione asincrona. Questo comportamento è un argomento per lasciare non gestite eccezioni strutturate. In alternativa, considerare le eccezioni irreversibili.

Quando si usa **`/EHs`** o **`/EHsc`** , il compilatore presuppone che le eccezioni possano verificarsi solo in corrispondenza di un' **`throw`** istruzione o in una chiamata di funzione. Questo presupposto consente al compilatore di eliminare il codice per tenere traccia della durata di molti oggetti non rimovibili, che possono ridurre significativamente le dimensioni del codice. Se si usa **`/EHa`** , l'immagine eseguibile potrebbe essere più grande e più lenta, perché il compilatore non ottimizza i **`try`** blocchi in modo aggressivo. Lascia anche i filtri eccezioni che puliscono automaticamente gli oggetti locali, anche se il compilatore non Visualizza codice che può avere throw un'eccezione C++.

### <a name="structured-and-standard-c-exception-handling"></a>Gestione delle eccezioni C++ strutturata e standard

L' **`/EHa`** opzione del compilatore consente la rimozione dello stack sicura sia per le eccezioni asincrone sia per le eccezioni C++. Supporta la gestione di standard C++ e delle eccezioni strutturate tramite la clausola C++ nativa `catch(...)` . Per implementare SEH senza specificare **`/EHa`** , è possibile usare la **`__try`** **`__except`** sintassi, e **`__finally`** . Per altre informazioni, vedere [gestione delle eccezioni strutturata](../../cpp/structured-exception-handling-c-cpp.md).

> [!IMPORTANT]
> La specifica di **`/EHa`** e try di per gestire tutte le eccezioni tramite `catch(...)` può essere pericolosa. Nella maggior parte dei casi, le eccezioni asincrone sono irreversibili e devono essere gestite come tali. Il tentativo di intercettarle per procedere potrebbe causare il danneggiamento del processo ed errori difficili da trovare e risolvere.
>
> Anche se Windows e Visual C++ supportano SEH , è consigliabile usare la gestione delle eccezioni C++ standard ISO ( **`/EHsc`** o **`/EHs`** ). Rende il codice più portabile e flessibile. È comunque possibile che sia necessario utilizzare SEH nel codice legacy o per determinati tipi di programmi. È necessario nel codice compilato per supportare il Common Language Runtime ( [`/clr`](clr-common-language-runtime-compilation.md) ), ad esempio. Per altre informazioni, vedere [gestione delle eccezioni strutturata](../../cpp/structured-exception-handling-c-cpp.md).
>
> Si consiglia di non collegare mai i file oggetto compilati usando **`/EHa`** a quelli compilati con **`/EHs`** o **`/EHsc`** nello stesso modulo eseguibile. Se è necessario gestire un'eccezione asincrona usando **`/EHa`** in qualsiasi punto del modulo, usare **`/EHa`** per compilare tutto il codice nel modulo. È possibile usare la sintassi di gestione delle eccezioni strutturata nello stesso modulo del codice compilato usando **`/EHs`** . Tuttavia, non è possibile combinare la SEH sintassi con C++ **`try`** , **`throw`** e **`catch`** nella stessa funzione.

Usare **`/EHa`** se si vuole catch un'eccezione generata da un elemento diverso da un oggetto **`throw`** . Questo esempio genera ed catch es un'eccezione strutturata:

```cpp
// compiler_options_EHA.cpp
// compile with: /EHa
#include <iostream>
#include <excpt.h>
using namespace std;

void fail()
{
    // generates SE and attempts to catch it using catch(...)
    try
    {
        int i = 0, j = 1;
        j /= i;   // This will throw a SE (divide by zero).
        printf("%d", j);
    }
    catch(...)
    {
        // catch block will only be executed under /EHa
        cout << "Caught an exception in catch(...)." << endl;
    }
}

int main()
{
    __try
    {
        fail();
    }

    // __except will only catch an exception here
    __except(EXCEPTION_EXECUTE_HANDLER)
    {
        // if the exception was not caught by the catch(...) inside fail()
        cout << "An exception was caught in __except." << endl;
    }
}
```

### <a name="exception-handling-under-clr"></a>Gestione delle eccezioni in/CLR

L' **`/clr`** opzione implica **`/EHa`** (ovvero **`/clr /EHa`** è ridondante). Il compilatore genera un errore se **`/EHs`** **`/EHsc`** viene usato o dopo **`/clr`** . Le ottimizzazioni non influiscono su questo comportamento. Quando viene rilevata un'eccezione, il compilatore richiama i distruttori di classe per tutti gli oggetti che si trovano nello stesso ambito dell'eccezione. Se un'eccezione non viene intercettata, questi distruttori non vengono eseguiti.

Per informazioni sulle restrizioni relative alla gestione delle eccezioni in **`/clr`** , vedere [_set_se_translator](../../c-runtime-library/reference/set-se-translator.md).

### <a name="runtime-exception-checks"></a>Controlli delle eccezioni di runtime

L' **`/EHr`** opzione forza i controlli di terminazione di runtime in tutte le funzioni che hanno un **`noexcept`** attributo. Per impostazione predefinita, i controlli di runtime possono essere ottimizzati se il back-end del compilatore determina che una funzione chiama solo funzioni *non di throw ing* . throwLe funzioni non di ING sono funzioni con un attributo che specifica che nessuna eccezione può essere throw n. Sono incluse funzioni contrassegnate come,, **`noexcept`** `throw()` `__declspec(nothrow)` e, quando **`/EHc`** si specifica, **`extern "C"`** funzioni. throwLe funzioni non di Ing includono anche quelle che il compilatore ha determinato non sono throw da ispezionare. È possibile impostare in modo esplicito il comportamento predefinito usando **`/EHr-`** .

Un attributo non- throw ing non garantisce che le eccezioni non possano essere throw n da una funzione. A differenza del comportamento di una **`noexcept`** funzione, il compilatore MSVC considera un'eccezione throw n da una funzione dichiarata usando `throw()` , `__declspec(nothrow)` o **`extern "C"`** come comportamento non definito. Le funzioni che usano questi tre attributi di dichiarazione non applicano i controlli di terminazione di runtime per le eccezioni. È possibile utilizzare l' **`/EHr`** opzione per identificare questo comportamento non definito, forzando il compilatore a generare controlli di runtime per le eccezioni non gestite che sfuggono a una **`noexcept`** funzione.

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
[Specifiche di eccezione ( throw )](../../cpp/exception-specifications-throw-cpp.md)\
[Structured Exception Handling (C/C++)](../../cpp/structured-exception-handling-c-cpp.md)
