---
title: "algorithm (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "<cliext/algorithm>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<algorithm> (intestazione) [STL/CLR]"
  - "<cliext/algorithm> (intestazione) [STL/CLR]"
  - "funzioni con algoritmi [STL/CLR]"
ms.assetid: ee2718dc-a98d-40b8-8341-593fe7d2ac15
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# algorithm (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce le funzioni del modello del contenitore di STL\/CLR che eseguono algoritmi.  
  
## Sintassi  
  
```  
#include <cliext/algorithm>  
```  
  
## Funzioni  
  
|Funzione|Descrizione|  
|--------------|-----------------|  
|[adjacent\_find](../dotnet/adjacent-find-stl-clr.md)|Cerca due elementi adiacenti che sono uguali.|  
|[binary\_search](../dotnet/binary-search-stl-clr.md)|Verifica se una sequenza ordinata contiene un valore specificato.|  
|[copy](../dotnet/copy-stl-clr.md)|Valori di copie da un intervallo di origine a un intervallo di destinazione, ripetente in avanti.|  
|[copy\_backward](../dotnet/copy-backward-stl-clr.md)|Valori di copie da un intervallo di origine a un intervallo di destinazione, ripetente indietro in direzione.|  
|[count](../dotnet/count-stl-clr.md)|Restituisce il numero di elementi in un intervallo dei cui valori corrispondono a un valore specificato.|  
|[count\_if](../dotnet/count-if-stl-clr.md)|Restituisce il numero di elementi in un intervallo dei cui valori corrispondono a una condizione specificata.|  
|[equal](../dotnet/equal-stl-clr.md)|Confronta due intervalli, elemento per elemento.|  
|[equal\_range](../dotnet/equal-range-stl-clr.md)|Cerca una sequenza ordinata di valori e restituisce due posizioni che delimitano una sottosequenza di valori che sono tutti uguali a un elemento specificato.|  
|[riempimento](../dotnet/fill-stl-clr.md)|Assegna lo stesso nuovo valore a ogni elemento in un intervallo specificato.|  
|[fill\_n](../dotnet/fill-n-stl-clr.md)|Assegna un nuovo valore a un numero specificato di elementi in un intervallo a partire da un determinato elemento.|  
|[trova](../dotnet/find-stl-clr.md)|Restituisce la posizione della prima occorrenza di un valore specificato.|  
|[find\_end](../dotnet/find-end-stl-clr.md)|Restituisce l'ultima sottosequenza in un intervallo che sia identico a una sequenza specificata.|  
|[find\_first\_of](../dotnet/find-first-of-stl-clr.md)|Cerca un intervallo la prima occorrenza di qualsiasi di un intervallo specificato di elementi.|  
|[find\_if](../dotnet/find-if-stl-clr.md)|Restituisce la posizione del primo elemento di una sequenza di valori in cui l'elemento soddisfa una condizione specificata.|  
|[for\_each](../dotnet/for-each-stl-clr.md)|Applica un oggetto funzione specificata a ogni elemento di una sequenza di valori e restituisce l'oggetto function.|  
|[generate](../dotnet/generate-stl-clr.md)|Assegna i valori generati da un oggetto funzione a ogni elemento di una sequenza di valori.|  
|[generate\_n](../dotnet/generate-n-stl-clr.md)|Assegna i valori generati da un oggetto funzione a un numero specificato di elementi.|  
|[includes](../dotnet/includes-stl-clr.md)|Verifica se un intervallo ordinato contiene tutti gli elementi in un secondo intervallo ordinato.|  
|[inplace\_merge](../dotnet/inplace-merge-stl-clr.md)|Combina elementi da due intervalli ordinati consecutivi in un unico intervallo ordinato.|  
|[iter\_swap](../dotnet/iter-swap-stl-clr.md)|Metadati e due valori sono segnalati da una coppia degli iteratori specificati.|  
|[lexicographical\_compare](../dotnet/lexicographical-compare-stl-clr.md)|Confronta due sequenze, elemento per elemento, identificando che la sequenza è il minore dei due.|  
|[lower\_bound](../dotnet/lower-bound-stl-clr.md)|Cerca la posizione del primo elemento di una sequenza ordinata di valori con un valore maggiore o uguale a un valore specificato.|  
|[make\_heap](../dotnet/make-heap-stl-clr.md)|Converte gli elementi da un intervallo specificato nell'heap in cui il primo elemento nell'heap è il più grande.|  
|[max](../dotnet/max-stl-clr.md)|Confronta due oggetti e restituisce il maggiore dei due.|  
|[max\_element](../dotnet/max-element-stl-clr.md)|Cerca il più grande elemento in una sequenza specifica di valori.|  
|[esegui merge](../dotnet/merge-stl-clr.md)|Combina tutti gli elementi da due ordinati gli intervalli di origine in un singolo, intervallo di destinazione ordinato.|  
|[min](../dotnet/min-stl-clr.md)|Confronta due oggetti e restituisce il minore dei due.|  
|[min\_element](../dotnet/min-element-stl-clr.md)|Cerca il più piccolo elemento in una sequenza specifica di valori.|  
|[mismatch](../dotnet/mismatch-stl-clr.md)|Confronta un elemento di due intervalli dall'elemento e restituisce la prima posizione in cui una differenza si verifica.|  
|[next\_permutation](../dotnet/next-permutation-stl-clr.md)|Riordina gli elementi in un intervallo in modo che l'ordine originale sia sostituita dalla maggior permutazione lessicografico seguente se esiste.|  
|[nth\_element](../dotnet/nth-element-stl-clr.md)|Esegue una sequenza di elementi, correttamente collocando l'elemento Th di `n`della sequenza in modo che tutti gli elementi rispetto sia minore o uguale a e tutti gli elementi che lo seguono sia maggiore o uguale a.|  
|[partial\_sort](../dotnet/partial-sort-stl-clr.md)|Dispone di un numero specificato di elementi più piccoli in un intervallo in ordine nondescending.|  
|[partial\_sort\_copy](../dotnet/partial-sort-copy-stl-clr.md)|Copiare gli elementi da un intervallo di origine in un intervallo di destinazione in modo che gli elementi dell'intervallo di origine sono ordinati.|  
|[partition](../dotnet/partition-stl-clr.md)|Dispone gli elementi in un intervallo in modo che gli elementi che soddisfano il predicato unario precedono quelli che non vengono soddisfarlo.|  
|[pop\_heap](../dotnet/pop-heap-stl-clr.md)|Consente di spostare il più grande elemento dall'inizio di un heap verso la fine e quindi costituisce una nuova heap dagli elementi rimanenti.|  
|[prev\_permutation](../dotnet/prev-permutation-stl-clr.md)|Riordina una sequenza di elementi in modo che l'ordine originale sia sostituita dalla maggior permutazione lessicografico precedente se esiste.|  
|[push\_heap](../dotnet/push-heap-stl-clr.md)|Aggiunge un elemento che si trova alla fine di un intervallo a un heap esistente che include gli elementi precedenti dell'intervallo.|  
|[random\_shuffle](../dotnet/random-shuffle-stl-clr.md)|Ridisporre una sequenza di elementi di `N` in un intervallo in uno di `N`\! disposizioni possibili selezionate casualmente.|  
|[rimozione](../dotnet/remove-stl-clr.md)|Rimuove un valore specificato da un intervallo specificato senza pregiudicare l'ordine degli elementi rimanenti e restituisce la fine del nuovo intervallo esente dal valore specificato.|  
|[remove\_copy](../dotnet/remove-copy-stl-clr.md)|Copiare gli elementi da un intervallo di origine a un intervallo di destinazione, ad eccezione del fatto che gli elementi di un determinato valore non vengono copiati, senza pregiudicare l'ordine degli elementi rimanenti.|  
|[remove\_copy\_if](../dotnet/remove-copy-if-stl-clr.md)|Copiare gli elementi da un intervallo di origine a un intervallo di destinazione, ad eccezione di quelli che soddisfano un predicato, senza pregiudicare l'ordine degli elementi rimanenti.|  
|[remove\_if](../dotnet/remove-if-stl-clr.md)|Rimuove gli elementi che soddisfano un predicato con un intervallo specificato senza pregiudicare l'ordine degli elementi rimanenti. .|  
|[sostituisci](../dotnet/replace-stl-clr.md)|Sostituisce gli elementi in un intervallo che corrispondono a un valore specificato con un nuovo valore.|  
|[replace\_copy](../dotnet/replace-copy-stl-clr.md)|Copiare gli elementi da un intervallo di origine a un intervallo di destinazione, sostituendo gli elementi che corrispondono a un valore specificato con un nuovo valore.|  
|[replace\_copy\_if](../dotnet/replace-copy-if-stl-clr.md)|Esamina ogni elemento in un intervallo di origine e sostituirla se soddisfano il predicato specificato come copia il risultato in un nuovo intervallo di destinazione.|  
|[replace\_if](../dotnet/replace-if-stl-clr.md)|Esamina ogni elemento in un intervallo e sostituirla se soddisfano il predicato specificato.|  
|[reverse](../dotnet/reverse-stl-clr.md)|Inverte l'ordine degli elementi in un intervallo.|  
|[reverse\_copy](../dotnet/reverse-copy-stl-clr.md)|Inverte l'ordine degli elementi all'interno di un intervallo di origine che li copia in un intervallo di destinazione.|  
|[rotate](../dotnet/rotate-stl-clr.md)|Scambia gli elementi in due intervalli adiacenti.|  
|[rotate\_copy](../dotnet/rotate-copy-stl-clr.md)|Scambia gli elementi in due intervalli adiacenti in un intervallo di origine e copiare il risultato in un intervallo di destinazione.|  
|[search](../dotnet/search-stl-clr.md)|Cercare la prima occorrenza di una sequenza all'interno di un intervallo di destinazione dei cui elementi sono uguali a quelli della sequenza specificata di elementi oppure dei cui elementi sono equivalenti in un certo senso specificato da un predicato binario a elementi nella sequenza specificata.|  
|[search\_n](../dotnet/search-n-stl-clr.md)|Cercare la prima sottosequenza in un intervallo di un numero specificato di elementi che dispongono di un valore specifico o una relazione a tale valore come specificato da un predicato binario.|  
|[set\_difference](../dotnet/set-difference-stl-clr.md)|Unisce tutti gli elementi appartenenti a un intervallo di origine ordinato, ma non a un secondo ordinati l'intervallo di origine, in un unico, intervallo di destinazione ordinato, in cui il criterio di ordinamento può essere specificato da un predicato binario.|  
|[set\_intersection](../dotnet/set-intersection-stl-clr.md)|Unisce tutti gli elementi appartenenti a entrambi hanno ordinato gli intervalli di origine in un singolo, intervallo di destinazione ordinato, in cui il criterio di ordinamento può essere specificato da un predicato binario.|  
|[set\_symmetric\_difference](../dotnet/set-symmetric-difference-stl-clr.md)|Unisce tutti gli elementi appartenenti a uno, ma non entrambi, gli intervalli di origine ordinati in un singolo, è ordinato l'intervallo di destinazione, in cui il criterio di ordinamento può essere specificato da un predicato binario.|  
|[set\_union](../dotnet/set-union-stl-clr.md)|Unisce tutti gli elementi appartenenti ad almeno uno di due hanno ordinato gli intervalli di origine in un singolo, intervallo di destinazione ordinato, in cui il criterio di ordinamento può essere specificato da un predicato binario.|  
|[ordinamento](../dotnet/sort-stl-clr.md)|Dispone gli elementi in un intervallo specificato in un ordine nondescending o come un criterio di ordinamento specificato da un predicato binario.|  
|[sort\_heap](../dotnet/sort-heap-stl-clr.md)|Converte un heap in intervallo ordinato.|  
|[stable\_partition](../dotnet/stable-partition-stl-clr.md)|Le classi degli elementi in un intervallo e non in due set, con gli elementi che soddisfano il predicato unario che precede quelli che non vengono soddisfarlo, mantenendo l'ordine degli elementi equivalenti.|  
|[stable\_sort](../dotnet/stable-sort-stl-clr.md)|Dispone gli elementi in un intervallo specificato in un ordine nondescending o come un criterio di ordinamento specificato da un predicato binario e mantiene l'ordine degli elementi equivalenti.|  
|[swap](../dotnet/swap-stl-clr.md)|Scambia i valori degli elementi tra due tipi di oggetti, assegnanti il contenuto del primo oggetto dal secondo oggetto e il contenuto del secondo al primo.|  
|[swap\_ranges](../dotnet/swap-ranges-stl-clr.md)|Scambia gli elementi di un intervallo con gli elementi di un altro intervallo, taglia di uguale.|  
|[trasformazione](../dotnet/transform-stl-clr.md)|Applica un oggetto funzione specificata a ogni elemento in un intervallo di origine o a una coppia di elementi da due intervalli di origine e copiare i valori restituiti dell'oggetto funzione in un intervallo di destinazione.|  
|[univoco](../dotnet/unique-stl-clr.md)|Elimina elementi duplicati che sono adiacenti all'altro in un intervallo specificato.|  
|[unique\_copy](../dotnet/unique-copy-stl-clr.md)|Copiare gli elementi da un intervallo di origine in un intervallo di destinazione ad eccezione degli elementi duplicati che sono adiacenti all'altro.|  
|[upper\_bound](../dotnet/upper-bound-stl-clr.md)|Trova la posizione del primo elemento in un intervallo ordinato con un valore maggiore di o uguale a un valore specificato, in cui il criterio di ordinamento può essere specificato da un predicato binario.|  
  
## Requisiti  
 **Intestazione:**\<cliext\/algorithm\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [Libreria STL\/CLR](../dotnet/stl-clr-library-reference.md)