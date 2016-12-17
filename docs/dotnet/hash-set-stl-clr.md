---
title: "hash_set (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::hash_set"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<cliext/hash_set> (intestazione) [STL/CLR]"
  - "<hash_set> (intestazione) [STL/CLR]"
  - "hash_set (classe) [STL/CLR]"
ms.assetid: d110e356-ba3e-4e52-9e2d-d997bf975c96
caps.latest.revision: 18
caps.handback.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# hash_set (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un oggetto che comandi di una sequenza variare lunghezza di elementi che ha accesso bidirezionale.  Utilizzare il contenitore `hash_set` per gestire una sequenza di elementi come tabella hash, ogni voce della tabella archiviando un elenco collegato bidirezionale di nodi e ogni nodo archiviando un elemento.  Il valore di ciascun elemento viene utilizzato come chiave, ordinare la sequenza.  
  
 In descrizione di seguito, `GValue` sono gli stessi di `GKey`, che a sua volta corrispondano a quelli di `Key` eccetto l'ultimo sia un tipo di riferimento, nel qual caso viene `Key^`.  
  
## Sintassi  
  
```  
template<typename Key>  
    ref class hash_set  
        :   public  
        System::ICloneable,  
        System::Collections::IEnumerable,  
        System::Collections::ICollection,  
        System::Collections::Generic::IEnumerable<GValue>,  
        System::Collections::Generic::ICollection<GValue>,  
        System::Collections::Generic::IList<GValue>,  
        Microsoft::VisualC::StlClr::IHash<Gkey, GValue>  
    { ..... };  
```  
  
#### Parametri  
 Chiave  
 Tipo del componente chiave di un elemento nella sequenza controllata.  
  
## Membri  
  
