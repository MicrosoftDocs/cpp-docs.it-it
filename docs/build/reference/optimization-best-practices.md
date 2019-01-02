---
title: Le procedure consigliate di ottimizzazione
ms.date: 11/04/2016
helpviewer_keywords:
- Visual C++, optimization
- optimization, best practices
ms.assetid: f3433148-7255-4ca6-8a4f-7c31aac88508
ms.openlocfilehash: da493ceb1a0b751e302d296a9840b668e446ff62
ms.sourcegitcommit: fe1e21df175cd004d21c6e4659082efceb649a8b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/02/2019
ms.locfileid: "53978335"
---
# <a name="optimization-best-practices"></a>Le procedure consigliate di ottimizzazione

Questo documento descrive alcune procedure consigliate per l'ottimizzazione in Visual C++.

## <a name="compiler-and-linker-options"></a>Opzioni del compilatore e Linker

### <a name="profile-guided-optimization"></a>Ottimizzazione PGO

Visual C++ supporta *ottimizzazione PGO* (PGO). Questa ottimizzazione Usa i dati del profilo da esecuzioni di training di una versione di un'applicazione instrumentata per promuovere l'ottimizzazione successive dell'applicazione. Usa PGO può richiedere tempi lunghe, quindi potrebbe non essere qualcosa che ogni sviluppatore Usa, ma è consigliabile usare ottimizzazione PGO per la compilazione di rilascio finale di un prodotto. Per altre informazioni, vedere [le ottimizzazioni PGO](../../build/reference/profile-guided-optimizations.md).

Inoltre *Whole Program Optimization* (nota anche come la generazione di codice in fase di collegamento) e il **/O1** e **/O2** le ottimizzazioni sono state migliorate. In generale, un'applicazione compilata con una di queste opzioni sarà più veloce rispetto all'applicazione stesso compilata con un compilatore precedente.

Per altre informazioni, vedere [/GL (Ottimizzazione intero programma)](../../build/reference/gl-whole-program-optimization.md) e [/O1, / O2 (riduce dimensione, Ottimizza velocità)](../../build/reference/o1-o2-minimize-size-maximize-speed.md).

### <a name="which-level-of-optimization-to-use"></a>Livello di ottimizzazione da utilizzare

Se possibile, le compilazioni di rilascio finale devono essere compilate con le ottimizzazioni PGO. Se non è possibile compilare con l'ottimizzazione PGO, a causa di un'infrastruttura insufficiente per le compilazioni instrumentate in esecuzione o non ha accesso a scenari, è consigliabile creare con Ottimizzazione intero programma.

Il **/Gy** commutatore è anche molto utile. Genera un COMDAT separato per ogni funzione, consentendo una maggiore flessibilità al linker se si desidera rimuovere COMDAT e COMDAT senza riferimenti riduzione. L'unico svantaggio derivante dall'utilizzo **/Gy** è che può causare problemi durante il debug. Pertanto, in genere è consigliabile usarlo. Per altre informazioni, vedere [/Gy (Attiva collegamento a livello di funzione)](../../build/reference/gy-enable-function-level-linking.md).

Per il collegamento in ambienti a 64 bit, è consigliabile usare il **ICF, /OPT: ref** l'opzione del linker e in ambienti a 32 **/OPT: ref** è consigliato. Per altre informazioni, vedere [/OPT (ottimizzazioni)](../../build/reference/opt-optimizations.md).

È anche consigliabile generare i simboli di debug, anche con le build di versione ottimizzata. Non si applica il codice generato e lo rende molto più semplice eseguire il debug dell'applicazione, se necessario.

### <a name="floating-point-switches"></a>Commutatori a virgola mobile

Il **/op.** rimossa l'opzione del compilatore e le opzioni del compilatore quattro seguenti trattano di ottimizzazioni in virgola mobile sono stati aggiunti:

|||
|-|-|
|**/fp: precise**|Questo è l'impostazione consigliata predefinita e deve essere usato nella maggior parte dei casi.|
|**/fp: fast**|Consigliato se le prestazioni sono di fondamentale importanza, ad esempio nei giochi. Ciò comporterà prestazioni ottimali.|
|**/fp: strict**|Consigliato se le eccezioni a virgola mobile e precisare e IEEE comportamento desiderato. Ciò comporterà le prestazioni più lente.|
|**/fp: except [-]**|Può essere usato in combinazione con **/fp: strict** oppure **/fp: precise**, ma non **/fp: fast**.|

