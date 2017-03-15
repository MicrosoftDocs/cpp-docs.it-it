---
title: "map (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::map"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<cliext/map> (intestazione) [STL/CLR]"
  - "<map> (intestazione) [STL/CLR]"
  - "Map (classe) [STL/CLR]"
ms.assetid: 8b0a7764-b5e4-4175-a802-82b72eb8662a
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 18
---
# map (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un oggetto che comandi di una sequenza variare lunghezza di elementi che ha accesso bidirezionale.  Utilizzare il contenitore `map` per gestire una sequenza di elementi how to \(quasi\) è bilanciato la struttura ad albero ordinata di nodi, ogni un elemento archiviando.  Un elemento è costituito da una chiave, per ordinare la sequenza e un valore mappato, su avanti per il nuovo.  
  
 In descrizione di seguito, `GValue` sono gli stessi di:  
  
 `Microsoft::VisualC::StlClr::GenericPair<GKey, GMapped>`  
  
 dove:  
  
 `GKey` sono gli stessi di `Key` eccetto l'ultimo sia un tipo di riferimento, nel qual caso viene `Key^`  
  
 `GMapped` sono gli stessi di `Mapped` eccetto l'ultimo sia un tipo di riferimento, nel qual caso viene `Mapped^`  
  
## Sintassi  
  
