---
title: mappa (STL/CLR) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::map
dev_langs:
- C++
helpviewer_keywords:
- <map> header [STL/CLR]
- map class [STL/CLR]
- <cliext/map> header [STL/CLR]
ms.assetid: 8b0a7764-b5e4-4175-a802-82b72eb8662a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: cda679ed01e5266f0605639df45940d8f17e506d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33137790"
---
# <a name="map-stlclr"></a>map (STL/CLR)
La classe modello descrive un oggetto che controlla una sequenza di lunghezza variabile di elementi che dispone di accesso bidirezionale. Utilizzare il contenitore `map` per gestire una sequenza di elementi come una struttura ad albero ordinato bilanciato (quasi) di nodi, ognuno l'archiviazione di un elemento. Un elemento è costituito da una chiave, per ordinare la sequenza e un valore mappato, che si per il marcia.  
  
 Nella sezione successiva, `GValue` è identico:  
  
 `Microsoft::VisualC::StlClr::GenericPair<GKey, GMapped>`  
  
 dove:  
  
 `GKey` è identico `Key` , a meno che quest'ultimo è un tipo riferimento, nel qual caso è `Key^`  
  
 `GMapped` è identico `Mapped` , a meno che quest'ultimo è un tipo riferimento, nel qual caso è `Mapped^`  
  
## <a name="syntax"></a>Sintassi  
  
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
  
#### <a name="parameters"></a>Parametri  
 Chiave  
 Il tipo del componente chiave di un elemento nella sequenza controllata.  
  
 Il mapping  
 Il tipo del componente aggiuntivo di un elemento nella sequenza controllata.  
  
## <a name="members"></a>Membri  
  
