---
title: "/EH (Modello di gestione delle eccezioni) | Microsoft Docs"
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
  - "VC.Project.VCCLWCECompilerTool.ExceptionHandling"
  - "/eh"
  - "VC.Project.VCCLCompilerTool.ExceptionHandling"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "gestione eccezioni, modello di compilatore"
  - "compilatore cl.exe, gestione eccezioni"
  - "EH (opzione del compilatore) [C++]"
  - "-EH (opzione del compilatore) [C++]"
  - "/EH (opzione del compilatore) [C++]"
ms.assetid: 754b916f-d206-4472-b55a-b6f1b0f2cb4d
caps.latest.revision: 29
caps.handback.revision: 29
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /EH (Modello di gestione delle eccezioni)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica il tipo di gestione delle eccezioni usato dal compilatore, quando ottimizzare i controlli delle eccezioni e se eliminare gli oggetti C\+\+ che non rientrano nell'ambito a causa di un'eccezione. Se l'opzione **\/EH** non viene specificata, il compilatore intercetta sia le eccezioni strutturate asincrone sia le eccezioni C\+\+, ma non elimina gli oggetti C\+\+ che non rientrano nell'ambito a causa di un'eccezione asincrona.  
  
## Sintassi  
  
```  
/EH{s|a}[c][r][-]  
```  
  
## Argomenti  
 **a**  
 Modello di gestione delle eccezioni che intercetta sia le eccezioni asincrone \(strutturate\) sia le eccezioni sincrone \(C\+\+\).  
  
 **s**  
 Modello di gestione delle eccezioni che intercetta solo le eccezioni C\+\+ e indica al compilatore di supporre che le funzioni dichiarate come `extern "C"` potrebbero generare un'eccezione.  
  
 **c**  
 Se usato con **s** \(**\/EHsc**\), intercetta solo le eccezioni C\+\+ e indica al compilatore di supporre che le funzioni dichiarate come `extern "C"` non generano mai un'eccezione C\+\+.  
  
 **\/EHca** è equivalente a **\/EHa**.  
  
 **r**  
 Indica al compilatore di generare sempre controlli di terminazione di runtime per tutte le funzioni `noexcept`. Per impostazione predefinita, è possibile ottimizzare i controlli di runtime per `noexcept` se il compilatore che determina la funzione chiama solo funzioni non generanti.  
  
## Note  
 L'opzione del compilatore **\/EHa** viene usata per supportare la gestione delle eccezioni strutturate asincrone \(SEH\) con la clausola `catch(...)` C\+\+ nativa. Per implementare SEH senza specificare **\/EHa**, è possibile usare la sintassi `__try`, `__except` e `__finally`. Sebbene Windows e Visual C\+\+ supportino SEH, è vivamente consigliabile usare la gestione delle eccezioni C\+\+ conforme allo standard ISO \(**\/EHs** o **\/EHsc**\) perché rende il codice più portabile e flessibile. Tuttavia, nel codice esistente o per alcuni tipi di programmi, ad esempio nel codice compilato per supportare Common Language Runtime \([\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md)\), potrebbe ancora essere necessario usare SEH. Per altre informazioni, vedere [Gestione strutturata delle eccezioni](../../cpp/structured-exception-handling-c-cpp.md).  
  
 L'uso di **\/EHa** e il tentativo di gestire tutte le eccezioni con `catch(...)` potrebbero comportare dei rischi. Nella maggior parte dei casi, le eccezioni asincrone sono irreversibili e devono essere gestite come tali. Il tentativo di intercettarle per procedere potrebbe causare il danneggiamento del processo ed errori difficili da trovare e risolvere.  
  
 Se si usa **\/EHs** o **\/EHsc**, la clausola `catch(...)` non intercetta le eccezioni strutturate asincrone. Le violazioni di accesso e le eccezioni <xref:System.Exception?displayProperty=fullName> gestite non vengono intercettate e gli oggetti che rientrano nell'ambito quando viene generata un'eccezione asincrona non vengono eliminati anche se l'eccezione asincrona viene gestita.  
  
 Se si usa **\/EHa**, potrebbe risultare di dimensioni maggiori e le sue prestazioni potrebbero non essere ottimali perché il compilatore non ottimizza un blocco `try` in modo altrettanto aggressivo e lascia anche filtri di eccezioni che chiamano automaticamente i distruttori di tutti gli oggetti locali anche se il compilatore non visualizza alcun codice che possa generare un'eccezione C\+\+. In questo modo, è possibile procedere in modo sicuro alla rimozione dello stack per le eccezioni asincrone e per le eccezioni C\+\+. Quando si usa **\/EHs**, il compilatore presuppone che le eccezioni possano verificarsi solo in corrispondenza di un'istruzione `throw` o di una chiamata di funzione. In questo modo, il compilatore elimina il codice per tenere traccia della durata di molti oggetti non rimovibili, con conseguente riduzione significativa delle dimensioni del codice.  
  
 È consigliabile non collegare gli oggetti compilati con **\/EHa** a quelli compilati con **\/EHs** nello stesso modulo eseguibile. Se è necessario gestire un'eccezione asincrona con **\/EHa** in qualsiasi punto del modulo, usare **\/EHa** per compilare tutto il codice nel modulo. È possibile usare la sintassi di gestione delle eccezioni strutturate nello stesso modulo del codice compilato con **\/EHs**, ma non è possibile combinare la sintassi SEH con `try`, `throw` e `catch` nella stessa funzione.  
  
 Usare **\/EHa** se si desidera intercettare un'eccezione generata da istruzioni diverse da `throw`. In questo esempio viene generata e intercettata un'eccezione strutturata:  
  
