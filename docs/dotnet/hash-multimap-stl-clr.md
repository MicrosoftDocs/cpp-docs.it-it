---
title: "hash_multimap (STL/CLR) | Microsoft Docs"
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
  - "cliext::hash_multimap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<cliext/hash_map> (intestazione) [STL/CLR]"
  - "<hash_map> (intestazione) [STL/CLR]"
  - "hash_multimap (classe) [STL/CLR]"
ms.assetid: cd78687b-8a05-48e0-9d22-8b8194ae3b0b
caps.latest.revision: 19
caps.handback.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# hash_multimap (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un oggetto che comandi di una sequenza variare lunghezza di elementi che ha accesso bidirezionale.  Utilizzare il contenitore `hash_multimap` per gestire una sequenza di elementi come tabella hash, ogni voce della tabella archiviando un elenco collegato bidirezionale di nodi e ogni nodo archiviando un elemento.  Un elemento è costituito da una chiave, per ordinare la sequenza e un valore mappato, su avanti per il nuovo.  
  
 In descrizione di seguito, `GValue` sono gli stessi di:  
  
 `Microsoft::VisualC::StlClr::GenericPair<GKey, GMapped>`  
  
 dove:  
  
 `GKey` sono gli stessi di `Key` eccetto l'ultimo sia un tipo di riferimento, nel qual caso viene `Key^`  
  
 `GMapped` sono gli stessi di `Mapped` eccetto l'ultimo sia un tipo di riferimento, nel qual caso viene `Mapped^`  
  
## Sintassi  
  
