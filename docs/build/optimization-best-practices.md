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

In questo documento vengono descritte alcune procedure consigliate per l'ottimizzazione dei programmi C++ in Visual Studio.

## <a name="compiler-and-linker-options"></a>Opzioni del compilatore e del linker

### <a name="profile-guided-optimization"></a>Ottimizzazione PGO

Visual Studio supporta l' *ottimizzazione* PGO (PGO). Questa ottimizzazione usa i dati di profilo dalle esecuzioni di training di una versione instrumentata di un'applicazione per guidare in seguito l'ottimizzazione dell'applicazione. L'uso di PGO può richiedere molto tempo, quindi potrebbe non essere un elemento usato da tutti gli sviluppatori, ma è consigliabile usare PGO per la build finale di un prodotto. Per altre informazioni, vedere [Ottimizzazioni PGO](profile-guided-optimizations.md).

Inoltre, l' *ottimizzazione dell'intero programma* (anche noto come generazione del codice in fase di collegamento) e le ottimizzazioni **/O1** e **/O2** sono state migliorate. In generale, un'applicazione compilata con una di queste opzioni sarà più veloce rispetto alla stessa applicazione compilata con un compilatore precedente.

Per altre informazioni, vedere [/GL (Ottimizzazione intero programma)](reference/gl-whole-program-optimization.md) e [/O1,/O2 (ridurre le dimensioni, ottimizzare la velocità)](reference/o1-o2-minimize-size-maximize-speed.md).

### <a name="which-level-of-optimization-to-use"></a>Livello di ottimizzazione da usare

Se possibile, le compilazioni di versione finale devono essere compilate con ottimizzazioni PGO. Se non è possibile eseguire la compilazione con PGO, a causa dell'infrastruttura insufficiente per eseguire le compilazioni instrumentate o non avere accesso agli scenari, è consigliabile creare con l'ottimizzazione dell'intero programma.

Anche l'opzione **/Gy** è molto utile. Genera un COMDAT separato per ogni funzione, assicurando al linker maggiore flessibilità quando si tratta di rimuovere la riduzione COMDAT e COMDAT senza riferimenti. L'unico svantaggio dell'uso di **/Gy** è che può causare problemi durante il debug. Pertanto, è in genere consigliabile utilizzarlo. Per altre informazioni, vedere [/Gy (Attiva collegamento a livello di funzione)](reference/gy-enable-function-level-linking.md).

Per il collegamento negli ambienti a 64 bit, è consigliabile usare l'opzione del linker **/opt: Ref, ICF** e negli ambienti a 32 bit, **/opt: Ref** è consigliato. Per ulteriori informazioni, vedere [/opt (ottimizzazioni)](reference/opt-optimizations.md).

Si consiglia inoltre di generare i simboli di debug, anche con le build di versione ottimizzata. Non influisce sul codice generato e rende molto più semplice eseguire il debug dell'applicazione, se necessario.

### <a name="floating-point-switches"></a>Commutatori a virgola mobile

L'opzione del compilatore **/op** è stata rimossa e sono state aggiunte le seguenti quattro opzioni del compilatore che gestiscono le ottimizzazioni a virgola mobile:

|||
|-|-|
|**/FP: precisa**|Si tratta dell'indicazione predefinita e deve essere usata nella maggior parte dei casi.|
|**/FP: Fast**|Consigliato se le prestazioni sono di importanza fondamentale, ad esempio nei giochi. Questo comporterà le prestazioni più veloci.|
|**/FP: Strict**|Consigliato se si desiderano eccezioni a virgola mobile precise e il comportamento IEEE. Questo comporterà prestazioni più lente.|
|**/FP: except [-]**|Può essere utilizzato in combinazione con **/FP: Strict** o **/FP: precise**, ma non con **/FP: Fast**.|

Per altre informazioni, vedere [/fp (Specifica il comportamento della virgola mobile)](reference/fp-specify-floating-point-behavior.md).

## <a name="optimization-declspecs"></a>Ottimizzazione declspec

