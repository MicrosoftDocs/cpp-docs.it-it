---
title: /EH (Modello di gestione delle eccezioni)
description: Guida di riferimento alle opzioni del compilatore di Microsoft C,/EH (modello di gestione delle eccezioni) in Visual Studio.
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
- SEH
- try
- catch
- throw
- extern
- finally
- noexcept
ms.assetid: 754b916f-d206-4472-b55a-b6f1b0f2cb4d
ms.openlocfilehash: 68d6af657e7c20c0f5e84674dd91803beb35fba0
ms.sourcegitcommit: 0e4feb35b47c507947262d00349d4a893863a6d3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/15/2020
ms.locfileid: "81396290"
---
# <a name="eh-exception-handling-model"></a>/EH (Modello di gestione delle eccezioni)

Specifica il supporto del modello di gestione delle eccezioni generato dal compilatore. Gli argomenti specificano se si applica `catch(...)` la sintassi a entrambe le eccezioni strutturate e standard di C, se throw **noexcept** ** extern ** si presuppone che il codice "C" sia le eccezioni e se ottimizzare determinati controlli.

## <a name="syntax"></a>Sintassi

> **`/EHa`**[**`-`**]\
> **`/EHs`**[**`-`**]\
> **`/EHc`**[**`-`**]\
> **`/EHr`**[**`-`**]

## <a name="arguments"></a>Argomenti

**`a`**\
Consente la rimozione dello stack standard di C. Rileva le eccezioni strutturate (asincrone) e standard di `catch(...)` C,net (sincrona) quando si utilizza la sintassi. **`/EHa`** esegue l'override di entrambi **`/EHs`** gli **`/EHc`** argomenti.

**`s`**\
Consente la rimozione dello stack standard di C. Quando si utilizza `catch(...)` la sintassi, vengono rilevate solo le eccezioni standard di C. A **`/EHc`** meno che non venga specificato anche, il throw compilatore presuppone che le funzioni dichiarate come ** extern "C"** possano essere un'eccezione di C.

**`c`**\
Se utilizzato **`/EHs`** con , il compilatore presuppone che throw le funzioni dichiarate come ** extern "C"** non siano mai un'eccezione di C. Non ha alcun effetto **`/EHa`** quando viene **`/EHca`** utilizzato **`/EHa`** con (vale a dire, è equivalente a ). **`/EHc`** viene ignorato se **`/EHs`** o **`/EHa`** non sono specificati.

**`r`**\
Indica al compilatore di generare **noexcept** sempre i controlli di terminazione di runtime per tutte le funzioni. Per impostazione predefinita, i controlli di runtime possono **noexcept** essere ottimizzati se il compilatore determina le chiamate di funzione solo le funzioni non generanti. Questa opzione fornisce una rigida conformità di C, al costo di un codice aggiuntivo. **`/EHr`** viene ignorato se **`/EHs`** o **`/EHa`** non sono specificati.

**`-`**\
Cancella l'argomento di opzione precedente. Ad esempio, **`/EHsc-`** viene **`/EHs /EHc-`** interpretato come **`/EHs`**, ed è equivalente a .

**`/EH`** argomenti possono essere specificati separatamente o combinati, in qualsiasi ordine. Se vengono specificate più istanze dello stesso argomento, l'ultima esegue l'override di quelle precedenti.  Ad **`/EHr- /EHc /EHs`** esempio, è **`/EHscr-`** uguale **`/EHscr- /EHr`** a , **`/EHscr`** e ha lo stesso effetto di .

## <a name="remarks"></a>Osservazioni

### <a name="default-exception-handling-behavior"></a>Comportamento predefinito di gestione delle eccezioni

