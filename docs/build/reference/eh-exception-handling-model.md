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
ms.openlocfilehash: 9f5eed60ecb51abc1d8fbd3c38773bbf782b23a5
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57808260"
---
# <a name="eh-exception-handling-model"></a>/EH (Modello di gestione delle eccezioni)

Specifica il tipo di gestione delle eccezioni usato dal compilatore, quando ottimizzare i controlli delle eccezioni e se eliminare gli oggetti C++ che non rientrano nell'ambito a causa di un'eccezione. Se **/EH** viene omesso, il compilatore consente al codice intercettare le eccezioni strutturate asincrone sia le eccezioni C++, ma non elimina definitivamente gli oggetti C++ che escono dall'ambito a causa di un'eccezione asincrona.

## <a name="syntax"></a>Sintassi

> **/EH**{**s**|**a**}[**c**][**r**][**-**]

## <a name="arguments"></a>Argomenti

**a**<br/>
Il modello di gestione delle eccezioni che intercetta sia asincrone (strutturate) e le eccezioni sincrone (C++) mediante l'utilizzo di C++ `catch(...)` sintassi.

**s**<br/>
Il modello di gestione delle eccezioni che intercetta solo le eccezioni (C++) sincrone e indica al compilatore di supporre che le funzioni dichiarate come **extern "C"** potrebbe generare un'eccezione.

**c**<br/>
Se usato con **s** (**/EHsc**), intercetta solo le eccezioni C++ e indica al compilatore di supporre che le funzioni dichiarate come **extern "C"** mai generare un'eccezione C++. **/EHca** è equivalente a **/EHa**.

**r**<br/>
Indica al compilatore di generare sempre controlli di terminazione di runtime per tutti i **noexcept** funzioni. Per impostazione predefinita, controlli di runtime per **noexcept** può essere ottimizzato se il compilatore determina la funzione chiama solo funzioni non generanti.

## <a name="remarks"></a>Note

L'opzione del compilatore **/EHa** viene usata per supportare la gestione delle eccezioni strutturate asincrone (SEH) con la clausola `catch(...)` C++ nativa. Per implementare SEH senza specificare **/EHa**, è possibile utilizzare il **try**, **except**, e **finally** sintassi. Sebbene Windows e Visual C++ supportino SEH, è vivamente consigliabile usare la gestione delle eccezioni C++ conforme allo standard ISO (**/EHs** o **/EHsc**) perché rende il codice più portabile e flessibile. Tuttavia, nel codice esistente o per alcuni tipi di programmi, ad esempio, nel codice compilato per il supporto common language runtime ([/clr (compilazione Common Language Runtime)](clr-common-language-runtime-compilation.md)), potrebbe ancora essere necessario usare SEH. Per altre informazioni, vedere [Structured Exception Handling (C/C++)](../../cpp/structured-exception-handling-c-cpp.md).

L'uso di **/EHa** e il tentativo di gestire tutte le eccezioni con `catch(...)` potrebbero comportare dei rischi. Nella maggior parte dei casi, le eccezioni asincrone sono irreversibili e devono essere gestite come tali. Il tentativo di intercettarle per procedere potrebbe causare il danneggiamento del processo ed errori difficili da trovare e risolvere.

Se si usa **/EHs** o **/EHsc**, la clausola `catch(...)` non intercetta le eccezioni strutturate asincrone. Le violazioni di accesso e le eccezioni <xref:System.Exception?displayProperty=fullName> gestite non vengono intercettate e gli oggetti che rientrano nell'ambito quando viene generata un'eccezione asincrona non vengono eliminati anche se l'eccezione asincrona viene gestita.

Se si usa **/EHa**, l'immagine potrebbe essere più grande e potrebbe essere ottimali perché il compilatore non ottimizza un **provare** bloccare in modo altrettanto aggressivo. e lascia anche filtri di eccezioni che chiamano automaticamente i distruttori di tutti gli oggetti locali anche se il compilatore non visualizza alcun codice che possa generare un'eccezione C++. In questo modo, è possibile procedere in modo sicuro alla rimozione dello stack per le eccezioni asincrone e per le eccezioni C++. Quando si usa **/EHs**, il compilatore presuppone che le eccezioni possano verificarsi solo in un **throw** istruzione o di una chiamata di funzione. In questo modo, il compilatore elimina il codice per tenere traccia della durata di molti oggetti non rimovibili, con conseguente riduzione significativa delle dimensioni del codice.