|Definizione del tipo|Descrizione|  
|--------------------------|-----------------|  
|[hash\_set::const\_iterator](../dotnet/hash-set-const-iterator-stl-clr.md)|Il tipo di un iteratore costante della sequenza controllata.|  
|[hash\_set::const\_reference](../dotnet/hash-set-const-reference-stl-clr.md)|Il tipo di un riferimento costante a un elemento.|  
|[hash\_set::const\_reverse\_iterator](../dotnet/hash-set-const-reverse-iterator-stl-clr.md)|Il tipo di iteratore inverso costante per la sequenza selezionata.|  
|[hash\_set::difference\_type](../dotnet/hash-set-difference-type-stl-clr.md)|Il tipo di distanza \(eventualmente firmata\) tra due elementi.|  
|[hash\_set::generic\_container](../dotnet/hash-set-generic-container-stl-clr.md)|Il tipo dell'interfaccia generica del contenitore.|  
|[hash\_set::generic\_iterator](../dotnet/hash-set-generic-iterator-stl-clr.md)|Il tipo di iteratore per l'interfaccia generica del contenitore.|  
|[hash\_set::generic\_reverse\_iterator](../dotnet/hash-set-generic-reverse-iterator-stl-clr.md)|Il tipo di iteratore inverso per l'interfaccia generica del contenitore.|  
|[hash\_set::generic\_value](../dotnet/hash-set-generic-value-stl-clr.md)|Il tipo di elemento dell'interfaccia generica del contenitore.|  
|[hash\_set::hasher](../dotnet/hash-set-hasher-stl-clr.md)|Il delegato di hashing di una chiave.|  
|[hash\_set::iterator](../dotnet/hash-set-iterator-stl-clr.md)|Il tipo di un iteratore della sequenza controllata.|  
|[hash\_set::key\_compare](../dotnet/hash-set-key-compare-stl-clr.md)|Il delegato dell'ordine per due chiavi.|  
|[hash\_set::key\_type](../dotnet/hash-set-key-type-stl-clr.md)|Il tipo di una chiave di ordinamento.|  
|[hash\_set::reference](../dotnet/hash-set-reference-stl-clr.md)|Il tipo di un riferimento a un elemento.|  
|[hash\_set::reverse\_iterator](../dotnet/hash-set-reverse-iterator-stl-clr.md)|Il tipo di iteratore inverso per la sequenza selezionata.|  
|[hash\_set::size\_type](../dotnet/hash-set-size-type-stl-clr.md)|Il tipo di distanza \(non negativa\) a tra due elementi.|  
|[hash\_set::value\_compare](../dotnet/hash-set-value-compare-stl-clr.md)|Il delegato dell'ordine per due valori degli elementi.|  
|[hash\_set::value\_type](../dotnet/hash-set-value-type-stl-clr.md)|Il tipo di un elemento.|  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[hash\_set::begin](../dotnet/hash-set-begin-stl-clr.md)|Definisce l'inizio della sequenza controllata.|  
|[hash\_set::bucket\_count](../dotnet/hash-set-bucket-count-stl-clr.md)|Viene calcolato il numero dei bucket.|  
|[hash\_set::clear](../dotnet/hash-set-clear-stl-clr.md)|Rimuove tutti gli elementi.|  
|[hash\_set::count](../dotnet/hash-set-count-stl-clr.md)|Conta gli elementi che soddisfano una chiave specificata.|  
|[hash\_set::empty](../dotnet/hash-set-empty-stl-clr.md)|Consente di verificare se non sono presenti elementi.|  
|[hash\_set::end](../dotnet/hash-set-end-stl-clr.md)|Definisce la fine della sequenza controllata.|  
|[hash\_set::equal\_range](../dotnet/hash-set-equal-range-stl-clr.md)|I rileva variano che corrisponde a una chiave specificata.|  
|[hash\_set::erase](../dotnet/hash-set-erase-stl-clr.md)|Rimuove gli elementi alle posizioni specificate.|  
|[hash\_set::find](../dotnet/hash-set-find-stl-clr.md)|Viene trovato un elemento che corrisponde alla chiave specificata.|  
|[hash\_set::hash\_delegate](../dotnet/hash-set-hash-delegate-stl-clr.md)|Copiare il delegato di hashing di una chiave.|  
|[hash\_set::hash\_set](../dotnet/hash-set-hash-set-stl-clr.md)|Costruisce un oggetto contenitore.|  
|[hash\_set::insert](../dotnet/hash-set-insert-stl-clr.md)|Aggiunge elementi.|  
|[hash\_set::key\_comp](../dotnet/hash-set-key-comp-stl-clr.md)|Copiare il delegato dell'ordine per due chiavi.|  
|[hash\_set::load\_factor](../dotnet/hash-set-load-factor-stl-clr.md)|Conta gli elementi e l'altro per bucket.|  
|[hash\_set::lower\_bound](../dotnet/hash-set-lower-bound-stl-clr.md)|Individuare l'inizio dell'intervallo che corrisponde a una chiave specificata.|  
|[hash\_set::make\_value](../dotnet/hash-set-make-value-stl-clr.md)|Costruisce un oggetto di valore.|  
|[hash\_set::max\_load\_factor](../dotnet/hash-set-max-load-factor-stl-clr.md)|Ottiene o imposta elementi massimo per bucket.|  
|[hash\_set::rbegin](../dotnet/hash-set-rbegin-stl-clr.md)|Definisce l'inizio della sequenza inversa controllata.|  
|[hash\_set::rehash](../dotnet/hash-set-rehash-stl-clr.md)|Ricompila la tabella hash.|  
|[hash\_set::rend](../dotnet/hash-set-rend-stl-clr.md)|Definisce la fine della sequenza inversa controllata.|  
|[hash\_set::size](../dotnet/hash-set-size-stl-clr.md)|Conta il numero di elementi.|  
|[hash\_set::swap](../dotnet/hash-set-swap-stl-clr.md)|Scambia il contenuto di due contenitori.|  
|[hash\_set::to\_array](../dotnet/hash-set-to-array-stl-clr.md)|Copia la sequenza selezionata una nuova matrice.|  
|[hash\_set::upper\_bound](../dotnet/hash-set-upper-bound-stl-clr.md)|Fine preleva di temporizzazione che corrisponde a una chiave specificata.|  
|[hash\_set::value\_comp](../dotnet/hash-set-value-comp-stl-clr.md)|Copiare il delegato dell'ordine per due valori degli elementi.|  
  
