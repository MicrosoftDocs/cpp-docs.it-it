---
title: "Suggerimenti per l&#39;ottimizzazione | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Visual C++, ottimizzazione"
  - "ottimizzazione, procedure consigliate"
ms.assetid: f3433148-7255-4ca6-8a4f-7c31aac88508
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Suggerimenti per l&#39;ottimizzazione
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo documento vengono illustrate alcune procedure consigliate per l'ottimizzazione in Visual C\+\+.  Verranno descritti i seguenti argomenti:  
  
-   Opzioni del compilatore e del linker  
  
    -   Ottimizzazione PGO  
  
    -   Livello di ottimizzazione da utilizzare  
  
    -   Opzioni in virgola mobile  
  
-   Declspec di ottimizzazione  
  
-   Pragma di ottimizzazione  
  
-   \_\_restrict e \_\_assume  
  
-   Supporto di intrinseci  
  
-   Eccezioni  
  
## Opzioni del compilatore e del linker  
  
### Ottimizzazione PGO  
 In Visual C\+\+ è supportata l'ottimizzazione PGO.  Questa ottimizzazione utilizza i dati di profilo di esecuzioni precedenti di una versione instrumentata di un'applicazione per guidare la successiva ottimizzazione dell'applicazione.  L'utilizzo di PGO può richiedere una notevole quantità di tempo e pertanto può non essere particolarmente diffuso tra gli sviluppatori; è tuttavia consigliato per la build di rilascio finale di un prodotto.  Per ulteriori informazioni, vedere [Ottimizzazioni guidate da profilo \(PGO\)](../../build/reference/profile-guided-optimizations.md).  
  
 Inoltre sono state perfezionate l'opzione Ottimizzazione intero programma \(nota anche come Generazione codice in fase di collegamento\) e le ottimizzazioni **\/O1** e **\/O2**.  In generale, un'applicazione compilata con una di queste opzioni sarà più veloce della stessa applicazione compilata con un compilatore precedente.  
  
 Per ulteriori informazioni, vedere [\/GL \(Ottimizzazione intero programma\)](../../build/reference/gl-whole-program-optimization.md) e [\/O1, \/O2 \(Riduci dimensione, Ottimizza velocità\)](../../build/reference/o1-o2-minimize-size-maximize-speed.md).  
  
### Livello di ottimizzazione da utilizzare  
 Se possibile, le build di rilascio finale devono essere compilate con le ottimizzazioni PGO.  Se non è possibile eseguire la compilazione con PGO, a causa di un'infrastruttura insufficiente per l'esecuzione di build instrumentate o di mancanza di accesso agli scenari, si consiglia la compilazione con Ottimizzazione intero programma.  
  
 Anche l'opzione **\/Gy** è molto utile.  Tale opzione genera un COMDAT separato per ciascuna funzione, consentendo al linker maggiore flessibilità durante la rimozione della riduzione COMDAT e dei COMDAT senza riferimenti.  L'unico svantaggio derivante dall'utilizzo di **\/Gy** è che può avere un effetto minore in fase di compilazione.  Pertanto, ne viene in genere consigliato l'utilizzo.  Per ulteriori informazioni, vedere [\/Gy \(Attiva collegamento a livello di funzione\)](../../build/reference/gy-enable-function-level-linking.md).  
  
 Per il collegamento negli ambienti a 64 bit si consiglia di utilizzare l'opzione del linker **\/OPT:REF,ICF** e, negli ambienti a 32 bit, **\/OPT:REF**.  Per ulteriori informazioni, vedere [\/OPT \(Ottimizzazioni\)](../../build/reference/opt-optimizations.md).  
  
 Si consiglia inoltre di generare simboli di debug, anche con build di rilascio ottimizzate.  Questa operazione non influisce sul codice generato e semplifica notevolmente il debug dell'applicazione, se necessario.  
  
### Opzioni in virgola mobile  
 L'opzione del compilatore **\/Op** è stata rimossa e sono state aggiunte le quattro opzioni seguenti relative alle ottimizzazioni in virgola mobile:  
  
|||  
|-|-|  
|**\/fp:precise**|Rappresenta l'opzione predefinita e deve essere utilizzata nella maggior parte dei casi.|  
|**\/fp:fast**|Consigliata nei casi in cui le prestazioni sono di fondamentale importanza, ad esempio nei giochi.  Questa opzione determinerà le prestazioni più veloci.|  
|**\/fp:strict**|Consigliata se si desiderano un comportamento conforme allo standard IEEE ed eccezioni di virgola mobile precise.  Questa opzione determinerà le prestazioni più lente.|  
|**\/fp:except\[\-\]**|Può essere utilizzata insieme a **\/fp:strict** o **\/fp:precise**, ma non a **\/fp:fast**.|  
  
 Per ulteriori informazioni, vedere [\/fp \(Specifica il comportamento della virgola mobile\)](../../build/reference/fp-specify-floating-point-behavior.md).  
  
