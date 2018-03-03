---
title: Parallelizzazione automatica e vettorizzazione automatica | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: ec71583a-287b-4599-8767-1d255e080fe3
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 1b458dbe06bd69817c659c3bfec1d1ab7a216d1f
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="auto-parallelization-and-auto-vectorization"></a>Parallelizzazione automatica e vettorizzazione automatica
Le funzioni di parallelizzazione automatica e vettorizzazione automatica sono progettate per fornire miglioramenti automatici nelle prestazioni per i cicli nel codice.  
  
## <a name="auto-parallelizer"></a>Parallelizzazione automatica  
 Il [/Qpar](../build/reference/qpar-auto-parallelizer.md) consente di opzione del compilatore *la parallelizzazione automatica* di cicli nel codice. Quando si specifica questo flag senza modificare il codice esistente, il compilatore valuta il codice per trovare i cicli per i quali potrebbe essere utile la parallelizzazione. Il compilatore adotta un approccio conservativo nella selezione dei cicli da parallelizzare perché potrebbe trovare cicli per i quali questa funzione non è utile oppure perché tutte le parallelizzazioni non necessarie possono comportare la generazione di un pool di thread, una sincronizzazione aggiuntiva o altri tipi di elaborazione che rallentano le prestazioni invece di migliorarle. Ad esempio, prendere in considerazione il seguente esempio in cui il limite superiore del ciclo non è noto in fase di compilazione:  
  
```cpp  
void loop_test(int u) {  
   for (int i=0; i<u; ++i)  
      A[i] = B[i] * C[i];  
}  
```  
  
 Poiché `u` potrebbe essere un valore basso, il compilatore non parallelizza automaticamente questo ciclo. Tuttavia, se l'utente sa che `u` sarà sempre un valore alto, è possibile parallelizzarlo. Per abilitare la parallelizzazione automatica, specificare [#pragma loop(hint_parallel(n))](../preprocessor/loop.md), dove `n` è il numero di thread da parallelizzare. Nel seguente esempio, il compilatore tenta di parallelizzare il in 8 thread.  
  
```cpp  
void loop_test(int u) {  
#pragma loop(hint_parallel(8))  
   for (int i=0; i<u; ++i)  
      A[i] = B[i] * C[i];  
}  
```  
  
 Come con tutti [direttive pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md), la sintassi alternativa pragma `__pragma(loop(hint_parallel(n)))` è anche supportato.  
  
 Alcuni cicli non possono essere parallelizzati dal compilatore, anche se lo si desidera. Di seguito è riportato un esempio:  
  
```cpp  
#pragma loop(hint_parallel(8))  
for (int i=0; i<upper_bound(); ++i)  
    A[i] = B[i] * C[i];  
```  
  
 La funzione `upper_bound()` può cambiare ogni volta che viene chiamata. Poiché il limite superiore non può essere rilevato, il compilatore può generare un messaggio di diagnostica che spiega perché non è possibile parallelizzare il ciclo. Nel seguente esempio viene mostrato un ciclo parallelizzabile, un ciclo non parallelizzabile, la sintassi del compilatore da usare al prompt dei comandi e l'output del compilatore per ciascuna opzione della riga di comando:  
  
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
  
 **CL d:\myproject\mylooptest.cpp /O2 /Qpar /Qpar-report: 1**  
  
 restituisce questo output:  
  
 **---Funzione di analisi: void test(void) cdecl**   
 **d:\myproject\mytest.cpp(4): ciclo parallelizzato**  
  
 La compilazione con il seguente comando:  
  
 **CL d:\myproject\mylooptest.cpp /O2 /Qpar /Qpar-report: 2**  
  
 restituisce questo output:  
  
 **---Funzione di analisi: void test(void) cdecl**   
 **d:\myproject\mytest.cpp(4): ciclo parallelizzato**   
 **d:\myproject\mytest.cpp(4): ciclo non parallelizzato a causa del motivo '1008'**  
  
 Si noti la differenza tra i due diversi output [/qpar (parallelizzazione automatica Reporting livello)](../build/reference/qpar-report-auto-parallelizer-reporting-level.md) opzioni. **/Qpar-report: 1** vengono generati messaggi di parallelizzazione solo per i cicli correttamente parallelizzati. **/Qpar-report: 2** vengono generati messaggi di parallelizzazione per entrambe le parallelizzazioni dei cicli riusciti e non riuscite.  
  
 Per ulteriori informazioni su codici motivo e messaggi, vedere [messaggi di vettorizzazione e parallelizzazione](../error-messages/tool-errors/vectorizer-and-parallelizer-messages.md).  
  
