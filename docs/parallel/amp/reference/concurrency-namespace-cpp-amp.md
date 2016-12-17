---
title: "Spazio dei nomi Concurrency (C++ AMP) | Microsoft Docs"
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
  - "amp/Concurrency"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Concurrency (spazio dei nomi)"
ms.assetid: b5aab265-3bac-42c5-8ead-f92ce05ef267
caps.latest.revision: 28
caps.handback.revision: 28
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Spazio dei nomi Concurrency (C++ AMP)
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Fornisce le classi e funzioni che permettono di velocizzare l'esecuzione di codice C++ su hardware di dati in parallelo. Per ulteriori informazioni, vedere [Panoramica di C++ AMP](../../../parallel/amp/cpp-amp-overview.md)  
  
## <a name="syntax"></a>Sintassi  
  
```  
namespace Concurrency;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="namespaces"></a>Namespaces  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Spazio dei nomi Concurrency:: Direct3D](../../../parallel/amp/reference/concurrency-direct3d-namespace.md)|Sono disponibili funzioni che supportano l'interoperabilità D3D. Consente l'utilizzo diretto di D3D risorse per il calcolo nel codice AMP e l'utilizzo di risorse create in AMP D3D codice, senza creare copie ridondanti intermedi. È possibile utilizzare C++ AMP per accelerare in modo incrementale le sezioni con uso intensivo delle applicazioni DirectX e utilizzare l'API D3D su dati ottenuti da calcoli AMP.|  
|[Spazio dei nomi Concurrency:: fast_math](../../../parallel/amp/reference/concurrency-fast-math-namespace.md)|Funzioni di `fast_math` dello spazio dei nomi non sono compatibili con C99. Sono disponibili solo a precisione singola versioni di ogni funzione. Queste funzioni usano le funzioni intrinseche di DirectX, che sono più veloci rispetto alle funzioni corrispondenti nel `precise_math` dello spazio dei nomi e non richiedono il supporto esteso e precisione doppia sull'acceleratore, ma sono meno accurate. Esistono due versioni di ogni funzione per la compatibilità a livello di origine con codice C99. entrambe le versioni accettano e restituiscono valori a precisione singola.|  
|[Spazio dei nomi](../../../parallel/amp/reference/concurrency-graphics-namespace.md)|Fornisce tipi e funzioni che sono progettate per la programmazione grafica.|  
|[Spazio dei nomi Concurrency:: precise_math](../../../parallel/amp/reference/concurrency-precise-math-namespace.md)|Funzioni di `precise_math` dello spazio dei nomi sono conformi C99. Sono incluse sia a precisione singola e precisione doppia versioni di ogni funzione. Queste funzioni, ad esempio le funzioni e precisione singola, richiedono il supporto esteso e precisione doppia sull'acceleratore.|  
  
### <a name="classes"></a>Classi  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Classe Accelerator](../../../parallel/amp/reference/accelerator-class.md)|Rappresenta un'astrazione di un nodo di calcolo fisico ottimizzata per il punto di distribuzione.|  
|[accelerator_view (classe)](../../../parallel/amp/reference/accelerator-view-class.md)|Rappresenta un'astrazione di periferica virtuale su un acceleratore di dati in parallelo di C++ AMP.|  
|[Classe accelerator_view_removed](../../../parallel/amp/reference/accelerator-view-removed-class.md)|Eccezione generata quando una chiamata DirectX sottostante ha esito negativo a causa il meccanismo di timeout-rilevamento-e-ripristino di Windows.|  
|[Classe Array](../../../parallel/amp/reference/array-class.md)|Dati aggregati in un `accelerator_view` nel dominio della griglia. È una raccolta di variabili, uno per ogni elemento in un dominio di griglia. Ogni variabile contiene un valore che corrisponde a un tipo C++.|  
|[Classe array_view](../../../parallel/amp/reference/array-view-class.md)|Rappresenta una visualizzazione dei dati in una matrice \< T, N >.|  
|[Classe completion_future](../../../parallel/amp/reference/completion-future-class.md)|Rappresenta un futuro che corrisponde a un'operazione asincrona di C++ AMP.|  
|[Classe extent](../../../parallel/amp/reference/extent-class-cpp-amp.md)|Rappresenta un vettore di valori integer N che specificano i limiti di uno spazio N-dimensionale che presenta un'origine di 0. I valori nel vettore coordinate vengono ordinati dal più significativo al meno significativo. Ad esempio, nello spazio 3D cartesiano, il vettore di extent (7,5,3) rappresenta uno spazio in cui la coordinata z compreso tra 0 e 7, gli intervalli di coordinate y da 0 a 5, e la coordinata x è compreso tra 0 e 3.|  
|[Classe index](../../../parallel/amp/reference/index-class.md)|Definisce un punto dell'indice N-dimensionale.|  
|[Classe invalid_compute_domain](../../../parallel/amp/reference/invalid-compute-domain-class.md)|L'eccezione generata quando il runtime non è possibile avviare un kernel tramite il dominio di calcolo specificato il `parallel_for_each` sito di chiamata.|  
|[Classe out_of_memory](../../../parallel/amp/reference/out-of-memory-class.md)|Eccezione generata quando un metodo non riesce a causa della mancanza di memoria di sistema o dispositivo.|  
|[Classe runtime_exception](../../../parallel/amp/reference/runtime-exception-class.md)|Tipo di base per le eccezioni nella libreria di C++ AMP.|  
|[Classe tile_barrier](../../../parallel/amp/reference/tile-barrier-class.md)|Una classe di funzionalità che è creabile dal sistema e viene passata a una classe `parallel_for_each` lambda come parte del `tiled_index` parametro. Fornisce un metodo, `wait()`, il cui scopo consiste nel sincronizzare l'esecuzione dei thread sono in esecuzione nel gruppo di thread (sezione).|  
|[Classe tiled_extent](../../../parallel/amp/reference/tiled-extent-class.md)|Oggetto `tiled_extent` oggetto è un `extent` oggetto di uno a tre dimensioni che suddivide lo spazio di extent in riquadri unidimensionale bidimensionale e tridimensionale.|  
|[Classe tiled_index](../../../parallel/amp/reference/tiled-index-class.md)|Viene fornito un indice in un `tiled_grid` oggetto. Questa classe dispone di proprietà per accedere a elemento di origine locale riquadro e di origine globale.|  
|[Classe uninitialized_object](../../../parallel/amp/reference/uninitialized-object-class.md)|Eccezione generata quando viene utilizzato un oggetto non inizializzato.|  
|[Classe unsupported_feature](../../../parallel/amp/reference/unsupported-feature-class.md)|Eccezione generata quando viene utilizzata una funzionalità non supportata.|  
  
### <a name="enumerations"></a>Enumerazioni  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Enumerazione access_type](../Topic/access_type%20Enumeration.md)|Specifica il tipo di accesso ai dati.|  
|[Enumerazione queuing_mode](../../../parallel/amp/reference/queuing-mode-enumeration.md)|Specifica le modalità di Accodamento messaggi sono supportate per i tasti di scelta rapida.|  
  
### <a name="operators"></a>Operatori  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|[operatore Operator = = (C++ AMP)](../Topic/operator==%20Operator%20\(C++%20AMP\).md)|Determina se le strutture di dati specificati sono uguali.|  
|[operatore! = (operatore) (C++ AMP)](../Topic/operator!=%20Operator%20\(C++%20AMP\).md)|Determina se le strutture di dati specificati sono uguali.|  
|[Operatore operator + (C++ AMP)](../Topic/operator+%20Operator%20\(C++%20AMP\).md)|Calcola la somma component-wise di argomenti specificati.|  
|[Operatore operator-(C++ AMP)](../Topic/operator-%20Operator%20\(C++%20AMP\)1.md)|Calcola la differenza component-wise tra gli argomenti specificati.|  
|[operatore * (operatore) (C++ AMP)](../Topic/operator*%20Operator%20\(C++%20AMP\).md)|Calcola il prodotto component-wise di argomenti specificati.|  
|[operatore / (operatore) (C++ AMP)](../Topic/operator-%20Operator%20\(C++%20AMP\)2.md)|Calcola il quoziente component-wise tra gli argomenti specificati.|  
|[Operatore operator % (C++ AMP)](../Topic/operator%25%20Operator%20\(C++%20AMP\).md)|Calcola il modulo del primo argomento specificato dal secondo argomento specificato.|  
  
### <a name="functions"></a>Funzioni  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Funzione all_memory_fence](../Topic/all_memory_fence%20Function.md)|Blocca l'esecuzione di tutti i thread in una sezione fino a quando non sono stati completati tutti gli accessi alla memoria.|  
|[Funzione amp_uninitialize](../Topic/amp_uninitialize%20Function.md)|Non inizializza il runtime di C++ AMP.|  
|[Funzione atomic_compare_exchange](../Topic/atomic_compare_exchange%20Function.md)|Di overload. Se il valore archiviato nella posizione specificata risulta uguale al primo valore specificato, il secondo valore specificato è archiviato nella stessa posizione come operazione atomica.|  
|[Funzione atomic_exchange](../Topic/atomic_exchange%20Function%20\(C++%20AMP\).md)|Di overload. Imposta il valore archiviato nella posizione specificata sul valore specificato come operazione atomica.|  
|[Funzione atomic_fetch_add](../Topic/atomic_fetch_add%20Function%20\(C++%20AMP\).md)|Di overload. Imposta il valore archiviato nella posizione specificata per la somma di tale valore e un valore specificato come operazione atomica.|  
|[Funzione atomic_fetch_and](../Topic/atomic_fetch_and%20Function%20\(C++%20AMP\).md)|Di overload. Imposta il valore archiviato nella posizione specificata per il bit `and` di tale valore e un valore specificato come operazione atomica.|  
|[Funzione atomic_fetch_dec](../Topic/atomic_fetch_dec%20Function.md)|Di overload. Decrementa il valore archiviato nella posizione specificata e archivia il risultato nella stessa posizione di un'operazione atomica.|  
|[Funzione atomic_fetch_inc](../Topic/atomic_fetch_inc%20Function.md)|Di overload. Incrementa il valore archiviato nella posizione specificata e archivia il risultato nella stessa posizione di un'operazione atomica.|  
|[Funzione atomic_fetch_max](../Topic/atomic_fetch_max%20Function.md)|Di overload. Imposta il valore archiviato nella posizione specificata sul valore maggiore di tale valore e un valore specificato come operazione atomica.|  
|[Funzione atomic_fetch_min](../Topic/atomic_fetch_min%20Function.md)|Di overload. Imposta il valore archiviato nella posizione specificata fino al più piccolo di tale valore e un valore specificato come operazione atomica.|  
|[Funzione atomic_fetch_or](../Topic/atomic_fetch_or%20Function%20\(C++%20AMP\).md)|Di overload. Imposta il valore archiviato nella posizione specificata per il bit `or` di tale valore e un valore specificato come operazione atomica.|  
|[Funzione atomic_fetch_sub](../Topic/atomic_fetch_sub%20Function%20\(C++%20AMP\).md)|Di overload. Imposta il valore archiviato nella posizione specificata per la differenza di tale valore e un valore specificato come operazione atomica.|  
|[Funzione atomic_fetch_xor](../Topic/atomic_fetch_xor%20Function%20\(C++%20AMP\).md)|Di overload. Imposta il valore archiviato nella posizione specificata per il bit `xor` di tale valore e un valore specificato come operazione atomica.|  
|[Copy (funzione)](../Topic/copy%20Function.md)|Copia un oggetto C++ AMP. Vengono soddisfatti tutti i requisiti di trasferimento di dati sincrono. Impossibile copiare i dati quando viene eseguito codice codice un tasto di scelta rapida. Il formato generale di questa funzione è `copy(src, dest)`.|  
|[Funzione copy_async](../Topic/copy_async%20Function.md)|Copia un oggetto C++ AMP e restituisce [completion_future](../../../parallel/amp/reference/completion-future-class.md) che può essere attesa. Impossibile copiare i dati durante l'esecuzione di codice in un tasto di scelta rapida. Il formato generale di questa funzione è `copy(src, dest)`.|  
|[Funzione direct3d_abort](../Topic/direct3d_abort%20Function.md)|Interrompe l'esecuzione di una funzione che ha il `restrict(amp)` clausola di restrizione.|  
|[Funzione direct3d_errorf](../Topic/direct3d_errorf%20Function.md)|Stampa una stringa formattata di Visual Studio **Output** finestra e genera un [runtime_exception](../../../parallel/amp/reference/runtime-exception-class.md) eccezione che ha la stessa formattazione della stringa.|  
|[Funzione direct3d_printf](../Topic/direct3d_printf%20Function.md)|Stampa una stringa formattata di Visual Studio **Output** finestra. Viene chiamato da una funzione che ha il `restrict(amp)` clausola di restrizione.|  
|[Funzione global_memory_fence](../Topic/global_memory_fence%20Function.md)|Blocca l'esecuzione di tutti i thread in una sezione fino a quando non accede a tutta la memoria globale sono stati completati.|  
|[Funzione parallel_for_each (C++ AMP)](../Topic/parallel_for_each%20Function%20\(C++%20AMP\).md)|Esegue una funzione all'interno del dominio di calcolo.|  
|[Funzione tile_static_memory_fence](../Topic/tile_static_memory_fence%20Function.md)|Blocca l'esecuzione di tutti i thread in una sezione fino a `tile_static` gli accessi alla memoria sono state completate.|  
  
## <a name="constants"></a>Costanti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costante HLSL_MAX_NUM_BUFFERS](../Topic/HLSL_MAX_NUM_BUFFERS%20Constant.md)|Il numero massimo di buffer consentiti da DirectX.|  
|[MODULENAME_MAX_LENGTH (costante)](../Topic/MODULENAME_MAX_LENGTH%20Constant.md)|Archivia la lunghezza massima del nome del modulo. Questo valore deve essere lo stesso per il compilatore e runtime.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amp. h  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento (C++ AMP)](../../../parallel/amp/reference/reference-cpp-amp.md)



