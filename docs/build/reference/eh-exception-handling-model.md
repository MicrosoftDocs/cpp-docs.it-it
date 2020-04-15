---
title: /EH (Modello di gestione delle eccezioni)
ms.date: 08/14/2018
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
ms.assetid: 754b916f-d206-4472-b55a-b6f1b0f2cb4d
ms.openlocfilehash: 8546b14995317afb57e4cc23a5d6f81c2172a1a6
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81328286"
---
# <a name="eh-exception-handling-model"></a>/EH (Modello di gestione delle eccezioni)

Specifica il tipo di gestione delle eccezioni usato dal compilatore, quando ottimizzare i controlli delle eccezioni e se eliminare gli oggetti C++ che non rientrano nell'ambito a causa di un'eccezione. Se **/EH** non viene specificato, il compilatore consente al codice di intercettare sia le eccezioni strutturate asincrone che le eccezioni C, ma non elimina gli oggetti C .

## <a name="syntax"></a>Sintassi

> **/EH****s**|**a****[c**][**-****r**][ ]

## <a name="arguments"></a>Argomenti

**Un**<br/>
Il modello di gestione delle eccezioni che rileva entrambe le eccezioni asincrone (strutturate) e sincrone (C) mediante l'utilizzo della `catch(...)` sintassi di C.

**s**<br/>
Il modello di gestione delle eccezioni che rileva solo le eccezioni sincrone (C) e indica al compilatore di presupporre che le funzioni dichiarate come **extern "C"** possano generare un'eccezione.

**C**<br/>
Se utilizzato con **s** (**/EHsc**), rileva solo le eccezioni di C, e indica al compilatore di presupporre che le funzioni dichiarate come **extern "C"** non generino mai un'eccezione di C. **/EHca** è equivalente a **/EHa**.

**R**<br/>
Indica al compilatore di generare sempre i controlli di terminazione di runtime per tutte le funzioni **noexcept.** Per impostazione predefinita, i controlli di runtime **noexcept** possono essere ottimizzati se il compilatore determina le chiamate di funzione solo funzioni non generanti.

## <a name="remarks"></a>Osservazioni

L'opzione del compilatore **/EHa** viene usata per supportare la gestione delle eccezioni strutturate asincrone (SEH) con la clausola `catch(...)` C++ nativa. Per implementare SEH senza specificare **/EHa**, è possibile utilizzare la sintassi **__try** **, __except**e **__finally** . Sebbene Windows e Visual C++ supportino SEH, è vivamente consigliabile usare la gestione delle eccezioni C++ conforme allo standard ISO (**/EHs** o **/EHsc**) perché rende il codice più portabile e flessibile. Tuttavia, nel codice esistente o per particolari tipi di programmi, ad esempio nel codice compilato per supportare Common Language Runtime ([/clr (Compilazione Common Language Runtime)](clr-common-language-runtime-compilation.md), potrebbe essere comunque necessario utilizzare SEH. Per altre informazioni, vedere [Structured Exception Handling (C/C++)](../../cpp/structured-exception-handling-c-cpp.md).

L'uso di **/EHa** e il tentativo di gestire tutte le eccezioni con `catch(...)` potrebbero comportare dei rischi. Nella maggior parte dei casi, le eccezioni asincrone sono irreversibili e devono essere gestite come tali. Il tentativo di intercettarle per procedere potrebbe causare il danneggiamento del processo ed errori difficili da trovare e risolvere.

Se si usa **/EHs** o **/EHsc**, la clausola `catch(...)` non intercetta le eccezioni strutturate asincrone. Le violazioni di accesso e le eccezioni <xref:System.Exception?displayProperty=fullName> gestite non vengono intercettate e gli oggetti che rientrano nell'ambito quando viene generata un'eccezione asincrona non vengono eliminati anche se l'eccezione asincrona viene gestita.

Se si utilizza **/EHa**, l'immagine potrebbe essere più grande e potrebbe avere prestazioni inferiori perché il compilatore non ottimizza un blocco **try** in modo aggressivo. e lascia anche filtri di eccezioni che chiamano automaticamente i distruttori di tutti gli oggetti locali anche se il compilatore non visualizza alcun codice che possa generare un'eccezione C++. In questo modo, è possibile procedere in modo sicuro alla rimozione dello stack per le eccezioni asincrone e per le eccezioni C++. Quando si utilizza **/EHs**, il compilatore presuppone che le eccezioni possano verificarsi solo in un'istruzione **throw** o in una chiamata di funzione. In questo modo, il compilatore elimina il codice per tenere traccia della durata di molti oggetti non rimovibili, con conseguente riduzione significativa delle dimensioni del codice.

