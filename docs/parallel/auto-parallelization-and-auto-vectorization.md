---
description: 'Altre informazioni su: parallelizzazione automatica e vettorizzazione automatica'
title: Parallelizzazione automatica e vettorizzazione automatica
ms.date: 11/04/2016
ms.assetid: ec71583a-287b-4599-8767-1d255e080fe3
ms.openlocfilehash: 4de73924ab6c28335ea6fcf2e6473e74d68bd189
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97338324"
---
# <a name="auto-parallelization-and-auto-vectorization"></a>Parallelizzazione automatica e vettorizzazione automatica

Le funzioni di parallelizzazione automatica e vettorizzazione automatica sono progettate per fornire miglioramenti automatici nelle prestazioni per i cicli nel codice.

## <a name="auto-parallelizer"></a>Parallelizzazione automatica

L'opzione del compilatore [/QPAR](../build/reference/qpar-auto-parallelizer.md) consente la *parallelizzazione automatica* dei cicli nel codice. Quando si specifica questo flag senza modificare il codice esistente, il compilatore valuta il codice per trovare i cicli per i quali potrebbe essere utile la parallelizzazione. Il compilatore adotta un approccio conservativo nella selezione dei cicli da parallelizzare perché potrebbe trovare cicli per i quali questa funzione non è utile oppure perché tutte le parallelizzazioni non necessarie possono comportare la generazione di un pool di thread, una sincronizzazione aggiuntiva o altri tipi di elaborazione che rallentano le prestazioni invece di migliorarle. Ad esempio, prendere in considerazione il seguente esempio in cui il limite superiore del ciclo non è noto in fase di compilazione:

```cpp
void loop_test(int u) {
   for (int i=0; i<u; ++i)
      A[i] = B[i] * C[i];
}
```

Poiché `u` potrebbe essere un valore basso, il compilatore non parallelizza automaticamente questo ciclo. Tuttavia, se l'utente sa che `u` sarà sempre un valore alto, è possibile parallelizzarlo. Per abilitare la parallelizzazione automatica, specificare [#pragma loop (hint_parallel (n))](../preprocessor/loop.md), in cui `n` è il numero di thread da parallelizzare. Nel seguente esempio, il compilatore tenta di parallelizzare il in 8 thread.

```cpp
void loop_test(int u) {
#pragma loop(hint_parallel(8))
   for (int i=0; i<u; ++i)
      A[i] = B[i] * C[i];
}
```

Come per tutte le [direttive pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md), `__pragma(loop(hint_parallel(n)))` è supportata anche la sintassi del pragma alternativa.

Alcuni cicli non possono essere parallelizzati dal compilatore, anche se lo si desidera. Ecco un esempio:

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

Si noti la differenza di output tra le due opzioni diverse di [/Qpar-report (livello di segnalazione parallelizzazione automatica)](../build/reference/qpar-report-auto-parallelizer-reporting-level.md) . `/Qpar-report:1` restituisce i messaggi di parallelizzazione solo per i cicli correttamente parallelizzati. `/Qpar-report:2` restituisce i messaggi di parallelizzazione sia per le parallelizzazioni dei cicli riuscite che per quelle non riuscite.

Per ulteriori informazioni sui codici motivo e sui messaggi, vedere [Vectorizer e parallelizzazione automatica messages](../error-messages/tool-errors/vectorizer-and-parallelizer-messages.md).

## <a name="auto-vectorizer"></a>Vettorizzazione automatica

La vettorizzazione automatica analizza i cicli nel codice e usa i registri e le istruzioni del vettore nel computer di destinazione per eseguirli, se possibile. Questa funzione può migliorare le prestazioni del codice. Il compilatore è destinato alle istruzioni SSE2, AVX e AVX2 nei processori Intel o AMD o alle istruzioni NEON sui processori ARM, in base all'opzione [/Arch](../build/reference/arch-minimum-cpu-architecture.md) .

La vettorizzazione automatica può generare istruzioni diverse da quelle specificate dall'opzione `/arch`. Queste istruzioni sono protette da un controllo di runtime per verificare il corretto funzionamento del codice. Ad esempio, quando si compila `/arch:SSE2`, è possibile che vengano generate istruzioni SSE4.2. Un controllo di runtime verifica che SSE4.2 sia disponibile nel processore di destinazione e passa a una versione non SSE4.2 del ciclo se il processore non supporta tali istruzioni.

Per impostazione predefinita, la vettorizzazione automatica è abilitata. Se si vuole confrontare le prestazioni del codice sotto la vettorizzazione, è possibile usare [#pragma loop (no_vector)](../preprocessor/loop.md) per disabilitare la vettorizzazione di un ciclo specificato.

```cpp
#pragma loop(no_vector)
for (int i = 0; i < 1000; ++i)
   A[i] = B[i] + C[i];
```

Come per tutte le [direttive pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md), `__pragma(loop(no_vector))` è supportata anche la sintassi del pragma alternativa.

Come per la parallelizzazione automatica automatica, è possibile specificare l'opzione della riga di comando [/Qvec-report (Auto-Vectorizer Reporting Level)](../build/reference/qvec-report-auto-vectorizer-reporting-level.md) per segnalare solo i cicli con vettorizzazione corretta, ovvero i `/Qvec-report:1` cicli con Vectoring con esito positivo o negativo `/Qvec-report:2` .

Per ulteriori informazioni sui codici motivo e sui messaggi, vedere [Vectorizer e parallelizzazione automatica messages](../error-messages/tool-errors/vectorizer-and-parallelizer-messages.md).

Per un esempio che illustra il funzionamento di Vectorizer, vedere [Project Austin Part 2 of 6: page curling](https://devblogs.microsoft.com/cppblog/project-austin-part-2-of-6-page-curling/)

## <a name="see-also"></a>Vedi anche

[loop](../preprocessor/loop.md)<br/>
[Programmazione parallela in codice nativo](/archive/blogs/nativeconcurrency)<br/>
[/Qpar (parallelizzazione automatica automatico)](../build/reference/qpar-auto-parallelizer.md)<br/>
[/Qpar-report (livello di segnalazione parallelizzazione automatica automatica)](../build/reference/qpar-report-auto-parallelizer-reporting-level.md)<br/>
[/Qvec-report (livello di segnalazione Vectorizer automatica)](../build/reference/qvec-report-auto-vectorizer-reporting-level.md)<br/>
[Messaggi Vectorizer e parallelizzazione automatica](../error-messages/tool-errors/vectorizer-and-parallelizer-messages.md)