## Declspec di ottimizzazione  
 In questa sezione verranno esaminate due declspec utilizzabili nei programmi per il supporto delle prestazioni: `__declspec(restrict)` e `__declspec(noalias)`.  
  
 La declspec `restrict` può essere applicata solo alle dichiarazioni di funzione che restituiscono un puntatore, ad esempio `__declspec(restrict) void *malloc(size_t size);`  
  
 La declspec `restrict` può essere utilizzata con le funzioni che restituiscono puntatori privi di alias.  Questa parola chiave viene utilizzata per l'implementazione della libreria di runtime C di `malloc` poiché non restituirà mai un valore di puntatore già in uso nel programma corrente \(a meno che non si stia effettuando un'operazione non valida, quale l'utilizzo di memoria dopo la relativa liberazione\).  
  
 La declspec `restrict` fornisce al compilatore maggiori informazioni per l'esecuzione delle relative ottimizzazioni.  Una delle cose più difficile da determinare per un compilatore è quali puntatori effettuano l'aliasing ad altri puntatori e l'utilizzo di queste informazioni offre un supporto notevole al compilatore.  
  
 È opportuno sottolineare che si tratta solo di un suggerimento per il compilatore, che non verrà necessariamente verificato da quest'ultimo.  Se il programma utilizza la declspec `restrict` in modo improprio, potrà presentare un comportamento non corretto.  
  
 Per ulteriori informazioni, vedere [restrict](../../cpp/restrict.md).  
  
 Anche la declspec `noalias` viene applicata solo alle funzioni e indica che si tratta di funzioni semi\-pure.  Una funzione semi\-pure fa riferimento o modifica solo le variabili locali, argomenti e riferimenti indiretti di primo livello di argomenti.  Questa declspec rappresenta solo un suggerimento per il compilatore e, se la funzione fa riferimento alle variabili globali o ai riferimenti indiretti di secondo livello degli argomenti del puntatore, il compilatore potrebbe generare codice che determina l'interruzione dell'applicazione.  
  
 Per ulteriori informazioni, vedere [noalias](../../cpp/noalias.md).  
  
## Pragma di ottimizzazione  
 Sono inoltre disponibili diversi pragma utili per consentire l'ottimizzazione del codice.  Il primo che verrà illustrato è `#pragma optimize`:  
  
```  
#pragma optimize("{opt-list}", on | off)  
```  
  
 Questo pragma consente di impostare un dato livello di ottimizzazione funzione per funzione.  Si tratta di uno strumento ideale per i rari casi in cui l'applicazione si blocca quando una determinata funzione viene compilata con l'ottimizzazione.  È possibile utilizzare questo pragma per disattivare le ottimizzazioni per una singola funzione:  
  
```  
#pragma optimize("", off)  
int myFunc() {...}  
#pragma optimize("", on)  
```  
  
 Per ulteriori informazioni, vedere [optimize](../../preprocessor/optimize.md).  
  
 L'operazione di inline rappresenta una delle ottimizzazioni più importanti eseguita dal compilatore e di seguito viene illustrata una coppia di pragma che consentono di modificare questo comportamento.  
  
 `#pragma inline_recursion` è utile per specificare se si desidera o meno che l'applicazione sia in grado di rendere inline una chiamata ricorsiva.  Per impostazione predefinita è disattivato.  È possibile attivarlo per la ricorsione superficiale di piccole funzioni.  Per ulteriori informazioni, vedere [inline\_recursion](../../preprocessor/inline-recursion.md).  
  
 Un altro pragma utile per limitare il livello di inline è `#pragma inline_depth`.  In genere è adatto nelle situazioni in cui si tenta di limitare la dimensione di un programma o di una funzione.  Per ulteriori informazioni, vedere [inline\_depth](../../preprocessor/inline-depth.md).  
  