```  
// compiler_options_EHA.cpp // compile with: /EHa #include <iostream> #include <excpt.h> using namespace std; void fail() {   // generates SE and attempts to catch it using catch(...) try { int i = 0, j = 1; j /= i;   // This will throw a SE (divide by zero). printf("%d", j); } catch(...) {   // catch block will only be executed under /EHa cout<<"Caught an exception in catch(...)."<<endl; } } int main() { __try { fail(); } // __except will only catch an exception here __except(EXCEPTION_EXECUTE_HANDLER) { // if the exception was not caught by the catch(...) inside fail() cout << "An exception was caught in __except." << endl; } }  
```  
  
 Per l'opzione **\/EHc** è necessario specificare **\/EHs** o **\/EHa**. L'opzione **\/clr** implica **\/EHa** \(ovvero **\/clr \/EHa** è ridondante\). Il compilatore genera un errore se **\/EHs\[c\]** viene usato dopo **\/clr**. Le ottimizzazioni non influiscono su questo comportamento. Quando viene intercettata un'eccezione, il compilatore richiama il distruttore o i distruttori di classe per l'oggetto o gli oggetti che rientrano nello stesso ambito dell'eccezione. Quando un'eccezione non viene intercettata, questi distruttori non vengono eseguiti.  
  
 Per informazioni sulle restrizioni relative alla gestione delle eccezioni in **\/clr**, vedere [\_set\_se\_translator](../../c-runtime-library/reference/set-se-translator.md).  
  
 L'opzione può essere cancellata usando il simbolo **\-**. Ad esempio, **\/EHsc\-** viene interpretato come **\/EHs \/EHc\-** ed equivale a **\/EHs**.  
  
 L'opzione del compilatore **\/EHr** forza i controlli di terminazione di runtime in tutte le funzioni che hanno un attributo `noexcept`. Per impostazione predefinita, è possibile ottimizzare i controlli di runtime se il back\-end del compilatore determina che una funzione chiama solo funzioni *non generanti*. Le funzioni non generanti sono quelle che hanno un attributo che specifica l'impossibilità di generare eccezioni. Ciò include le funzioni contrassegnate come `noexcept`, `throw()`, `__declspec(nothrow)` e, quando viene specificato **\/EHc**, le funzioni `extern "C"`. Le funzioni non generanti includono anche qualsiasi attributo determinato come non generante dal compilatore dopo un'ispezione. È possibile impostare in modo esplicito il valore predefinito usando **\/EHr\-**.  
  
 Tuttavia, l'attributo non generante non garantisce che non possono essere generate eccezioni da una funzione. A differenza del comportamento di una funzione `noexcept`, il compilatore Visual C\+\+ considera un'eccezione generata da una funzione dichiarata con `throw()`, `__declspec(nothrow)`, o `extern "C"` come un comportamento non definito. Le funzioni che usano questi tre attributi di dichiarazione non applicano i controlli di terminazione di runtime per le eccezioni. È possibile usare l'opzione **\/EHr** che consente di identificare questo comportamento non definito, forzando il compilatore a generare controlli di runtime per le eccezioni non gestite che effettuano l'escape di una funzione `noexcept`.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Nel riquadro sinistro espandere **Proprietà di configurazione**, **C\/C\+\+**, **Generazione codice**.  
  
3.  Modificare la proprietà **Abilita eccezioni C\+\+**.  
  
     In alternativa, impostare **Abilita eccezioni C\+\+** su **No**, quindi nella casella **Opzioni aggiuntive** della pagina delle proprietà **Riga di comando** aggiungere l'opzione del compilatore.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ExceptionHandling%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Gestione di errori ed eccezioni](../../cpp/errors-and-exception-handling-modern-cpp.md)   
 [Specifiche di eccezioni \(generazione\)](../../cpp/exception-specifications-throw-cpp.md)   
 [Gestione strutturata delle eccezioni](../../cpp/structured-exception-handling-c-cpp.md)