Si consiglia di non collegare oggetti compilati utilizzando **/EHa** con oggetti compilati utilizzando **/EHs** o **/EHsc** nello stesso modulo eseguibile. Se è necessario gestire un'eccezione asincrona con **/EHa** in qualsiasi punto del modulo, usare **/EHa** per compilare tutto il codice nel modulo. È possibile utilizzare la sintassi di gestione delle eccezioni strutturata nello stesso modulo del codice compilato utilizzando **/EHs**, ma non è possibile combinare la sintassi SEH con **try**, **throw**e **catch** nella stessa funzione .

Utilizzare **/EHa** se si desidera intercettare un'eccezione generata da un elemento diverso da **throw**. In questo esempio viene generata e intercettata un'eccezione strutturata:

```cpp
// compiler_options_EHA.cpp
// compile with: /EHa
#include <iostream>
#include <excpt.h>
using namespace std;

void fail() {   // generates SE and attempts to catch it using catch(...)
   try {
      int i = 0, j = 1;
      j /= i;   // This will throw a SE (divide by zero).
      printf("%d", j);
   }
   catch(...) {   // catch block will only be executed under /EHa
      cout<<"Caught an exception in catch(...)."<<endl;
   }
}

int main() {
   __try {
      fail();
   }

   // __except will only catch an exception here
   __except(EXCEPTION_EXECUTE_HANDLER) {
      // if the exception was not caught by the catch(...) inside fail()
      cout << "An exception was caught in __except." << endl;
   }
}
```

Per l'opzione **/EHc** è necessario specificare **/EHs** o **/EHa** . L'opzione **/clr** implica **/EHa** (ovvero **/clr** **/EHa** è ridondante). Il compilatore genera un errore se **/EHs** o **/EHsc** viene utilizzato dopo **/clr**. Le ottimizzazioni non influiscono su questo comportamento. Quando viene intercettata un'eccezione, il compilatore richiama il distruttore o i distruttori di classe per l'oggetto o gli oggetti che rientrano nello stesso ambito dell'eccezione. Quando un'eccezione non viene intercettata, questi distruttori non vengono eseguiti.

Per informazioni sulle restrizioni relative alla gestione delle eccezioni in **/clr**, vedere [_set_se_translator](../../c-runtime-library/reference/set-se-translator.md).

L'opzione può essere deselezionata utilizzando il simbolo **-**. Ad esempio, **/EHsc-** viene interpretato come **/EHs** **/EHc-** ed equivale a **/EHs**.

L'opzione del compilatore **/EHr** forza i controlli di terminazione di runtime in tutte le funzioni che dispongono di un attributo **noexcept.** Per impostazione predefinita, è possibile ottimizzare i controlli di runtime se il back-end del compilatore determina che una funzione chiama solo funzioni *non generanti* . Le funzioni non generanti sono quelle che hanno un attributo che specifica l'impossibilità di generare eccezioni. Sono incluse le funzioni `throw()` `__declspec(nothrow)`contrassegnate **noexcept**, , e, quando si specifica **/EHc,** le funzioni **"C" extern** . Le funzioni non generanti includono anche qualsiasi attributo determinato come non generante dal compilatore dopo un'ispezione. È possibile impostare in modo esplicito il valore predefinito usando **/EHr-**.

Tuttavia, l'attributo non generante non garantisce che non possono essere generate eccezioni da una funzione. A differenza del comportamento di una funzione **noexcept,** il compilatore `throw()`MSVC considera un'eccezione generata da una funzione dichiarata utilizzando , `__declspec(nothrow)`o **extern "C"** come comportamento non definito. Le funzioni che usano questi tre attributi di dichiarazione non applicano i controlli di terminazione di runtime per le eccezioni. È possibile utilizzare l'opzione **/EHr** per identificare questo comportamento indefinito, forzando il compilatore a generare controlli di runtime per le eccezioni non gestite che evitano una funzione **noexcept.**

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare **Proprietà di** > configurazione Generazione codice**C/C** > **Code Generation**

1. Modificare la proprietà **Abilita eccezioni C++** .

   In alternativa, impostare **Abilita eccezioni C++** su **No**, quindi nella casella **Opzioni aggiuntive** della pagina delle proprietà **Riga di comando** aggiungere l'opzione del compilatore.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ExceptionHandling%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVCMSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)<br/>
[Gestione di errori ed eccezioni](../../cpp/errors-and-exception-handling-modern-cpp.md)<br/>
[Specifiche di eccezione (generazione)](../../cpp/exception-specifications-throw-cpp.md)<br/>
[Structured Exception Handling (C/C++)](../../cpp/structured-exception-handling-c-cpp.md)
