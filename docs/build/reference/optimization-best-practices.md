---
title: Suggerimenti per l'ottimizzazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- Visual C++, optimization
- optimization, best practices
ms.assetid: f3433148-7255-4ca6-8a4f-7c31aac88508
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 63d3437a08e3c8b69b564176e0f377566ab491e6
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "34704240"
---
# <a name="optimization-best-practices"></a>Suggerimenti per l'ottimizzazione

Questo documento descrive alcune procedure consigliate per l'ottimizzazione in Visual C++.

## <a name="compiler-and-linker-options"></a>Opzioni del compilatore e del Linker

### <a name="profile-guided-optimization"></a>Ottimizzazione PGO

Visual C++ supporta *ottimizzazione PGO* (PGO). Questa ottimizzazione utilizza i dati di profilo delle esecuzioni di formazione di una versione di un'applicazione instrumentata per condurre successiva ottimizzazione dell'applicazione. Usa PGO può richiedere tempi lunghe, pertanto potrebbe non essere un elemento che gli sviluppatori, ma è consigliabile utilizzare l'ottimizzazione PGO per la compilazione di rilascio finale di un prodotto. Per ulteriori informazioni, vedere [ottimizzazioni PGO](../../build/reference/profile-guided-optimizations.md).

Inoltre, *Ottimizzazione intero programma* (nota anche come generazione codice in fase di collegamento) e il **/O1** e **/O2** le ottimizzazioni sono state migliorate. In generale, sarà più veloce della stessa applicazione compilata con un compilatore precedente rispetto a un'applicazione compilata con una di queste opzioni. 

Per ulteriori informazioni, vedere [/GL (Ottimizzazione intero programma)](../../build/reference/gl-whole-program-optimization.md) e [/O1, /O2 (Riduci dimensione, Ottimizza velocità)](../../build/reference/o1-o2-minimize-size-maximize-speed.md).

### <a name="which-level-of-optimization-to-use"></a>Livello di ottimizzazione da utilizzare

Se possibile, le compilazioni di rilascio finale devono essere compilate con le ottimizzazioni PGO. Se non è possibile compilare con PGO, a causa di un'infrastruttura insufficiente per le build instrumentate è in esecuzione o non dispone di accesso per gli scenari, si consiglia la compilazione con Ottimizzazione intero programma.

Il **/Gy** anche l'opzione è molto utile. Genera un COMDAT separato per ogni funzione, consentendo una maggiore flessibilità al linker se si desidera rimuovere COMDAT e COMDAT senza riferimenti riduzione. Lo svantaggio solo all'uso **/Gy** è che può causare problemi durante il debug. Pertanto, è consigliabile utilizzarlo. Per altre informazioni, vedere [/Gy (Attiva collegamento a livello di funzione)](../../build/reference/gy-enable-function-level-linking.md).

Per il collegamento negli ambienti a 64 bit, è consigliabile utilizzare il **/OPT: REF, ICF** l'opzione del linker e in ambienti a 32 bit, **/OPT: ref** è consigliato. Per ulteriori informazioni, vedere [/OPT (ottimizzazioni)](../../build/reference/opt-optimizations.md).

È inoltre consigliabile per generare i simboli di debug, anche con le build di rilascio ottimizzate. Questa operazione non influisce il codice generato e rende molto più semplice eseguire il debug dell'applicazione, se necessario.

### <a name="floating-point-switches"></a>Commutatori a virgola mobile

Il **/Op** opzione del compilatore è stata rimossa e le opzioni del compilatore quattro seguenti gestiscono ottimizzazioni a virgola mobile sono stati aggiunti:

|||
|-|-|
|**/fp: precise**|Questo è l'opzione predefinita e deve essere utilizzato nella maggior parte dei casi.|
|**/fp: fast**|È consigliabile se le prestazioni sono di fondamentale importanza, ad esempio nei giochi. Ciò comporterà la velocità delle prestazioni.|
|**/fp: strict**|Consigliato se le eccezioni a virgola mobile a precisione e IEEE comportamento desiderato. Ciò comporterà la più lenta.|
|**/fp: except [-]**|Può essere utilizzato in combinazione con **/fp: strict** o **/fp: precise**, ma non **Fast**.|

