---
title: "Parallelizzazione automatica e vettorizzazione automatica | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: ec71583a-287b-4599-8767-1d255e080fe3
caps.latest.revision: 15
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Parallelizzazione automatica e vettorizzazione automatica
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le funzioni di parallelizzazione automatica e vettorizzazione automatica sono progettate per fornire miglioramenti automatici nelle prestazioni per i cicli nel codice.  
  
## Parallelizzazione automatica  
 L'opzione del compilatore [\/Qpar](../build/reference/qpar-auto-parallelizer.md) abilita la *parallelizzazione automatica* dei cicli nel codice.  Quando si specifica questo flag senza modificare il codice esistente, il compilatore valuta il codice per trovare i cicli per i quali potrebbe essere utile la parallelizzazione.  Il compilatore adotta un approccio conservativo nella selezione dei cicli da parallelizzare perché potrebbe trovare cicli per i quali questa funzione non è utile oppure perché tutte le parallelizzazioni non necessarie possono comportare la generazione di un pool di thread, una sincronizzazione aggiuntiva o altri tipi di elaborazione che rallentano le prestazioni invece di migliorarle.  Ad esempio, prendere in considerazione il seguente esempio in cui il limite superiore del ciclo non è noto in fase di compilazione:  
  
```cpp  
  
void loop_test(int u) {  
   for (int i=0; i<u; ++i)  
      A[i] = B[i] * C[i];  
}  
```  
  
 Poiché `u` potrebbe essere un valore basso, il compilatore non parallelizza automaticamente questo ciclo.  Tuttavia, se l'utente sa che `u` sarà sempre un valore alto, è possibile parallelizzarlo.  Per abilitare la parallelizzazione automatica, specificare [\#pragma loop\(hint\_parallel\(n\)\)](../preprocessor/loop.md), dove `n` è il numero di thread da parallelizzare.  Nel seguente esempio, il compilatore tenta di parallelizzare il in 8 thread.  
  
```cpp  
  
void loop_test(int u) {  
#pragma loop(hint_parallel(8))  
   for (int i=0; i<u; ++i)  
      A[i] = B[i] * C[i];  
}  
```  
  
 Come per tutte le [direttive pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md), è supportata anche la sintassi alternativa pragma `__pragma(loop(hint_parallel(n)))`.  
  
 Alcuni cicli non possono essere parallelizzati dal compilatore, anche se lo si desidera.  Di seguito è riportato un esempio:  
  
```cpp  
  
#pragma loop(hint_parallel(8))  
for (int i=0; i<upper_bound(); ++i)  
    A[i] = B[i] * C[i];  
```  
  
 La funzione `upper_bound()` può cambiare ogni volta che viene chiamata.  Poiché il limite superiore non può essere rilevato, il compilatore può generare un messaggio di diagnostica che spiega perché non è possibile parallelizzare il ciclo.  Nel seguente esempio viene mostrato un ciclo parallelizzabile, un ciclo non parallelizzabile, la sintassi del compilatore da usare al prompt dei comandi e l'output del compilatore per ciascuna opzione della riga di comando:  
  
```cpp  
int A[1000];  
void test() {  
#pragma loop(hint_parallel(0))  
    for (int i=0; i<1000; ++i) {  
        A[i] = A[i] + 1;  
    }  
  
    for (int i=1000; i<2000; ++i) {  
        A[i] = A[i] + 1;  
    }  
}  
  
```  
  
 La compilazione con il seguente comando:  
  
 **cl d:\\myproject\\mylooptest.cpp \/O2 \/Qpar \/Qpar\-report:1**  
  
 restituisce questo output:  
  
 **\-\-\- Analyzing function: void \_\_cdecl test\(void\)**   
  **d:\\myproject\\mytest.cpp\(4\) : loop parallelized**  
  
 La compilazione con il seguente comando:  
  
 **cl d:\\myproject\\mylooptest.cpp \/O2 \/Qpar \/Qpar\-report:2**  
  
 restituisce questo output:  
  
 **\-\-\- Analyzing function: void \_\_cdecl test\(void\)**   
  **d:\\myproject\\mytest.cpp\(4\) : loop parallelized**   
  **d:\\myproject\\mytest.cpp\(4\) : loop not parallelized due to reason '1008'**  
  
 Notare la differenza di output tra le due opzioni [\/Qvec\-report \(livello di segnalazione parallelizzazione automatica\)](../build/reference/qpar-report-auto-parallelizer-reporting-level.md) diverse.  **\/Qpar\-report:1** restituisce i messaggi di parallelizzazione solo per i cicli correttamente parallelizzati.  **\/Qpar\-report:2** restituisce i messaggi di parallelizzazione sia per le parallelizzazioni dei cicli riuscite che per quelle non riuscite.  
  
 Per altre informazioni su codici motivo e messaggi, vedere [Messaggi di vettorizzazione e parallelizzazione](../error-messages/tool-errors/vectorizer-and-parallelizer-messages.md).  
  