Per altre informazioni, vedere [/fp (Specifica il comportamento della virgola mobile)](../../build/reference/fp-specify-floating-point-behavior.md).

## <a name="optimization-declspecs"></a>Ottimizzazione declspec

In questa sezione si esaminerà due declspec utilizzabile in programmi per le prestazioni: `__declspec(restrict)` e `__declspec(noalias)`.

Il `restrict` declspec può essere applicata solo alle dichiarazioni di funzione che restituiscono un puntatore, ad esempio `__declspec(restrict) void *malloc(size_t size);`

Il `restrict` declspec viene utilizzata nelle funzioni che restituiscono puntatori privi di alias. Questa parola chiave viene usata per l'implementazione della libreria di Runtime C di `malloc` poiché non restituirà mai un valore del puntatore che è già in uso nel programma corrente (a meno che non si esegue un'operazione non valida, ad esempio l'uso della memoria dopo che è stata liberata).

Il `restrict` declspec fornisce al compilatore ulteriori informazioni per l'esecuzione delle ottimizzazioni del compilatore. Uno degli aspetti più difficile per un compilatore di determinare è quali alias puntatori altri puntatori e notevolmente l'utilizzo di queste informazioni consente al compilatore.

Vale la pena sottolineare che si tratta di un suggerimento al compilatore, non qualcosa che il compilatore verifica. Se il programma Usa questo `restrict` declspec in modo improprio, il programma potrebbe provocare un comportamento errato.

Per altre informazioni, vedere [limitare](../../cpp/restrict.md).

Il `noalias` declspec viene applicata solo alle funzioni e indica che la funzione è una funzione semi pura. Una funzione semi-pura è quello che fa riferimento o modifica solo variabili locali, argomenti e riferimenti indiretti di primo livello di argomenti. Questo declspec è un suggerimento al compilatore e se la funzione fa riferimento a variabili globali o riferimenti indiretti di secondo livello di argomenti di puntatore, il compilatore possono generare codice che interrompe l'applicazione.

Per altre informazioni, vedere [noalias](../../cpp/noalias.md).

## <a name="optimization-pragmas"></a>Ottimizzazione pragma

Esistono anche diverse direttive pragma utili per contribuire a ottimizzare il codice. Il primo si parlerà è `#pragma optimize`:

```cpp
#pragma optimize("{opt-list}", on | off)
```

Questo pragma consente di impostare un livello di ottimizzazione specificata in base a una funzione per funzione. Questa soluzione è ideale per i rari casi in cui l'applicazione si blocca quando una funzione specificata viene compilata con l'ottimizzazione. Ciò consente di disattivare le ottimizzazioni per una singola funzione:

```cpp
#pragma optimize("", off)
int myFunc() {...}
#pragma optimize("", on)
```

Per altre informazioni, vedere [ottimizzare](../../preprocessor/optimize.md).

L'inlining è uno dei più importanti ottimizzazioni che il compilatore esegue e in questo caso si parla di un paio di pragma che consentono di modificare questo comportamento.

`#pragma inline_recursion` è utile per specificare se si desidera che l'applicazione sia in grado di rendere inline una chiamata ricorsiva. Per impostazione predefinita che è off. Provést kontrolu rekurze superficiale delle piccole funzioni sia in grado di attivare questa funzionalità. Per altre informazioni, vedere [inline_recursion](../../preprocessor/inline-recursion.md).

Un'altra utile pragma per limitare il livello di incorporamento è `#pragma inline_depth`. Si tratta in genere utile nelle situazioni in cui si sta per limitare le dimensioni di una funzione o un programma. Per altre informazioni, vedere [inline_depth](../../preprocessor/inline-depth.md).

## <a name="restrict-and-assume"></a>Restrict e \__assume

Esistono un paio di parole chiave in Visual C++ che possono migliorare le prestazioni: [Restrict](../../cpp/extension-restrict.md) e [assume](../../intrinsics/assume.md).