|Definizione dei tipi|Descrizione|  
|---------------------|-----------------|  
|[map::const_iterator (STL/CLR)](../dotnet/map-const-iterator-stl-clr.md)|Tipo di un iteratore costante per la sequenza controllata.|  
|[map::const_reference (STL/CLR)](../dotnet/map-const-reference-stl-clr.md)|Tipo di un riferimento costante a un elemento.|  
|[map::const_reverse_iterator (STL/CLR)](../dotnet/map-const-reverse-iterator-stl-clr.md)|Tipo di un iteratore inverso costante per la sequenza controllata.|  
|[map::difference_type (STL/CLR)](../dotnet/map-difference-type-stl-clr.md)|Il tipo di una distanza tra due elementi (possibilmente firmato).|  
|[map::generic_container (STL/CLR)](../dotnet/map-generic-container-stl-clr.md)|Il tipo dell'interfaccia generica per il contenitore.|  
|[map::generic_iterator (STL/CLR)](../dotnet/map-generic-iterator-stl-clr.md)|Il tipo di iteratore per l'interfaccia generica per il contenitore.|  
|[map::generic_reverse_iterator (STL/CLR)](../dotnet/map-generic-reverse-iterator-stl-clr.md)|Il tipo di un iteratore inverso per l'interfaccia generica per il contenitore.|  
|[map::generic_value (STL/CLR)](../dotnet/map-generic-value-stl-clr.md)|Il tipo di un elemento per l'interfaccia generica per il contenitore.|  
|[map::iterator (STL/CLR)](../dotnet/map-iterator-stl-clr.md)|Tipo di un iteratore per la sequenza controllata.|  
|[map::key_compare (STL/CLR)](../dotnet/map-key-compare-stl-clr.md)|Delegato per due chiavi di ordinamento.|  
|[map::key_type (STL/CLR)](../dotnet/map-key-type-stl-clr.md)|Tipo di una chiave di ordinamento.|  
|[map::mapped_type (STL/CLR)](../dotnet/map-mapped-type-stl-clr.md)|Il tipo del valore mappato associato a ogni chiave.|  
|[map::reference (STL/CLR)](../dotnet/map-reference-stl-clr.md)|Tipo di un riferimento a un elemento.|  
|[map::reverse_iterator (STL/CLR)](../dotnet/map-reverse-iterator-stl-clr.md)|Tipo di un iteratore inverso della sequenza controllata.|  
|[map::size_type (STL/CLR)](../dotnet/map-size-type-stl-clr.md)|Il tipo di una distanza (negativo) tra due elementi.|  
|[map::value_compare (STL/CLR)](../dotnet/map-value-compare-stl-clr.md)|Il delegato di ordinamento per valori di due elementi.|  
|[map::value_type (STL/CLR)](../dotnet/map-value-type-stl-clr.md)|Tipo di un elemento.|  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[map::begin (STL/CLR)](../dotnet/map-begin-stl-clr.md)|Indica l'inizio della sequenza controllata.|  
|[map::clear (STL/CLR)](../dotnet/map-clear-stl-clr.md)|Rimuove tutti gli elementi.|  
|[map::count (STL/CLR)](../dotnet/map-count-stl-clr.md)|Conteggi di elementi corrispondenti a una chiave specificata.|  
|[map::empty (STL/CLR)](../dotnet/map-empty-stl-clr.md)|Verifica se sono presenti o meno degli elementi.|  
|[map::end (STL/CLR)](../dotnet/map-end-stl-clr.md)|Designa la fine della sequenza controllata.|  
|[map::equal_range (STL/CLR)](../dotnet/map-equal-range-stl-clr.md)|Trova un intervallo che corrisponde a una chiave specificata.|  
|[map::erase (STL/CLR)](../dotnet/map-erase-stl-clr.md)|Rimuove gli elementi in corrispondenza delle posizioni specificate.|  
|[map::find (STL/CLR)](../dotnet/map-find-stl-clr.md)|Trova un elemento che corrisponde a una chiave specificata.|  
|[map::insert (STL/CLR)](../dotnet/map-insert-stl-clr.md)|Aggiunge elementi.|  
|[map::key_comp (STL/CLR)](../dotnet/map-key-comp-stl-clr.md)|Copia il delegato per due chiavi di ordinamento.|  
|[map::lower_bound (STL/CLR)](../dotnet/map-lower-bound-stl-clr.md)|Consente di trovare l'inizio dell'intervallo che corrisponde a una chiave specificata.|  
|[map::make_value (STL/CLR)](../dotnet/map-make-value-stl-clr.md)|Costruisce un oggetto valore.|  
|[map::map (STL/CLR)](../dotnet/map-map-stl-clr.md)|Costruisce un oggetto contenitore.|  
|[map::rbegin (STL/CLR)](../dotnet/map-rbegin-stl-clr.md)|Indica l'inizio della sequenza controllata inversa.|  
|[map::rend (STL/CLR)](../dotnet/map-rend-stl-clr.md)|Indica la fine della sequenza controllata inversa.|  
|[map::size (STL/CLR)](../dotnet/map-size-stl-clr.md)|Conta il numero di elementi.|  
|[map::swap (STL/CLR)](../dotnet/map-swap-stl-clr.md)|Scambia il contenuto di due contenitori.|  
|[map::to_array (STL/CLR)](../dotnet/map-to-array-stl-clr.md)|La sequenza controllata viene copiata in una nuova matrice.|  
|[map::upper_bound (STL/CLR)](../dotnet/map-upper-bound-stl-clr.md)|Trova fine dell'intervallo che corrisponde a una chiave specificata.|  
|[map::value_comp (STL/CLR)](../dotnet/map-value-comp-stl-clr.md)|Copia il delegato di ordinamento per valori di due elementi.|  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|[map::operator= (STL/CLR)](../dotnet/map-operator-assign-stl-clr.md)|Sostituisce la sequenza controllata.|  
|[map::operator(STL/CLR)](../dotnet/map-operator-stl-clr.md)|Esegue il mapping di una chiave per il relativo valore mappato associato.|  
|[operator!= (map) (STL/CLR)](../dotnet/operator-inequality-map-stl-clr.md)|Determina se un `map` oggetto non è uguale a un altro `map` oggetto.|  
|[operator< (map) (STL/CLR)](../dotnet/operator-less-than-map-stl-clr.md)|Determina se un `map` oggetto è minore di un altro `map` oggetto.|  
|[operator<= (map) (STL/CLR)](../dotnet/operator-less-or-equal-map-stl-clr.md)|Determina se un `map` oggetto è minore o uguale a un altro `map` oggetto.|  
|[operator== (map) (STL/CLR)](../dotnet/operator-equality-map-stl-clr.md)|Determina se un `map` è uguale a un altro oggetto `map` oggetto.|  
|[operator> (map) (STL/CLR)](../dotnet/operator-greater-than-map-stl-clr.md)|Determina se un `map` è maggiore di un altro oggetto `map` oggetto.|  
|[operator>= (map) (STL/CLR)](../dotnet/operator-greater-or-equal-map-stl-clr.md)|Determina se un `map` oggetto è maggiore o uguale a un altro `map` oggetto.|  
  
## <a name="interfaces"></a>Interfacce  
  
|Interfaccia|Descrizione|  
|---------------|-----------------|  
|<xref:System.ICloneable>|Duplicare un oggetto.|  
|<xref:System.Collections.IEnumerable>|Tra gli elementi di sequenza.|  
|<xref:System.Collections.ICollection>|Gestione gruppo di elementi.|  
|<xref:System.Collections.Generic.IEnumerable%601>|Sequenza tramite elementi tipizzati.|  
|<xref:System.Collections.Generic.ICollection%601>|Gestione gruppo di elementi tipizzati.|  
|<xref:System.Collections.Generic.IDictionary%602>|Gestione gruppo di {chiave, valore} coppie.|  
|ITree < chiave, valore >|Gestisci contenitore generico.|  
  
