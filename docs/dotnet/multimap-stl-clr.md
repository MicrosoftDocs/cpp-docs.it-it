---
title: "multimap (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::multimap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<cliext/map> (intestazione) [STL/CLR]"
  - "<map> (intestazione) [STL/CLR]"
  - "multimap (classe) [STL/CLR]"
ms.assetid: 3dfe329d-a078-462a-b050-7999ce6110ad
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 17
---
# multimap (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un oggetto che comandi di una sequenza variare lunghezza di elementi che ha accesso bidirezionale.  Utilizzare il contenitore `multimap` per gestire una sequenza di elementi how to \(quasi\) è bilanciato la struttura ad albero ordinata di nodi, ogni un elemento archiviando.  Un elemento è costituito da una chiave, per ordinare la sequenza e un valore mappato, su avanti per il nuovo.  
  
 In descrizione di seguito, `GValue` sono gli stessi di:  
  
 `Microsoft::VisualC::StlClr::GenericPair<GKey, GMapped>`  
  
 dove:  
  
 `GKey` sono gli stessi di `Key` eccetto l'ultimo sia un tipo di riferimento, nel qual caso viene `Key^`  
  
 `GMapped` sono gli stessi di `Mapped` eccetto l'ultimo sia un tipo di riferimento, nel qual caso viene `Mapped^`  
  
## Sintassi  
  
