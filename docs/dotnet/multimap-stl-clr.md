---
title: multimap (STL/CLR) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::multimap
dev_langs:
- C++
helpviewer_keywords:
- <map> header [STL/CLR]
- <cliext/map> header [STL/CLR]
- multimap class [STL/CLR]
ms.assetid: 3dfe329d-a078-462a-b050-7999ce6110ad
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 168c6afec0f8f195d1315a54eff2794f7e3fd07e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33137917"
---
# <a name="multimap-stlclr"></a>multimap (STL/CLR)
La classe modello descrive un oggetto che controlla una sequenza di lunghezza variabile di elementi che dispone di accesso bidirezionale. Utilizzare il contenitore `multimap` per gestire una sequenza di elementi come una struttura ad albero ordinato bilanciato (quasi) di nodi, ognuno l'archiviazione di un elemento. Un elemento è costituito da una chiave, per ordinare la sequenza e un valore mappato, che si per il marcia.  
  
 Nella sezione successiva, `GValue` è identico:  
  
 `Microsoft::VisualC::StlClr::GenericPair<GKey, GMapped>`  
  
 dove:  
  
 `GKey` è identico `Key` , a meno che quest'ultimo è un tipo riferimento, nel qual caso è `Key^`  
  
 `GMapped` è identico `Mapped` , a meno che quest'ultimo è un tipo riferimento, nel qual caso è `Mapped^`  
  
## <a name="syntax"></a>Sintassi  
  
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
  
#### <a name="parameters"></a>Parametri  
 Chiave  
 Il tipo del componente chiave di un elemento nella sequenza controllata.  
  
 Il mapping  
 Il tipo del componente aggiuntivo di un elemento nella sequenza controllata.  
  
## <a name="members"></a>Membri  
  
