---
title: "hash_map (STL/CLR) | Microsoft Docs"
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
  - "cliext::hash_map"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<cliext/hash_map> (intestazione) [STL/CLR]"
  - "<hash_map> (intestazione) [STL/CLR]"
  - "hash_map (classe) [STL/CLR]"
ms.assetid: c3cfc69b-04c6-42ae-a30e-0eda953fe883
caps.latest.revision: 20
caps.handback.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# hash_map (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un oggetto che comandi di una sequenza variare lunghezza di elementi che ha accesso bidirezionale.  Utilizzare il contenitore `hash_map` per gestire una sequenza di elementi come tabella hash, ogni voce della tabella archiviando un elenco collegato bidirezionale di nodi e ogni nodo archiviando un elemento.  Un elemento è costituito da una chiave, per ordinare la sequenza e un valore mappato, su avanti per il nuovo.  
  
 In descrizione di seguito, `GValue` sono gli stessi di:  
  
 `Microsoft::VisualC::StlClr::GenericPair<GKey, GMapped>`  
  
 dove:  
  
 `GKey` sono gli stessi di `Key` eccetto l'ultimo sia un tipo di riferimento, nel qual caso viene `Key^`  
  
 `GMapped` sono gli stessi di `Mapped` eccetto l'ultimo sia un tipo di riferimento, nel qual caso viene `Mapped^`  
  
## Sintassi  
  
```  
template<typename Key,  
    typename Mapped>  
    ref class hash_map  
        :   public  
        System::ICloneable,  
        System::Collections::IEnumerable,  
        System::Collections::ICollection,  
        System::Collections::Generic::IEnumerable<GValue>,  
        System::Collections::Generic::ICollection<GValue>,  
        System::Collections::Generic::IList<GValue>,  
        System::Collections::Generic::IDictionary<Gkey, GMapped>,  
        Microsoft::VisualC::StlClr::IHash<Gkey, GValue>  
    { ..... };  
```  
  
#### Parametri  
 Chiave  
 Tipo del componente chiave di un elemento nella sequenza controllata.  
  
 Mappato  
 Il tipo del componente aggiuntivo di un elemento nella sequenza selezionata.  
  
## Membri  
  