## Vettorizzazione automatica  
 La vettorizzazione automatica analizza i cicli nel codice e usa i registri e le istruzioni del vettore nel computer di destinazione per eseguirli, se possibile.  Questa funzione può migliorare le prestazioni del codice.  Il compilatore fa riferimento alle istruzioni SSE2, AVX e AVX2 nei processori Intel o AMD o alle istruzioni NEON nei processori ARM, a seconda dell'opzione [\/arch](../build/reference/arch-minimum-cpu-architecture.md).  
  
 La vettorizzazione automatica può generare istruzioni diverse da quelle specificate dall'opzione **\/arch**.  Queste istruzioni sono protette da un controllo di runtime per verificare il corretto funzionamento del codice.  Ad esempio, quando si compila **\/arch:SSE2**, è possibile che vengano generate istruzioni SSE4.2.  Un controllo di runtime verifica che SSE4.2 sia disponibile nel processore di destinazione e passa a una versione non SSE4.2 del ciclo se il processore non supporta tali istruzioni.  
  
 Per impostazione predefinita, la vettorizzazione automatica è abilitata.  Per confrontare le prestazioni del codice con la vettorizzazione applicata, è possibile usare [\#pragma loop\(no\_vector\)](../preprocessor/loop.md) per disabilitare la vettorizzazione di cicli specificati.  
  
```  
  
#pragma loop(no_vector)  
for (int i = 0; i < 1000; ++i)  
   A[i] = B[i] + C[i];  
  
```  
  
 Come per tutte le [direttive pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md), è supportata anche la sintassi alternativa pragma `__pragma(loop(no_vector))`.  
  
 Come per la parallelizzazione automatica, è possibile specificare l'opzione della riga di comando [\/Qvec\-report \(livello di segnalazione vettorizzazione automatica\)](../build/reference/qvec-report-auto-vectorizer-reporting-level.md) per restituire solo i cicli correttamente vettorizzati, **\/Qvec\-report:1**, o tutti i cicli indipendentemente dall'esito della vettorizzazione, **\/Qvec\-report:2**.  
  
 Per altre informazioni su codici motivo e messaggi, vedere [Messaggi di vettorizzazione e parallelizzazione](../error-messages/tool-errors/vectorizer-and-parallelizer-messages.md).  
  
 Per un esempio pratico del funzionamento della vettorizzazione, vedere il blog del [progetto Austin, parte 2 di 6, su come sfogliare le pagine](http://blogs.msdn.com/b/vcblog/archive/2012/09/27/10348494.aspx)  
  
## Vedere anche  
 [loop](../preprocessor/loop.md)   
 [Programmazione parallela in codice nativo](http://go.microsoft.com/fwlink/?LinkId=263662)   
 [\/Qpar \(Parallelizzazione automatica\)](../build/reference/qpar-auto-parallelizer.md)   
 [\/Qvec\-report \(livello di segnalazione parallelizzazione automatica\)](../build/reference/qpar-report-auto-parallelizer-reporting-level.md)   
 [\/Qvec\-report \(livello di segnalazione vettorizzazione automatica\)](../build/reference/qvec-report-auto-vectorizer-reporting-level.md)   
 [Messaggi di vettorizzazione e parallelizzazione](../error-messages/tool-errors/vectorizer-and-parallelizer-messages.md)