---
title: "set (STL/CLR) | Microsoft Docs"
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
  - "cliext::set"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<cliext/set> (intestazione) [STL/CLR]"
  - "<set> (intestazione) [STL/CLR]"
  - "set (classe) [STL/CLR]"
ms.assetid: 27d3628c-741a-43a7-bef1-5085536f679e
caps.latest.revision: 18
caps.handback.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# set (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un oggetto che controlla una sequenza di elementi di lunghezza variabile che ha accesso bidirezionale.  Utilizzare il contenitore `set` per gestire una sequenza di elementi come un albero ordinato \(quasi\) bilanciato di nodi, ciascuno contenente un elemento.  
  
 Nella seguente descrizione, `GValue` è uguale a `GKey`, che a sua volta è uguale a `Key` a meno che quest'ultimo sia un tipo di riferimento, nel qual caso è `Key^`.  
  
## Sintassi  
  
```  
template<typename Key>  
    ref class set  
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
  
|Definizione dei tipi|Descrizione|  
|--------------------------|-----------------|  
|[set::const\_iterator](../dotnet/set-const-iterator-stl-clr.md)|Il tipo di un iteratore costante della sequenza controllata.|  
|[set::const\_reference](../dotnet/set-const-reference-stl-clr.md)|Il tipo di un riferimento costante a un elemento.|  
|[set::const\_reverse\_iterator](../dotnet/set-const-reverse-iterator-stl-clr.md)|Il tipo di un iteratore di inversione costante della sequenza controllata.|  
|[set::difference\_type](../dotnet/set-difference-type-stl-clr.md)|Il tipo di una distanza \(con o senza segno\) tra due elementi.|  
|[set::generic\_container](../dotnet/set-generic-container-stl-clr.md)|Il tipo della generica interfaccia per il contenitore.|  
|[set::generic\_iterator](../dotnet/set-generic-iterator-stl-clr.md)|Il tipo di un iteratore per l'interfaccia generica del contenitore.|  
|[set::generic\_reverse\_iterator](../dotnet/set-generic-reverse-iterator-stl-clr.md)|Il tipo di un iteratore inverso per l'interfaccia generica del contenitore.|  
|[set::generic\_value](../dotnet/set-generic-value-stl-clr.md)|Il tipo di un elemento per l'interfaccia generica del contenitore.|  
|[set::iterator](../dotnet/set-iterator-stl-clr.md)|Il tipo di un iteratore della sequenza controllata.|  
|[set::key\_compare](../dotnet/set-key-compare-stl-clr.md)|Il delegato di ordinamento per due chiavi.|  
|[set::key\_type](../dotnet/set-key-type-stl-clr.md)|Il tipo di una chiave di ordinamento.|  
|[set::reference](../dotnet/set-reference-stl-clr.md)|Il tipo di un riferimento a un elemento.|  
|[set::reverse\_iterator](../dotnet/set-reverse-iterator-stl-clr.md)|Il tipo di un iteratore inverso della sequenza controllata.|  
|[set::size\_type](../dotnet/set-size-type-stl-clr.md)|Il tipo di una distanza non negativa tra due elementi.|  
|[set::value\_compare](../dotnet/set-value-compare-stl-clr.md)|Il delegato di ordinamento per due valori elemento.|  
|[set::value\_type](../dotnet/set-value-type-stl-clr.md)|Il tipo di un elemento.|  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[set::begin](../dotnet/set-begin-stl-clr.md)|Definisce l'inizio della sequenza controllata.|  
|[set::clear](../dotnet/set-clear-stl-clr.md)|Rimuove tutti gli elementi.|  
|[set::count](../dotnet/set-count-stl-clr.md)|Conta gli elementi che corrispondono a una chiave specificata.|  
|[set::empty](../dotnet/set-empty-stl-clr.md)|Verifica se non sono presenti elementi.|  
|[set::end](../dotnet/set-end-stl-clr.md)|Definisce la fine della sequenza controllata.|  
|[set::equal\_range](../dotnet/set-equal-range-stl-clr.md)|Trova l'intervallo che corrisponde alla chiave specificata.|  
|[set::erase](../dotnet/set-erase-stl-clr.md)|Rimuove gli elementi alle posizioni specificate.|  
|[set::find](../dotnet/set-find-stl-clr.md)|Viene trovato un elemento che corrisponde alla chiave specificata.|  
|[set::insert](../dotnet/set-insert-stl-clr.md)|Aggiunge elementi.|  
|[set::key\_comp](../dotnet/set-key-comp-stl-clr.md)|Copia il delegato di ordinamento per due chiavi.|  
|[set::lower\_bound](../dotnet/set-lower-bound-stl-clr.md)|Trova l'inizio dell'intervallo che corrisponde a una chiave specificata.|  
|[set::make\_value](../dotnet/set-make-value-stl-clr.md)|Costruisce un oggetto valore.|  
|[set::rbegin](../dotnet/set-rbegin-stl-clr.md)|Definisce l'inizio della sequenza inversa controllata.|  
|[set::rend](../dotnet/set-rend-stl-clr.md)|Definisce la fine della sequenza inversa controllata.|  
|[set::set](../dotnet/set-set-stl-clr.md)|Costruisce un oggetto contenitore.|  
|[set::size](../dotnet/set-size-stl-clr.md)|Conta il numero di elementi.|  
|[set::swap](../dotnet/set-swap-stl-clr.md)|Scambia il contenuto di due contenitori.|  
|[set::to\_array](../dotnet/set-to-array-stl-clr.md)|Copia la sequenza controllata in un nuovo array.|  
|[set::upper\_bound](../dotnet/set-upper-bound-stl-clr.md)|Trova la fine dell'intervallo che corrisponde alla chiave specificata.|  
|[set::value\_comp](../dotnet/set-value-comp-stl-clr.md)|Copia il delegato di ordinamento per due valori di elementi.|  
  
|Operatore|Descrizione|  
|---------------|-----------------|  
|[set::operator\=](../dotnet/set-operator-assign-stl-clr.md)|Sostituisce la sequenza controllata.|  
|[operator\!\= \(set\)](../dotnet/operator-inequality-set-stl-clr.md)|Determina se un oggetto `set` non equivale a un altro oggetto `set`.|  
|[operator\< \(set\)](../dotnet/operator-less-than-set-stl-clr.md)|Determina se un oggetto `set` è minore di un altro oggetto `set`.|  
|[operator\<\= \(set\)](../dotnet/operator-less-or-equal-set-stl-clr.md)|Determina se un oggetto `set` è minore o uguale a un altro oggetto `set`.|  
|[operator\=\= \(set\)](../dotnet/operator-equality-set-stl-clr.md)|Determina se un oggetto `set` equivale a un altro oggetto `set`.|  
|[operator\> \(set\)](../dotnet/operator-greater-than-set-stl-clr.md)|Determina se un oggetto `set` è maggiore di un altro oggetto `set`.|  
|[operator\>\= \(set\)](../dotnet/operator-greater-or-equal-set-stl-clr.md)|Determina se un oggetto `set` è maggiore o uguale a un altro oggetto `set`.|  
  
## Interfacce  
  
|Interfaccia|Descrizione|  
|-----------------|-----------------|  
|<xref:System.ICloneable>|Duplicare un oggetto.|  
|<xref:System.Collections.IEnumerable>|Mettere in sequenza gli elementi.|  
|<xref:System.Collections.ICollection>|Gestire il gruppo di elementi.|  
|<xref:System.Collections.Generic.IEnumerable%601>|Mettere in sequenza gli elementi tipizzati.|  
|<xref:System.Collections.Generic.ICollection%601>|Gestire il gruppo di elementi tipizzati.|  
|ITree\<Key, Value\>|Gestire il contenitore generico.|  
  
## Note  
 L'oggetto alloca e libera la memoria per la sequenza che controlla come singoli nodi.  Inserisce gli elementi in un albero \(quasi\) bilanciato che mantiene ordinato modificando gli archi tra i nodi, mai copiando il contenuto di un nodo in un altro.  Ciò significa che è possibile inserire e rimuovere liberamente elementi senza pregiudicare gli elementi rimanenti.  
  
 L'oggetto ordina la sequenza che controlla chiamando un oggetto delegato memorizzato di tipo [set::key\_compare](../dotnet/set-key-compare-stl-clr.md).  È possibile specificare l'oggetto delegato memorizzato quando si costruisce il set; se non si specifica l'oggetto delegato, l'operazione predefinita è il confronto `operator<(key_type, key_type)`.  È possibile accedere a questo oggetto archiviato chiamando la funzione membro [set::key\_comp](../dotnet/set-key-comp-stl-clr.md)`()`.  
  
 Tale oggetto delegato deve imporre un ordine debole stretto sulle chiavi di tipo [set::key\_type](../dotnet/set-key-type-stl-clr.md).  Ciò significa, per una qualunque coppia di chiavi `X` e `Y`:  
  
 `key_comp()(X, Y)` restituisce lo stesso risultato booleano a ogni chiamata.  
  
 Se `key_comp()(X, Y)` è true, allora `key_comp()(Y, X)` deve essere false.  
  
 Se `key_comp()(X, Y)` è true, allora si dice che `X` viene ordinato prima di `Y`.  
  
 Se `!key_comp()(X, Y) && !key_comp()(Y, X)` è true, allora si dice che `X` e `Y` abbiano ordine equivalente.  
  
 Per qualsiasi elemento `X` che precede `Y` nella sequenza controllata, `key_comp()(Y, X)` è false. \(Per l'oggetto delegato predefinito, le chiavi non diminuiscono mai di valore\). A differenza della classe modello [set](../dotnet/set-stl-clr.md), un oggetto della classe modello `set` non richiede che le chiavi per tutti gli elementi siano univoche. \(Due o più chiavi possono avere ordine equivalente.\)  
  
 Ogni elemento viene utilizzato sia come chiave che come valore.  La sequenza viene rappresentata in una modalità che consente la ricerca, l'inserimento e la rimozione di un elemento arbitrario attraverso un numero di operazioni proporzionale al logaritmo del numero di elementi della sequenza \(tempo logaritmico\).  Inoltre, inserire un elemento non invalida gli iteratori e la rimozione di un elemento invalida solo gli iteratori che puntano all'elemento rimosso.  
  
 Un set supporta iteratori bidirezionali, ciò significa che, fornito un iteratore che designa un elemento nella sequenza selezionata, è possibile avanzare agli elementi adiacenti.  Un nodo head speciale corrisponde all'iteratore restituito da [set::end](../dotnet/set-end-stl-clr.md)`()`.  È possibile decrementare questo iteratore per raggiungere l'ultimo elemento della sequenza selezionata, se presente.  È possibile incrementare un iteratore set per ottenere il nodo head, che verrà quindi confrontato per uguaglianza a `end()`.  Invece non è possibile dereferenziare l'iteratore restituito da `end()`.  
  
 Si noti che non è possibile fare riferimento a un elemento set se viene fornita direttamente la posizione numerica: ciò richiede un iteratore di accesso casuale.  
  
 Un iteratore set memorizza un handle al nodo set collegato, che a sua volta memorizza un handle al relativo contenitore.  È possibile utilizzare gli iteratori solo con i relativi oggetti contenitore.  Un iteratore set rimane valido a condizione che il relativo nodo set è associato a qualche set.  Inoltre, un iteratore valido è dereferenziabile \(è possibile utilizzarlo per accedere o modificare il valore dell'elemento che definisce\) a condizione che non sia uguale a `end()`.  
  
 Cancellare o rimuovere un elemento risulta in una chiamata al distruttore per il valore archiviato.  Eliminare il contenitore cancella tutti gli elementi.  Pertanto, un contenitore il cui tipo di elemento è una classe di riferimento garantisce che nessun elemento sopravviva all'eliminazione del contenitore.  Si noti, tuttavia, che un contenitore di handle `not` elimina i relativi elementi.  
  
## Requisiti  
 **Intestazione:** \<cliext\/set\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [hash\_map](../dotnet/hash-map-stl-clr.md)   
 [hash\_set](../dotnet/hash-set-stl-clr.md)   
 [hash\_set](../dotnet/hash-set-stl-clr.md)   
 [hash\_set](../dotnet/hash-set-stl-clr.md)   
 [map](../dotnet/map-stl-clr.md)   
 [set](../dotnet/set-stl-clr.md)   
 [set](../dotnet/set-stl-clr.md)   
 [Libreria STL\/CLR](../dotnet/stl-clr-library-reference.md)