Per altre informazioni, vedere [/fp (Specifica il comportamento della virgola mobile)](../../build/reference/fp-specify-floating-point-behavior.md).

## <a name="optimization-declspecs"></a>Declspec di ottimizzazione

In questa sezione verranno esaminati due declspec che possono essere utilizzati in programmi per le prestazioni: `__declspec(restrict)` e `__declspec(noalias)`.

Il `restrict` declspec può essere applicata solo alle dichiarazioni di funzione che restituiscono un puntatore, ad esempio `__declspec(restrict) void *malloc(size_t size);`

Il `restrict` declspec viene usata nelle funzioni che restituiscono puntatori privi di alias. Questa parola chiave viene utilizzata per l'implementazione della libreria di Runtime C di `malloc` poiché non restituirà mai un valore del puntatore che è già in uso nel programma corrente (a meno che non si esegue un'operazione non valida, ad esempio l'utilizzo di memoria dopo che è stato liberato).

Il `restrict` declspec fornisce al compilatore informazioni per l'esecuzione delle ottimizzazioni del compilatore. Uno degli aspetti più difficili da un compilatore per determinare quali alias puntatori altri puntatori, e utilizzando le informazioni di notevolmente aiuta il compilatore.

È importante precisare che si tratta di un suggerimento per il compilatore, non si verificherà il compilatore. Se il programma utilizza questo `restrict` declspec non corretta, il programma potrebbe provocare un comportamento errato.

Per ulteriori informazioni, vedere [limitare](../../cpp/restrict.md).

Il `noalias` declspec viene applicata solo alle funzioni e indica che la funzione è una funzione pura parzialmente. Una funzione semi-pura è quello che fa riferimento o modifica solo variabili locali, argomenti e ai riferimenti indiretti di primo livello degli argomenti. Questa declspec un suggerimento al compilatore e, se la funzione fa riferimento a variabili globali o riferimenti indiretti di secondo livello di argomenti del puntatore, il compilatore possono generare il codice che si interrompe l'applicazione.

Per altre informazioni, vedere [noalias](../../cpp/noalias.md).

## <a name="optimization-pragmas"></a>Ottimizzazione pragma

Sono inoltre disponibili diversi pragma utili per consentire l'ottimizzazione di codice. È il primo si parlerà `#pragma optimize`:

```cpp
#pragma optimize("{opt-list}", on | off)
```

Questo pragma consente di impostare un livello di ottimizzazione specificata in base a una funzione dalla funzione. Questa soluzione è ideale per i rari casi in cui l'applicazione si blocca quando una funzione specificata viene compilata con l'ottimizzazione. Ciò consente di disattivare le ottimizzazioni per una singola funzione:

```cpp
#pragma optimize("", off)
int myFunc() {...}
#pragma optimize("", on)
```

Per ulteriori informazioni, vedere [ottimizzare](../../preprocessor/optimize.md).

Inline è uno dei più importanti ottimizzazioni che il compilatore esegue e in questo caso si parla di un paio di pragma che consentono di modificare questo comportamento.

`#pragma inline_recursion` è utile per specificare se non si desidera che l'applicazione per essere in grado di rendere inline una chiamata ricorsiva. Per impostazione predefinita che è off. È possibile per attivare questa opzione per la ricorsione superficiale di piccole funzioni. Per ulteriori informazioni, vedere [inline_recursion](../../preprocessor/inline-recursion.md).

Un altro pragma utile per limitare il livello di incorporamento è `#pragma inline_depth`. Si tratta in genere utile nelle situazioni in cui si sta tentando di limitare le dimensioni di una funzione o un programma. Per ulteriori informazioni, vedere [inline_depth](../../preprocessor/inline-depth.md).

## <a name="restrict-and-assume"></a>Restrict e \__assume

Esistono un paio di parole chiave in Visual C++ che può migliorare le prestazioni: [Restrict](../../cpp/extension-restrict.md) e [assume](../../intrinsics/assume.md).