In questa sezione verranno esaminati due declspec che possono essere usati nei programmi per migliorare le prestazioni: `__declspec(restrict)` e `__declspec(noalias)`.

`restrict` Declspec può essere applicato solo a dichiarazioni di funzione che restituiscono un puntatore, ad esempio`__declspec(restrict) void *malloc(size_t size);`

Declspec `restrict` viene usato per le funzioni che restituiscono puntatori non con alias. Questa parola chiave viene usata per l'implementazione della libreria di runtime `malloc` C di poiché non restituirà mai un valore del puntatore già in uso nel programma corrente (a meno che non si stia eseguendo un'operazione non valida, ad esempio usando la memoria dopo che è stata liberata).

`restrict` Declspec fornisce al compilatore ulteriori informazioni per l'esecuzione delle ottimizzazioni del compilatore. Una delle cose più difficili per un compilatore è determinare quali puntatori hanno un alias di altri puntatori e l'uso di queste informazioni è molto utile per il compilatore.

Vale la pena notare che si tratta di una promessa al compilatore, non di un elemento che verrà verificato dal compilatore. Se il programma usa questo `restrict` declspec in modo non appropriato, il programma potrebbe avere un comportamento non corretto.

Per ulteriori informazioni, vedere [Restrict](../cpp/restrict.md).

`noalias` Declspec viene applicato anche solo alle funzioni e indica che la funzione è una funzione semi-pura. Una funzione semi-pura è una funzione che fa riferimento o modifica solo variabili locali, argomenti e riferimenti indiretti di primo livello di argomenti. Questo declspec è una promessa al compilatore e se la funzione fa riferimento a Globals o a riferimenti indiretti di secondo livello degli argomenti del puntatore, il compilatore può generare codice che interrompe l'applicazione.

Per altre informazioni, vedere [noalias](../cpp/noalias.md).

## <a name="optimization-pragmas"></a>Pragma di ottimizzazione

Sono inoltre disponibili diversi pragma utili per l'ottimizzazione del codice. Il primo trattato è `#pragma optimize`:

```cpp
#pragma optimize("{opt-list}", on | off)
```

Questo pragma consente di impostare un livello di ottimizzazione specificato in base alla funzione. Questa soluzione è ideale per le rare occasioni in cui l'applicazione si arresta in modo anomalo quando una determinata funzione viene compilata con l'ottimizzazione. È possibile usare questa opzione per disabilitare le ottimizzazioni per una singola funzione:

```cpp
#pragma optimize("", off)
int myFunc() {...}
#pragma optimize("", on)
```

Per ulteriori informazioni, vedere [optimize](../preprocessor/optimize.md).

L'incorporamento è una delle ottimizzazioni più importanti eseguite dal compilatore e in questo caso si parla di un paio di pragma che consentono di modificare questo comportamento.

`#pragma inline_recursion`è utile per specificare se si desidera che l'applicazione sia in grado di incorporare una chiamata ricorsiva. Per impostazione predefinita è disattivato. Per la ricorsione superficiale di funzioni di piccole dimensioni è possibile attivare questa funzionalità. Per ulteriori informazioni, vedere [inline_recursion](../preprocessor/inline-recursion.md).

Un altro pragma utile per limitare la profondità dell'incorporamento è `#pragma inline_depth`. Questa operazione è in genere utile nelle situazioni in cui si sta tentando di limitare le dimensioni di un programma o di una funzione. Per ulteriori informazioni, vedere [inline_depth](../preprocessor/inline-depth.md).

## <a name="__restrict-and-__assume"></a>__restrict e \__assume

In Visual Studio sono disponibili un paio di parole chiave che consentono di migliorare le prestazioni: [__restrict](../cpp/extension-restrict.md) e [__assume](../intrinsics/assume.md).

Prima di tutto, è opportuno notare `__restrict` che `__declspec(restrict)` e sono due elementi diversi. Sebbene siano in qualche modo correlati, la loro semantica è diversa. `__restrict`è un qualificatore di tipo `const` , `volatile`ad esempio o, ma esclusivamente per i tipi di puntatore.

