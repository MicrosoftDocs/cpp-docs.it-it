---
title: "multiset (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::multiset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<cliext/set> (intestazione) [STL/CLR]"
  - "<set> (intestazione) [STL/CLR]"
  - "multiset (classe) [STL/CLR]"
ms.assetid: 7c46e2b4-cd88-49b7-a9e6-63ad5ae7feb5
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 18
---
# multiset (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un oggetto che comandi di una sequenza variare lunghezza di elementi che ha accesso bidirezionale.  Utilizzare il contenitore `multiset` per gestire una sequenza di elementi how to \(quasi\) è bilanciato la struttura ad albero ordinata di nodi, ogni un elemento archiviando.  
  
 In descrizione di seguito, `GValue` sono gli stessi di `GKey`, che a sua volta corrispondano a quelli di `Key` eccetto l'ultimo sia un tipo di riferimento, nel qual caso viene `Key^`.  
  
## Sintassi  
  
```  
template<typename Key>  
    ref class multiset  
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
  
## Membri  
  
|Definizione del tipo|Descrizione|  
|--------------------------|-----------------|  
|[multiset::const\_iterator](../dotnet/multiset-const-iterator-stl-clr.md)|Il tipo di un iteratore costante della sequenza controllata.|  
|[multiset::const\_reference](../dotnet/multiset-const-reference-stl-clr.md)|Il tipo di un riferimento costante a un elemento.|  
|[multiset::const\_reverse\_iterator](../dotnet/multiset-const-reverse-iterator-stl-clr.md)|Il tipo di iteratore inverso costante per la sequenza selezionata.|  
|[multiset::difference\_type](../dotnet/multiset-difference-type-stl-clr.md)|Il tipo di distanza \(eventualmente firmata\) tra due elementi.|  
|[multiset::generic\_container](../dotnet/multiset-generic-container-stl-clr.md)|Il tipo dell'interfaccia generica del contenitore.|  
|[multiset::generic\_iterator](../dotnet/multiset-generic-iterator-stl-clr.md)|Il tipo di iteratore per l'interfaccia generica del contenitore.|  
|[multiset::generic\_reverse\_iterator](../dotnet/multiset-generic-reverse-iterator-stl-clr.md)|Il tipo di iteratore inverso per l'interfaccia generica del contenitore.|  
|[multiset::generic\_value](../dotnet/multiset-generic-value-stl-clr.md)|Il tipo di elemento dell'interfaccia generica del contenitore.|  
|[multiset::iterator](../dotnet/multiset-iterator-stl-clr.md)|Il tipo di un iteratore della sequenza controllata.|  
|[multiset::key\_compare](../dotnet/multiset-key-compare-stl-clr.md)|Il delegato dell'ordine per due chiavi.|  
|[multiset::key\_type](../dotnet/multiset-key-type-stl-clr.md)|Il tipo di una chiave di ordinamento.|  
|[multiset::reference](../dotnet/multiset-reference-stl-clr.md)|Il tipo di un riferimento a un elemento.|  
|[multiset::reverse\_iterator](../dotnet/multiset-reverse-iterator-stl-clr.md)|Il tipo di iteratore inverso per la sequenza selezionata.|  
|[multiset::size\_type](../dotnet/multiset-size-type-stl-clr.md)|Il tipo di distanza \(non negativa\) a tra due elementi.|  
|[multiset::value\_compare](../dotnet/multiset-value-compare-stl-clr.md)|Il delegato dell'ordine per due valori degli elementi.|  
|[multiset::value\_type](../dotnet/multiset-value-type-stl-clr.md)|Il tipo di un elemento.|  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[multiset::begin](../dotnet/multiset-begin-stl-clr.md)|Definisce l'inizio della sequenza controllata.|  
|[multiset::clear](../dotnet/multiset-clear-stl-clr.md)|Rimuove tutti gli elementi.|  
|[multiset::count](../dotnet/multiset-count-stl-clr.md)|Conta gli elementi che soddisfano una chiave specificata.|  
|[multiset::empty](../dotnet/multiset-empty-stl-clr.md)|Consente di verificare se non sono presenti elementi.|  
|[multiset::end](../dotnet/multiset-end-stl-clr.md)|Definisce la fine della sequenza controllata.|  
|[multiset::equal\_range](../dotnet/multiset-equal-range-stl-clr.md)|I rileva variano che corrisponde a una chiave specificata.|  
|[multiset::erase](../dotnet/multiset-erase-stl-clr.md)|Rimuove gli elementi alle posizioni specificate.|  
|[multiset::find](../dotnet/multiset-find-stl-clr.md)|Viene trovato un elemento che corrisponde alla chiave specificata.|  
|[multiset::insert](../dotnet/multiset-insert-stl-clr.md)|Aggiunge elementi.|  
|[multiset::key\_comp](../dotnet/multiset-key-comp-stl-clr.md)|Copiare il delegato dell'ordine per due chiavi.|  
|[multiset::lower\_bound](../dotnet/multiset-lower-bound-stl-clr.md)|Individuare l'inizio dell'intervallo che corrisponde a una chiave specificata.|  
|[multiset::make\_value](../dotnet/multiset-make-value-stl-clr.md)|Costruisce un oggetto di valore.|  
|[multiset::multiset](../dotnet/multiset-multiset-stl-clr.md)|Costruisce un oggetto contenitore.|  
|[multiset::rbegin](../dotnet/multiset-rbegin-stl-clr.md)|Definisce l'inizio della sequenza inversa controllata.|  
|[multiset::rend](../dotnet/multiset-rend-stl-clr.md)|Definisce la fine della sequenza inversa controllata.|  
|[multiset::size](../dotnet/multiset-size-stl-clr.md)|Conta il numero di elementi.|  
|[multiset::swap](../dotnet/multiset-swap-stl-clr.md)|Scambia il contenuto di due contenitori.|  
|[multiset::to\_array](../dotnet/multiset-to-array-stl-clr.md)|Copia la sequenza selezionata una nuova matrice.|  
|[multiset::upper\_bound](../dotnet/multiset-upper-bound-stl-clr.md)|Fine preleva di temporizzazione che corrisponde a una chiave specificata.|  
|[multiset::value\_comp](../dotnet/multiset-value-comp-stl-clr.md)|Copiare il delegato dell'ordine per due valori degli elementi.|  
  
|Operatore|Descrizione|  
|---------------|-----------------|  
|[multiset::operator\=](../dotnet/multiset-operator-assign-stl-clr.md)|Sostituisce la sequenza selezionata.|  
|[operator\!\= \(multiset\)](../dotnet/operator-inequality-multiset-stl-clr.md)|Determina se un oggetto di `multiset` non equivale a un altro oggetto di `multiset`.|  
|[operator\< \(multiset\)](../dotnet/operator-less-than-multiset-stl-clr.md)|Determina se un oggetto di `multiset` è inferiore a un altro oggetto di `multiset`.|  
|[operator\<\= \(multiset\)](../dotnet/operator-less-or-equal-multiset-stl-clr.md)|Determina se un oggetto di `multiset` è minore o uguale a un altro oggetto di `multiset`.|  
|[operator\=\= \(multiset\)](../dotnet/operator-equality-multiset-stl-clr.md)|Determina se un oggetto di `multiset` equivale a un altro oggetto di `multiset`.|  
|[operator\> \(multiset\)](../dotnet/operator-greater-than-multiset-stl-clr.md)|Determina se un oggetto di `multiset` è maggiore di un altro oggetto di `multiset`.|  
|[operator\>\= \(multiset\)](../dotnet/operator-greater-or-equal-multiset-stl-clr.md)|Determina se un oggetto di `multiset` è maggiore o uguale a un altro oggetto di `multiset`.|  
  
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
  
 L'oggetto ordina la sequenza che controlla chiamando un oggetto delegato archiviato di tipo [multiset::key\_compare](../dotnet/multiset-key-compare-stl-clr.md).  È possibile specificare l'oggetto delegato archiviato quando si crea il multi\-insieme; se non si specifica oggetto delegato, l'impostazione predefinita è il confronto `operator<(key_type, key_type)`.  È possibile accedere a questo oggetto archiviato chiamando la funzione membro [multiset::key\_comp](../dotnet/multiset-key-comp-stl-clr.md)`()`.  
  
 Tale oggetto delegato deve imporre un ordine rigido debole le chiavi di tipo [multiset::key\_type](../dotnet/multiset-key-type-stl-clr.md).  Ciò significa, per i due chiavi `X` e `Y`:  
  
 `key_comp()(X, Y)` restituisce lo stesso risultato booleano a ogni chiamata.  
  
 Se `key_comp()(X, Y)` è true, in `key_comp()(Y, X)` deve essere false.  
  
 Se `key_comp()(X, Y)` è true, in `X` sarebbe ordinato prima di `Y`.  
  
 Se `!key_comp()(X, Y) && !key_comp()(Y, X)` è true, in `X` e `Y` causate da ordine equivalente.  
  
 Per qualsiasi elemento `X` che precede `Y` sequenza selezionata, `key_comp()(Y, X)` è false. \(Per l'oggetto delegato predefinito, chiavi non diminuiscono mai il valore\). A differenza della classe modello [set](../dotnet/set-stl-clr.md), un oggetto classe modello `multiset` non richiede che le chiavi per tutti gli elementi siano univoche. \(Due o più chiavi possono avere ordine equivalente.\)  
  
 Ogni elemento viene utilizzato sia ey che valore.  La sequenza viene rappresentata in una modalità che consente la ricerca, l'inserimento e la rimozione di un elemento arbitrario attraverso una serie di operazioni proporzionali al logaritmo del numero di elementi della sequenza \(tempo logaritmico\).  Inoltre, inserendo un elemento non invalida iteratori e la rimozione di un elemento invalida solo gli iteratori che puntano all'elemento rimosso.  
  
 Un multi\-insieme supporta gli iteratori bidirezionali, è possibile avanzare agli elementi adiacenti fornito un iteratore che definisce un elemento nella sequenza selezionata.  Un nodo head speciale corrisponde all'iteratore restituito da [multiset::end](../dotnet/multiset-end-stl-clr.md)`()`.  È possibile diminuire questo iteratore per ottenere l'ultimo elemento della sequenza selezionata, se presente.  È possibile incrementare un iteratore di multi\-insieme per ottenere il nodo head quindi confronterà il segno di uguale a `end()`.  Ma non è possibile dereferenziare l'iteratore restituito da `end()`.  
  
 Si noti che non è possibile fare riferimento a un elemento di multi\-insieme fornito direttamente la posizione numerica \-\- ciò richiede un iteratore di accesso casuale.  
  
 Un iteratore di multi\-insieme memorizzare l'handle al nodo collegato di multi\-insieme, che a sua volta memorizzare l'handle al relativo contenitore collegato.  È possibile utilizzare gli iteratori solo con i relativi oggetti contenitore collegati.  Un iteratore di multi\-insieme rimane valido a condizione che il relativo nodo collegato di multi\-insieme è associato ad alcuni multi\-insieme.  Inoltre, un iteratore valido è dereferencable \-\- è possibile utilizzarlo per accedere e modificare il valore dell'elemento che definisce \-\- a condizione che non sia uguale a `end()`.  
  
 Clearing or rimozione di un elemento chiama il distruttore per il valore archiviato.  Eliminare il contenitore di cancellare tutti gli elementi.  Pertanto, un contenitore del cui tipo di elemento è una classe di riferimento garantisce che nessun elemento sopravviva il contenitore.  Nota, tuttavia, che un contenitore handles fa `not` eliminato i relativi elementi.  
  
## Requisiti  
 **Intestazione:**\<cliext\/set\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [hash\_map](../dotnet/hash-map-stl-clr.md)   
 [hash\_multiset](../dotnet/hash-multiset-stl-clr.md)   
 [hash\_multiset](../dotnet/hash-multiset-stl-clr.md)   
 [hash\_set](../dotnet/hash-set-stl-clr.md)   
 [map](../dotnet/map-stl-clr.md)   
 [multiset](../dotnet/multiset-stl-clr.md)   
 [set](../dotnet/set-stl-clr.md)   
 [Libreria STL\/CLR](../dotnet/stl-clr-library-reference.md)