## \_\_restrict e \_\_assume  
 In Visual C\+\+ le parole chiave seguenti consentono di ottimizzare le prestazioni: [\_\_restrict](../../cpp/extension-restrict.md) e [\_\_assume](../../intrinsics/assume.md).  
  
 Innanzitutto, è opportuno notare che `__restrict` e `__declspec(restrict)` rappresentano due concetti distinti.  Sebbene siano correlati, presentano una semantica diversa.  `__restrict` è un qualificatore di tipo, come `const` o `volatile`, ma esclusivamente per i tipi di puntatore.  
  
 Un puntatore modificato con `__restrict` viene definito *\_\_puntatore restrict*,  ovvero un puntatore cui è possibile accedere solo attraverso il puntatore \_\_restrict.  In altre parole, non è possibile utilizzare un altro puntatore per accedere ai dati cui fa riferimento il puntatore \_\_restrict.  
  
 `__restrict` può rappresentare uno strumento efficace per l'utilità di ottimizzazione di Visual C\+\+, tuttavia è necessario utilizzarlo con estrema attenzione.  Se utilizzato in modo improprio, l'utilità di ottimizzazione potrebbe eseguire un'ottimizzazione che causerebbe l'interruzione dell'applicazione.  
  
 La parola chiave `__restrict` sostituisce l'opzione **\/Oa** delle versioni precedenti.  
  
 Con `__assume,` uno sviluppatore può indicare al compilatore di presupporre il valore di alcune variabili.  
  
 Ad esempio `__assume(a < 5);` indica all'utilità di ottimizzazione che in una determinata riga di codice la variabile `a` è minore di 5.  Anche in questo caso si tratta solo di un suggerimento per il compilatore.  Se `a` in realtà è pari a 6 in questo punto del programma, il comportamento del programma dopo l'ottimizzazione del compilatore potrebbe non essere quello previsto.  `__assume` è particolarmente utile prima di istruzioni switch e\/o espressioni condizionali.  
  
 `__assume` presenta alcuni limiti.  Innanzitutto, come per `__restrict`, si tratta solo di un suggerimento che il compilatore è libero di ignorare.  Inoltre, `__assume` attualmente funziona solo con le disuguaglianze delle variabili rispetto alle costanti.  Non propaga le disuguaglianze simboliche, ad esempio assume\(a \< b\).  
  
## Supporto di intrinseci  
 Gli intrinseci sono chiamate di funzione in cui il compilatore dispone di informazioni intrinseche sulla chiamata e, anziché chiamare una funzione in una libreria, crea il codice di tale funzione.  Il file di intestazione intrin.h situato in \<Directory\_installazione\>\\VC\\include\\intrin.h contiene tutte le funzioni intrinseche disponibili per ognuna delle tre piattaforme supportate \(x86, x64 e ARM\).  
  
 Gli intrinseci consentono al programmatore di approfondire i livelli di codice senza dover utilizzare un assembly.  L'utilizzo degli intrinseci presenta diversi vantaggi:  
  
1.  Maggiore portabilità del codice:  alcuni intrinseci sono disponibili in diverse architetture di CPU.  
  
2.  Maggiore facilità nella lettura del codice, poiché viene scritto ancora in C\/C\+\+.  
  
3.  Estensione al codice dei vantaggi derivanti dalle ottimizzazioni del compilatore.  Di pari passo con i miglioramenti apportati al compilatore, viene migliorata anche la generazione di codice degli intrinseci.  
  
 Per ulteriori informazioni, vedere [Intrinseci del compilatore](../../intrinsics/compiler-intrinsics.md) e [Benefits of Using Intrinsics](http://msdn.microsoft.com/it-it/57af8920-527f-44af-a741-a07cbe80bf02).  
  
## Eccezioni  
 All'utilizzo delle eccezioni è associato un calo delle prestazioni.  Alcune restrizioni vengono introdotte quando si utilizzano blocchi try che impediscono al compilatore di eseguire determinate ottimizzazioni.  Nelle piattaforme x86 si verifica un'ulteriore riduzione del livello delle prestazioni derivante dai blocchi try, a causa delle informazioni di stato aggiuntive che devono essere generate durante l'esecuzione del codice.  Nelle piattaforme a 64 bit non si verifica tale riduzione delle prestazioni da parte dei blocchi try ma, una volta generata un'eccezione, il processo di individuazione del gestore e di rimozione dello stack può essere dispendioso.  
  
 Si consiglia pertanto di evitare l'introduzione di blocchi try\/catch nel codice non realmente indispensabili.  Se è necessario utilizzare eccezioni, ricorrere se possibile a quelle sincrone.  Per ulteriori informazioni, vedere [Gestione strutturata delle eccezioni](../../cpp/structured-exception-handling-c-cpp.md).  
  
 Infine, generare eccezioni solo in casi eccezionali.  L'utilizzo di eccezioni per il flusso di controllo generale potrebbe comportare una riduzione delle prestazioni.  
  
## Vedere anche  
 [Ottimizzazione del codice](../../build/reference/optimizing-your-code.md)