## <a name="auto-vectorizer"></a>Vettorizzazione automatica  
 La vettorizzazione automatica analizza i cicli nel codice e usa i registri e le istruzioni del vettore nel computer di destinazione per eseguirli, se possibile. Questa funzione può migliorare le prestazioni del codice. Il compilatore fa riferimento le istruzioni SSE2, AVX e AVX2 nei processori Intel o AMD o alle istruzioni NEON nei processori ARM, in base al [/arch](../build/reference/arch-minimum-cpu-architecture.md) passare.  
  
 La vettorizzazione automatica può generare istruzioni diverse rispetto a quanto specificato da di **/arch** passare. Queste istruzioni sono protette da un controllo di runtime per verificare il corretto funzionamento del codice. Ad esempio, quando esegue la compilazione **/arch: SSE2**, possono essere generate istruzioni SSE 4.2. Un controllo di runtime verifica che SSE4.2 sia disponibile nel processore di destinazione e passa a una versione non SSE4.2 del ciclo se il processore non supporta tali istruzioni.  
  
 Per impostazione predefinita, la vettorizzazione automatica è abilitata. Se si desidera confrontare le prestazioni del codice con la vettorizzazione applicata, è possibile utilizzare [#pragma loop (no_vector)](../preprocessor/loop.md) per disabilitare la vettorizzazione di cicli specificati.  
  
```  
  
      #pragma loop(no_vector)  
for (int i = 0; i < 1000; ++i)  
   A[i] = B[i] + C[i];  
  
```  
  
 Come con tutti [direttive pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md), la sintassi alternativa pragma `__pragma(loop(no_vector))` è anche supportato.  
  
 Come con la parallelizzazione automatica, è possibile specificare il [/Qvec-report (livello di segnalazione vettorizzazione automatica)](../build/reference/qvec-report-auto-vectorizer-reporting-level.md) opzione della riga di comando per correttamente vettorizzato solo cicli:**/Qvec-report: 1**, o sia correttamente o vettorizzato cicli:**/Qvec-report: 2**).  
  
 Per ulteriori informazioni su codici motivo e messaggi, vedere [messaggi di vettorizzazione e parallelizzazione](../error-messages/tool-errors/vectorizer-and-parallelizer-messages.md).  
  
 Per un esempio che illustra come la vettorizzazione funziona in pratica, vedere [progetto Austin, parte 2 di 6: pagina Curling](http://blogs.msdn.com/b/vcblog/archive/2012/09/27/10348494.aspx)  
  
## <a name="see-also"></a>Vedere anche  
 [ciclo](../preprocessor/loop.md)   
 [Programmazione parallela in codice nativo](http://go.microsoft.com/fwlink/p/?linkid=263662)   
 [/Qpar (parallelizzazione automatica)](../build/reference/qpar-auto-parallelizer.md)   
 [/Qvec-report (livello segnalazione parallelizzazione automatica)](../build/reference/qpar-report-auto-parallelizer-reporting-level.md)   
 [/Qvec-report (livello segnalazione vettorizzazione automatica)](../build/reference/qvec-report-auto-vectorizer-reporting-level.md)   
 [Messaggi di vettorizzazione e parallelizzazione](../error-messages/tool-errors/vectorizer-and-parallelizer-messages.md)