In primo luogo, si noti che `__restrict` e `__declspec(restrict)` sono diverse. Mentre sono in qualche modo correlati, la semantica è diversa. `__restrict` è un qualificatore di tipo, ad esempio `const` o `volatile`, ma esclusivamente per i tipi di puntatore.

Un puntatore che viene modificato con `__restrict` viene definito un *Restrict puntatore*. Ovvero un puntatore è un puntatore che sono accessibili solo tramite il \_limita l'indicatore di misura. In altre parole, un altro puntatore non può essere utilizzato per accedere ai dati a cui fa riferimento il \_limita l'indicatore di misura.

`__restrict` può essere un potente strumento per l'utilità di ottimizzazione di Visual C++, ma prestare molta attenzione. Se utilizzato in modo improprio, query optimizer potrebbe eseguire un'ottimizzazione che causa l'interruzione dell'applicazione.

Il `__restrict` (parola chiave) sostituisce il **/Oa** passare da versioni precedenti.

Con `__assume`, uno sviluppatore può indicare al compilatore di presupporre il valore di una variabile.

Ad esempio `__assume(a < 5);` indica che l'utilità di ottimizzazione in una determinata riga di codice la variabile `a` è minore di 5. Nuovamente, questa è una promessa al compilatore. Se `a` è effettivamente 6 a questo punto del programma, il comportamento del programma dopo che il compilatore è ottimizzato potrebbe non essere quello previsto. `__assume` è molto utile prima di istruzioni switch e/o le espressioni condizionali.

Esistono alcune limitazioni per `__assume`. In primo luogo, ad esempio `__restrict`, si tratta solo di un suggerimento, il compilatore è libero di ignorare. Inoltre, `__assume` attualmente funziona solo con le disuguaglianze rispetto alle costanti. Non propaga le disuguaglianze simboliche, ad esempio assume(a < b).

## <a name="intrinsic-support"></a>Supporto intrinseco

Funzioni intrinseche sono funzione chiama in cui il compilatore dispone di informazioni intrinseche sulla chiamata, e invece di chiamare una funzione in una raccolta, genera codice per tale funzione. Il file di intestazione \<intrin. h > contiene tutte le funzioni intrinseche disponibili per ognuna delle piattaforme hardware supportate.

Funzioni intrinseche consentono ai programmatori di approfondire i livelli nel codice senza dover usare assembly. Esistono diversi vantaggi offerti dall'utilizzo di funzioni intrinseche:

- Il codice sia portabile. Alcune delle funzioni intrinseche sono disponibili su diverse architetture della CPU.

- Il codice è più facile da leggere, poiché il codice è ancora stato scritto in C/C++.

- Il codice ottiene il vantaggio di ottimizzazioni del compilatore. Come il compilatore, viene migliorata consente di migliorare la generazione di codice per le funzioni intrinseche.

Per ulteriori informazioni, vedere [intrinseci del compilatore](../../intrinsics/compiler-intrinsics.md).

## <a name="exceptions"></a>Eccezioni

Sulle prestazioni hit associato all'utilizzo di eccezioni. Quando si utilizzano blocchi try che impediscono al compilatore di eseguire determinate ottimizzazioni introdotte alcune restrizioni. X86 piattaforme è presente un calo delle prestazioni da provare a blocchi a causa di informazioni aggiuntive sullo stato che devono essere generati durante l'esecuzione di codice. Sulle piattaforme a 64 bit, provare a blocchi non influire negativamente sulle prestazioni da parte, ma una volta che viene generata un'eccezione, il processo di individuazione del gestore e rimozione dello stack può essere dispendiosa.

Pertanto, è consigliabile evitare di introdurre i blocchi try/catch nel codice che non lo davvero necessario. Se è necessario utilizzare eccezioni, se possibile utilizzare le eccezioni sincrone. Per altre informazioni, vedere [Structured Exception Handling (C/C++)](../../cpp/structured-exception-handling-c-cpp.md).

Infine, generare eccezioni solo in casi eccezionali. Utilizzo di eccezioni per il flusso di controllo generale probabilmente renderà prestazioni risentirne.

## <a name="see-also"></a>Vedere anche

- [Ottimizzazione del codice](../../build/reference/optimizing-your-code.md)
