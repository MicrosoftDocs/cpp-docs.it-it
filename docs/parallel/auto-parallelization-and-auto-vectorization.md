---
title: Parallelizzazione automatica e vettorizzazione automatica
ms.date: 11/04/2016
ms.assetid: ec71583a-287b-4599-8767-1d255e080fe3
ms.openlocfilehash: 6ff908d1c7d45c8f757b8efe29f4f392102dc61d
ms.sourcegitcommit: 28eae422049ac3381c6b1206664455dbb56cbfb6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/31/2019
ms.locfileid: "66450244"
---
# <a name="auto-parallelization-and-auto-vectorization"></a>Parallelizzazione automatica e vettorizzazione automatica

Le funzioni di parallelizzazione automatica e vettorizzazione automatica sono progettate per fornire miglioramenti automatici nelle prestazioni per i cicli nel codice.

## <a name="auto-parallelizer"></a>Parallelizzazione automatica

Il [/Qpar](../build/reference/qpar-auto-parallelizer.md) Abilita opzione del compilatore *parallelizzazione automatica* dei cicli nel codice. Quando si specifica questo flag senza modificare il codice esistente, il compilatore valuta il codice per trovare i cicli per i quali potrebbe essere utile la parallelizzazione. Il compilatore adotta un approccio conservativo nella selezione dei cicli da parallelizzare perché potrebbe trovare cicli per i quali questa funzione non è utile oppure perché tutte le parallelizzazioni non necessarie possono comportare la generazione di un pool di thread, una sincronizzazione aggiuntiva o altri tipi di elaborazione che rallentano le prestazioni invece di migliorarle. Ad esempio, prendere in considerazione il seguente esempio in cui il limite superiore del ciclo non è noto in fase di compilazione:

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

Come per tutte le [direttive pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md), la sintassi alternativa pragma `__pragma(loop(hint_parallel(n)))` è anche supportato.

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

`cl d:\myproject\mylooptest.cpp /O2 /Qpar /Qpar-report:1`

restituisce questo output:

```Output
--- Analyzing function: void __cdecl test(void)
d:\myproject\mytest.cpp(4) : loop parallelized
```

La compilazione con il seguente comando:

`cl d:\myproject\mylooptest.cpp /O2 /Qpar /Qpar-report:2`

restituisce questo output:

```Output
--- Analyzing function: void __cdecl test(void)
d:\myproject\mytest.cpp(4) : loop parallelized
d:\myproject\mytest.cpp(4) : loop not parallelized due to reason '1008'
```

Si noti la differenza nell'output tra le due diverse [/Qpar-report (livello di segnalazione parallelizzazione automatica)](../build/reference/qpar-report-auto-parallelizer-reporting-level.md) opzioni. `/Qpar-report:1` restituisce i messaggi di parallelizzazione solo per i cicli correttamente parallelizzati. `/Qpar-report:2` restituisce i messaggi di parallelizzazione sia per le parallelizzazioni dei cicli riuscite che per quelle non riuscite.

Per altre informazioni su codici motivo e messaggi, vedere [messaggi di vettorizzazione e parallelizzazione](../error-messages/tool-errors/vectorizer-and-parallelizer-messages.md).

## <a name="auto-vectorizer"></a>Vettorizzazione automatica

La vettorizzazione automatica analizza i cicli nel codice e usa i registri e le istruzioni del vettore nel computer di destinazione per eseguirli, se possibile. Questa funzione può migliorare le prestazioni del codice. Il compilatore fa riferimento le istruzioni SSE2, AVX e AVX2 nei processori Intel o AMD o alle istruzioni NEON nei processori ARM, in base al [/arch](../build/reference/arch-minimum-cpu-architecture.md) passare.

La vettorizzazione automatica può generare istruzioni diverse da quelle specificate dall'opzione `/arch`. Queste istruzioni sono protette da un controllo di runtime per verificare il corretto funzionamento del codice. Ad esempio, quando si compila `/arch:SSE2`, è possibile che vengano generate istruzioni SSE4.2. Un controllo di runtime verifica che SSE4.2 sia disponibile nel processore di destinazione e passa a una versione non SSE4.2 del ciclo se il processore non supporta tali istruzioni.

Per impostazione predefinita, la vettorizzazione automatica è abilitata. Se si desidera confrontare le prestazioni del codice con la vettorizzazione applicata, è possibile usare [loop (no_vector) #pragma](../preprocessor/loop.md) per disabilitare la vettorizzazione di cicli specificati.

```cpp
#pragma loop(no_vector)
for (int i = 0; i < 1000; ++i)
   A[i] = B[i] + C[i];
```

Come per tutte le [direttive pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md), la sintassi alternativa pragma `__pragma(loop(no_vector))` è anche supportato.

Come con la parallelizzazione automatica, è possibile specificare il [/Qvec-report (livello di segnalazione vettorizzazione automatica)](../build/reference/qvec-report-auto-vectorizer-reporting-level.md) opzione della riga di comando per correttamente vettorizzati solo i cicli:`/Qvec-report:1`, o entrambi correttamente e non correttamente vettorizzati cicli, ovvero`/Qvec-report:2`).

Per altre informazioni su codici motivo e messaggi, vedere [messaggi di vettorizzazione e parallelizzazione](../error-messages/tool-errors/vectorizer-and-parallelizer-messages.md).

Per un esempio che illustra come la vettorizzazione funziona in pratica, vedere [progetto Austin parte 2 di 6: Pagina a usare CURL](https://devblogs.microsoft.com/cppblog/project-austin-part-2-of-6-page-curling/)

## <a name="see-also"></a>Vedere anche

[loop](../preprocessor/loop.md)<br/>
[Programmazione parallela in codice nativo](https://go.microsoft.com/fwlink/p/?linkid=263662)<br/>
[/Qpar (parallelizzazione automatica)](../build/reference/qpar-auto-parallelizer.md)<br/>
[/Qvec/report (livello di segnalazione parallelizzazione automatica)](../build/reference/qpar-report-auto-parallelizer-reporting-level.md)<br/>
[/Qvec/report (livello di segnalazione vettorizzazione automatica)](../build/reference/qvec-report-auto-vectorizer-reporting-level.md)<br/>
[Messaggi di vettorizzazione e parallelizzazione](../error-messages/tool-errors/vectorizer-and-parallelizer-messages.md)
