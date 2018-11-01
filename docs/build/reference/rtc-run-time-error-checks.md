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
ms.openlocfilehash: 77dc97ee07499b7df37a115dafafddd71acb7bb1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50655001"
---
# <a name="rtc-run-time-error-checks"></a>/RTC (Controlli di runtime)

Consente di abilitare e disabilitare la funzionalità di controllo errore di run-time, in combinazione con il [runtime_checks](../../preprocessor/runtime-checks.md) pragma.

## <a name="syntax"></a>Sintassi

```
/RTC1
/RTCc
/RTCs
/RTCu
```

## <a name="arguments"></a>Argomenti

**1**<br/>
Equivalenti **/RTC**`su`.

**c**<br/>
Segnala quando il valore viene assegnato a un tipo di dati più piccolo e comporta una perdita di dati. Ad esempio, se un valore di tipo `short 0x101` viene assegnato a una variabile di tipo `char`.

Questa opzione segnala situazioni in cui si prevede di troncamento, ad esempio, se si desidera che i primi otto bit di un `int` restituiti come un `char`. In quanto **/RTC** `c` provoca un errore di run-time se le informazioni vengono perse in seguito all'assegnazione, è possibile nascondere le informazioni necessarie per evitare un errore di run-time come conseguenza del **/RTC** `c`. Ad esempio:

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
Abilita verifica dello stack frame errore di run-time, come indicato di seguito:

- Inizializzazione di variabili locali su un valore diverso da zero. Ciò consente di identificare gli errori che non vengono visualizzati durante l'esecuzione in modalità di debug. È probabile che le variabili dello stack rimarrà uguale a zero in una build di debug rispetto a una build di rilascio a causa delle ottimizzazioni del compilatore di variabili dello stack in una build di rilascio. Una volta che un programma ha utilizzato un'area del relativo stack, non viene mai reimpostata su 0 dal compilatore. Di conseguenza, le variabili dello stack non inizializzato e successive che si utilizza la stessa area dello stack possono restituire valori rimasti dall'uso precedente di tale memoria dello stack.

- Rilevamento di sovraccarichi e sottocarichi delle variabili locali, ad esempio matrici. **/RTC** `s` non rileverà i sovraccarichi del quando si accede alla memoria risultante da una struttura di spaziatura interna del compilatore. Spaziatura interna potrebbe verificarsi tramite [allineare](../../cpp/align-cpp.md), [/Zp (Allineamento membri Struct)](../../build/reference/zp-struct-member-alignment.md), o [pack](../../preprocessor/pack.md), o se si ordinano gli elementi della struttura in modo da richiedere al compilatore di aggiungere spaziatura interna.

- Verifica del puntatore dello stack, che consente di rilevare errori del puntatore dello stack. Danneggiamento del puntatore dello stack può essere causato da una mancata corrispondenza della convenzione di chiamata. Ad esempio, usando un puntatore a funzione, si chiama una funzione in una DLL che viene esportata come [stdcall](../../cpp/stdcall.md) ma viene dichiarato il puntatore alla funzione come [cdecl](../../cpp/cdecl.md).

**u**<br/>
Segnala quando viene usata una variabile inizializzata. Ad esempio, un'istruzione che genera `C4701` può anche generare un errore in fase di esecuzione sotto **/RTC**`u`. Qualsiasi istruzione che genera [avviso del compilatore (livello 1 e livello 4) C4700](../../error-messages/compiler-warnings/compiler-warning-level-1-and-level-4-c4700.md) genererà un errore in fase di esecuzione sotto **/RTC**`u`.

Tuttavia, si consideri il frammento di codice seguente:

```cpp
int a, *b, c;
if ( 1 )
b = &a;
c = a;  // No run-time error with /RTCu
```

Se una variabile è stata inizializzata, non essere segnalato in fase di esecuzione **/RTC**`u`. Ad esempio, dopo una variabile viene applicato l'aliasing tramite un puntatore, il compilatore non esaminerà la variabile e segnala utilizzi non inizializzati. In effetti, è possibile inizializzare una variabile da accettarne l'indirizzo. In questa situazione l'operatore & funziona come un operatore di assegnazione.

## <a name="remarks"></a>Note

Controlli degli errori di runtime sono un modo per trovare i problemi nel codice in esecuzione. per altre informazioni, vedere [procedura: usare nativo Run-Time Checks](/visualstudio/debugger/how-to-use-native-run-time-checks).

Se si compila il programma dalla riga di comando usando uno dei **/RTC** le opzioni del compilatore, qualsiasi pragma [ottimizzare](../../preprocessor/optimize.md) istruzioni nel codice avrà esito negativo. Infatti, il controllo degli errori di run-time non è valido in una build di rilascio (ottimizzato).

È consigliabile usare **/RTC** delle generazioni di sviluppo. **/RTC** non deve essere utilizzato per una build finale. **/RTC** non può essere usato con le ottimizzazioni del compilatore ([Opzioni /O (Ottimizza codice)](../../build/reference/o-options-optimize-code.md)). Immagine di un programma compilato con **/RTC** sarà leggermente superiore e leggermente più lento rispetto a un'immagine compilata con **/Od** (fino al 5% più lento rispetto a un **/Od** compilazione).

La direttiva del preprocessore MSVC_RUNTIME_CHECKS verrà definita quando si usa uno **/RTC** opzione oppure [/GZ](../../build/reference/gz-enable-stack-frame-run-time-error-checking.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Scegliere il **generazione di codice** pagina delle proprietà.

1. Modificare una o entrambe le proprietà seguenti: **controlli Runtime di base** oppure **controllo tipo più piccolo**.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere le proprietà <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.BasicRuntimeChecks%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.SmallerTypeCheck%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)<br/>
[Procedura: Usare controlli runtime nativi](/visualstudio/debugger/how-to-use-native-run-time-checks)