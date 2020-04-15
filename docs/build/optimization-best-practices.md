---
title: Procedure consigliate di ottimizzazione
ms.date: 05/06/2019
helpviewer_keywords:
- C++, optimization
- optimization, best practices
ms.assetid: f3433148-7255-4ca6-8a4f-7c31aac88508
ms.openlocfilehash: 541114b4cbf7d3d063e48b50ab265b4c95c6237c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81328445"
---
# <a name="optimization-best-practices"></a>Procedure consigliate di ottimizzazione

In questo documento vengono descritte alcune procedure consigliate per l'ottimizzazione dei programmi in Visual Studio.

## <a name="compiler-and-linker-options"></a>Opzioni del compilatore e del linker

### <a name="profile-guided-optimization"></a>Ottimizzazione pGO

Visual Studio supporta *l'ottimizzazione PGO (Profile-Guided Optimization).* Questa ottimizzazione utilizza i dati di profilo dal training delle esecuzioni di una versione instrumentata di un'applicazione per guidare l'ottimizzazione successiva dell'applicazione. L'utilizzo di PGO può richiedere molto tempo, quindi potrebbe non essere qualcosa che ogni sviluppatore utilizza, ma ti consigliamo di utilizzare PGO per la build finale di un prodotto. Per altre informazioni, vedere [Ottimizzazioni PGO](profile-guided-optimizations.md).

Inoltre, *l'ottimizzazione dell'intero programma* (nota anche come generazione di codice di tempo di collegamento) e le ottimizzazioni **/O1** e **/O2** sono state migliorate. In generale, un'applicazione compilata con una di queste opzioni sarà più veloce della stessa applicazione compilata con un compilatore precedente.

Per ulteriori informazioni, vedere [/GL (Ottimizzazione intero programma)](reference/gl-whole-program-optimization.md) e [/O1, /O2 (Riduci dimensioni, Massimizza velocità)](reference/o1-o2-minimize-size-maximize-speed.md).

### <a name="which-level-of-optimization-to-use"></a>Quale livello di ottimizzazione utilizzare

Se possibile, le build di rilascio finali devono essere compilate con ottimizzazioni PGO. Se non è possibile compilare con PGO, sia a causa di un'infrastruttura insufficiente per l'esecuzione delle compilazioni instrumentate o non avere accesso a scenari, è consigliabile compilare con ottimizzazione dell'intero programma.

Anche l'opzione **/Gy** è molto utile. Genera un COMDAT separato per ogni funzione, dando al linker maggiore flessibilità quando si tratta di rimuovere COMDAT senza riferimenti e la riduzione COMDAT. L'unico inconveniente di utilizzare **/Gy** è che può causare problemi durante il debug. Pertanto, si consiglia generalmente di utilizzarlo. Per altre informazioni, vedere [/Gy (Attiva collegamento a livello di funzione)](reference/gy-enable-function-level-linking.md).

Per il collegamento in ambienti a 64 bit, si consiglia di utilizzare l'opzione del linker **/OPT:REF,ICF** e in ambienti a 32 bit è consigliabile **/OPT:REF.** Per ulteriori informazioni, vedere [/OPT (Ottimizzazioni)](reference/opt-optimizations.md).

È inoltre consigliabile generare simboli di debug, anche con build di rilascio ottimizzate. Non influisce sul codice generato e rende molto più semplice eseguire il debug dell'applicazione, se necessario.

### <a name="floating-point-switches"></a>Interruttori a virgola mobile

L'opzione del compilatore **/Op** è stata rimossa e sono state aggiunte le quattro opzioni del compilatore seguenti che gestiscono le ottimizzazioni a virgola mobile:

|||
|-|-|
|**/fp:preciso**|Questa è la raccomandazione predefinita e deve essere utilizzata nella maggior parte dei casi.|
|**/fp:veloce**|Consigliato se le prestazioni sono della massima importanza, ad esempio nei giochi. Questo si tradurrà nelle prestazioni più veloci.|
|**/fp:strict**|Consigliato se si desidera un'eccezione a virgola mobile e un comportamento IEEE. Ciò comporterà le prestazioni più lente.|
|**/fp:except[-]**|Può essere utilizzato insieme **a /fp:strict** o **/fp:precise**, ma non **a /fp:fast**.|

