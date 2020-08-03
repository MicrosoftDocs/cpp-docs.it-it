---
title: /RTC (Controlli di runtime)
ms.date: 07/31/2020
f1_keywords:
- /rtc
- VC.Project.VCCLCompilerTool.SmallerTypeCheck
- VC.Project.VCCLCompilerTool.UninitializedVariableCheck
- VC.Project.VCCLCompilerTool.StackFrameCheck
- VC.Project.VCCLCompilerTool.BasicRuntimeChecks
helpviewer_keywords:
- /RTCs compiler option [C++]
- -RTC1 compiler option [C++]
- run-time errors, error checks
- -RTCu compiler option [C++]
- /RTC1 compiler option [C++]
- /RTCc compiler option [C++]
- /RTCu compiler option [C++]
- __MSVC_RUNTIME_CHECKS macro
- -RTCs compiler option [C++]
- RTCs compiler option
- RTC1 compiler option
- run-time errors, run-time checks
- run-time checks, /RTC option
- RTCu compiler option
- RTCc compiler option
- -RTCc compiler option [C++]
ms.assetid: 9702c558-412c-4004-acd5-80761f589368
ms.openlocfilehash: eefec0956bebe9f72324f3cbc61fccbc5e2e24d7
ms.sourcegitcommit: f2a135d69a2a8ef1777da60c53d58fe06980c997
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/03/2020
ms.locfileid: "87520538"
---
# <a name="rtc-run-time-error-checks"></a>`/RTC`(Controlli degli errori di run-time)

Utilizzato per abilitare e disabilitare la funzionalità di controllo degli errori di run-time, insieme al pragma [runtime_checks](../../preprocessor/runtime-checks.md) .

## <a name="syntax"></a>Sintassi

> **`/RTC1`**\
> **`/RTCc`**\
> **`/RTCs`**\
> **`/RTCu`**

## <a name="arguments"></a>Argomenti

**`/RTC1`**<br/>
Equivalente a **`/RTCsu`** .

**`/RTCc`**<br/>
Segnala quando un valore viene assegnato a un tipo di dati più piccolo e comporta una perdita di dati. Ad esempio, segnala se un **`short`** valore di tipo `0x0101` viene assegnato a una variabile di tipo **`char`** .

Questa opzione consente di segnalare le situazioni in cui si intende eseguire il troncamento. Ad esempio, quando si desidera che i primi 8 bit di un **`int`** restituito come **`char`** . Poiché **`/RTCc`** genera un errore in fase di esecuzione se un'assegnazione causa una perdita di informazioni, prima mascherare le informazioni necessarie per evitare l'errore di run-time. Ad esempio:

```C
#include <crtdbg.h>

char get8bits(unsigned value, int position) {
   _ASSERT(position < 32);
   return (char)(value >> position);
   // Try the following line instead:
   // return (char)((value >> position) & 0xff);
}

int main() {
   get8bits(12341235,3);
}
```

Poiché **`/RTCc`** rifiuta il codice conforme allo standard, non è supportato dalla libreria standard C++. Il codice che usa **`/RTCc`** e la libreria standard C++ può causare un errore del compilatore [C1189](../../error-messages/compiler-errors-1/fatal-error-c1189.md). È possibile definire `_ALLOW_RTCc_IN_STL` per disattivare l'avviso e utilizzare l' **`/RTCc`** opzione.

**`/RTCs`**<br/>
Consente di stack frame il controllo degli errori di run-time, come indicato di seguito:

- Inizializzazione delle variabili locali su un valore diverso da zero. Questa opzione consente di identificare i bug che non vengono visualizzati durante l'esecuzione in modalità di debug. È più probabile che le variabili dello stack abbiano ancora un valore pari a zero in una build di debug rispetto a una build di rilascio. Ciò è dovuto alle ottimizzazioni del compilatore delle variabili dello stack in una build di rilascio. Una volta che un programma ha usato un'area dello stack, non viene mai reimpostato su 0 dal compilatore. Ciò significa che le variabili dello stack non inizializzate che usano la stessa area dello stack in un secondo momento possono restituire i valori rimasti dall'utilizzo precedente della memoria dello stack.

