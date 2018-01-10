---
title: hash_multimap (STL/CLR) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::hash_multimap
dev_langs: C++
helpviewer_keywords:
- hash_multimap class [STL/CLR]
- <cliext/hash_map> header [STL/CLR]
- <hash_map> header [STL/CLR]
ms.assetid: cd78687b-8a05-48e0-9d22-8b8194ae3b0b
caps.latest.revision: "19"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: b6927b25d627874f5a3d649099a4ed5e099bc6cb
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="hashmultimap-stlclr"></a>hash_multimap (STL/CLR)
La classe modello descrive un oggetto che controlla una sequenza di lunghezza variabile di elementi che dispone di accesso bidirezionale. Utilizzare il contenitore `hash_multimap` per gestire una sequenza di elementi come una tabella hash, l'archiviazione di un bidirezionale ogni voce della tabella collegata elenco di nodi e ogni nodo di archiviazione di un elemento. Un elemento è costituito da una chiave, per ordinare la sequenza e un valore mappato, che si per il marcia.  
  
 Nella sezione successiva, `GValue` è identico:  
  
 `Microsoft::VisualC::StlClr::GenericPair<GKey, GMapped>`  
  
 dove:  
  
 `GKey`è identico `Key` , a meno che quest'ultimo è un tipo riferimento, nel qual caso è`Key^`  
  
 `GMapped`è identico `Mapped` , a meno che quest'ultimo è un tipo riferimento, nel qual caso è`Mapped^`  
  
## <a name="syntax"></a>Sintassi  
  
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
  
#### <a name="parameters"></a>Parametri  
 Chiave  
 Il tipo del componente chiave di un elemento nella sequenza controllata.  
  
 Il mapping  
 Il tipo del componente aggiuntivo di un elemento nella sequenza controllata.  
  
## <a name="members"></a>Membri  
  