|Definizione del tipo|Descrizione|  
|--------------------------|-----------------|  
|[hash\_map::const\_iterator](../dotnet/hash-map-const-iterator-stl-clr.md)|Il tipo di un iteratore costante della sequenza controllata.|  
|[hash\_map::const\_reference](../dotnet/hash-map-const-reference-stl-clr.md)|Il tipo di un riferimento costante a un elemento.|  
|[hash\_map::const\_reverse\_iterator](../dotnet/hash-map-const-reverse-iterator-stl-clr.md)|Il tipo di iteratore inverso costante per la sequenza selezionata.|  
|[hash\_map::difference\_type](../dotnet/hash-map-difference-type-stl-clr.md)|Il tipo di distanza \(eventualmente firmata\) tra due elementi.|  
|[hash\_map::generic\_container](../dotnet/hash-map-generic-container-stl-clr.md)|Il tipo dell'interfaccia generica del contenitore.|  
|[hash\_map::generic\_iterator](../dotnet/hash-map-generic-iterator-stl-clr.md)|Il tipo di iteratore per l'interfaccia generica del contenitore.|  
|[hash\_map::generic\_reverse\_iterator](../dotnet/hash-map-generic-reverse-iterator-stl-clr.md)|Il tipo di iteratore inverso per l'interfaccia generica del contenitore.|  
|[hash\_map::generic\_value](../dotnet/hash-map-generic-value-stl-clr.md)|Il tipo di elemento dell'interfaccia generica del contenitore.|  
|[hash\_map::hasher](../dotnet/hash-map-hasher-stl-clr.md)|Il delegato di hashing di una chiave.|  
|[hash\_map::iterator](../dotnet/hash-map-iterator-stl-clr.md)|Il tipo di un iteratore della sequenza controllata.|  
|[hash\_map::key\_compare](../dotnet/hash-map-key-compare-stl-clr.md)|Il delegato dell'ordine per due chiavi.|  
|[hash\_map::key\_type](../dotnet/hash-map-key-type-stl-clr.md)|Il tipo di una chiave di ordinamento.|  
|[hash\_map::mapped\_type](../dotnet/hash-map-mapped-type-stl-clr.md)|Il tipo del valore mappato associato a ogni chiave.|  
|[hash\_map::reference](../dotnet/hash-map-reference-stl-clr.md)|Il tipo di un riferimento a un elemento.|  
|[hash\_map::reverse\_iterator](../dotnet/hash-map-reverse-iterator-stl-clr.md)|Il tipo di iteratore inverso per la sequenza selezionata.|  
|[hash\_map::size\_type](../dotnet/hash-map-size-type-stl-clr.md)|Il tipo di distanza \(non negativa\) a tra due elementi.|  
|[hash\_map::value\_compare](../dotnet/hash-map-value-compare-stl-clr.md)|Il delegato dell'ordine per due valori degli elementi.|  
|[hash\_map::value\_type](../dotnet/hash-map-value-type-stl-clr.md)|Il tipo di un elemento.|  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[hash\_map::begin](../dotnet/hash-map-begin-stl-clr.md)|Definisce l'inizio della sequenza controllata.|  
|[hash\_map::bucket\_count](../dotnet/hash-map-bucket-count-stl-clr.md)|Viene calcolato il numero dei bucket.|  
|[hash\_map::clear](../dotnet/hash-map-clear-stl-clr.md)|Rimuove tutti gli elementi.|  
|[hash\_map::count](../dotnet/hash-map-count-stl-clr.md)|Conta gli elementi che soddisfano una chiave specificata.|  
|[hash\_map::empty](../dotnet/hash-map-empty-stl-clr.md)|Consente di verificare se non sono presenti elementi.|  
|[hash\_map::end](../dotnet/hash-map-end-stl-clr.md)|Definisce la fine della sequenza controllata.|  
|[hash\_map::equal\_range](../dotnet/hash-map-equal-range-stl-clr.md)|I rileva variano che corrisponde a una chiave specificata.|  
|[hash\_map::erase](../dotnet/hash-map-erase-stl-clr.md)|Rimuove gli elementi alle posizioni specificate.|  
|[hash\_map::find](../dotnet/hash-map-find-stl-clr.md)|Viene trovato un elemento che corrisponde alla chiave specificata.|  
|[hash\_map::hash\_delegate](../dotnet/hash-map-hash-delegate-stl-clr.md)|Copiare il delegato di hashing di una chiave.|  
|[hash\_map::hash\_map](../dotnet/hash-map-hash-map-stl-clr.md)|Costruisce un oggetto contenitore.|  
|[hash\_map::insert](../dotnet/hash-map-insert-stl-clr.md)|Aggiunge elementi.|  
|[hash\_map::key\_comp](../dotnet/hash-map-key-comp-stl-clr.md)|Copiare il delegato dell'ordine per due chiavi.|  
|[hash\_map::load\_factor](../dotnet/hash-map-load-factor-stl-clr.md)|Conta gli elementi e l'altro per bucket.|  
|[hash\_map::lower\_bound](../dotnet/hash-map-lower-bound-stl-clr.md)|Individuare l'inizio dell'intervallo che corrisponde a una chiave specificata.|  
|[hash\_map::make\_value](../dotnet/hash-map-make-value-stl-clr.md)|Costruisce un oggetto di valore.|  
|[hash\_map::max\_load\_factor](../dotnet/hash-map-max-load-factor-stl-clr.md)|Ottiene o imposta elementi massimo per bucket.|  
|[hash\_map::rbegin](../dotnet/hash-map-rbegin-stl-clr.md)|Definisce l'inizio della sequenza inversa controllata.|  
|[hash\_map::rehash](../dotnet/hash-map-rehash-stl-clr.md)|Ricompila la tabella hash.|  
|[hash\_map::rend](../dotnet/hash-map-rend-stl-clr.md)|Definisce la fine della sequenza inversa controllata.|  
|[hash\_map::size](../dotnet/hash-map-size-stl-clr.md)|Conta il numero di elementi.|  
|[hash\_map::swap](../dotnet/hash-map-swap-stl-clr.md)|Scambia il contenuto di due contenitori.|  
|[hash\_map::to\_array](../dotnet/hash-map-to-array-stl-clr.md)|Copia la sequenza selezionata una nuova matrice.|  
|[hash\_map::upper\_bound](../dotnet/hash-map-upper-bound-stl-clr.md)|Fine preleva di temporizzazione che corrisponde a una chiave specificata.|  
|[hash\_map::value\_comp](../dotnet/hash-map-value-comp-stl-clr.md)|Copiare il delegato dell'ordine per due valori degli elementi.|  
  