|Operatore|Descrizione|  
|---------------|-----------------|  
|[hash\_set::operator\=](../dotnet/hash-set-operator-assign-stl-clr.md)|Sostituisce la sequenza selezionata.|  
  
## Interfacce  
  
|Interfaccia|Descrizione|  
|-----------------|-----------------|  
|<xref:System.ICloneable>|Duplicare un oggetto.|  
|<xref:System.Collections.IEnumerable>|Sequenza degli elementi.|  
|<xref:System.Collections.ICollection>|Gestire il gruppo di elementi.|  
|<xref:System.Collections.Generic.IEnumerable%601>|Sequenza dagli elementi tipizzati.|  
|<xref:System.Collections.Generic.ICollection%601>|Gestire il gruppo di elementi tipizzati.|  
|IHashKey\<, valore\>|Gestire il contenitore generico.|  
  
## Note  
 L'oggetto alloca e libera la memoria per la sequenza che controlla come singoli nodi in un elenco collegato bidirezionale.  Per velocizzare l'accesso, l'oggetto gestisce inoltre di una matrice a lunghezza dei puntatori nell'elenco \(la tabella hash\), efficiente senza modificare l'elenco di tutto come sequenza di sottoelenchi, o i bucket.  Non inserire mai gli elementi in un bucket che mantiene ordinato cambiando i collegamenti tra i nodi, copia il contenuto di un nodo a un altro.  Ciò significa che è possibile inserire liberamente e rimuovere elementi senza pregiudicare gli elementi rimanenti.  
  
 L'oggetto ordina ogni bucket che controlla chiamando un oggetto delegato archiviato di tipo [hash\_set::key\_compare](../dotnet/hash-set-key-compare-stl-clr.md).  È possibile specificare l'oggetto delegato archiviato quando si crea il hash\_set; se non si specifica oggetto delegato, l'impostazione predefinita è il confronto `operator<=(key_type, key_type)`.  
  
 Si accede all'oggetto delegato archiviato chiamando la funzione membro [hash\_set::key\_comp](../dotnet/hash-set-key-comp-stl-clr.md)`()`.  Tale oggetto delegato deve definire l'ordine equivalente tra le chiavi di tipo [hash\_set::key\_type](../dotnet/hash-set-key-type-stl-clr.md).  Ciò significa, per i due chiavi `X` e `Y`:  
  
 `key_comp()(X, Y)` restituisce lo stesso risultato booleano a ogni chiamata.  
  
 Se `key_comp()(X, Y) && key_comp()(Y, X)` è true, in `X` e `Y` causate da ordine equivalente.  
  
 Una regola di ordinamento che si comporta come `operator<=(key_type, key_type)`, `operator>=(key_type, key_type)` o `operator==(key_type, key_type)` definisce l'ordine eqivalent.  
  
 Si noti che il contenitore modo che solo gli elementi la cui le chiavi sono equivalenti \(ordine e con hash sullo stesso valore Integer\) siano adiacenti all'interno di un bucket.  A differenza della classe modello [hash\_multiset](../dotnet/hash-multiset-stl-clr.md), un oggetto classe modello `hash_set` garantisce che le chiavi per tutti gli elementi siano univoche. \(Non esistono due chiavi di ordinamento equivalente.\)  
  
 L'oggetto determina quali bucket deve contenere una chiave specificata di ordine chiamando un oggetto delegato archiviato di tipo [hash\_set::hasher](../dotnet/hash-set-hasher-stl-clr.md).  È possibile accedere a questo oggetto archiviato chiamando la funzione membro [hash\_set::hash\_delegate](../dotnet/hash-set-hash-delegate-stl-clr.md)`()` per ottenere un valore Integer che dipende dal valore della chiave.  È possibile specificare l'oggetto delegato archiviato quando si crea il hash\_set; se non si specifica oggetto delegato, l'impostazione predefinita è la funzione `System::Object::hash_value(key_type)`.  Ciò significa, per qualsiasi chiave `X` e `Y`:  
  
 `hash_delegate()(X)` restituisce lo stesso risultato intero a ogni chiamata.  
  
 Se `X` e `Y` ordine è equivalente, quindi `hash_delegate()(X)` deve restituire lo stesso risultato intero di `hash_delegate()(Y)`.  
  
 Ogni elemento viene utilizzato sia chiave che valore.  La sequenza viene rappresentata in una modalità che consente la ricerca, l'inserimento e la rimozione di un elemento arbitrario attraverso una serie di operazioni che è indipendente dal numero di elementi della sequenza \(tempo costante\) \-\- almeno nel migliore dei casi.  Inoltre, inserendo un elemento non invalida iteratori e la rimozione di un elemento invalida solo gli iteratori che puntano all'elemento rimosso.  
  
 Se i valori con hash non vengono distribuiti uniformemente, tuttavia, un hash la tabella può degenerare.  Il limite \-\- per una funzione hash che restituisce sempre lo stesso valore \-\- la ricerca, l'inserimento e la rimozione sono proporzionali al numero di elementi della sequenza \(temporale lineare\).  Il contenitore tenta di scegliere una funzione hash ragionevole, una dimensione media del bucket e una dimensione hashtable \(numero totale dei bucket\), ma è possibile eseguire l'override di qualsiasi di queste scelte.  Vedere, ad esempio, le funzioni [hash\_set::max\_load\_factor](../dotnet/hash-set-max-load-factor-stl-clr.md) e [hash\_set::rehash](../dotnet/hash-set-rehash-stl-clr.md).  
  
 Un hash\_set supporta gli iteratori bidirezionali, è possibile avanzare agli elementi adiacenti fornito un iteratore che definisce un elemento nella sequenza selezionata.  Un nodo head speciale corrisponde all'iteratore restituito da [hash\_set::end](../dotnet/hash-set-end-stl-clr.md)`()`.  È possibile diminuire questo iteratore per ottenere l'ultimo elemento della sequenza selezionata, se presente.  È possibile incrementare un iteratore di hash\_set per ottenere il nodo head quindi confronterà il segno di uguale a `end()`.  Ma non è possibile dereferenziare l'iteratore restituito da `end()`.  
  
 Si noti che non è possibile fare riferimento a un elemento del hash\_set fornito direttamente la posizione numerica \-\- ciò richiede un iteratore di accesso casuale.  
  
 Un iteratore di hash\_set memorizzare l'handle al nodo collegato di hash\_set, che a sua volta memorizzare l'handle al relativo contenitore collegato.  È possibile utilizzare gli iteratori solo con i relativi oggetti contenitore collegati.  Un iteratore di hash\_set rimane valido a condizione che il relativo nodo collegato di hash\_set è associato ad alcuni hash\_set.  Inoltre, un iteratore valido è dereferencable \-\- è possibile utilizzarlo per accedere e modificare il valore dell'elemento che definisce \-\- a condizione che non sia uguale a `end()`.  
  
 Clearing or rimozione di un elemento chiama il distruttore per il valore archiviato.  Eliminare il contenitore di cancellare tutti gli elementi.  Pertanto, un contenitore del cui tipo di elemento è una classe di riferimento garantisce che nessun elemento sopravviva il contenitore.  Nota, tuttavia, che un contenitore handles fa `not` eliminato i relativi elementi.  
  
## Requisiti  
 **Intestazione:**\<cliext\/hash\_set\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [hash\_map](../dotnet/hash-map-stl-clr.md)   
 [hash\_set](../dotnet/hash-set-stl-clr.md)   
 [hash\_set](../dotnet/hash-set-stl-clr.md)   
 [map](../dotnet/map-stl-clr.md)   
 [set](../dotnet/set-stl-clr.md)   
 [set](../dotnet/set-stl-clr.md)   
 [set](../dotnet/set-stl-clr.md)   
 [Libreria STL\/CLR](../dotnet/stl-clr-library-reference.md)