```  
template<typename Key,  
    typename Mapped>  
    ref class multimap  
        :   public  
        System::ICloneable,  
        System::Collections::IEnumerable,  
        System::Collections::ICollection,  
        System::Collections::Generic::IEnumerable<GValue>,  
        System::Collections::Generic::ICollection<GValue>,  
        System::Collections::Generic::IList<GValue>,  
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
|[multimap::const\_iterator](../dotnet/multimap-const-iterator-stl-clr.md)|Il tipo di un iteratore costante della sequenza controllata.|  
|[multimap::const\_reference](../dotnet/multimap-const-reference-stl-clr.md)|Il tipo di un riferimento costante a un elemento.|  
|[multimap::const\_reverse\_iterator](../dotnet/multimap-const-reverse-iterator-stl-clr.md)|Il tipo di iteratore inverso costante per la sequenza selezionata.|  
|[multimap::difference\_type](../dotnet/multimap-difference-type-stl-clr.md)|Il tipo di distanza \(eventualmente firmata\) tra due elementi.|  
|[multimap::generic\_container](../dotnet/multimap-generic-container-stl-clr.md)|Il tipo dell'interfaccia generica del contenitore.|  
|[multimap::generic\_iterator](../dotnet/multimap-generic-iterator-stl-clr.md)|Il tipo di iteratore per l'interfaccia generica del contenitore.|  
|[multimap::generic\_reverse\_iterator](../dotnet/multimap-generic-reverse-iterator-stl-clr.md)|Il tipo di iteratore inverso per l'interfaccia generica del contenitore.|  
|[multimap::generic\_value](../dotnet/multimap-generic-value-stl-clr.md)|Il tipo di elemento dell'interfaccia generica del contenitore.|  
|[multimap::iterator](../dotnet/multimap-iterator-stl-clr.md)|Il tipo di un iteratore della sequenza controllata.|  
|[multimap::key\_compare](../dotnet/multimap-key-compare-stl-clr.md)|Il delegato dell'ordine per due chiavi.|  
|[multimap::key\_type](../dotnet/multimap-key-type-stl-clr.md)|Il tipo di una chiave di ordinamento.|  
|[multimap::mapped\_type](../dotnet/multimap-mapped-type-stl-clr.md)|Il tipo del valore mappato associato a ogni chiave.|  
|[multimap::reference](../dotnet/multimap-reference-stl-clr.md)|Il tipo di un riferimento a un elemento.|  
|[multimap::reverse\_iterator](../dotnet/multimap-reverse-iterator-stl-clr.md)|Il tipo di iteratore inverso per la sequenza selezionata.|  
|[multimap::size\_type](../dotnet/multimap-size-type-stl-clr.md)|Il tipo di distanza \(non negativa\) a tra due elementi.|  
|[multimap::value\_compare](../dotnet/multimap-value-compare-stl-clr.md)|Il delegato dell'ordine per due valori degli elementi.|  
|[multimap::value\_type](../dotnet/multimap-value-type-stl-clr.md)|Il tipo di un elemento.|  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[multimap::begin](../dotnet/multimap-begin-stl-clr.md)|Definisce l'inizio della sequenza controllata.|  
|[multimap::clear](../dotnet/multimap-clear-stl-clr.md)|Rimuove tutti gli elementi.|  
|[multimap::count](../dotnet/multimap-count-stl-clr.md)|Conta gli elementi che soddisfano una chiave specificata.|  
|[multimap::empty](../dotnet/multimap-empty-stl-clr.md)|Consente di verificare se non sono presenti elementi.|  
|[multimap::end](../dotnet/multimap-end-stl-clr.md)|Definisce la fine della sequenza controllata.|  
|[multimap::equal\_range](../dotnet/multimap-equal-range-stl-clr.md)|I rileva variano che corrisponde a una chiave specificata.|  
|[multimap::erase](../dotnet/multimap-erase-stl-clr.md)|Rimuove gli elementi alle posizioni specificate.|  
|[multimap::find](../dotnet/multimap-find-stl-clr.md)|Viene trovato un elemento che corrisponde alla chiave specificata.|  
|[multimap::insert](../dotnet/multimap-insert-stl-clr.md)|Aggiunge elementi.|  
|[multimap::key\_comp](../dotnet/multimap-key-comp-stl-clr.md)|Copiare il delegato dell'ordine per due chiavi.|  
|[multimap::lower\_bound](../dotnet/multimap-lower-bound-stl-clr.md)|Individuare l'inizio dell'intervallo che corrisponde a una chiave specificata.|  
|[multimap::make\_value](../dotnet/multimap-make-value-stl-clr.md)|Costruisce un oggetto di valore.|  
|[multimap::multimap](../dotnet/multimap-multimap-stl-clr.md)|Costruisce un oggetto contenitore.|  
|[multimap::rbegin](../dotnet/multimap-rbegin-stl-clr.md)|Definisce l'inizio della sequenza inversa controllata.|  
|[multimap::rend](../dotnet/multimap-rend-stl-clr.md)|Definisce la fine della sequenza inversa controllata.|  
|[multimap::size](../dotnet/multimap-size-stl-clr.md)|Conta il numero di elementi.|  
|[multimap::swap](../dotnet/multimap-swap-stl-clr.md)|Scambia il contenuto di due contenitori.|  
|[multimap::to\_array](../dotnet/multimap-to-array-stl-clr.md)|Copia la sequenza selezionata una nuova matrice.|  
|[multimap::upper\_bound](../dotnet/multimap-upper-bound-stl-clr.md)|Fine preleva di temporizzazione che corrisponde a una chiave specificata.|  
|[multimap::value\_comp](../dotnet/multimap-value-comp-stl-clr.md)|Copiare il delegato dell'ordine per due valori degli elementi.|  
  
|Operatore|Descrizione|  
|---------------|-----------------|  
|[multimap::operator\=](../dotnet/multimap-operator-assign-stl-clr.md)|Sostituisce la sequenza selezionata.|  
|[operator\!\= \(multimap\)](../dotnet/operator-inequality-multimap-stl-clr.md)|Determina se un oggetto di `multimap` non equivale a un altro oggetto di `multimap`.|  
|[operator\< \(multimap\)](../dotnet/operator-less-than-multimap-stl-clr.md)|Determina se un oggetto di `multimap` è inferiore a un altro oggetto di `multimap`.|  
|[operator\<\= \(multimap\)](../dotnet/operator-less-or-equal-multimap-stl-clr.md)|Determina se un oggetto di `multimap` è minore o uguale a un altro oggetto di `multimap`.|  
|[operator\=\= \(multimap\)](../dotnet/operator-equality-multimap-stl-lr.md)|Determina se un oggetto di `multimap` equivale a un altro oggetto di `multimap`.|  
|[operator\> \(multimap\)](../dotnet/operator-greater-than-multimap-stl-clr.md)|Determina se un oggetto di `multimap` è maggiore di un altro oggetto di `multimap`.|  
|[operator\>\= \(multimap\)](../dotnet/operator-greater-or-equal-multimap-stl-clr.md)|Determina se un oggetto di `multimap` è maggiore o uguale a un altro oggetto di `multimap`.|  
  
## Interfacce  
  
|Interfaccia|Descrizione|  
|-----------------|-----------------|  
|<xref:System.ICloneable>|Duplicare un oggetto.|  
|<xref:System.Collections.IEnumerable>|Sequenza degli elementi.|  
|<xref:System.Collections.ICollection>|Gestire il gruppo di elementi.|  
|<xref:System.Collections.Generic.IEnumerable%601>|Sequenza dagli elementi tipizzati.|  
|<xref:System.Collections.Generic.ICollection%601>|Gestire il gruppo di elementi tipizzati.|  
|ITreeKey\<, valore\>|Gestire il contenitore generico.|  
  
## Note  
 L'oggetto alloca e libera la memoria per la sequenza che controlla come singoli nodi.  Inserisce gli elementi nella \(quasi\) non è bilanciato la struttura ad albero di mantenere ordinata cambiando i collegamenti tra i nodi, mai copiando il contenuto di un nodo a un altro.  Ciò significa che è possibile inserire liberamente e rimuovere elementi senza pregiudicare gli elementi rimanenti.  
  
 L'oggetto ordina la sequenza che controlla chiamando un oggetto delegato archiviato di tipo [multimap::key\_compare](../dotnet/multimap-key-compare-stl-clr.md).  È possibile specificare l'oggetto delegato archiviato quando si crea il multimap; se non si specifica oggetto delegato, l'impostazione predefinita è il confronto `operator<(key_type, key_type)`.  È possibile accedere a questo oggetto archiviato chiamando la funzione membro [multimap::key\_comp](../dotnet/multimap-key-comp-stl-clr.md)`()`.  
  
 Tale oggetto delegato deve imporre un ordine rigido debole le chiavi di tipo [multimap::key\_type](../dotnet/multimap-key-type-stl-clr.md).  Ciò significa, per i due chiavi `X` e `Y`:  
  
 `key_comp()(X, Y)` restituisce lo stesso risultato booleano a ogni chiamata.  
  
 Se `key_comp()(X, Y)` è true, in `key_comp()(Y, X)` deve essere false.  
  
 Se `key_comp()(X, Y)` è true, in `X` sarebbe ordinato prima di `Y`.  
  
 Se `!key_comp()(X, Y) && !key_comp()(Y, X)` è true, in `X` e `Y` causate da ordine equivalente.  
  
 Per qualsiasi elemento `X` che precede `Y` sequenza selezionata, `key_comp()(Y, X)` è false. \(Per l'oggetto delegato predefinito, chiavi non diminuiscono mai il valore\). A differenza della classe modello [map](../dotnet/map-stl-clr.md), un oggetto classe modello `multimap` non richiede che le chiavi per tutti gli elementi siano univoche. \(Due o più chiavi possono avere ordine equivalente.\)  
  
 Ogni elemento contiene una chiave separata e un valore mappato.  La sequenza viene rappresentata in una modalità che consente la ricerca, l'inserimento e la rimozione di un elemento arbitrario attraverso una serie di operazioni proporzionali al logaritmo del numero di elementi della sequenza \(tempo logaritmico\).  Inoltre, inserendo un elemento non invalida iteratori e la rimozione di un elemento invalida solo gli iteratori che puntano all'elemento rimosso.  
  
 Un multimap supporta gli iteratori bidirezionali, è possibile avanzare agli elementi adiacenti fornito un iteratore che definisce un elemento nella sequenza selezionata.  Un nodo head speciale corrisponde all'iteratore restituito da [multimap::end](../dotnet/multimap-end-stl-clr.md)`()`.  È possibile diminuire questo iteratore per ottenere l'ultimo elemento della sequenza selezionata, se presente.  È possibile incrementare un iteratore di multimap per ottenere il nodo head quindi confronterà il segno di uguale a `end()`.  Ma non è possibile dereferenziare l'iteratore restituito da `end()`.  
  
 Si noti che non è possibile fare riferimento a un elemento di multimap fornito direttamente la posizione numerica \-\- ciò richiede un iteratore di accesso casuale.  
  
 Un iteratore di multimap memorizzare l'handle al nodo collegato di multimap, che a sua volta memorizzare l'handle al relativo contenitore collegato.  È possibile utilizzare gli iteratori solo con i relativi oggetti contenitore collegati.  Un iteratore di multimap rimane valido a condizione che il relativo nodo collegato di multimap è associato ad alcuni multimap.  Inoltre, un iteratore valido è dereferencable \-\- è possibile utilizzarlo per accedere e modificare il valore dell'elemento che definisce \-\- a condizione che non sia uguale a `end()`.  
  
 Clearing or rimozione di un elemento chiama il distruttore per il valore archiviato.  Eliminare il contenitore di cancellare tutti gli elementi.  Pertanto, un contenitore del cui tipo di elemento è una classe di riferimento garantisce che nessun elemento sopravviva il contenitore.  Nota, tuttavia, che un contenitore handles fa `not` eliminato i relativi elementi.  
  
## Requisiti  
 **Intestazione:**\<cliext\/map\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [hash\_map](../dotnet/hash-map-stl-clr.md)   
 [hash\_multimap](../dotnet/hash-multimap-stl-clr.md)   
 [hash\_multiset](../dotnet/hash-multiset-stl-clr.md)   
 [hash\_set](../dotnet/hash-set-stl-clr.md)   
 [map](../dotnet/map-stl-clr.md)   
 [multiset](../dotnet/multiset-stl-clr.md)   
 [set](../dotnet/set-stl-clr.md)   
 [Libreria STL\/CLR](../dotnet/stl-clr-library-reference.md)