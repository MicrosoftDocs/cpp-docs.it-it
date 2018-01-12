---
title: set (STL/CLR) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::set
dev_langs: C++
helpviewer_keywords:
- <cliext/set> header [STL/CLR]
- <set> header [STL/CLR]
- set class [STL/CLR]
ms.assetid: 27d3628c-741a-43a7-bef1-5085536f679e
caps.latest.revision: "18"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 9624f08c54629657e7f52c2c688d2083aa557a56
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="set-stlclr"></a>set (STL/CLR)
La classe modello descrive un oggetto che controlla una sequenza di lunghezza variabile di elementi che dispone di accesso bidirezionale. Utilizzare il contenitore `set` per gestire una sequenza di elementi come una struttura ad albero ordinato bilanciato (quasi) di nodi, ognuno l'archiviazione di un elemento.  
  
 Nella sezione successiva, `GValue` equivale `GKey`, che a sua volta equivale `Key` , a meno che quest'ultimo è un tipo riferimento, nel qual caso è `Key^`.  
  
## <a name="syntax"></a>Sintassi  
  
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
  
#### <a name="parameters"></a>Parametri  
 Chiave  
 Il tipo del componente chiave di un elemento nella sequenza controllata.  
  
## <a name="members"></a>Membri  
  
|Definizione dei tipi|Descrizione|  
|---------------------|-----------------|  
|[set::const_iterator (STL/CLR)](../dotnet/set-const-iterator-stl-clr.md)|Tipo di un iteratore costante per la sequenza controllata.|  
|[set::const_reference (STL/CLR)](../dotnet/set-const-reference-stl-clr.md)|Tipo di un riferimento costante a un elemento.|  
|[set::const_reverse_iterator (STL/CLR)](../dotnet/set-const-reverse-iterator-stl-clr.md)|Tipo di un iteratore inverso costante per la sequenza controllata.|  
|[set::difference_type (STL/CLR)](../dotnet/set-difference-type-stl-clr.md)|Il tipo di una distanza tra due elementi (possibilmente firmato).|  
|[set::generic_container (STL/CLR)](../dotnet/set-generic-container-stl-clr.md)|Il tipo dell'interfaccia generica per il contenitore.|  
|[set::generic_iterator (STL/CLR)](../dotnet/set-generic-iterator-stl-clr.md)|Il tipo di iteratore per l'interfaccia generica per il contenitore.|  
|[set::generic_reverse_iterator (STL/CLR)](../dotnet/set-generic-reverse-iterator-stl-clr.md)|Il tipo di un iteratore inverso per l'interfaccia generica per il contenitore.|  
|[set::generic_value (STL/CLR)](../dotnet/set-generic-value-stl-clr.md)|Il tipo di un elemento per l'interfaccia generica per il contenitore.|  
|[set::iterator (STL/CLR)](../dotnet/set-iterator-stl-clr.md)|Tipo di un iteratore per la sequenza controllata.|  
|[set::key_compare (STL/CLR)](../dotnet/set-key-compare-stl-clr.md)|Delegato per due chiavi di ordinamento.|  
|[set::key_type (STL/CLR)](../dotnet/set-key-type-stl-clr.md)|Tipo di una chiave di ordinamento.|  
|[set::reference (STL/CLR)](../dotnet/set-reference-stl-clr.md)|Tipo di un riferimento a un elemento.|  
|[set::reverse_iterator (STL/CLR)](../dotnet/set-reverse-iterator-stl-clr.md)|Tipo di un iteratore inverso della sequenza controllata.|  
|[set::size_type (STL/CLR)](../dotnet/set-size-type-stl-clr.md)|Il tipo di una distanza (negativo) tra due elementi.|  
|[set::value_compare (STL/CLR)](../dotnet/set-value-compare-stl-clr.md)|Il delegato di ordinamento per valori di due elementi.|  
|[set::value_type (STL/CLR)](../dotnet/set-value-type-stl-clr.md)|Tipo di un elemento.|  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[set::begin (STL/CLR)](../dotnet/set-begin-stl-clr.md)|Indica l'inizio della sequenza controllata.|  
|[set::clear (STL/CLR)](../dotnet/set-clear-stl-clr.md)|Rimuove tutti gli elementi.|  
|[set::count (STL/CLR)](../dotnet/set-count-stl-clr.md)|Conteggi di elementi corrispondenti a una chiave specificata.|  
|[set::empty (STL/CLR)](../dotnet/set-empty-stl-clr.md)|Verifica se sono presenti o meno degli elementi.|  
|[set::end (STL/CLR)](../dotnet/set-end-stl-clr.md)|Designa la fine della sequenza controllata.|  
|[set::equal_range (STL/CLR)](../dotnet/set-equal-range-stl-clr.md)|Trova un intervallo che corrisponde a una chiave specificata.|  
|[set::erase (STL/CLR)](../dotnet/set-erase-stl-clr.md)|Rimuove gli elementi in corrispondenza delle posizioni specificate.|  
|[set::find (STL/CLR)](../dotnet/set-find-stl-clr.md)|Trova un elemento che corrisponde a una chiave specificata.|  
|[set::insert (STL/CLR)](../dotnet/set-insert-stl-clr.md)|Aggiunge elementi.|  
|[set::key_comp (STL/CLR)](../dotnet/set-key-comp-stl-clr.md)|Copia il delegato per due chiavi di ordinamento.|  
|[set::lower_bound (STL/CLR)](../dotnet/set-lower-bound-stl-clr.md)|Consente di trovare l'inizio dell'intervallo che corrisponde a una chiave specificata.|  
|[set::make_value (STL/CLR)](../dotnet/set-make-value-stl-clr.md)|Costruisce un oggetto valore.|  
|[set::rbegin (STL/CLR)](../dotnet/set-rbegin-stl-clr.md)|Indica l'inizio della sequenza controllata inversa.|  
|[set::rend (STL/CLR)](../dotnet/set-rend-stl-clr.md)|Indica la fine della sequenza controllata inversa.|  
|[set::set (STL/CLR)](../dotnet/set-set-stl-clr.md)|Costruisce un oggetto contenitore.|  
|[set::size (STL/CLR)](../dotnet/set-size-stl-clr.md)|Conta il numero di elementi.|  
|[set::swap (STL/CLR)](../dotnet/set-swap-stl-clr.md)|Scambia il contenuto di due contenitori.|  
|[set::to_array (STL/CLR)](../dotnet/set-to-array-stl-clr.md)|La sequenza controllata viene copiata in una nuova matrice.|  
|[set::upper_bound (STL/CLR)](../dotnet/set-upper-bound-stl-clr.md)|Trova fine dell'intervallo che corrisponde a una chiave specificata.|  
|[set::value_comp (STL/CLR)](../dotnet/set-value-comp-stl-clr.md)|Copia il delegato di ordinamento per valori di due elementi.|  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|[set::operator= (STL/CLR)](../dotnet/set-operator-assign-stl-clr.md)|Sostituisce la sequenza controllata.|  
|[operator!= (set) (STL/CLR)](../dotnet/operator-inequality-set-stl-clr.md)|Determina se un `set` oggetto non è uguale a un altro `set` oggetto.|  
|[operator< (set) (STL/CLR)](../dotnet/operator-less-than-set-stl-clr.md)|Determina se un `set` oggetto è minore di un altro `set` oggetto.|  
|[operator<= (set) (STL/CLR)](../dotnet/operator-less-or-equal-set-stl-clr.md)|Determina se un `set` oggetto è minore o uguale a un altro `set` oggetto.|  
|[operator== (set) (STL/CLR)](../dotnet/operator-equality-set-stl-clr.md)|Determina se un `set` è uguale a un altro oggetto `set` oggetto.|  
|[operator> (set) (STL/CLR)](../dotnet/operator-greater-than-set-stl-clr.md)|Determina se un `set` è maggiore di un altro oggetto `set` oggetto.|  
|[operator>= (set) (STL/CLR)](../dotnet/operator-greater-or-equal-set-stl-clr.md)|Determina se un `set` oggetto è maggiore o uguale a un altro `set` oggetto.|  
  
