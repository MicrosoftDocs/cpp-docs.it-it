---
title: -/RTC (controlli degli errori di Run-Time) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-tools
ms.tgt_pltfrm: ''
ms.topic: article
f1_keywords:
- /rtc
- VC.Project.VCCLCompilerTool.SmallerTypeCheck
- VC.Project.VCCLCompilerTool.UninitializedVariableCheck
- VC.Project.VCCLCompilerTool.StackFrameCheck
- VC.Project.VCCLCompilerTool.BasicRuntimeChecks
dev_langs:
- C++
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
caps.latest.revision: 18
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 8699a96dcd7c04bc1b2707e964afb4b68068147e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="rtc-run-time-error-checks"></a>/RTC (Controlli di runtime)
Consente di attivare e disattivare la funzionalità relativa ai controlli di errore di run-time, con la [runtime_checks](../../preprocessor/runtime-checks.md) pragma.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/RTC1  
/RTCc  
/RTCs  
/RTCu  
```  
  
## <a name="arguments"></a>Argomenti  
 `1`  
 Equivalente di **/RTC**`su`.  
  
 `c`  
 Segnala quando un valore viene assegnato a un tipo di dati più piccolo e comporta una perdita di dati. Ad esempio, se un valore di tipo `short 0x101` viene assegnato a una variabile di tipo `char`.  
  
 Questa opzione segnala situazioni in cui si intende troncamento, ad esempio, se si desidera che i primi otto bit di un `int` restituito come un `char`. Poiché **/RTC** `c` provoca un errore in fase di esecuzione se le informazioni vengono perse in seguito all'assegnazione, è possibile nascondere le informazioni necessarie per evitare un errore in fase di esecuzione come risultato di **/RTC** `c`. Ad esempio:  
  
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
  
 `s`  
 Abilita verifica dello stack frame errore di run-time, come indicato di seguito:  
  
-   Inizializzazione delle variabili locali su un valore diverso da zero. Ciò consente di identificare gli errori che non vengono visualizzati durante l'esecuzione in modalità di debug. È probabile che le variabili dello stack ancora sarà uguale a zero in una build di debug rispetto a una build di rilascio a causa delle ottimizzazioni del compilatore di variabili dello stack in una build di rilascio. Una volta che un programma ha utilizzato un'area del proprio stack, non viene mai reimpostato su 0 dal compilatore. Pertanto, le variabili dello stack non inizializzato e successive che si utilizza la stessa area dello stack possono restituire valori rimasti dall'utilizzo della memoria dello stack precedente.  
  
-   Rilevamento di sovraccarichi e sottocarichi delle variabili locali, ad esempio matrici. **/RTC** `s` non rileva i sovraccarichi quando si accede alla memoria risultante da una struttura di spaziatura interna del compilatore. Spaziatura interna può verificarsi con [allineare](../../cpp/align-cpp.md), [/Zp (Allineamento membri Struct)](../../build/reference/zp-struct-member-alignment.md), o [pack](../../preprocessor/pack.md), o se si ordinano gli elementi della struttura in modo da richiedere al compilatore l'aggiunta di spaziatura interna.  
  
-   Verifica di puntatore dello stack, che rileva il danneggiamento. Danneggiamento del puntatore dello stack può essere causato da una mancata corrispondenza convenzione di chiamata. Ad esempio, utilizzando un puntatore a funzione, si chiama una funzione in una DLL che viene esportata come [stdcall](../../cpp/stdcall.md) ma il puntatore viene dichiarato per la funzione come [cdecl](../../cpp/cdecl.md).  
  
 `u`  
 Segnala quando viene utilizzata una variabile non inizializzata. Ad esempio, un'istruzione che genera l'errore `C4701` può anche generare un errore di run-time in **/RTC**`u`. Qualsiasi istruzione che genera l'errore [avviso del compilatore (livello 1 e livello 4) C4700](../../error-messages/compiler-warnings/compiler-warning-level-1-and-level-4-c4700.md) genererà un errore in fase di esecuzione in **/RTC**`u`.  
  
 Tuttavia, si consideri il frammento di codice seguente:  
  
```cpp  
int a, *b, c;  
if ( 1 )  
b = &a;  
c = a;  // No run-time error with /RTCu  
```  
  
 Se una variabile è stata inizializzata, non essere segnalato in fase di esecuzione da **/RTC**`u`. Ad esempio, una volta alias tramite un puntatore a una variabile, il compilatore registrerà non la variabile e di report utilizza non inizializzato. In effetti, è possibile inizializzare una variabile da accettarne l'indirizzo. In questa situazione l'operatore & funziona come un operatore di assegnazione.  
  
## <a name="remarks"></a>Note  
 Controlli degli errori di runtime sono un modo individuare i problemi nel codice in esecuzione. Per ulteriori informazioni, vedere [come: controlli runtime nativo utilizzare](/visualstudio/debugger/how-to-use-native-run-time-checks).  
  
 Se si compila il programma dalla riga di comando utilizzando uno del **/RTC** opzioni del compilatore, qualsiasi istruzione del pragma [ottimizzare](../../preprocessor/optimize.md) istruzioni nel codice avrà esito negativo. In questo modo il controllo degli errori di runtime non è valido in una build di rilascio (ottimizzato).  
  
 È consigliabile utilizzare **/RTC** per le build di sviluppo; **/RTC** non deve essere utilizzato per una build finale. **/RTC** non può essere utilizzato con le ottimizzazioni del compilatore ([Opzioni /O (Ottimizza codice)](../../build/reference/o-options-optimize-code.md)). Immagine di un programma compilato con **/RTC** sarà leggermente più grande e leggermente più lento rispetto a un'immagine compilata con **/Od** (fino a 5% più lenta un **/Od** compilazione).  
  
 Quando si usa una direttiva del preprocessore MSVC_RUNTIME_CHECKS verrà definita **/RTC** opzione o [/GZ](../../build/reference/gz-enable-stack-frame-run-time-error-checking.md).  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C/C++** .  
  
3.  Fare clic su di **la generazione di codice** pagina delle proprietà.  
  
4.  Modificare una o entrambe le proprietà seguenti: **controlli Runtime di base** o **controllo tipo più piccolo**.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere le proprietà <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.BasicRuntimeChecks%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.SmallerTypeCheck%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Procedura: Usare controlli runtime nativi](/visualstudio/debugger/how-to-use-native-run-time-checks)