Il compilatore genera sempre codice cheSEHsupporta la gestione delle eccezioni strutturata asincrona ( ). Per impostazione predefinita, **`/EHsc`** ovvero **`/EHs`** se **`/EHa`** non viene specificata alcuna opzione , il compilatore supporta i gestori SEH nella `catch(...)` clausola nativa di C. Tuttavia, genera anche il codice che supporta solo parzialmente le eccezioni c. Il codice di rimozione dell'eccezione predefinita non elimina [try](../../cpp/try-throw-and-catch-statements-cpp.md) gli oggetti automatici di C, ovvero all'esterno dei blocchi che escono dall'ambito a causa di un'eccezione. Perdite di risorse e un comportamento indefinito possono verificarsi quando viene generata un'eccezione di C .

### <a name="standard-c-exception-handling"></a>Gestione standard delle eccezioni di C

Supporto completo del compilatore per il modello di gestione delle **`/EHsc`** eccezioni **`/EHs`** standard **`/EHa`** di C, che consente di rimuovere in modo sicuro gli oggetti dello stack, richiedendo , o .

Se si **`/EHs`** **`/EHsc`** utilizza o `catch(...)` , le catch clausole non eseguono eccezioni strutturate asincrone. Eventuali violazioni di <xref:System.Exception?displayProperty=fullName> accesso ed eccezioni gestite non vengono rilevate. Inoltre, gli oggetti nell'ambito quando si verifica un'eccezione asincrona non vengono eliminati, anche se il codice gestisce l'eccezione asincrona. Questo comportamento è un argomento per lasciare le eccezioni strutturate non gestite. Considerare invece queste eccezioni irreversibili.

Quando si **`/EHs`** **`/EHsc`** utilizza o , il compilatore presuppone **throw** che le eccezioni possano verificarsi solo in un'istruzione o in una chiamata di funzione. Questo presupposto consente al compilatore di eliminare il codice per tenere traccia della durata di molti oggetti non riavvolgibili, riducendo in modo significativo le dimensioni del codice. Se si **`/EHa`** utilizza , l'immagine eseguibile potrebbe essere più **try** grande e più lenta, perché il compilatore non ottimizza i blocchi in modo aggressivo. Lascia anche nei filtri eccezioni che puliscono automaticamente gli oggetti locali, throw anche se il compilatore non vede alcun codice che può un'eccezione di C.

### <a name="structured-and-standard-c-exception-handling"></a>Gestione delle eccezioni strutturata e standard di C

L'opzione **`/EHa`** del compilatore consente la rimozione sicura dello stack sia per le eccezioni asincrone che per le eccezioni C. Supporta la gestione sia delle eccezioni standard di C che `catch(...)` delle eccezioni strutturate tramite la clausola nativa di C. Per SEH implementare **`/EHa`** senza specificare , è possibile utilizzare la sintassi **__try**, **__except**e **__finally** . Per ulteriori informazioni, vedere [Gestione strutturata delle eccezioni](../../cpp/structured-exception-handling-c-cpp.md).

> [!IMPORTANT]
> Specificare **`/EHa`** e tentare di gestire `catch(...)` tutte le eccezioni utilizzando può essere pericoloso. Nella maggior parte dei casi, le eccezioni asincrone sono irreversibili e devono essere gestite come tali. Il tentativo di intercettarle per procedere potrebbe causare il danneggiamento del processo ed errori difficili da trovare e risolvere.
>
> Anche se è supportato SEHil supporto per Windows e Visual C, è**`/EHsc`** consigliabile utilizzare la gestione delle eccezioni standard ISO di C (o **`/EHs`**). Rende il codice più portabile e flessibile. Ci possono essere ancora volte SEH che è necessario utilizzare nel codice legacy o per particolari tipi di programmi. È necessario nel codice compilato per supportare Common Language Runtime ([/clr](clr-common-language-runtime-compilation.md)), ad esempio. Per ulteriori informazioni, vedere [Gestione strutturata delle eccezioni](../../cpp/structured-exception-handling-c-cpp.md).
>
> È consigliabile non collegare mai **`/EHa`** i file **`/EHs`** **`/EHsc`** oggetto compilati utilizzando quelli compilati utilizzando o nello stesso modulo eseguibile. Se è necessario gestire un'eccezione asincrona **`/EHa`** **`/EHa`** utilizzando qualsiasi punto del modulo, utilizzare per compilare tutto il codice nel modulo. È possibile utilizzare la sintassi di gestione delle eccezioni **`/EHs`** strutturata nello stesso modulo del codice compilato utilizzando . Tuttavia, non è SEH possibile combinare la **try** **throw** sintassi **catch** con c'è , e nella stessa funzione.