## <a name="interfaces"></a>Interfacce  
  
|Interfaccia|Descrizione|  
|---------------|-----------------|  
|<xref:System.ICloneable>|Duplicare un oggetto.|  
|<xref:System.Collections.IEnumerable>|Tra gli elementi di sequenza.|  
|<xref:System.Collections.ICollection>|Gestione gruppo di elementi.|  
|<xref:System.Collections.Generic.IEnumerable%601>|Sequenza tramite elementi tipizzati.|  
|<xref:System.Collections.Generic.ICollection%601>|Gestione gruppo di elementi tipizzati.|  
|ITree\<chiave, valore >|Gestisci contenitore generico.|  
  
## <a name="remarks"></a>Note  
 L'oggetto alloca e libera spazio di archiviazione per la sequenza che controlla come singoli nodi. Inserisce gli elementi in un albero bilanciato (quasi) che mantiene ordinato modificando i collegamenti tra nodi, mai copiando il contenuto di un nodo a un altro. Pertanto, è possibile inserire e rimuovere elementi liberamente senza disturbare elementi rimanenti.  
  
 L'oggetto ordina la sequenza da esso controllata chiamando un oggetto delegato archiviato di tipo [set:: key_compare (STL/CLR)](../dotnet/set-key-compare-stl-clr.md). È possibile specificare l'oggetto delegato archiviato quando si costruisce il set. Se non si specifica alcun oggetto delegato, il valore predefinito è il confronto `operator<(key_type, key_type)`. L'accesso all'oggetto archiviato chiamando la funzione membro [set:: key_comp (STL/CLR)](../dotnet/set-key-comp-stl-clr.md)`()`.  
  
 Tale oggetto delegato deve imporre un ordine debole strict sulle chiavi di tipo [set:: KEY_TYPE (STL/CLR)](../dotnet/set-key-type-stl-clr.md). Pertanto, per le due chiavi `X` e `Y`:  
  
 `key_comp()(X, Y)`Restituisce il valore booleano stesso risultato a ogni chiamata.  
  
 Se `key_comp()(X, Y)` è true, `key_comp()(Y, X)` deve essere false.  
  
 Se `key_comp()(X, Y)` è true, `X` viene definito per essere ordinati prima `Y`.  
  
 Se `!key_comp()(X, Y) && !key_comp()(Y, X)` è true, `X` e `Y` rientrano hanno un ordinamento equivalente.  
  
 Per qualsiasi elemento `X` che precede `Y` nella sequenza controllata, `key_comp()(Y, X)` è false. (Per l'oggetto delegato predefinito, le chiavi non diminuisce mai valore.) A differenza di classe modello [impostare](../dotnet/set-stl-clr.md), un oggetto della classe modello `set` non richiede che le chiavi per tutti gli elementi siano univoche. Due o più tasti possono disporre di un ordinamento equivalente.  
  
 Ogni elemento agisce come una nuova e un valore. La sequenza viene rappresentata in modo da consentire la ricerca, inserimento e rimozione di un elemento arbitrario con un numero di operazioni è proporzionale al logaritmo del numero di elementi nella sequenza (tempo logaritmico). Inoltre, l'inserimento di un elemento non invalida gli iteratori e la rimozione di un elemento invalida solo gli iteratori che fanno riferimento all'elemento rimosso.  
  
 Un set supporta gli iteratori bidirezionali, pertanto che è possibile eseguire per gli elementi adiacenti, dato un iteratore che definisce un elemento nella sequenza controllata. Un nodo head speciale corrispondente per l'iteratore restituito da [set:: end (STL/CLR)](../dotnet/set-end-stl-clr.md)`()`. È possibile diminuire l'iteratore per raggiungere l'ultimo elemento nella sequenza controllata, se presente. È possibile incrementare un iteratore di insieme per raggiungere il nodo head e quindi confronterà uguale a `end()`. Ma non è possibile dereferenziare l'iteratore restituito da `end()`.  
  
 Si noti che è possibile fare riferimento a un elemento set assegnato direttamente alla posizione numerica, che richiede un iteratore ad accesso casuale.  
  
 Un iteratore set archivia un handle per il nodo del set associato, che a sua volta memorizza un handle per il contenitore associato. È possibile utilizzare gli iteratori solo con i relativi oggetti contenitore associato. Un iteratore set rimane valido finché il relativo nodo set associato è associato a un set. Inoltre, un iteratore valido dereferencable--è possibile utilizzarlo per accedere o modificare il valore dell'elemento che definisce, in modo fino a quando non è uguale a `end()`.  
  
 La cancellazione o eliminazione di un elemento chiama il distruttore per il valore archiviato. Eliminazione del contenitore Cancella tutti gli elementi. Di conseguenza, un contenitore il cui tipo di elemento è una classe di riferimento assicura che nessun elemento sopravvivere al contenitore. Si noti, tuttavia, che non è un contenitore di handle `not` eliminare definitivamente gli elementi.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/set >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [hash_map (STL/CLR)](../dotnet/hash-map-stl-clr.md)   
 [hash_set (STL/CLR)](../dotnet/hash-set-stl-clr.md)   
 [hash_set (STL/CLR)](../dotnet/hash-set-stl-clr.md)   
 [hash_set (STL/CLR)](../dotnet/hash-set-stl-clr.md)   
 [eseguire il mapping (STL/CLR)](../dotnet/map-stl-clr.md)   
 [set](../dotnet/set-stl-clr.md)   
 [set](../dotnet/set-stl-clr.md)   
 [Riferimenti alla libreria STL/CLR](../dotnet/stl-clr-library-reference.md)