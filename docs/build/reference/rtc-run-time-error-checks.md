---
title: "/RTC (Controlli di runtime) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/rtc"
  - "VC.Project.VCCLCompilerTool.SmallerTypeCheck"
  - "VC.Project.VCCLCompilerTool.UninitializedVariableCheck"
  - "VC.Project.VCCLCompilerTool.StackFrameCheck"
  - "VC.Project.VCCLCompilerTool.BasicRuntimeChecks"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/RTC1 (opzione del compilatore) [C++]"
  - "/RTCc (opzione del compilatore) [C++]"
  - "/RTCs (opzione del compilatore) [C++]"
  - "/RTCu (opzione del compilatore) [C++]"
  - "__MSVC_RUNTIME_CHECKS (macro)"
  - "RTC1 (opzione del compilatore)"
  - "-RTC1 (opzione del compilatore) [C++]"
  - "RTCc (opzione del compilatore)"
  - "-RTCc (opzione del compilatore) [C++]"
  - "RTCs (opzione del compilatore)"
  - "-RTCs (opzione del compilatore) [C++]"
  - "RTCu (opzione del compilatore)"
  - "-RTCu (opzione del compilatore) [C++]"
  - "controlli runtime, /RTC (opzione)"
  - "errori di runtime, controlli di errori"
  - "errori di runtime, controlli runtime"
ms.assetid: 9702c558-412c-4004-acd5-80761f589368
caps.latest.revision: 18
caps.handback.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /RTC (Controlli di runtime)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Consente di attivare e disabilitare la funzionalità relativa ai controlli di runtime, utilizzando il pragma [runtime\_checks](../../preprocessor/runtime-checks.md).  
  
## Sintassi  
  
```  
/RTC1  
/RTCc  
/RTCs  
/RTCu  
```  
  
## Argomenti  
 `1`  
 Equivalente di **\/RTC**`su`.  
  
 `c`  
 Segnala quando un valore è assegnato a un tipo di dati più piccolo e causa una perdita di dati.  Indica, ad esempio, se un valore di tipo `short 0x101` è assegnato a una variabile di tipo `char`.  
  
 Attivando questa opzione vengono segnalate situazioni in cui si intende effettuare un troncamento, ad esempio se si desidera che i primi otto bit di un valore `int` vengano restituiti come `char`.  Poiché **\/RTC**`c` causa un errore di runtime se vengono perse informazioni a seguito di un'assegnazione, è possibile nascondere le informazioni necessarie per evitare un errore di runtime come risultato di **\/RTC**`c`.  Di seguito è riportato un esempio.  
  
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
 Attiva i controlli di runtime dello stack frame, come illustrato di seguito:  
  
-   Inizializzazione delle variabili locali su un valore diverso da zero.  Questo consente di identificare i bug che non appaiono durante l'esecuzione in modalità debug.  Sono maggiori le possibilità che le variabili dello stack siano ancora pari a zero in una build di debug rispetto a una build di rilascio a causa delle ottimizzazioni del compilatore delle variabili dello stack in una build di rilascio.  Dopo che un programma ha utilizzato un'area del proprio stack, il compilatore non la reimposterà mai su 0.  Pertanto le variabili dello stack successive e non inizializzate che si trovano a utilizzare la stessa area dello stack possono restituire valori lasciati dall'utilizzo precedente della memoria di tale stack.  
  
-   Rilevamento di sovraccarichi e sottocarichi delle variabili locali, come le matrici.  **\/RTC**`s` non rileva i sovraccarichi quando si accede alla memoria che risulta dalla spaziatura interna di una struttura eseguita dal compilatore.  La spaziatura interna può verificarsi se si utilizza [align](../../cpp/align-cpp.md), [\/Zp \(Allineamento membri struct\)](../../build/reference/zp-struct-member-alignment.md) o [pack](../../preprocessor/pack.md) oppure se gli elementi della struttura vengono ordinati in modo tale da richiedere al compilatore l'aggiunta di spaziatura interna.  
  
-   Verifica del puntatore dello stack che ne rileva il danneggiamento.  Il danneggiamento del puntatore dello stack può essere causato da una mancata corrispondenza della convenzione di chiamata.  Utilizzando un puntatore a funzione, ad esempio, è possibile chiamare una funzione in una DLL che viene esportata come [\_\_stdcall](../../cpp/stdcall.md), ma il puntatore a funzione viene dichiarato alla funzione come [\_\_cdecl](../../cpp/cdecl.md).  
  
 `u`  
 Segnala i casi in cui viene utilizzata una variabile non inizializzata.  Ad esempio, un'istruzione che genera `C4701` può anch'essa generare un errore di runtime in **\/RTC**`u`.  Qualsiasi istruzione che genera [Avviso del compilatore \(livelli 1 e 4\) C4700](../../error-messages/compiler-warnings/compiler-warning-level-1-and-level-4-c4700.md) genererà un errore di runtime in **\/RTC**`u`.  
  
 Esaminare il seguente frammento di codice:  
  
```  
int a, *b, c;  
if ( 1 )  
b = &a;  
c = a;  // No run-time error with /RTCu  
```  
  
 Se una variabile è stata inizializzata, non verrà segnalata in fase di esecuzione da **\/RTC**`u`.  Dopo che, ad esempio, a una variabile è stato associato un alias attraverso un puntatore, il compilatore non esaminerà la variabile e segnalerà gli utilizzi non inizializzati.  In realtà è possibile inizializzare una variabile prendendone l'indirizzo.  In questa situazione l'operatore & funziona come un operatore di assegnazione.  
  
## Note  
 I controlli di runtime rappresentano un modo per individuare problemi nel codice di esecuzione. Per ulteriori informazioni, vedere [Procedura: utilizzare controlli runtime nativi](../Topic/How%20to:%20Use%20Native%20Run-Time%20Checks.md).  
  
 Se si compila il programma dalla riga di comando utilizzando una delle opzioni del compilatore **\/RTC**, qualsiasi istruzione del pragma [optimize](../../preprocessor/optimize.md) nel codice avrà esito negativo in modo invisibile.  Ciò accade in quanto i controlli di runtime non sono validi in una build di rilascio \(ottimizzata\).  
  
 Per le compilazioni di sviluppo è opportuno utilizzare **\/RTC**; per le compilazioni destinate alla vendita si consiglia di non utilizzare **\/RTC**.  **\/RTC** non può essere utilizzato con le ottimizzazioni del compilatore \([Opzioni \/O \(Ottimizza codice\)](../../build/reference/o-options-optimize-code.md)\).  L'immagine di un programma compilata con **\/RTC** risulterà leggermente più grande e leggermente più lenta di un'immagine compilata con **\/Od** \(fino al 5% più lenta di una build **\/Od**\).  
  
 La direttiva del preprocessore \_\_MSVC\_RUNTIME\_CHECKS viene definita quando si utilizza un'opzione **\/RTC** o [\/GZ](../../build/reference/gz-enable-stack-frame-run-time-error-checking.md).  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Generazione codice**.  
  
4.  Modificare una o entrambe le proprietà **Controlli runtime di base** o **Controllo tipo più piccolo**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere le proprietà <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.BasicRuntimeChecks%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.SmallerTypeCheck%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [RTC sample](http://msdn.microsoft.com/it-it/b3415b09-f6fd-43dc-8c02-9a910bc2574e)