|Definizione dei tipi|Descrizione|  
|---------------------|-----------------|  
|[hash_multimap::const_iterator (STL/CLR)](../dotnet/hash-multimap-const-iterator-stl-clr.md)|Tipo di un iteratore costante per la sequenza controllata.|  
|[hash_multimap::const_reference (STL/CLR)](../dotnet/hash-multimap-const-reference-stl-clr.md)|Tipo di un riferimento costante a un elemento.|  
|[hash_multimap::const_reverse_iterator (STL/CLR)](../dotnet/hash-multimap-const-reverse-iterator-stl-clr.md)|Tipo di un iteratore inverso costante per la sequenza controllata.|  
|[hash_multimap::difference_type (STL/CLR)](../dotnet/hash-multimap-difference-type-stl-clr.md)|Il tipo di una distanza tra due elementi (possibilmente firmato).|  
|[hash_multimap::generic_container (STL/CLR)](../dotnet/hash-multimap-generic-container-stl-clr.md)|Il tipo dell'interfaccia generica per il contenitore.|  
|[hash_multimap::generic_iterator (STL/CLR)](../dotnet/hash-multimap-generic-iterator-stl-clr.md)|Il tipo di iteratore per l'interfaccia generica per il contenitore.|  
|[hash_multimap::generic_reverse_iterator (STL/CLR)](../dotnet/hash-multimap-generic-reverse-iterator-stl-clr.md)|Il tipo di un iteratore inverso per l'interfaccia generica per il contenitore.|  
|[hash_multimap::generic_value (STL/CLR)](../dotnet/hash-multimap-generic-value-stl-clr.md)|Il tipo di un elemento per l'interfaccia generica per il contenitore.|  
|[hash_multimap::hasher (STL/CLR)](../dotnet/hash-multimap-hasher-stl-clr.md)|Il delegato hash per una chiave.|  
|[hash_multimap::iterator (STL/CLR)](../dotnet/hash-multimap-iterator-stl-clr.md)|Tipo di un iteratore per la sequenza controllata.|  
|[hash_multimap::key_compare (STL/CLR)](../dotnet/hash-multimap-key-compare-stl-clr.md)|Delegato per due chiavi di ordinamento.|  
|[hash_multimap::key_type (STL/CLR)](../dotnet/hash-multimap-key-type-stl-clr.md)|Tipo di una chiave di ordinamento.|  
|[hash_multimap::mapped_type (STL/CLR)](../dotnet/hash-multimap-mapped-type-stl-clr.md)|Il tipo del valore mappato associato a ogni chiave.|  
|[hash_multimap::reference (STL/CLR)](../dotnet/hash-multimap-reference-stl-clr.md)|Tipo di un riferimento a un elemento.|  
|[hash_multimap::reverse_iterator (STL/CLR)](../dotnet/hash-multimap-reverse-iterator-stl-clr.md)|Tipo di un iteratore inverso della sequenza controllata.|  
|[hash_multimap::size_type (STL/CLR)](../dotnet/hash-multimap-size-type-stl-clr.md)|Il tipo di una distanza (negativo) tra due elementi.|  
|[hash_multimap::value_compare (STL/CLR)](../dotnet/hash-multimap-value-compare-stl-clr.md)|Il delegato di ordinamento per valori di due elementi.|  
|[hash_multimap::value_type (STL/CLR)](../dotnet/hash-multimap-value-type-stl-clr.md)|Tipo di un elemento.|  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[hash_multimap::begin (STL/CLR)](../dotnet/hash-multimap-begin-stl-clr.md)|Indica l'inizio della sequenza controllata.|  
|[hash_multimap::bucket_count (STL/CLR)](../dotnet/hash-multimap-bucket-count-stl-clr.md)|Conta il numero di bucket.|  
|[hash_multimap::clear (STL/CLR)](../dotnet/hash-multimap-clear-stl-clr.md)|Rimuove tutti gli elementi.|  
|[hash_multimap::count (STL/CLR)](../dotnet/hash-multimap-count-stl-clr.md)|Conteggi di elementi corrispondenti a una chiave specificata.|  
|[hash_multimap::empty (STL/CLR)](../dotnet/hash-multimap-empty-stl-clr.md)|Verifica se sono presenti o meno degli elementi.|  
|[hash_multimap::end (STL/CLR)](../dotnet/hash-multimap-end-stl-clr.md)|Designa la fine della sequenza controllata.|  
|[hash_multimap::equal_range (STL/CLR)](../dotnet/hash-multimap-equal-range-stl-clr.md)|Trova un intervallo che corrisponde a una chiave specificata.|  
|[hash_multimap::erase (STL/CLR)](../dotnet/hash-multimap-erase-stl-clr.md)|Rimuove gli elementi in corrispondenza delle posizioni specificate.|  
|[hash_multimap::find (STL/CLR)](../dotnet/hash-multimap-find-stl-clr.md)|Trova un elemento che corrisponde a una chiave specificata.|  
|[hash_multimap::hash_delegate (STL/CLR)](../dotnet/hash-multimap-hash-delegate-stl-clr.md)|Copia il delegato per una chiave hash.|  
|[hash_multimap::hash_multimap (STL/CLR)](../dotnet/hash-multimap-hash-multimap-stl-clr.md)|Costruisce un oggetto contenitore.|  
|[hash_multimap::insert (STL/CLR)](../dotnet/hash-multimap-insert-stl-clr.md)|Aggiunge elementi.|  
|[hash_multimap::key_comp (STL/CLR)](../dotnet/hash-multimap-key-comp-stl-clr.md)|Copia il delegato per due chiavi di ordinamento.|  
|[hash_multimap::load_factor (STL/CLR)](../dotnet/hash-multimap-load-factor-stl-clr.md)|Conta il numero medio di elementi per bucket.|  
|[hash_multimap::lower_bound (STL/CLR)](../dotnet/hash-multimap-lower-bound-stl-clr.md)|Consente di trovare l'inizio dell'intervallo che corrisponde a una chiave specificata.|  
|[hash_multimap::make_value (STL/CLR)](../dotnet/hash-multimap-make-value-stl-clr.md)|Costruisce un oggetto valore.|  
|[hash_multimap::max_load_factor (STL/CLR)](../dotnet/hash-multimap-max-load-factor-stl-clr.md)|Ottiene o imposta il numero massimo di elementi per bucket.|  
|[hash_multimap::rbegin (STL/CLR)](../dotnet/hash-multimap-rbegin-stl-clr.md)|Indica l'inizio della sequenza controllata inversa.|  
|[hash_multimap::rehash (STL/CLR)](../dotnet/hash-multimap-rehash-stl-clr.md)|Ricompila la tabella hash.|  
|[hash_multimap::rend (STL/CLR)](../dotnet/hash-multimap-rend-stl-clr.md)|Indica la fine della sequenza controllata inversa.|  
|[hash_multimap::size (STL/CLR)](../dotnet/hash-multimap-size-stl-clr.md)|Conta il numero di elementi.|  
|[hash_multimap::swap (STL/CLR)](../dotnet/hash-multimap-swap-stl-clr.md)|Scambia il contenuto di due contenitori.|  
|[hash_multimap::to_array (STL/CLR)](../dotnet/hash-multimap-to-array-stl-clr.md)|La sequenza controllata viene copiata in una nuova matrice.|  
|[hash_multimap::upper_bound (STL/CLR)](../dotnet/hash-multimap-upper-bound-stl-clr.md)|Trova fine dell'intervallo che corrisponde a una chiave specificata.|  
|[hash_multimap::value_comp (STL/CLR)](../dotnet/hash-multimap-value-comp-stl-clr.md)|Copia il delegato di ordinamento per valori di due elementi.|  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|[hash_multimap::operator= (STL/CLR)](../dotnet/hash-multimap-operator-assign-stl-clr.md)|Sostituisce la sequenza controllata.|  
  