```  
template<typename Key,  
    typename Mapped>  
    ref class hash_multimap  
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
  
 Mappato  
 Il tipo del componente aggiuntivo di un elemento nella sequenza selezionata.  
  
## Membri  
  
|Definizione del tipo|Descrizione|  
|--------------------------|-----------------|  
|[hash\_multimap::const\_iterator](../dotnet/hash-multimap-const-iterator-stl-clr.md)|Il tipo di un iteratore costante della sequenza controllata.|  
|[hash\_multimap::const\_reference](../dotnet/hash-multimap-const-reference-stl-clr.md)|Il tipo di un riferimento costante a un elemento.|  
|[hash\_multimap::const\_reverse\_iterator](../dotnet/hash-multimap-const-reverse-iterator-stl-clr.md)|Il tipo di iteratore inverso costante per la sequenza selezionata.|  
|[hash\_multimap::difference\_type](../dotnet/hash-multimap-difference-type-stl-clr.md)|Il tipo di distanza \(eventualmente firmata\) tra due elementi.|  
|[hash\_multimap::generic\_container](../dotnet/hash-multimap-generic-container-stl-clr.md)|Il tipo dell'interfaccia generica del contenitore.|  
|[hash\_multimap::generic\_iterator](../dotnet/hash-multimap-generic-iterator-stl-clr.md)|Il tipo di iteratore per l'interfaccia generica del contenitore.|  
|[hash\_multimap::generic\_reverse\_iterator](../dotnet/hash-multimap-generic-reverse-iterator-stl-clr.md)|Il tipo di iteratore inverso per l'interfaccia generica del contenitore.|  
|[hash\_multimap::generic\_value](../dotnet/hash-multimap-generic-value-stl-clr.md)|Il tipo di elemento dell'interfaccia generica del contenitore.|  
|[hash\_multimap::hasher](../dotnet/hash-multimap-hasher-stl-clr.md)|Il delegato di hashing di una chiave.|  
|[hash\_multimap::iterator](../dotnet/hash-multimap-iterator-stl-clr.md)|Il tipo di un iteratore della sequenza controllata.|  
|[hash\_multimap::key\_compare](../dotnet/hash-multimap-key-compare-stl-clr.md)|Il delegato dell'ordine per due chiavi.|  
|[hash\_multimap::key\_type](../dotnet/hash-multimap-key-type-stl-clr.md)|Il tipo di una chiave di ordinamento.|  
|[hash\_multimap::mapped\_type](../dotnet/hash-multimap-mapped-type-stl-clr.md)|Il tipo del valore mappato associato a ogni chiave.|  
|[hash\_multimap::reference](../dotnet/hash-multimap-reference-stl-clr.md)|Il tipo di un riferimento a un elemento.|  
|[hash\_multimap::reverse\_iterator](../dotnet/hash-multimap-reverse-iterator-stl-clr.md)|Il tipo di iteratore inverso per la sequenza selezionata.|  
|[hash\_multimap::size\_type](../dotnet/hash-multimap-size-type-stl-clr.md)|Il tipo di distanza \(non negativa\) a tra due elementi.|  
|[hash\_multimap::value\_compare](../dotnet/hash-multimap-value-compare-stl-clr.md)|Il delegato dell'ordine per due valori degli elementi.|  
|[hash\_multimap::value\_type](../dotnet/hash-multimap-value-type-stl-clr.md)|Il tipo di un elemento.|  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[hash\_multimap::begin](../dotnet/hash-multimap-begin-stl-clr.md)|Definisce l'inizio della sequenza controllata.|  
|[hash\_multimap::bucket\_count](../dotnet/hash-multimap-bucket-count-stl-clr.md)|Viene calcolato il numero dei bucket.|  
|[hash\_multimap::clear](../dotnet/hash-multimap-clear-stl-clr.md)|Rimuove tutti gli elementi.|  
|[hash\_multimap::count](../dotnet/hash-multimap-count-stl-clr.md)|Conta gli elementi che soddisfano una chiave specificata.|  
|[hash\_multimap::empty](../dotnet/hash-multimap-empty-stl-clr.md)|Consente di verificare se non sono presenti elementi.|  
|[hash\_multimap::end](../dotnet/hash-multimap-end-stl-clr.md)|Definisce la fine della sequenza controllata.|  
|[hash\_multimap::equal\_range](../dotnet/hash-multimap-equal-range-stl-clr.md)|I rileva variano che corrisponde a una chiave specificata.|  
|[hash\_multimap::erase](../dotnet/hash-multimap-erase-stl-clr.md)|Rimuove gli elementi alle posizioni specificate.|  
|[hash\_multimap::find](../dotnet/hash-multimap-find-stl-clr.md)|Viene trovato un elemento che corrisponde alla chiave specificata.|  
|[hash\_multimap::hash\_delegate](../dotnet/hash-multimap-hash-delegate-stl-clr.md)|Copiare il delegato di hashing di una chiave.|  
|[hash\_multimap::hash\_multimap](../dotnet/hash-multimap-hash-multimap-stl-clr.md)|Costruisce un oggetto contenitore.|  
|[hash\_multimap::insert](../dotnet/hash-multimap-insert-stl-clr.md)|Aggiunge elementi.|  
|[hash\_multimap::key\_comp](../dotnet/hash-multimap-key-comp-stl-clr.md)|Copiare il delegato dell'ordine per due chiavi.|  
|[hash\_multimap::load\_factor](../dotnet/hash-multimap-load-factor-stl-clr.md)|Conta gli elementi e l'altro per bucket.|  
|[hash\_multimap::lower\_bound](../dotnet/hash-multimap-lower-bound-stl-clr.md)|Individuare l'inizio dell'intervallo che corrisponde a una chiave specificata.|  
|[hash\_multimap::make\_value](../dotnet/hash-multimap-make-value-stl-clr.md)|Costruisce un oggetto di valore.|  
|[hash\_multimap::max\_load\_factor](../dotnet/hash-multimap-max-load-factor-stl-clr.md)|Ottiene o imposta elementi massimo per bucket.|  
|[hash\_multimap::rbegin](../dotnet/hash-multimap-rbegin-stl-clr.md)|Definisce l'inizio della sequenza inversa controllata.|  
|[hash\_multimap::rehash](../dotnet/hash-multimap-rehash-stl-clr.md)|Ricompila la tabella hash.|  
|[hash\_multimap::rend](../dotnet/hash-multimap-rend-stl-clr.md)|Definisce la fine della sequenza inversa controllata.|  
|[hash\_multimap::size](../dotnet/hash-multimap-size-stl-clr.md)|Conta il numero di elementi.|  
|[hash\_multimap::swap](../dotnet/hash-multimap-swap-stl-clr.md)|Scambia il contenuto di due contenitori.|  
|[hash\_multimap::to\_array](../dotnet/hash-multimap-to-array-stl-clr.md)|Copia la sequenza selezionata una nuova matrice.|  
|[hash\_multimap::upper\_bound](../dotnet/hash-multimap-upper-bound-stl-clr.md)|Fine preleva di temporizzazione che corrisponde a una chiave specificata.|  
|[hash\_multimap::value\_comp](../dotnet/hash-multimap-value-comp-stl-clr.md)|Copiare il delegato dell'ordine per due valori degli elementi.|  
  
|Operatore|Descrizione|  
|---------------|-----------------|  
|[hash\_multimap::operator\=](../dotnet/hash-multimap-operator-assign-stl-clr.md)|Sostituisce la sequenza selezionata.|  
  
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
  
 Si noti che il contenitore modo che solo gli elementi la cui le chiavi sono equivalenti \(ordine e con hash sullo stesso valore Integer\) siano adiacenti all'interno di un bucket.  A differenza della classe modello [hash\_map](../dotnet/hash-map-stl-clr.md), un oggetto classe modello `hash_multimap` non richiede che le chiavi per tutti gli elementi siano univoche. \(Due o più chiavi possono avere ordine equivalente.\)  
  
 L'oggetto determina quali bucket deve contenere una chiave specificata di ordine chiamando un oggetto delegato archiviato di tipo [hash\_set::hasher](../dotnet/hash-set-hasher-stl-clr.md).  È possibile accedere a questo oggetto archiviato chiamando la funzione membro [hash\_set::hash\_delegate](../dotnet/hash-set-hash-delegate-stl-clr.md)`()` per ottenere un valore Integer che dipende dal valore della chiave.  È possibile specificare l'oggetto delegato archiviato quando si crea il hash\_set; se non si specifica oggetto delegato, l'impostazione predefinita è la funzione `System::Object::hash_value(key_type)`.  Ciò significa, per qualsiasi chiave `X` e `Y`:  
  
 `hash_delegate()(X)` restituisce lo stesso risultato intero a ogni chiamata.  
  
 Se `X` e `Y` ordine è equivalente, quindi `hash_delegate()(X)` deve restituire lo stesso risultato intero di `hash_delegate()(Y)`.  
  
 Ogni elemento contiene una chiave separata e un valore mappato.  La sequenza viene rappresentata in una modalità che consente la ricerca, l'inserimento e la rimozione di un elemento arbitrario attraverso una serie di operazioni che è indipendente dal numero di elementi della sequenza \(tempo costante\) \-\- almeno nel migliore dei casi.  Inoltre, inserendo un elemento non invalida iteratori e la rimozione di un elemento invalida solo gli iteratori che puntano all'elemento rimosso.  
  
 Se i valori con hash non vengono distribuiti uniformemente, tuttavia, un hash la tabella può degenerare.  Il limite \-\- per una funzione hash che restituisce sempre lo stesso valore \-\- la ricerca, l'inserimento e la rimozione sono proporzionali al numero di elementi della sequenza \(temporale lineare\).  Il contenitore tenta di scegliere una funzione hash ragionevole, una dimensione media del bucket e una dimensione hashtable \(numero totale dei bucket\), ma è possibile eseguire l'override di qualsiasi di queste scelte.  Vedere, ad esempio, le funzioni [hash\_set::max\_load\_factor](../dotnet/hash-set-max-load-factor-stl-clr.md) e [hash\_set::rehash](../dotnet/hash-set-rehash-stl-clr.md).  
  
 Un hash\_multimap supporta gli iteratori bidirezionali, è possibile avanzare agli elementi adiacenti fornito un iteratore che definisce un elemento nella sequenza selezionata.  Un nodo head speciale corrisponde all'iteratore restituito da [hash\_multimap::end](../dotnet/hash-multimap-end-stl-clr.md)`()`.  È possibile diminuire questo iteratore per ottenere l'ultimo elemento della sequenza selezionata, se presente.  È possibile incrementare un iteratore di hash\_multimap per ottenere il nodo head quindi confronterà il segno di uguale a `end()`.  Ma non è possibile dereferenziare l'iteratore restituito da `end()`.  
  
 Si noti che non è possibile fare riferimento a un elemento del hash\_multimap fornito direttamente la posizione numerica \-\- ciò richiede un iteratore di accesso casuale.  
  
 Un iteratore di hash\_multimap memorizzare l'handle al nodo collegato di hash\_multimap, che a sua volta memorizzare l'handle al relativo contenitore collegato.  È possibile utilizzare gli iteratori solo con i relativi oggetti contenitore collegati.  Un iteratore di hash\_multimap rimane valido a condizione che il relativo nodo collegato di hash\_multimap è associato ad alcuni hash\_multimap.  Inoltre, un iteratore valido è dereferencable \-\- è possibile utilizzarlo per accedere e modificare il valore dell'elemento che definisce \-\- a condizione che non sia uguale a `end()`.  
  
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