Per altre informazioni, vedere [/fp (Specifica il comportamento della virgola mobile)](reference/fp-specify-floating-point-behavior.md).

## <a name="optimization-declspecs"></a>Declspec di ottimizzazione

In questa sezione esamineremo due declspec che possono essere utilizzati nei programmi per aiutare le prestazioni: `__declspec(restrict)` e `__declspec(noalias)`.

Il `restrict` declspec può essere applicato solo alle dichiarazioni di funzione che restituiscono un puntatore, ad esempio`__declspec(restrict) void *malloc(size_t size);`

Il `restrict` declspec viene utilizzato nelle funzioni che restituiscono puntatori senza alias. Questa parola chiave viene utilizzata per `malloc` l'implementazione della libreria di runtime C di poiché non restituirà mai un valore di puntatore già in uso nel programma corrente (a meno che non si stia eseguendo un'operazione non valida, ad esempio l'utilizzo della memoria dopo che è stata liberata).

Il `restrict` declspec fornisce al compilatore ulteriori informazioni per l'esecuzione di ottimizzazioni del compilatore. Una delle cose più difficili da determinare per un compilatore è quali puntatori indicano altri puntatori e l'utilizzo di queste informazioni consente notevolmente al compilatore.

Vale la pena sottolineare che questa è una promessa per il compilatore, non qualcosa che il compilatore verificherà. Se il programma `restrict` utilizza questa declspec in modo inappropriato, il programma potrebbe avere un comportamento non corretto.

Per ulteriori informazioni, vedere [restrict](../cpp/restrict.md).

La `noalias` declspec viene applicata anche solo alle funzioni e indica che la funzione è una funzione semi-pura. Una funzione semi-pura è una funzione che fa riferimento o modifica solo variabili locali, argomenti e riferimenti indiretti di primo livello di argomenti. Questa declspec è una promessa per il compilatore e se la funzione fa riferimento a global o riferimenti indiretti di secondo livello degli argomenti del puntatore, il compilatore può generare codice che interrompe l'applicazione.

Per altre informazioni, vedere [noalias](../cpp/noalias.md).

## <a name="optimization-pragmas"></a>Pragma di ottimizzazione

Sono inoltre disponibili diversi pragma utili per ottimizzare il codice. Il primo di cui `#pragma optimize`parleremo è:

```cpp
#pragma optimize("{opt-list}", on | off)
```

Questo pragma consente di impostare un determinato livello di ottimizzazione in base alla funzione. Questo è l'ideale per quei rari casi in cui l'applicazione si blocca quando una determinata funzione viene compilata con ottimizzazione. È possibile utilizzare questa opzione per disattivare le ottimizzazioni per una singola funzione:You can use this to turn off optimizations for a single function:

```cpp
#pragma optimize("", off)
int myFunc() {...}
#pragma optimize("", on)
```

Per ulteriori informazioni, vedere [ottimizzare](../preprocessor/optimize.md).

L'inlining è una delle ottimizzazioni più importanti che il compilatore esegue e qui parliamo di un paio di pragma che aiutano a modificare questo comportamento.

`#pragma inline_recursion`è utile per specificare se si desidera che l'applicazione sia in grado di inline una chiamata ricorsiva. Per impostazione predefinita è disattivato. Per la ricorsione superficiale di piccole funzioni è possibile attivare questa opzione. Per ulteriori informazioni, vedere [inline_recursion](../preprocessor/inline-recursion.md).

Un altro pragma utile per limitare la profondità di inline è `#pragma inline_depth`. Ciò è in genere utile nelle situazioni in cui si sta tentando di limitare le dimensioni di un programma o di una funzione. Per ulteriori informazioni, vedere [inline_depth](../preprocessor/inline-depth.md).

## <a name="__restrict-and-__assume"></a>__restrict \_e _assume

In Visual Studio sono disponibili un paio di parole chiave che consentono di migliorare le prestazioni: [__restrict](../cpp/extension-restrict.md) e [__assume](../intrinsics/assume.md).