## <a name="interfaces"></a>Interfacce  
  
|Interfaccia|Descrizione|  
|---------------|-----------------|  
|<xref:System.ICloneable>|Duplicare un oggetto.|  
|<xref:System.Collections.IEnumerable>|Tra gli elementi di sequenza.|  
|<xref:System.Collections.ICollection>|Gestione gruppo di elementi.|  
|<xref:System.Collections.Generic.IEnumerable%601>|Sequenza tramite elementi tipizzati.|  
|<xref:System.Collections.Generic.ICollection%601>|Gestione gruppo di elementi tipizzati.|  
|IHash\<chiave, valore >|Gestisci contenitore generico.|  
  
## <a name="remarks"></a>Note  
 L'oggetto alloca e libera spazio di archiviazione per la sequenza che controlla come singoli nodi in un elenco collegato bidirezionale. Per velocizzare l'accesso, l'oggetto gestisce una matrice di lunghezza variabile di puntatori nell'elenco (la tabella hash), in modo efficace la gestione dell'intero elenco come una sequenza di sottoelenchi, o bucket. Inserisce gli elementi in un bucket che mantiene ordinato modificando i collegamenti tra nodi, mai copiando il contenuto di un nodo a un altro. Pertanto, è possibile inserire e rimuovere elementi liberamente senza disturbare elementi rimanenti.  
  
 L'oggetto ordini ogni bucket esso controllata chiamando un oggetto delegato archiviato di tipo [hash_set:: key_compare (STL/CLR)](../dotnet/hash-set-key-compare-stl-clr.md). È possibile specificare l'oggetto delegato archiviato quando si costruisce hash_set; Se non si specifica alcun oggetto delegato, il valore predefinito è il confronto `operator<=(key_type, key_type)`.  
  
 Accedere all'oggetto delegato archiviato chiamando la funzione membro [hash_set:: key_comp (STL/CLR)](../dotnet/hash-set-key-comp-stl-clr.md)`()`. Tale oggetto delegato deve definire un ordinamento equivalente tra le chiavi di tipo [hash_set:: KEY_TYPE (STL/CLR)](../dotnet/hash-set-key-type-stl-clr.md). Pertanto, per le due chiavi `X` e `Y`:  
  
 `key_comp()(X, Y)`Restituisce il valore booleano stesso risultato a ogni chiamata.  
  
 Se `key_comp()(X, Y) && key_comp()(Y, X)` è true, `X` e `Y` rientrano hanno un ordinamento equivalente.  
  
 Tutte le regole di ordinamento che si comporta come `operator<=(key_type, key_type)`, `operator>=(key_type, key_type)` o `operator==(key_type, key_type)` definisce eqivalent ordinamento.  
  
 Si noti che il contenitore assicura solo che gli elementi le cui chiavi hanno un ordinamento equivalente (e quali hash con lo stesso valore di tipo integer) sono adiacenti all'interno di un bucket. A differenza di classe modello [hash_map (STL/CLR)](../dotnet/hash-map-stl-clr.md), un oggetto della classe modello `hash_multimap` non richiede che le chiavi per tutti gli elementi siano univoche. Due o più tasti possono disporre di un ordinamento equivalente.  
  
 L'oggetto determina quale bucket deve contenere una determinata chiave di ordinamento chiamando un oggetto delegato archiviato di tipo [hash_set::hasher (STL/CLR)](../dotnet/hash-set-hasher-stl-clr.md). L'accesso all'oggetto archiviato chiamando la funzione membro [hash_set::hash_delegate (STL/CLR)](../dotnet/hash-set-hash-delegate-stl-clr.md) `()` per ottenere un valore intero che dipende dal valore della chiave. È possibile specificare l'oggetto delegato archiviato quando si costruisce hash_set; Se non si specifica alcun oggetto delegato, il valore predefinito è la funzione `System::Object::hash_value(key_type)`. Pertanto, per le chiavi `X` e `Y`:  
  
 `hash_delegate()(X)`Restituisce lo stesso risultato di tipo integer a ogni chiamata.  
  
 Se `X` e `Y` hanno un ordinamento equivalente, quindi `hash_delegate()(X)` deve restituire lo stesso risultato intero `hash_delegate()(Y)`.  
  
 Ogni elemento contiene una chiave distinta e un valore mappato. La sequenza viene rappresentata in modo da consentire la ricerca, inserimento e rimozione di un elemento arbitrario con un numero di operazioni che è indipendente dal numero di elementi nella sequenza (tempo costante): almeno la migliore dei casi. Inoltre, l'inserimento di un elemento non invalida gli iteratori e la rimozione di un elemento invalida solo gli iteratori che fanno riferimento all'elemento rimosso.  
  
 Se i valori hash non vengono distribuiti in modo uniforme, tuttavia, una tabella hash può degeneri. In casi estremi, per una funzione hash che restituisce sempre lo stesso valore, ricerca, inserimento e rimozione sono proporzionali al numero di elementi della sequenza (tempo lineare). Il contenitore incentrati scegliere una funzione hash ragionevole, la dimensione del bucket medio e dimensioni di tabella hash (numero totale di bucket), ma è possibile sostituire qualsiasi o tutte queste scelte. Visualizzare, ad esempio, le funzioni [hash_set::max_load_factor (STL/CLR)](../dotnet/hash-set-max-load-factor-stl-clr.md) e [hash_set::rehash (STL/CLR)](../dotnet/hash-set-rehash-stl-clr.md).  
  
 Un hash_multimap supporta gli iteratori bidirezionali, pertanto che è possibile eseguire per gli elementi adiacenti, dato un iteratore che definisce un elemento nella sequenza controllata. Un nodo head speciale corrispondente per l'iteratore restituito da [hash_multimap:: end (STL/CLR)](../dotnet/hash-multimap-end-stl-clr.md)`()`. È possibile diminuire l'iteratore per raggiungere l'ultimo elemento nella sequenza controllata, se presente. È possibile incrementare un iteratore hash_multimap per raggiungere il nodo head e quindi confronterà uguale a `end()`. Ma non è possibile dereferenziare l'iteratore restituito da `end()`.  
  
 Si noti che è possibile fare riferimento a un elemento hash_multimap assegnato direttamente alla posizione numerica, che richiede un iteratore ad accesso casuale.  
  
 Un iteratore hash_multimap archivia un handle al relativo nodo hash_multimap associato, che a sua volta memorizza un handle per il contenitore associato. È possibile utilizzare gli iteratori solo con i relativi oggetti contenitore associato. Un iteratore hash_multimap rimane valido finché il relativo nodo hash_multimap associato è associato a un hash_multimap. Inoltre, un iteratore valido dereferencable--è possibile utilizzarlo per accedere o modificare il valore dell'elemento che definisce, in modo fino a quando non è uguale a `end()`.  
  
 La cancellazione o eliminazione di un elemento chiama il distruttore per il valore archiviato. Eliminazione del contenitore Cancella tutti gli elementi. Di conseguenza, un contenitore il cui tipo di elemento è una classe di riferimento assicura che nessun elemento sopravvivere al contenitore. Si noti, tuttavia, che non è un contenitore di handle `not` eliminare definitivamente gli elementi.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/hash_map >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [hash_map (STL/CLR)](../dotnet/hash-map-stl-clr.md)   
 [hash_multiset (STL/CLR)](../dotnet/hash-multiset-stl-clr.md)   
 [hash_set (STL/CLR)](../dotnet/hash-set-stl-clr.md)   
 [eseguire il mapping (STL/CLR)](../dotnet/map-stl-clr.md)   
 [multimap (STL/CLR)](../dotnet/multimap-stl-clr.md)   
 [multiset (STL/CLR)](../dotnet/multiset-stl-clr.md)   
 [set (STL/CLR)](../dotnet/set-stl-clr.md)   
 [Riferimenti alla libreria STL/CLR](../dotnet/stl-clr-library-reference.md)