Utilizzare **`/EHa`** se si catch desidera un'eccezione generata **throw** da un elemento diverso da un oggetto . In questo esempio viene generata e intercettata un'eccezione strutturata:

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

### <a name="exception-handling-under-clr"></a>Gestione delle eccezioni in /clrException handling under /clr

**`/clr`** L'opzione **`/EHa`** implica (vale a dire, **`/clr /EHa`** è ridondante). Il compilatore genera **`/EHs`** **`/EHsc`** un errore **`/clr`** se o viene utilizzato dopo . Le ottimizzazioni non influiscono su questo comportamento. Quando viene intercettata un'eccezione, il compilatore richiama i distruttori di classe per tutti gli oggetti che si trovano nello stesso ambito dell'eccezione. Se non viene rilevata un'eccezione, i distruttori non vengono eseguiti.

Per informazioni sulle restrizioni **`/clr`** di gestione delle eccezioni in , vedere [_set_se_translator](../../c-runtime-library/reference/set-se-translator.md).

### <a name="runtime-exception-checks"></a>Controlli delle eccezioni di runtime

L'opzione **`/EHr`** forza i controlli di **noexcept** terminazione di runtime in tutte le funzioni che dispongono di un attributo. Per impostazione predefinita, i controlli di runtime possono essere ottimizzati se il back-end del compilatore determina che una funzione chiama solo funzioni *non generanti.* Le funzioni non generanti sono quelle che hanno un attributo che specifica l'impossibilità di generare eccezioni. Includono funzioni **noexcept** `throw()`contrassegnate, , , `__declspec(nothrow)`e, quando **`/EHc`** specificato, ** extern le funzioni "C".** Le funzioni non generanti includono anche qualsiasi attributo determinato come non generante dal compilatore dopo un'ispezione. È possibile impostare in **`/EHr-`** modo esplicito il comportamento predefinito utilizzando .

Un attributo non generante non è una garanzia che le eccezioni non possono essere generate da una funzione. A differenza del **noexcept** comportamento di una funzione, il compilatore MSVC considera un'eccezione generata da una funzione dichiarata utilizzando `throw()`, `__declspec(nothrow)`, o ** extern "C"** come comportamento non definito. Le funzioni che utilizzano questi tre attributi di dichiarazione non applicano i controlli di terminazione di runtime per le eccezioni. È possibile **`/EHr`** utilizzare l'opzione per identificare questo comportamento non definito, forzando il compilatore a **noexcept** generare controlli di runtime per le eccezioni non gestite che esulano da una funzione.

## <a name="set-the-option-in-visual-studio-or-programmatically"></a>Impostare l'opzione in Visual Studio o a livello di codiceSet the option in Visual Studio or programmatically

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare **Proprietà di** > configurazione Generazione codice**C/C** > **Code Generation**

1. Modificare la proprietà **Abilita eccezioni C++** .

   In alternativa, impostare **Abilita eccezioni C++** su **No**, quindi nella casella **Opzioni aggiuntive** della pagina delle proprietà **Riga di comando** aggiungere l'opzione del compilatore.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ExceptionHandling%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)\
[Sintassi della riga di comando del compilatore MSVCMSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)\
[Errori e gestione delle eccezioniErrors and Exception Handling](../../cpp/errors-and-exception-handling-modern-cpp.md)\
[Specifiche dellethroweccezioni ( )](../../cpp/exception-specifications-throw-cpp.md)\
[Structured Exception Handling (C/C++)](../../cpp/structured-exception-handling-c-cpp.md)