## <a name="remarks"></a>Note  
 L'oggetto alloca e libera spazio di archiviazione per la sequenza che controlla come singoli nodi. Inserisce gli elementi in un albero bilanciato (quasi) che mantiene ordinato modificando i collegamenti tra nodi, mai copiando il contenuto di un nodo a un altro. Pertanto, è possibile inserire e rimuovere elementi liberamente senza disturbare elementi rimanenti.  
  
 L'oggetto ordina la sequenza da esso controllata chiamando un oggetto delegato archiviato di tipo [Map:: key_compare (STL/CLR)](../dotnet/map-key-compare-stl-clr.md). È possibile specificare l'oggetto delegato archiviato quando si costruisce la mappa. Se non si specifica alcun oggetto delegato, il valore predefinito è il confronto `operator<(key_type, key_type)`. L'accesso all'oggetto archiviato chiamando la funzione membro [Map:: key_comp (STL/CLR)](../dotnet/map-key-comp-stl-clr.md)`()`.  
  
 Tale oggetto delegato deve imporre un ordine debole strict sulle chiavi di tipo [Map:: KEY_TYPE (STL/CLR)](../dotnet/map-key-type-stl-clr.md). Pertanto, per le due chiavi `X` e `Y`:  
  
 `key_comp()(X, Y)` Restituisce il valore booleano stesso risultato a ogni chiamata.  
  
 Se `key_comp()(X, Y)` è true, `key_comp()(Y, X)` deve essere false.  
  
 Se `key_comp()(X, Y)` è true, `X` viene definito per essere ordinati prima `Y`.  
  
 Se `!key_comp()(X, Y) && !key_comp()(Y, X)` è true, `X` e `Y` rientrano hanno un ordinamento equivalente.  
  
 Per qualsiasi elemento `X` che precede `Y` nella sequenza controllata, `key_comp()(Y, X)` è false. (Per l'oggetto delegato predefinito, le chiavi non diminuisce mai valore.) A differenza di classe modello [mappa](../dotnet/map-stl-clr.md), un oggetto della classe modello `map` non richiede che le chiavi per tutti gli elementi siano univoche. Due o più tasti possono disporre di un ordinamento equivalente.  
  
 Ogni elemento contiene una chiave distinta e un valore mappato. La sequenza viene rappresentata in modo da consentire la ricerca, inserimento e rimozione di un elemento arbitrario con un numero di operazioni è proporzionale al logaritmo del numero di elementi nella sequenza (tempo logaritmico). Inoltre, l'inserimento di un elemento non invalida gli iteratori e la rimozione di un elemento invalida solo gli iteratori che fanno riferimento all'elemento rimosso.  
  
 Una mappa supporta gli iteratori bidirezionali, pertanto che è possibile eseguire per gli elementi adiacenti, dato un iteratore che definisce un elemento nella sequenza controllata. Un nodo head speciale corrispondente per l'iteratore restituito da [Map:: end (STL/CLR)](../dotnet/map-end-stl-clr.md)`()`. È possibile diminuire l'iteratore per raggiungere l'ultimo elemento nella sequenza controllata, se presente. È possibile incrementare un iteratore di mappa per raggiungere il nodo head e quindi confronterà uguale a `end()`. Ma non è possibile dereferenziare l'iteratore restituito da `end()`.  
  
 Si noti che è possibile fare riferimento a un elemento della mappa assegnato direttamente alla posizione numerica, che richiede un iteratore ad accesso casuale.  
  
 Un iteratore di mappa archivia un handle per il nodo mapping associato, che a sua volta memorizza un handle per il contenitore associato. È possibile utilizzare gli iteratori solo con i relativi oggetti contenitore associato. Un iteratore di mappa rimane valido finché il relativo nodo mapping associato è associato a un' mappa. Inoltre, un iteratore valido dereferencable--è possibile utilizzarlo per accedere o modificare il valore dell'elemento che definisce, in modo fino a quando non è uguale a `end()`.  
  
 La cancellazione o eliminazione di un elemento chiama il distruttore per il valore archiviato. Eliminazione del contenitore Cancella tutti gli elementi. Di conseguenza, un contenitore il cui tipo di elemento è una classe di riferimento assicura che nessun elemento sopravvivere al contenitore. Si noti, tuttavia, che non è un contenitore di handle `not` eliminare definitivamente gli elementi.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/mappa >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [hash_map (STL/CLR)](../dotnet/hash-map-stl-clr.md)   
 [hash_map (STL/CLR)](../dotnet/hash-map-stl-clr.md)   
 [hash_multiset (STL/CLR)](../dotnet/hash-multiset-stl-clr.md)   
 [hash_set (STL/CLR)](../dotnet/hash-set-stl-clr.md)   
 [mappa](../dotnet/map-stl-clr.md)   
 [multiset (STL/CLR)](../dotnet/multiset-stl-clr.md)   
 [set (STL/CLR)](../dotnet/set-stl-clr.md)   
 [Riferimenti alla libreria STL/CLR](../dotnet/stl-clr-library-reference.md)