È consigliabile non collegare gli oggetti compilati con **/EHa** a quelli compilati usando **/EHs** oppure **/EHsc** nello stesso modulo eseguibile. Se è necessario gestire un'eccezione asincrona con **/EHa** in qualsiasi punto del modulo, usare **/EHa** per compilare tutto il codice nel modulo. È possibile usare la sintassi nello stesso modulo del codice compilato usando Gestione strutturata delle eccezioni **/EHs**, ma non è possibile combinare la sintassi SEH con **provare**, **throw**e **catch** nella stessa funzione.

Uso **/EHa** se si desidera intercettare un'eccezione generata da un elemento diverso da un **throw**. In questo esempio viene generata e intercettata un'eccezione strutturata:

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

Per l'opzione **/EHc** è necessario specificare **/EHs** o **/EHa** . Il **/clr** opzione implica **/EHa** (vale a dire **/clr** **/EHa** è ridondante). Il compilatore genera un errore se **/EHs** oppure **/EHsc** viene usato dopo **/clr**. Le ottimizzazioni non influiscono su questo comportamento. Quando viene intercettata un'eccezione, il compilatore richiama il distruttore o i distruttori di classe per l'oggetto o gli oggetti che rientrano nello stesso ambito dell'eccezione. Quando un'eccezione non viene intercettata, questi distruttori non vengono eseguiti.

Per informazioni sulle restrizioni relative alla gestione delle eccezioni in **/clr**, vedere [_set_se_translator](../../c-runtime-library/reference/set-se-translator.md).

L'opzione può essere cancellata usando il simbolo **-**. Ad esempio, **/EHsc-** viene interpretato come **/EHs** **/EHc-** ed equivale al **/EHs**.

Il **/EHr** l'opzione del compilatore impone controlli di terminazione di runtime in tutte le funzioni che hanno una **noexcept** attributo. Per impostazione predefinita, è possibile ottimizzare i controlli di runtime se il back-end del compilatore determina che una funzione chiama solo funzioni *non generanti* . Le funzioni non generanti sono quelle che hanno un attributo che specifica l'impossibilità di generare eccezioni. Ciò include le funzioni contrassegnate **noexcept**, `throw()`, `__declspec(nothrow)`e, quando **/EHc** viene specificata, **extern "C"** funzioni. Le funzioni non generanti includono anche qualsiasi attributo determinato come non generante dal compilatore dopo un'ispezione. È possibile impostare in modo esplicito il valore predefinito usando **/EHr-**.

Tuttavia, l'attributo non generante non garantisce che non possono essere generate eccezioni da una funzione. A differenza del comportamento di un **noexcept** funzione, il compilatore MSVC considera un'eccezione generata da una funzione dichiarata con `throw()`, `__declspec(nothrow)`, o **extern "C"** come un comportamento indefinito. Le funzioni che usano questi tre attributi di dichiarazione non applicano i controlli di terminazione di runtime per le eccezioni. È possibile usare la **/EHr** opzione che consente di identificare questo comportamento, non definito, forzando il compilatore a generare controlli di runtime per le eccezioni non gestite che effettuano l'escape una **noexcept** (funzione).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare **le proprietà di configurazione** > **C/C++** > **generazione del codice**.

1. Modificare la proprietà **Abilita eccezioni C++** .

   In alternativa, impostare **Abilita eccezioni C++** su **No**, quindi nella casella **Opzioni aggiuntive** della pagina delle proprietà **Riga di comando** aggiungere l'opzione del compilatore.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ExceptionHandling%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[Gli errori e la gestione delle eccezioni](../../cpp/errors-and-exception-handling-modern-cpp.md)<br/>
[Specifiche di eccezione (generazione)](../../cpp/exception-specifications-throw-cpp.md)<br/>
[Gestione strutturata delle eccezioni (C/C++)](../../cpp/structured-exception-handling-c-cpp.md)