|Definizione dei tipi|Descrizione|  
|---------------------|-----------------|  
|[multimap::const_iterator (STL/CLR)](../dotnet/multimap-const-iterator-stl-clr.md)|Tipo di un iteratore costante per la sequenza controllata.|  
|[multimap::const_reference (STL/CLR)](../dotnet/multimap-const-reference-stl-clr.md)|Tipo di un riferimento costante a un elemento.|  
|[multimap::const_reverse_iterator (STL/CLR)](../dotnet/multimap-const-reverse-iterator-stl-clr.md)|Tipo di un iteratore inverso costante per la sequenza controllata.|  
|[multimap::difference_type (STL/CLR)](../dotnet/multimap-difference-type-stl-clr.md)|Il tipo di una distanza tra due elementi (possibilmente firmato).|  
|[multimap::generic_container (STL/CLR)](../dotnet/multimap-generic-container-stl-clr.md)|Il tipo dell'interfaccia generica per il contenitore.|  
|[multimap::generic_iterator (STL/CLR)](../dotnet/multimap-generic-iterator-stl-clr.md)|Il tipo di iteratore per l'interfaccia generica per il contenitore.|  
|[multimap::generic_reverse_iterator (STL/CLR)](../dotnet/multimap-generic-reverse-iterator-stl-clr.md)|Il tipo di un iteratore inverso per l'interfaccia generica per il contenitore.|  
|[multimap::generic_value (STL/CLR)](../dotnet/multimap-generic-value-stl-clr.md)|Il tipo di un elemento per l'interfaccia generica per il contenitore.|  
|[multimap::iterator (STL/CLR)](../dotnet/multimap-iterator-stl-clr.md)|Tipo di un iteratore per la sequenza controllata.|  
|[multimap::key_compare (STL/CLR)](../dotnet/multimap-key-compare-stl-clr.md)|Delegato per due chiavi di ordinamento.|  
|[multimap::key_type (STL/CLR)](../dotnet/multimap-key-type-stl-clr.md)|Tipo di una chiave di ordinamento.|  
|[multimap::mapped_type (STL/CLR)](../dotnet/multimap-mapped-type-stl-clr.md)|Il tipo del valore mappato associato a ogni chiave.|  
|[multimap::reference (STL/CLR)](../dotnet/multimap-reference-stl-clr.md)|Tipo di un riferimento a un elemento.|  
|[multimap::reverse_iterator (STL/CLR)](../dotnet/multimap-reverse-iterator-stl-clr.md)|Tipo di un iteratore inverso della sequenza controllata.|  
|[multimap::size_type (STL/CLR)](../dotnet/multimap-size-type-stl-clr.md)|Il tipo di una distanza (negativo) tra due elementi.|  
|[multimap::value_compare (STL/CLR)](../dotnet/multimap-value-compare-stl-clr.md)|Il delegato di ordinamento per valori di due elementi.|  
|[multimap::value_type (STL/CLR)](../dotnet/multimap-value-type-stl-clr.md)|Tipo di un elemento.|  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[multimap::begin (STL/CLR)](../dotnet/multimap-begin-stl-clr.md)|Indica l'inizio della sequenza controllata.|  
|[multimap::clear (STL/CLR)](../dotnet/multimap-clear-stl-clr.md)|Rimuove tutti gli elementi.|  
|[multimap::count (STL/CLR)](../dotnet/multimap-count-stl-clr.md)|Conteggi di elementi corrispondenti a una chiave specificata.|  
|[multimap::empty (STL/CLR)](../dotnet/multimap-empty-stl-clr.md)|Verifica se sono presenti o meno degli elementi.|  
|[multimap::end (STL/CLR)](../dotnet/multimap-end-stl-clr.md)|Designa la fine della sequenza controllata.|  
|[multimap::equal_range (STL/CLR)](../dotnet/multimap-equal-range-stl-clr.md)|Trova un intervallo che corrisponde a una chiave specificata.|  
|[multimap::erase (STL/CLR)](../dotnet/multimap-erase-stl-clr.md)|Rimuove gli elementi in corrispondenza delle posizioni specificate.|  
|[multimap::find (STL/CLR)](../dotnet/multimap-find-stl-clr.md)|Trova un elemento che corrisponde a una chiave specificata.|  
|[multimap::insert (STL/CLR)](../dotnet/multimap-insert-stl-clr.md)|Aggiunge elementi.|  
|[multimap::key_comp (STL/CLR)](../dotnet/multimap-key-comp-stl-clr.md)|Copia il delegato per due chiavi di ordinamento.|  
|[multimap::lower_bound (STL/CLR)](../dotnet/multimap-lower-bound-stl-clr.md)|Consente di trovare l'inizio dell'intervallo che corrisponde a una chiave specificata.|  
|[multimap::make_value (STL/CLR)](../dotnet/multimap-make-value-stl-clr.md)|Costruisce un oggetto valore.|  
|[multimap::multimap (STL/CLR)](../dotnet/multimap-multimap-stl-clr.md)|Costruisce un oggetto contenitore.|  
|[multimap::rbegin (STL/CLR)](../dotnet/multimap-rbegin-stl-clr.md)|Indica l'inizio della sequenza controllata inversa.|  
|[multimap::rend (STL/CLR)](../dotnet/multimap-rend-stl-clr.md)|Indica la fine della sequenza controllata inversa.|  
|[multimap::size (STL/CLR)](../dotnet/multimap-size-stl-clr.md)|Conta il numero di elementi.|  
|[multimap::swap (STL/CLR)](../dotnet/multimap-swap-stl-clr.md)|Scambia il contenuto di due contenitori.|  
|[multimap::to_array (STL/CLR)](../dotnet/multimap-to-array-stl-clr.md)|La sequenza controllata viene copiata in una nuova matrice.|  
|[multimap::upper_bound (STL/CLR)](../dotnet/multimap-upper-bound-stl-clr.md)|Trova fine dell'intervallo che corrisponde a una chiave specificata.|  
|[multimap::value_comp (STL/CLR)](../dotnet/multimap-value-comp-stl-clr.md)|Copia il delegato di ordinamento per valori di due elementi.|  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|[multimap::operator= (STL/CLR)](../dotnet/multimap-operator-assign-stl-clr.md)|Sostituisce la sequenza controllata.|  
|[operator!= (multimap) (STL/CLR)](../dotnet/operator-inequality-multimap-stl-clr.md)|Determina se un `multimap` oggetto non è uguale a un altro `multimap` oggetto.|  
|[operator< (multimap) (STL/CLR)](../dotnet/operator-less-than-multimap-stl-clr.md)|Determina se un `multimap` oggetto è minore di un altro `multimap` oggetto.|  
|[operator<= (multimap) (STL/CLR)](../dotnet/operator-less-or-equal-multimap-stl-clr.md)|Determina se un `multimap` oggetto è minore o uguale a un altro `multimap` oggetto.|  
|[operator== (multimap) (STL/CLR)](../dotnet/operator-equality-multimap-stl-clr.md)|Determina se un `multimap` è uguale a un altro oggetto `multimap` oggetto.|  
|[operator> (multimap) (STL/CLR)](../dotnet/operator-greater-than-multimap-stl-clr.md)|Determina se un `multimap` è maggiore di un altro oggetto `multimap` oggetto.|  
|[operator>= (multimap) (STL/CLR)](../dotnet/operator-greater-or-equal-multimap-stl-clr.md)|Determina se un `multimap` oggetto è maggiore o uguale a un altro `multimap` oggetto.|  
  
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
  
 L'oggetto ordina la sequenza da esso controllata chiamando un oggetto delegato archiviato di tipo [multimap:: key_compare (STL/CLR)](../dotnet/multimap-key-compare-stl-clr.md). È possibile specificare l'oggetto delegato archiviato quando si costruisce il multimap; Se non si specifica alcun oggetto delegato, il valore predefinito è il confronto `operator<(key_type, key_type)`. L'accesso all'oggetto archiviato chiamando la funzione membro [multimap:: key_comp (STL/CLR)](../dotnet/multimap-key-comp-stl-clr.md)`()`.  
  
 Tale oggetto delegato deve imporre un ordine debole strict sulle chiavi di tipo [multimap:: KEY_TYPE (STL/CLR)](../dotnet/multimap-key-type-stl-clr.md). Pertanto, per le due chiavi `X` e `Y`:  
  
 `key_comp()(X, Y)` Restituisce il valore booleano stesso risultato a ogni chiamata.  
  
 Se `key_comp()(X, Y)` è true, `key_comp()(Y, X)` deve essere false.  
  
 Se `key_comp()(X, Y)` è true, `X` viene definito per essere ordinati prima `Y`.  
  
 Se `!key_comp()(X, Y) && !key_comp()(Y, X)` è true, `X` e `Y` rientrano hanno un ordinamento equivalente.  
  
 Per qualsiasi elemento `X` che precede `Y` nella sequenza controllata, `key_comp()(Y, X)` è false. (Per l'oggetto delegato predefinito, le chiavi non diminuisce mai valore.) A differenza di classe modello [mappa (STL/CLR)](../dotnet/map-stl-clr.md), un oggetto della classe modello `multimap` non richiede che le chiavi per tutti gli elementi siano univoche. Due o più tasti possono disporre di un ordinamento equivalente.  
  
 Ogni elemento contiene una chiave distinta e un valore mappato. La sequenza viene rappresentata in modo da consentire la ricerca, inserimento e rimozione di un elemento arbitrario con un numero di operazioni è proporzionale al logaritmo del numero di elementi nella sequenza (tempo logaritmico). Inoltre, l'inserimento di un elemento non invalida gli iteratori e la rimozione di un elemento invalida solo gli iteratori che fanno riferimento all'elemento rimosso.  
  
 Un multimap supporta gli iteratori bidirezionali, pertanto che è possibile eseguire per gli elementi adiacenti, dato un iteratore che definisce un elemento nella sequenza controllata. Un nodo head speciale corrispondente per l'iteratore restituito da [multimap:: end (STL/CLR)](../dotnet/multimap-end-stl-clr.md)`()`. È possibile diminuire l'iteratore per raggiungere l'ultimo elemento nella sequenza controllata, se presente. È possibile incrementare un iteratore multimap per raggiungere il nodo head e quindi confronterà uguale a `end()`. Ma non è possibile dereferenziare l'iteratore restituito da `end()`.  
  
 Si noti che è possibile fare riferimento a un elemento del multimap assegnato direttamente alla posizione numerica, che richiede un iteratore ad accesso casuale.  
  
 Un iteratore multimap archivia un handle per il nodo multimap associato, che a sua volta memorizza un handle per il contenitore associato. È possibile utilizzare gli iteratori solo con i relativi oggetti contenitore associato. Un iteratore multimap rimane valido finché il relativo nodo multimap associato è associato a un multimap. Inoltre, un iteratore valido dereferencable--è possibile utilizzarlo per accedere o modificare il valore dell'elemento che definisce, in modo fino a quando non è uguale a `end()`.  
  
 La cancellazione o eliminazione di un elemento chiama il distruttore per il valore archiviato. Eliminazione del contenitore Cancella tutti gli elementi. Di conseguenza, un contenitore il cui tipo di elemento è una classe di riferimento assicura che nessun elemento sopravvivere al contenitore. Si noti, tuttavia, che non è un contenitore di handle `not` eliminare definitivamente gli elementi.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/mappa >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [hash_map (STL/CLR)](../dotnet/hash-map-stl-clr.md)   
 [hash_multimap (STL/CLR)](../dotnet/hash-multimap-stl-clr.md)   
 [hash_multiset (STL/CLR)](../dotnet/hash-multiset-stl-clr.md)   
 [hash_set (STL/CLR)](../dotnet/hash-set-stl-clr.md)   
 [eseguire il mapping (STL/CLR)](../dotnet/map-stl-clr.md)   
 [multiset (STL/CLR)](../dotnet/multiset-stl-clr.md)   
 [set (STL/CLR)](../dotnet/set-stl-clr.md)   
 [Riferimenti alla libreria STL/CLR](../dotnet/stl-clr-library-reference.md)