```  
template<typename Key,  
    typename Mapped>  
    ref class map  
        :   public  
        System::ICloneable,  
        System::Collections::IEnumerable,  
        System::Collections::ICollection,  
        System::Collections::Generic::IEnumerable<GValue>,  
        System::Collections::Generic::ICollection<GValue>,  
        System::Collections::Generic::IList<GValue>,  
        System::Collections::Generic::IDictionary<Gkey, GMapped>,  
        Microsoft::VisualC::StlClr::ITree<Gkey, GValue>  
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
|[map::const\_iterator](../dotnet/map-const-iterator-stl-clr.md)|Il tipo di un iteratore costante della sequenza controllata.|  
|[map::const\_reference](../dotnet/map-const-reference-stl-clr.md)|Il tipo di un riferimento costante a un elemento.|  
|[map::const\_reverse\_iterator](../dotnet/map-const-reverse-iterator-stl-clr.md)|Il tipo di iteratore inverso costante per la sequenza selezionata.|  
|[map::difference\_type](../dotnet/map-difference-type-stl-clr.md)|Il tipo di distanza \(eventualmente firmata\) tra due elementi.|  
|[map::generic\_container](../dotnet/map-generic-container-stl-clr.md)|Il tipo dell'interfaccia generica del contenitore.|  
|[map::generic\_iterator](../dotnet/map-generic-iterator-stl-clr.md)|Il tipo di iteratore per l'interfaccia generica del contenitore.|  
|[map::generic\_reverse\_iterator](../dotnet/map-generic-reverse-iterator-stl-clr.md)|Il tipo di iteratore inverso per l'interfaccia generica del contenitore.|  
|[map::generic\_value](../dotnet/map-generic-value-stl-clr.md)|Il tipo di elemento dell'interfaccia generica del contenitore.|  
|[map::iterator](../dotnet/map-iterator-stl-clr.md)|Il tipo di un iteratore della sequenza controllata.|  
|[map::key\_compare](../dotnet/map-key-compare-stl-clr.md)|Il delegato dell'ordine per due chiavi.|  
|[map::key\_type](../dotnet/map-key-type-stl-clr.md)|Il tipo di una chiave di ordinamento.|  
|[map::mapped\_type](../dotnet/map-mapped-type-stl-clr.md)|Il tipo del valore mappato associato a ogni chiave.|  
|[map::reference](../dotnet/map-reference-stl-clr.md)|Il tipo di un riferimento a un elemento.|  
|[map::reverse\_iterator](../dotnet/map-reverse-iterator-stl-clr.md)|Il tipo di iteratore inverso per la sequenza selezionata.|  
|[map::size\_type](../dotnet/map-size-type-stl-clr.md)|Il tipo di distanza \(non negativa\) a tra due elementi.|  
|[map::value\_compare](../dotnet/map-value-compare-stl-clr.md)|Il delegato dell'ordine per due valori degli elementi.|  
|[map::value\_type](../dotnet/map-value-type-stl-clr.md)|Il tipo di un elemento.|  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[map::begin](../dotnet/map-begin-stl-clr.md)|Definisce l'inizio della sequenza controllata.|  
|[map::clear](../dotnet/map-clear-stl-clr.md)|Rimuove tutti gli elementi.|  
|[map::count](../dotnet/map-count-stl-clr.md)|Conta gli elementi che soddisfano una chiave specificata.|  
|[map::empty](../dotnet/map-empty-stl-clr.md)|Consente di verificare se non sono presenti elementi.|  
|[map::end](../dotnet/map-end-stl-clr.md)|Definisce la fine della sequenza controllata.|  
|[map::equal\_range](../dotnet/map-equal-range-stl-clr.md)|I rileva variano che corrisponde a una chiave specificata.|  
|[map::erase](../dotnet/map-erase-stl-clr.md)|Rimuove gli elementi alle posizioni specificate.|  
|[map::find](../dotnet/map-find-stl-clr.md)|Viene trovato un elemento che corrisponde alla chiave specificata.|  
|[map::insert](../dotnet/map-insert-stl-clr.md)|Aggiunge elementi.|  
|[map::key\_comp](../dotnet/map-key-comp-stl-clr.md)|Copiare il delegato dell'ordine per due chiavi.|  
|[map::lower\_bound](../dotnet/map-lower-bound-stl-clr.md)|Individuare l'inizio dell'intervallo che corrisponde a una chiave specificata.|  
|[map::make\_value](../dotnet/map-make-value-stl-clr.md)|Costruisce un oggetto di valore.|  
|[map::map](../dotnet/map-map-stl-clr.md)|Costruisce un oggetto contenitore.|  
|[map::rbegin](../dotnet/map-rbegin-stl-clr.md)|Definisce l'inizio della sequenza inversa controllata.|  
|[map::rend](../dotnet/map-rend-stl-clr.md)|Definisce la fine della sequenza inversa controllata.|  
|[map::size](../dotnet/map-size-stl-clr.md)|Conta il numero di elementi.|  
|[map::swap](../dotnet/map-swap-stl-clr.md)|Scambia il contenuto di due contenitori.|  
|[map::to\_array](../dotnet/map-to-array-stl-clr.md)|Copia la sequenza selezionata una nuova matrice.|  
|[map::upper\_bound](../dotnet/map-upper-bound-stl-clr.md)|Fine preleva di temporizzazione che corrisponde a una chiave specificata.|  
|[map::value\_comp](../dotnet/map-value-comp-stl-clr.md)|Copiare il delegato dell'ordine per due valori degli elementi.|  
  
|Operatore|Descrizione|  
|---------------|-----------------|  
|[map::operator\=](../dotnet/map-operator-assign-stl-clr.md)|Sostituisce la sequenza selezionata.|  
|[map::operator](../dotnet/map-operator-stl-clr.md)|Esegue il mapping di una chiave al valore mappato collegato.|  
|[operator\!\= \(map\)](../dotnet/operator-inequality-map-stl-clr.md)|Determina se un oggetto di `map` non equivale a un altro oggetto di `map`.|  
|[operator\< \(map\)](../dotnet/operator-less-than-map-stl-clr.md)|Determina se un oggetto di `map` è inferiore a un altro oggetto di `map`.|  
|[operator\<\= \(map\)](../dotnet/operator-less-or-equal-map-stl-clr.md)|Determina se un oggetto di `map` è minore o uguale a un altro oggetto di `map`.|  
|[operator\=\= \(map\)](../dotnet/operator-equality-map-stl-clr.md)|Determina se un oggetto di `map` equivale a un altro oggetto di `map`.|  
|[operator\> \(map\)](../dotnet/operator-greater-than-map-stl-clr.md)|Determina se un oggetto di `map` è maggiore di un altro oggetto di `map`.|  
|[operator\>\= \(map\)](../dotnet/operator-greater-or-equal-map-stl-clr.md)|Determina se un oggetto di `map` è maggiore o uguale a un altro oggetto di `map`.|  
  
## Interfacce  
  
|Interfaccia|Descrizione|  
|-----------------|-----------------|  
|<xref:System.ICloneable>|Duplicare un oggetto.|  
|<xref:System.Collections.IEnumerable>|Sequenza degli elementi.|  
|<xref:System.Collections.ICollection>|Gestire il gruppo di elementi.|  
|<xref:System.Collections.Generic.IEnumerable%601>|Sequenza dagli elementi tipizzati.|  
|<xref:System.Collections.Generic.ICollection%601>|Gestire il gruppo di elementi tipizzati.|  
|<xref:System.Collections.Generic.IDictionary%602>|Gestire il gruppo {chiave, valore} di coppie.|  
|ITreeKey\<, valore\>|Gestire il contenitore generico.|  
  
## Note  
 L'oggetto alloca e libera la memoria per la sequenza che controlla come singoli nodi.  Inserisce gli elementi nella \(quasi\) non è bilanciato la struttura ad albero di mantenere ordinata cambiando i collegamenti tra i nodi, mai copiando il contenuto di un nodo a un altro.  Ciò significa che è possibile inserire liberamente e rimuovere elementi senza pregiudicare gli elementi rimanenti.  
  
 L'oggetto ordina la sequenza che controlla chiamando un oggetto delegato archiviato di tipo [map::key\_compare](../dotnet/map-key-compare-stl-clr.md).  È possibile specificare l'oggetto delegato archiviato quando si costruisce la mappa; se non si specifica oggetto delegato, l'impostazione predefinita è il confronto `operator<(key_type, key_type)`.  È possibile accedere a questo oggetto archiviato chiamando la funzione membro [map::key\_comp](../dotnet/map-key-comp-stl-clr.md)`()`.  
  
 Tale oggetto delegato deve imporre un ordine rigido debole le chiavi di tipo [map::key\_type](../dotnet/map-key-type-stl-clr.md).  Ciò significa, per i due chiavi `X` e `Y`:  
  
 `key_comp()(X, Y)` restituisce lo stesso risultato booleano a ogni chiamata.  
  
 Se `key_comp()(X, Y)` è true, in `key_comp()(Y, X)` deve essere false.  
  
 Se `key_comp()(X, Y)` è true, in `X` sarebbe ordinato prima di `Y`.  
  
 Se `!key_comp()(X, Y) && !key_comp()(Y, X)` è true, in `X` e `Y` causate da ordine equivalente.  
  
 Per qualsiasi elemento `X` che precede `Y` sequenza selezionata, `key_comp()(Y, X)` è false. \(Per l'oggetto delegato predefinito, chiavi non diminuiscono mai il valore\). A differenza della classe modello [map](../dotnet/map-stl-clr.md), un oggetto classe modello `map` non richiede che le chiavi per tutti gli elementi siano univoche. \(Due o più chiavi possono avere ordine equivalente.\)  
  
 Ogni elemento contiene una chiave separata e un valore mappato.  La sequenza viene rappresentata in una modalità che consente la ricerca, l'inserimento e la rimozione di un elemento arbitrario attraverso una serie di operazioni proporzionali al logaritmo del numero di elementi della sequenza \(tempo logaritmico\).  Inoltre, inserendo un elemento non invalida iteratori e la rimozione di un elemento invalida solo gli iteratori che puntano all'elemento rimosso.  
  
 Una mappa supporta gli iteratori bidirezionali, è possibile avanzare agli elementi adiacenti fornito un iteratore che definisce un elemento nella sequenza selezionata.  Un nodo head speciale corrisponde all'iteratore restituito da [map::end](../dotnet/map-end-stl-clr.md)`()`.  È possibile diminuire questo iteratore per ottenere l'ultimo elemento della sequenza selezionata, se presente.  È possibile incrementare un iteratore di mapping per ottenere il nodo head quindi confronterà il segno di uguale a `end()`.  Ma non è possibile dereferenziare l'iteratore restituito da `end()`.  
  
 Si noti che non è possibile fare riferimento a un elemento della mappa direttamente fornito la posizione numerica \-\- ciò richiede un iteratore di accesso casuale.  
  
 Un iteratore della mappa memorizzare l'handle al nodo collegato di mappa, che a sua volta memorizzare l'handle al relativo contenitore collegato.  È possibile utilizzare gli iteratori solo con i relativi oggetti contenitore collegati.  Un iteratore della mappa rimane valido a condizione che il relativo nodo collegato di mappa sia associato a una determinata mappa.  Inoltre, un iteratore valido è dereferencable \-\- è possibile utilizzarlo per accedere e modificare il valore dell'elemento che definisce \-\- a condizione che non sia uguale a `end()`.  
  
 Clearing or rimozione di un elemento chiama il distruttore per il valore archiviato.  Eliminare il contenitore di cancellare tutti gli elementi.  Pertanto, un contenitore del cui tipo di elemento è una classe di riferimento garantisce che nessun elemento sopravviva il contenitore.  Nota, tuttavia, che un contenitore handles fa `not` eliminato i relativi elementi.  
  
## Requisiti  
 **Intestazione:**\<cliext\/map\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [hash\_map](../dotnet/hash-map-stl-clr.md)   
 [hash\_map](../dotnet/hash-map-stl-clr.md)   
 [hash\_multiset](../dotnet/hash-multiset-stl-clr.md)   
 [hash\_set](../dotnet/hash-set-stl-clr.md)   
 [map](../dotnet/map-stl-clr.md)   
 [multiset](../dotnet/multiset-stl-clr.md)   
 [set](../dotnet/set-stl-clr.md)   
 [Libreria STL\/CLR](../dotnet/stl-clr-library-reference.md)