In primo luogo, `__restrict` va `__declspec(restrict)` notato che e sono due cose diverse. Anche se sono in qualche modo correlati, la loro semantica è diversa. `__restrict`è un qualificatore `const` `volatile`di tipo, like o , ma esclusivamente per i tipi puntatore.

Un puntatore modificato `__restrict` con viene definito *puntatore __restrict*. Un puntatore __restrict è un puntatore \_a cui è possibile accedere solo tramite il puntatore _restrict. In altre parole, non è possibile utilizzare un \_altro puntatore per accedere ai dati a cui punta il puntatore _restrict.

`__restrict`può essere uno strumento potente per l'ottimizzatore di Microsoft C, ma usarlo con grande attenzione. Se utilizzato in modo improprio, l'ottimizzatore potrebbe eseguire un'ottimizzazione che interromperebbe l'applicazione.

La `__restrict` parola chiave sostituisce l'opzione **/Oa** rispetto alle versioni precedenti.

Con `__assume`, uno sviluppatore può indicare al compilatore di fare ipotesi sul valore di una variabile.

Ad `__assume(a < 5);` esempio indica all'ottimizzatore che `a` in quella riga di codice la variabile è minore di 5. Anche in questo caso questa è una promessa per il compilatore. Se `a` è in realtà 6 a questo punto del programma, allora il comportamento del programma dopo che il compilatore ha ottimizzato potrebbe non essere quello che ci si aspetterebbe. `__assume`è più utile prima di istruzioni switch e/o espressioni condizionali.

Ci sono alcune `__assume`limitazioni a . In primo `__restrict`luogo, come , è solo un suggerimento, quindi il compilatore è libero di ignorarlo. Inoltre, `__assume` attualmente funziona solo con disuguaglianze variabili rispetto alle costanti. Non propaga disuguaglianze simboliche, ad esempio, assume (un < b).

## <a name="intrinsic-support"></a>Supporto intrinseco

Gli intrinseci sono chiamate di funzione in cui il compilatore ha conoscenze intrinseche sulla chiamata e, anziché chiamare una funzione in una libreria, genera codice per tale funzione. Il file \<di intestazione intrin.h> contiene tutte le funzioni intrinseche disponibili per ognuna delle piattaforme hardware supportate.

Gli intrinseci offrono al programmatore la possibilità di approfondire il codice senza dover utilizzare l'assembly. L'utilizzo di funzioni intrinseche offre diversi vantaggi:There are several benefits to using intrinsics:

- Il codice è più portabile. Molte delle funzioni intrinseche sono disponibili in più architetture CPU.

- Il codice è più facile da leggere, dal momento che il codice è ancora scritto in C/C .

- Il codice ottiene il vantaggio delle ottimizzazioni del compilatore. Man mano che il compilatore migliora, la generazione di codice per gli intrinseci migliora.

Per ulteriori informazioni, vedere [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md).

## <a name="exceptions"></a>Eccezioni

Si è verificato un problema di prestazioni associato all'utilizzo delle eccezioni. Alcune restrizioni vengono introdotte quando si utilizzano blocchi try che impediscono al compilatore di eseguire determinate ottimizzazioni. Nelle piattaforme x86 si prevede una riduzione delle prestazioni aggiuntiva dai blocchi try a causa di informazioni aggiuntive sullo stato che devono essere generate durante l'esecuzione del codice. Nelle piattaforme a 64 bit, i blocchi try non riducono le prestazioni, ma una volta generata un'eccezione, il processo di individuazione del gestore e rimozione dello stack può essere costoso.

Pertanto, si consiglia di evitare di introdurre blocchi try/catch nel codice che non ne ha realmente bisogno. Se è necessario utilizzare eccezioni, utilizzare eccezioni sincrone, se possibile. Per altre informazioni, vedere [Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md).

Infine, generare eccezioni solo per casi eccezionali. L'utilizzo di eccezioni per il flusso di controllo generale probabilmente farà ne risentirà le prestazioni.

## <a name="see-also"></a>Vedere anche

- [Ottimizzazione del codice](optimizing-your-code.md)