- Rilevamento di sovraccarichi e sottoesecuzioni di variabili locali, ad esempio matrici. **`/RTCs`** non rileva sovraccarichi quando si accede alla memoria risultante dalla spaziatura del compilatore all'interno di una struttura. La spaziatura interna può verificarsi usando [`align`](../../cpp/align-cpp.md) , [ `/Zp` (allineamento membri struct)](zp-struct-member-alignment.md)o oppure [`pack`](../../preprocessor/pack.md) se gli elementi della struttura vengono ordinati in modo tale da richiedere al compilatore di aggiungere spaziatura interna.

- Verifica del puntatore dello stack, che rileva il danneggiamento del puntatore dello stack. Il danneggiamento del puntatore dello stack può essere causato da una convenzione di chiamata non corrispondente. Utilizzando un puntatore a funzione, ad esempio, si chiama una funzione in una DLL che viene esportata come, [`__stdcall`](../../cpp/stdcall.md) ma si dichiara il puntatore alla funzione come [`__cdecl`](../../cpp/cdecl.md) .

**`/RTCu`**<br/>
Segnala quando viene utilizzata una variabile senza che sia stata inizializzata. Ad esempio, un'istruzione che genera l'avviso C4701 può generare anche un errore di run-time in **`/RTCu`** . Tutte le istruzioni che generano [avvisi del compilatore (livello 1 e livello 4) C4700](../../error-messages/compiler-warnings/compiler-warning-level-1-and-level-4-c4700.md) genereranno un errore di runtime in **`/RTCu`** .

Tuttavia, si consideri il frammento di codice seguente:

```cpp
int a, *b, c;
if ( 1 )
b = &a;
c = a;  // No run-time error with /RTCu
```

Se una variabile potrebbe essere stata inizializzata, non viene segnalata in fase di esecuzione da **`/RTCu`** . Ad esempio, dopo l'alias di una variabile tramite un puntatore, il compilatore non tiene traccia della variabile e segnala usi non inizializzati. In effetti, è possibile inizializzare una variabile prendendone l'indirizzo. **`&`** In questa situazione l'operatore funziona come un operatore di assegnazione.

## <a name="remarks"></a>Commenti

I controlli degli errori di run-time consentono di individuare i problemi nel codice in esecuzione. per altre informazioni, vedere [procedura: usare i controlli runtime nativi](/visualstudio/debugger/how-to-use-native-run-time-checks).

È possibile specificare più di un' **`/RTC`** opzione nella riga di comando. Gli argomenti dell'opzione possono essere combinati. ad esempio, **`/RTCcu`** è uguale a **`/RTCc /RTCu`** .

Se si compila il programma dalla riga di comando usando una delle **`/RTC`** Opzioni del compilatore, tutte le [`optimize`](../../preprocessor/optimize.md) istruzioni pragma presenti nel codice avranno esito negativo in modo invisibile. Ciò è dovuto al fatto che i controlli degli errori di run-time non sono validi in una compilazione di rilascio (ottimizzata).

**`/RTC`** Da usare per le compilazioni di sviluppo; Non usare **`/RTC`** per una build di rilascio. **`/RTC`** non può essere usato con le ottimizzazioni del compilatore ([ `/O` Opzioni (Ottimizza codice)](o-options-optimize-code.md)). Un'immagine del programma compilata con **`/RTC`** è leggermente più grande e leggermente più lenta di un'immagine compilata con **`/Od`** (fino al 5% più lenta rispetto a una **`/Od`** compilazione).

La `__MSVC_RUNTIME_CHECKS` direttiva per il preprocessore verrà definita quando si usa qualsiasi **`/RTC`** opzione o [`/GZ`](gz-enable-stack-frame-run-time-error-checking.md) .

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione**delle  >  proprietà di generazione del**codice** **C/C++**.  

1. Modificare una o entrambe le proprietà seguenti: **controlli runtime di base** o **controllo del tipo di dimensioni minori**.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere le proprietà <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.BasicRuntimeChecks%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.SmallerTypeCheck%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[Procedura: Usare controlli di runtime nativi](/visualstudio/debugger/how-to-use-native-run-time-checks)
