---
title: "&lt;future&gt; | Microsoft Docs"
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
  - "<future>"
dev_langs: 
  - "C++"
ms.assetid: 2f5830fc-455d-44f9-9e3d-94ea051596a2
caps.latest.revision: 23
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# &lt;future&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Includere l'intestazione predefinita \<futura\> per definire le classi modello e i modelli di supporto che consentono di semplificare l'esecuzione di una funzione, possibilmente in un thread separato, e il recupero del suo risultato.  Il risultato è il valore restituito dalla funzione o un'eccezione generata dalla funzione ma non catturata.  
  
 Questa intestazione utilizza il runtime di concorrenza \(ConcRT\) per consentirne l'utilizzo con altri meccanismi di ConcRT.  Per ulteriori informazioni su ConcRT, vedere [Runtime di concorrenza](../parallel/concrt/concurrency-runtime.md).  
  
## Sintassi  
  
```cpp  
#include <future>  
```  
  
## Note  
  
> [!NOTE]
>  Nel codice compilato utilizzando **\/clr** o **\/clr:pure**, questa intestazione è bloccata.  
  
 Un *provider asincrono* memorizza il risultato di una chiamata di funzione.  Un *oggetto di ritorno asincrono* viene utilizzato per recuperare il risultato di una chiamata di funzione.  Uno *stato asincrono associato* fornisce una comunicazione tra un provider asincrono e uno o più oggetti di ritorno asincroni.  
  
 Un programma non crea direttamente alcun oggetto asincrono di stato associato.  Il programma crea un provider asincrono ogni qual volta ne ha bisogno e da quello crea un oggetto di ritorno asincrono che condivide il proprio stato asincrono associato con il provider.  I provider asincroni e gli oggetti di ritorno asincroni controllano gli oggetti che gestiscono il loro stato asincrono associato condiviso.  Quando l'ultimo oggetto che fa riferimento allo stato asincrono associato lo rilascia, l'oggetto che contiene lo stato asincrono associato viene eliminato.  
  
 Un provider asincrono o un oggetto di ritorno asincrono che non ha alcuno stato asincrono associato è *vuoto*.  
  
 Lo stato asincrono associato è *pronto* solo se il provider asincrono ha archiviato un valore restituito o un'eccezione.  
  
 La funzione modello `async` e le classi modello `promise` e `packaged_task` sono provider asincroni.  Le classi modello `future` e `shared_future` descrivono oggetti di ritorno asincroni.  
  
 Ciascuna delle classi modello `promise`, `future` e `shared_future` contiene una specializzazione per il tipo `void` e una specializzazione parziale per archiviare e recuperare un valore tramite riferimento.  Queste specializzazioni differiscono dal modello principale solo nelle firme e nelle semantiche delle funzioni che memorizzano e recuperano il valore di ritorno.  
  
 Le classi modello `future` e `shared_future` non si bloccano mai nei loro rispettivi distruttori, eccetto in un solo caso mantenuto per compatibilità con le versioni precedenti. A differenza delle altre future, in `future`, o nell'ultima `shared_future`, collegata ad un task avviato tramite `std::async`, il distruttore si blocca se l'attività non è stata completata; ovvero se il thread non ha chiamato `.get()` o `.wait()` e l'attività è ancora in esecuzione.  La seguente nota di utilizzo è stata aggiunta alla descrizione di `std::async` nello schema predefinito: "\[Nota: se un future ottenuto da std::async viene spostato fuori dell'ambito locale, il codice che lo utilizza deve essere consapevole che il distruttore del future può rimanere bloccato fino a quando lo stato condiviso non è pronto \- fine nota\]" In tutti gli altri casi, i distruttori di `future` e di `shared_future` sono obbligatori ed è garantito che non si bloccheranno mai.  
  
## Membri  
  
### Classi  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Classe future](../standard-library/future-class.md)|Descrive un oggetto asincrono di ritorno.|  
|[Classe future\_error](../standard-library/future-error-class.md)|Descrive un oggetto eccezione che può essere generato da metodi che gestiscono oggetti `future`.|  
|[Classe packaged\_task](../standard-library/packaged-task-class.md)|Descrive un provider asincrono che è un wrapper di chiamata e la cui firma di chiamata è `Ty(ArgTypes...)`.  Il suo stato asincrono associato utilizza una copia del proprio oggetto richiamabile in aggiunta al potenziale risultato.|  
|[Classe promise](../standard-library/promise-class.md)|Descrive un provider asincrono.|  
|[Classe shared\_future](../standard-library/shared-future-class.md)|Descrive un oggetto asincrono di ritorno.  A differenza di un oggetto `future`, un provider asincrono può essere associato a un numero qualsiasi di oggetti `shared_future`.|  
  
### Strutture  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Struttura is\_error\_code\_enum](../standard-library/is-error-code-enum-structure.md)|Specializzazione che indica che `future_errc` è appropriata per archiviare un `error_code`.|  
|[Struttura uses\_allocator](../standard-library/uses-allocator-structure.md)|Specializzazione che è sempre verificata.|  
  
### Funzioni  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Funzione async](../Topic/async%20Function.md)|Rappresenta un provider asincrono.|  
|[Funzione future\_category](../Topic/future_category%20Function.md)|Restituisce un riferimento all'oggetto `error_category` che presenta errori associati agli oggetti `future`.|  
|[Funzione make\_error\_code](../Topic/make_error_code%20Function.md)|Crea un `error_code` con contiene l'oggetto `error_category` che caratterizza gli errori `future`.|  
|[Funzione make\_error\_condition](../Topic/make_error_condition%20Function.md)|Crea un `error_condition` con contiene l'oggetto `error_category` che caratterizza gli errori `future`.|  
|[Funzione swap \(\<future\>\)](../Topic/swap%20Function%20\(%3Cfuture%3E\).md)|Scambia lo stato asincrono associato di un oggetto `promise` con quello di un altro.|  
  
### Enumerazioni  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Enumerazione future\_errc](../Topic/future_errc%20Enumeration.md)|Fornisce i nomi simbolici degli errori restituiti dalla classe `future_error`.|  
|[Enumerazione future\_status](../Topic/future_status%20Enumeration.md)|Fornisce i nomi simbolici dei motivi per cui una funzione di attesa temporizzata può restituire.|  
|[Enumerazione launch](../Topic/launch%20Enumeration.md)|Rappresenta un tipo di maschera di bit che descrive le possibili modalità per la funzione modello `async`.|  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)