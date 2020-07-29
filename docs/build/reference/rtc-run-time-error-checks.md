---
title: /RTC (Controlli di runtime)
ms.date: 11/04/2016
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
ms.openlocfilehash: 49f0e4bace5f3dd199b58854e838204bd2cd5f3b
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87222017"
---
# <a name="rtc-run-time-error-checks"></a>/RTC (Controlli di runtime)

Utilizzato per abilitare e disabilitare la funzionalità di controllo degli errori di run-time, insieme al pragma [runtime_checks](../../preprocessor/runtime-checks.md) .

## <a name="syntax"></a>Sintassi

```
/RTC1
/RTCc
/RTCs
/RTCu
```

## <a name="arguments"></a>Argomenti

**1**<br/>
Equivalente a **/RTC** `su` .

**c**<br/>
Segnala quando un valore viene assegnato a un tipo di dati più piccolo e comporta una perdita di dati. Ad esempio, se un valore di tipo `short 0x101` viene assegnato a una variabile di tipo **`char`** .

Questa opzione segnala le situazioni in cui si intende troncare, ad esempio, se si desidera che i primi otto bit di un **`int`** restituito come **`char`** . Poiché **/RTC** `c` genera un errore di run-time se le informazioni vengono perse in seguito all'assegnazione, è possibile mascherare le informazioni necessarie per evitare un errore di run-time come risultato di **/RTC** `c` . Ad esempio:

```
#include <crtdbg.h>

char get8bits(int value, int position) {
   _ASSERT(position < 32);
   return (char)(value >> position);
   // Try the following line instead:
   // return (char)((value >> position) & 0xff);
}

int main() {
   get8bits(12341235,3);
}
```

**s**<br/>
Consente di stack frame il controllo degli errori di run-time, come indicato di seguito:

- Inizializzazione delle variabili locali su un valore diverso da zero. Ciò consente di identificare i bug che non vengono visualizzati durante l'esecuzione in modalità di debug. È più probabile che le variabili dello stack siano comunque pari a zero in una build di debug rispetto a una build di rilascio a causa delle ottimizzazioni del compilatore delle variabili dello stack in una build di rilascio. Una volta che un programma ha usato un'area dello stack, non viene mai reimpostato su 0 dal compilatore. Pertanto, le variabili dello stack successive e non inizializzate che si verificano per l'utilizzo della stessa area dello stack possono restituire i valori rimasti dall'utilizzo precedente della memoria dello stack.

- Rilevamento di sovraccarichi e sottoesecuzioni di variabili locali, ad esempio matrici. **/RTC** `s` non rileva i sovraccarichi quando si accede alla memoria risultante dalla spaziatura interna del compilatore all'interno di una struttura. La spaziatura interna può verificarsi usando [align](../../cpp/align-cpp.md), [/ZP (allineamento membri struct)](zp-struct-member-alignment.md)o [Pack](../../preprocessor/pack.md)oppure se gli elementi della struttura vengono ordinati in modo tale da richiedere al compilatore di aggiungere spaziatura interna.

- Verifica del puntatore dello stack, che rileva il danneggiamento del puntatore dello stack. Il danneggiamento del puntatore dello stack può essere causato da una convenzione di chiamata non corrispondente. Utilizzando un puntatore a funzione, ad esempio, si chiama una funzione in una DLL che viene esportata come [__stdcall](../../cpp/stdcall.md) ma si dichiara il puntatore alla funzione come [__cdecl](../../cpp/cdecl.md).

**u**<br/>
Segnala quando viene utilizzata una variabile senza che sia stata inizializzata. Ad esempio, un'istruzione generata da `C4701` può generare anche un errore di run-time in **/RTC** `u` . Tutte le istruzioni che generano [avvisi del compilatore (livello 1 e livello 4) C4700](../../error-messages/compiler-warnings/compiler-warning-level-1-and-level-4-c4700.md) genereranno un errore di run-time in **/RTC** `u` .

Tuttavia, si consideri il frammento di codice seguente:

```cpp
int a, *b, c;
if ( 1 )
b = &a;
c = a;  // No run-time error with /RTCu
```

Se una variabile potrebbe essere stata inizializzata, non verrà segnalata in fase di esecuzione da **/RTC** `u` . Ad esempio, dopo che una variabile viene sottoposta a alias tramite un puntatore, il compilatore non tiene traccia della variabile e segnala gli usi non inizializzati. In effetti, è possibile inizializzare una variabile prendendone l'indirizzo. L'operatore & funziona come un operatore di assegnazione in questa situazione.

## <a name="remarks"></a>Osservazioni

I controlli degli errori di run-time consentono di individuare i problemi nel codice in esecuzione. per altre informazioni, vedere [procedura: usare i controlli runtime nativi](/visualstudio/debugger/how-to-use-native-run-time-checks).

Se si compila il programma dalla riga di comando usando una delle opzioni del compilatore **/RTC** , tutte le istruzioni pragma [optimize](../../preprocessor/optimize.md) nel codice avranno esito negativo automaticamente. Ciò è dovuto al fatto che i controlli degli errori di run-time non sono validi in una compilazione di rilascio (ottimizzata).

È consigliabile usare **/RTC** per le compilazioni di sviluppo; **/RTC** non deve essere usato per una build finale. Non è possibile usare **/RTC** con le ottimizzazioni del compilatore ([Opzioni/O (Ottimizza codice)](o-options-optimize-code.md)). Un'immagine del programma compilata con **/RTC** sarà leggermente più grande e leggermente più lenta rispetto a un'immagine compilata con **/od** (fino al 5% più lenta rispetto a una build **/od** ).

La __MSVC_RUNTIME_CHECKS direttiva per il preprocessore verrà definita quando si usa un'opzione **/RTC** o [/GZ](gz-enable-stack-frame-run-time-error-checking.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **generazione codice** .

1. Modificare una o entrambe le proprietà seguenti: **controlli runtime di base** o **controllo del tipo di dimensioni minori**.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere le proprietà <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.BasicRuntimeChecks%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.SmallerTypeCheck%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[Procedura: utilizzare i controlli runtime nativi](/visualstudio/debugger/how-to-use-native-run-time-checks)