In primo luogo, si noti che `__restrict` e `__declspec(restrict)` sono due cose diverse. Mentre sono in qualche modo correlati, presentano una semantica è diversa. `__restrict` è un qualificatore di tipo, quali `const` o `volatile`, ma esclusivamente per i tipi di puntatore.

Un puntatore che viene modificato con `__restrict` viene definito un *Restrict puntatore*. Ovvero un puntatore è un puntatore che sono accessibili solo tramite il \__restrict puntatore. In altre parole, un altro puntatore non può essere utilizzato per accedere ai dati a cui punta il \__restrict puntatore.

`__restrict` può essere uno strumento potente per l'ottimizzatore di Visual C++, ma usare questa funzionalità con molta attenzione. Se usato in modo non corretto, query optimizer potrebbe eseguire un'ottimizzazione che causa l'interruzione dell'applicazione.

Il `__restrict` parola chiave sostituisce il **/Oa** passare dalle versioni precedenti.

Con `__assume`, uno sviluppatore può indicare al compilatore di fare ipotesi sul valore di una variabile.

Ad esempio `__assume(a < 5);` indica che query optimizer alla riga di codice la variabile `a` è inferiore a 5. Anche in questo caso si tratta di un suggerimento al compilatore. Se `a` è effettivamente 6 a questo punto del programma, il comportamento del programma dopo che è ottimizzato il compilatore potrebbe non essere quello previsto. `__assume` è particolarmente utile prima le istruzioni switch e/o le espressioni condizionali.

Esistono alcune limitazioni `__assume`. In primo luogo, ad esempio `__restrict`, è solo un suggerimento, in modo che il compilatore è libero per ignorare la richiesta. Inoltre, `__assume` attualmente funziona solo con le disuguaglianze rispetto alle costanti. Non propaga le disuguaglianze simboliche, ad esempio assume(a < b).

## <a name="intrinsic-support"></a>Supporto intrinseco

Funzioni intrinseche sono funzioni chiamate in cui il compilatore ha una conoscenza intrinseca della chiamata e invece di chiamare una funzione in una libreria, emette il codice per tale funzione. Il file di intestazione \<intrin. h > contiene tutte le funzioni intrinseche disponibili per ognuna delle piattaforme hardware supportate.

Funzioni intrinseche consentono al programmatore la possibilità di approfondimenti di codice senza dover usare assembly. Sono disponibili funzioni intrinseche con i seguenti vantaggi:

- Il codice sia portabile. Molte delle funzioni intrinseche sono disponibili su diverse architetture della CPU.

- Il codice è più facile da leggere, poiché il codice è ancora scritto in C/C++.

- Il codice ottiene il vantaggio di ottimizzazioni del compilatore. Poiché il compilatore Ottiene una migliore, migliora la generazione di codice per le funzioni intrinseche.

Per altre informazioni, vedere [intrinseci del compilatore](../../intrinsics/compiler-intrinsics.md).

## <a name="exceptions"></a>Eccezioni

Delle prestazioni raggiunto associato all'uso delle eccezioni. Quando si usa blocchi try che impediscono al compilatore di eseguire determinate ottimizzazioni, vengono introdotte alcune restrizioni. X86 piattaforme è presente una riduzione delle prestazioni aggiuntivi da provare i blocchi a causa di informazioni aggiuntive sullo stato che devono essere generati durante l'esecuzione di codice. Sulle piattaforme a 64 bit, provare a blocchi non degradino le prestazioni, la maggior parte, ma una volta che viene generata un'eccezione, il processo di individuazione del gestore e rimozione dello stack può essere costosa.

Pertanto, è consigliabile evitare l'introduzione di blocchi try/catch nel codice che non lo è effettivamente necessario. Se è necessario utilizzare le eccezioni, se possibile utilizzare le eccezioni sincrone. Per altre informazioni, vedere [Structured Exception Handling (C/C++)](../../cpp/structured-exception-handling-c-cpp.md).

Infine, generare eccezioni solo in casi eccezionali. Utilizzare eccezioni per il flusso di controllo generale probabilmente renderà prestazioni risentirne.

## <a name="see-also"></a>Vedere anche

- [Ottimizzazione del codice](../../build/reference/optimizing-your-code.md)