Un puntatore modificato con `__restrict` viene definito *puntatore __restrict*. Un puntatore __restrict è un puntatore a cui è possibile accedere solo tramite \_il puntatore _restrict. In altre parole, non è possibile usare un altro puntatore per accedere ai dati a cui \_punta il puntatore _restrict.

`__restrict`può essere uno strumento potente per l'utilità di ottimizzazione di Microsoft C++, ma con particolare attenzione. Se utilizzata in modo non corretto, l'utilità di ottimizzazione potrebbe eseguire un'ottimizzazione che interrompe l'applicazione.

La `__restrict` parola chiave sostituisce l'opzione **/oa** delle versioni precedenti.

Con `__assume`, uno sviluppatore può indicare al compilatore di creare presupposti sul valore di una variabile.

Ad esempio `__assume(a < 5);` , indica all'utilità di ottimizzazione che alla riga di codice la `a` variabile è minore di 5. Anche in questo caso si tratta di una promessa al compilatore. Se `a` è in realtà 6 a questo punto del programma, il comportamento del programma dopo l'ottimizzazione del compilatore potrebbe non essere quello previsto. `__assume`è particolarmente utile prima di cambiare le istruzioni e/o le espressioni condizionali.

Esistono alcune limitazioni a `__assume`. Per prima cosa `__restrict`, ad esempio, si tratta solo di un suggerimento, quindi il compilatore è libero di ignorarlo. Inoltre, `__assume` attualmente funziona solo con le disuguaglianze variabili rispetto alle costanti. Non propaga le disuguaglianze simboliche, ad esempio, si supponga (a < b).

## <a name="intrinsic-support"></a>Supporto intrinseco

Gli intrinseci sono chiamate di funzione in cui il compilatore dispone di informazioni intrinseche sulla chiamata e, anziché chiamare una funzione in una libreria, emette codice per la funzione. Il file \<di intestazione intrin. h> contiene tutti gli intrinseci disponibili per ciascuna delle piattaforme hardware supportate.

Gli intrinseci forniscono al programmatore la possibilità di approfondire il codice senza dover utilizzare l'assembly. L'uso di funzioni intrinseche presenta diversi vantaggi:

- Il codice è più portatile. Alcune funzioni intrinseche sono disponibili in più architetture della CPU.

- Il codice è più facile da leggere, perché il codice è ancora scritto in C/C++.

- Il codice ottiene il vantaggio delle ottimizzazioni del compilatore. Con il miglioramento del compilatore, la generazione del codice per le funzioni intrinseche migliora.

Per altre informazioni, vedere [funzioni intrinseche del compilatore](../intrinsics/compiler-intrinsics.md).

## <a name="exceptions"></a>Eccezioni

Si è verificato un impatto sulle prestazioni associato all'utilizzo delle eccezioni. Alcune restrizioni vengono introdotte quando si usano blocchi try che impediscono al compilatore di eseguire determinate ottimizzazioni. Sulle piattaforme x86 si verifica un calo delle prestazioni aggiuntivo da blocchi try a causa di informazioni aggiuntive sullo stato che devono essere generate durante l'esecuzione del codice. Nelle piattaforme a 64 bit i blocchi try non peggiorano notevolmente le prestazioni, ma una volta generata un'eccezione, il processo di individuazione del gestore e della rimozione dello stack può essere costoso.

È pertanto consigliabile evitare di introdurre blocchi try/catch nel codice che non lo richiede realmente. Se è necessario utilizzare le eccezioni, se possibile, utilizzare le eccezioni sincrone. Per altre informazioni, vedere [Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md).

Infine, generare eccezioni solo per casi eccezionali. L'uso di eccezioni per il flusso di controllo generale può comportare una riduzione delle prestazioni.

## <a name="see-also"></a>Vedere anche

- [Ottimizzazione del codice](optimizing-your-code.md)