|Operatore|Descrizione|  
|---------------|-----------------|  
|[hash\_map::operator\=](../dotnet/hash-map-operator-assign-stl-clr.md)|Sostituisce la sequenza selezionata.|  
|[hash\_map::operator](../dotnet/hash-map-operator-stl-clr.md)|Esegue il mapping di una chiave al valore mappato collegato.|  
  
## Interfacce  
  
|Interfaccia|Descrizione|  
|-----------------|-----------------|  
|<xref:System.ICloneable>|Duplicare un oggetto.|  
|<xref:System.Collections.IEnumerable>|Sequenza degli elementi.|  
|<xref:System.Collections.ICollection>|Gestire il gruppo di elementi.|  
|<xref:System.Collections.Generic.IEnumerable%601>|Sequenza dagli elementi tipizzati.|  
|<xref:System.Collections.Generic.ICollection%601>|Gestire il gruppo di elementi tipizzati.|  
|<xref:System.Collections.Generic.IDictionary%602>|Gestire il gruppo {chiave, valore} di coppie.|  
|IHashKey\<, valore\>|Gestire il contenitore generico.|  
  
## Note  
 L'oggetto alloca e libera la memoria per la sequenza che controlla come singoli nodi in un elenco collegato bidirezionale.  Per velocizzare l'accesso, l'oggetto gestisce inoltre di una matrice a lunghezza dei puntatori nell'elenco \(la tabella hash\), efficiente senza modificare l'elenco di tutto come sequenza di sottoelenchi, o i bucket.  Non inserire mai gli elementi in un bucket che mantiene ordinato cambiando i collegamenti tra i nodi, copia il contenuto di un nodo a un altro.  Ciò significa che è possibile inserire liberamente e rimuovere elementi senza pregiudicare gli elementi rimanenti.  
  
 L'oggetto ordina ogni bucket che controlla chiamando un oggetto delegato archiviato di tipo [hash\_set::key\_compare](../dotnet/hash-set-key-compare-stl-clr.md).  È possibile specificare l'oggetto delegato archiviato quando si crea il hash\_set; se non si specifica oggetto delegato, l'impostazione predefinita è il confronto `operator<=(key_type, key_type)`.  
  
 Si accede all'oggetto delegato archiviato chiamando la funzione membro [hash\_set::key\_comp](../dotnet/hash-set-key-comp-stl-clr.md)`()`.  Tale oggetto delegato deve definire l'ordine equivalente tra le chiavi di tipo [hash\_set::key\_type](../dotnet/hash-set-key-type-stl-clr.md).  Ciò significa, per i due chiavi `X` e `Y`:  
  
 `key_comp()(X, Y)` restituisce lo stesso risultato booleano a ogni chiamata.  
  
 Se `key_comp()(X, Y) && key_comp()(Y, X)` è true, in `X` e `Y` causate da ordine equivalente.  
  
 Una regola di ordinamento che si comporta come `operator<=(key_type, key_type)`, `operator>=(key_type, key_type)` o `operator==(key_type, key_type)` definisce l'ordine eqivalent.  
  
 Si noti che il contenitore modo che solo gli elementi la cui le chiavi sono equivalenti \(ordine e con hash sullo stesso valore Integer\) siano adiacenti all'interno di un bucket.  A differenza della classe modello [hash\_multimap](../dotnet/hash-multimap-stl-clr.md), un oggetto classe modello `hash_map` garantisce che le chiavi per tutti gli elementi siano univoche. \(Non esistono due chiavi di ordinamento equivalente.\)  
  
 L'oggetto determina quali bucket deve contenere una chiave specificata di ordine chiamando un oggetto delegato archiviato di tipo [hash\_set::hasher](../dotnet/hash-set-hasher-stl-clr.md).  È possibile accedere a questo oggetto archiviato chiamando la funzione membro [hash\_set::hash\_delegate](../dotnet/hash-set-hash-delegate-stl-clr.md)`()` per ottenere un valore Integer che dipende dal valore della chiave.  È possibile specificare l'oggetto delegato archiviato quando si crea il hash\_set; se non si specifica oggetto delegato, l'impostazione predefinita è la funzione `System::Object::hash_value(key_type)`.  Ciò significa, per qualsiasi chiave `X` e `Y`:  
  
 `hash_delegate()(X)` restituisce lo stesso risultato intero a ogni chiamata.  
  
 Se `X` e `Y` ordine è equivalente, quindi `hash_delegate()(X)` deve restituire lo stesso risultato intero di `hash_delegate()(Y)`.  
  
 Ogni elemento contiene una chiave separata e un valore mappato.  La sequenza viene rappresentata in una modalità che consente la ricerca, l'inserimento e la rimozione di un elemento arbitrario attraverso una serie di operazioni che è indipendente dal numero di elementi della sequenza \(tempo costante\) \-\- almeno nel migliore dei casi.  Inoltre, inserendo un elemento non invalida iteratori e la rimozione di un elemento invalida solo gli iteratori che puntano all'elemento rimosso.  
  
 Se i valori con hash non vengono distribuiti uniformemente, tuttavia, un hash la tabella può degenerare.  Il limite \-\- per una funzione hash che restituisce sempre lo stesso valore \-\- la ricerca, l'inserimento e la rimozione sono proporzionali al numero di elementi della sequenza \(temporale lineare\).  Il contenitore tenta di scegliere una funzione hash ragionevole, una dimensione media del bucket e una dimensione hashtable \(numero totale dei bucket\), ma è possibile eseguire l'override di qualsiasi di queste scelte.  Vedere, ad esempio, le funzioni [hash\_set::max\_load\_factor](../dotnet/hash-set-max-load-factor-stl-clr.md) e [hash\_set::rehash](../dotnet/hash-set-rehash-stl-clr.md).  
  
 Un hash\_map supporta gli iteratori bidirezionali, è possibile avanzare agli elementi adiacenti fornito un iteratore che definisce un elemento nella sequenza selezionata.  Un nodo head speciale corrisponde all'iteratore restituito da [hash\_map::end](../dotnet/hash-map-end-stl-clr.md)`()`.  È possibile diminuire questo iteratore per ottenere l'ultimo elemento della sequenza selezionata, se presente.  È possibile incrementare un iteratore di hash\_map per ottenere il nodo head quindi confronterà il segno di uguale a `end()`.  Ma non è possibile dereferenziare l'iteratore restituito da `end()`.  
  
 Si noti che non è possibile fare riferimento a un elemento del hash\_map fornito direttamente la posizione numerica \-\- ciò richiede un iteratore di accesso casuale.  
  
 Un iteratore di hash\_map memorizzare l'handle al nodo collegato di hash\_map, che a sua volta memorizzare l'handle al relativo contenitore collegato.  È possibile utilizzare gli iteratori solo con i relativi oggetti contenitore collegati.  Un iteratore di hash\_map rimane valido a condizione che il relativo nodo collegato di hash\_map è associato ad alcuni hash\_map.  Inoltre, un iteratore valido è dereferencable \-\- è possibile utilizzarlo per accedere e modificare il valore dell'elemento che definisce \-\- a condizione che non sia uguale a `end()`.  
  
 Clearing or rimozione di un elemento chiama il distruttore per il valore archiviato.  Eliminare il contenitore di cancellare tutti gli elementi.  Pertanto, un contenitore del cui tipo di elemento è una classe di riferimento garantisce che nessun elemento sopravviva il contenitore.  Nota, tuttavia, che un contenitore handles fa `not` eliminato i relativi elementi.  
  
## Requisiti  
 **Intestazione:**\<cliext\/hash\_map\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [hash\_map](../dotnet/hash-map-stl-clr.md)   
 [hash\_multiset](../dotnet/hash-multiset-stl-clr.md)   
 [hash\_set](../dotnet/hash-set-stl-clr.md)   
 [map](../dotnet/map-stl-clr.md)   
 [multimap](../dotnet/multimap-stl-clr.md)   
 [multiset](../dotnet/multiset-stl-clr.md)   
 [set](../dotnet/set-stl-clr.md)   
 [Libreria STL\/CLR](../dotnet/stl-clr-library-reference.md)