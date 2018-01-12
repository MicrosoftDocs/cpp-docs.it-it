---
title: hash_set (STL/CLR) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::hash_set
dev_langs: C++
helpviewer_keywords:
- <cliext/hash_set> header [STL/CLR]
- hash_set class [STL/CLR]
- <hash_set> header [STL/CLR]
ms.assetid: d110e356-ba3e-4e52-9e2d-d997bf975c96
caps.latest.revision: "18"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: c46b212f200b2ef7d46afae567efdf3f5bcef0f7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="hashset-stlclr"></a>hash_set (STL/CLR)
La classe modello descrive un oggetto che controlla una sequenza di lunghezza variabile di elementi che dispone di accesso bidirezionale. Utilizzare il contenitore `hash_set` per gestire una sequenza di elementi come una tabella hash, l'archiviazione di un bidirezionale ogni voce della tabella collegata elenco di nodi e ogni nodo di archiviazione di un elemento. Il valore di ogni elemento viene utilizzato come chiave per la sequenza di ordinamento.  
  
 Nella sezione successiva, `GValue` equivale `GKey`, che a sua volta equivale `Key` , a meno che quest'ultimo è un tipo riferimento, nel qual caso è `Key^`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename Key>  
    ref class hash_set  
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
  
## <a name="members"></a>Membri  
  
|Definizione dei tipi|Descrizione|  
|---------------------|-----------------|  
|[hash_set::const_iterator (STL/CLR)](../dotnet/hash-set-const-iterator-stl-clr.md)|Tipo di un iteratore costante per la sequenza controllata.|  
|[hash_set::const_reference (STL/CLR)](../dotnet/hash-set-const-reference-stl-clr.md)|Tipo di un riferimento costante a un elemento.|  
|[hash_set::const_reverse_iterator (STL/CLR)](../dotnet/hash-set-const-reverse-iterator-stl-clr.md)|Tipo di un iteratore inverso costante per la sequenza controllata.|  
|[hash_set::difference_type (STL/CLR)](../dotnet/hash-set-difference-type-stl-clr.md)|Il tipo di una distanza tra due elementi (possibilmente firmato).|  
|[hash_set::generic_container (STL/CLR)](../dotnet/hash-set-generic-container-stl-clr.md)|Il tipo dell'interfaccia generica per il contenitore.|  
|[hash_set::generic_iterator (STL/CLR)](../dotnet/hash-set-generic-iterator-stl-clr.md)|Il tipo di iteratore per l'interfaccia generica per il contenitore.|  
|[hash_set::generic_reverse_iterator (STL/CLR)](../dotnet/hash-set-generic-reverse-iterator-stl-clr.md)|Il tipo di un iteratore inverso per l'interfaccia generica per il contenitore.|  
|[hash_set::generic_value (STL/CLR)](../dotnet/hash-set-generic-value-stl-clr.md)|Il tipo di un elemento per l'interfaccia generica per il contenitore.|  
|[hash_set::hasher (STL/CLR)](../dotnet/hash-set-hasher-stl-clr.md)|Il delegato hash per una chiave.|  
|[hash_set::iterator (STL/CLR)](../dotnet/hash-set-iterator-stl-clr.md)|Tipo di un iteratore per la sequenza controllata.|  
|[hash_set::key_compare (STL/CLR)](../dotnet/hash-set-key-compare-stl-clr.md)|Delegato per due chiavi di ordinamento.|  
|[hash_set::key_type (STL/CLR)](../dotnet/hash-set-key-type-stl-clr.md)|Tipo di una chiave di ordinamento.|  
|[hash_set::reference (STL/CLR)](../dotnet/hash-set-reference-stl-clr.md)|Tipo di un riferimento a un elemento.|  
|[hash_set::reverse_iterator (STL/CLR)](../dotnet/hash-set-reverse-iterator-stl-clr.md)|Tipo di un iteratore inverso della sequenza controllata.|  
|[hash_set::size_type (STL/CLR)](../dotnet/hash-set-size-type-stl-clr.md)|Il tipo di una distanza (negativo) tra due elementi.|  
|[hash_set::value_compare (STL/CLR)](../dotnet/hash-set-value-compare-stl-clr.md)|Il delegato di ordinamento per valori di due elementi.|  
|[hash_set::value_type (STL/CLR)](../dotnet/hash-set-value-type-stl-clr.md)|Tipo di un elemento.|  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[hash_set::begin (STL/CLR)](../dotnet/hash-set-begin-stl-clr.md)|Indica l'inizio della sequenza controllata.|  
|[hash_set::bucket_count (STL/CLR)](../dotnet/hash-set-bucket-count-stl-clr.md)|Conta il numero di bucket.|  
|[hash_set::clear (STL/CLR)](../dotnet/hash-set-clear-stl-clr.md)|Rimuove tutti gli elementi.|  
|[hash_set::count (STL/CLR)](../dotnet/hash-set-count-stl-clr.md)|Conteggi di elementi corrispondenti a una chiave specificata.|  
|[hash_set::empty (STL/CLR)](../dotnet/hash-set-empty-stl-clr.md)|Verifica se sono presenti o meno degli elementi.|  
|[hash_set::end (STL/CLR)](../dotnet/hash-set-end-stl-clr.md)|Designa la fine della sequenza controllata.|  
|[hash_set::equal_range (STL/CLR)](../dotnet/hash-set-equal-range-stl-clr.md)|Trova un intervallo che corrisponde a una chiave specificata.|  
|[hash_set::erase (STL/CLR)](../dotnet/hash-set-erase-stl-clr.md)|Rimuove gli elementi in corrispondenza delle posizioni specificate.|  
|[hash_set::find (STL/CLR)](../dotnet/hash-set-find-stl-clr.md)|Trova un elemento che corrisponde a una chiave specificata.|  
|[hash_set::hash_delegate (STL/CLR)](../dotnet/hash-set-hash-delegate-stl-clr.md)|Copia il delegato per una chiave hash.|  
|[hash_set::hash_set (STL/CLR)](../dotnet/hash-set-hash-set-stl-clr.md)|Costruisce un oggetto contenitore.|  
|[hash_set::insert (STL/CLR)](../dotnet/hash-set-insert-stl-clr.md)|Aggiunge elementi.|  
|[hash_set::key_comp (STL/CLR)](../dotnet/hash-set-key-comp-stl-clr.md)|Copia il delegato per due chiavi di ordinamento.|  
|[hash_set::load_factor (STL/CLR)](../dotnet/hash-set-load-factor-stl-clr.md)|Conta il numero medio di elementi per bucket.|  
|[hash_set::lower_bound (STL/CLR)](../dotnet/hash-set-lower-bound-stl-clr.md)|Consente di trovare l'inizio dell'intervallo che corrisponde a una chiave specificata.|  
|[hash_set::make_value (STL/CLR)](../dotnet/hash-set-make-value-stl-clr.md)|Costruisce un oggetto valore.|  
|[hash_set::max_load_factor (STL/CLR)](../dotnet/hash-set-max-load-factor-stl-clr.md)|Ottiene o imposta il numero massimo di elementi per bucket.|  
|[hash_set::rbegin (STL/CLR)](../dotnet/hash-set-rbegin-stl-clr.md)|Indica l'inizio della sequenza controllata inversa.|  
|[hash_set::rehash (STL/CLR)](../dotnet/hash-set-rehash-stl-clr.md)|Ricompila la tabella hash.|  
|[hash_set::rend (STL/CLR)](../dotnet/hash-set-rend-stl-clr.md)|Indica la fine della sequenza controllata inversa.|  
|[hash_set::size (STL/CLR)](../dotnet/hash-set-size-stl-clr.md)|Conta il numero di elementi.|  
|[hash_set::swap (STL/CLR)](../dotnet/hash-set-swap-stl-clr.md)|Scambia il contenuto di due contenitori.|  
|[hash_set::to_array (STL/CLR)](../dotnet/hash-set-to-array-stl-clr.md)|La sequenza controllata viene copiata in una nuova matrice.|  
|[hash_set::upper_bound (STL/CLR)](../dotnet/hash-set-upper-bound-stl-clr.md)|Trova fine dell'intervallo che corrisponde a una chiave specificata.|  
|[hash_set::value_comp (STL/CLR)](../dotnet/hash-set-value-comp-stl-clr.md)|Copia il delegato di ordinamento per valori di due elementi.|  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|[hash_set::operator= (STL/CLR)](../dotnet/hash-set-operator-assign-stl-clr.md)|Sostituisce la sequenza controllata.|  
  
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
  
 Si noti che il contenitore assicura solo che gli elementi le cui chiavi hanno un ordinamento equivalente (e quali hash con lo stesso valore di tipo integer) sono adiacenti all'interno di un bucket. A differenza di classe modello [hash_multiset (STL/CLR)](../dotnet/hash-multiset-stl-clr.md), un oggetto della classe modello `hash_set` assicura che le chiavi per tutti gli elementi siano univoche. (Nessun due chiavi hanno un ordinamento equivalente).  
  
 L'oggetto determina quale bucket deve contenere una determinata chiave di ordinamento chiamando un oggetto delegato archiviato di tipo [hash_set::hasher (STL/CLR)](../dotnet/hash-set-hasher-stl-clr.md). L'accesso all'oggetto archiviato chiamando la funzione membro [hash_set::hash_delegate (STL/CLR)](../dotnet/hash-set-hash-delegate-stl-clr.md) `()` per ottenere un valore intero che dipende dal valore della chiave. È possibile specificare l'oggetto delegato archiviato quando si costruisce hash_set; Se non si specifica alcun oggetto delegato, il valore predefinito è la funzione `System::Object::hash_value(key_type)`. Pertanto, per le chiavi `X` e `Y`:  
  
 `hash_delegate()(X)`Restituisce lo stesso risultato di tipo integer a ogni chiamata.  
  
 Se `X` e `Y` hanno un ordinamento equivalente, quindi `hash_delegate()(X)` deve restituire lo stesso risultato intero `hash_delegate()(Y)`.  
  
 Ogni elemento agisce come una chiave e un valore. La sequenza viene rappresentata in modo da consentire la ricerca, inserimento e rimozione di un elemento arbitrario con un numero di operazioni che è indipendente dal numero di elementi nella sequenza (tempo costante): almeno la migliore dei casi. Inoltre, l'inserimento di un elemento non invalida gli iteratori e la rimozione di un elemento invalida solo gli iteratori che fanno riferimento all'elemento rimosso.  
  
 Se i valori hash non vengono distribuiti in modo uniforme, tuttavia, una tabella hash può degeneri. In casi estremi, per una funzione hash che restituisce sempre lo stesso valore, ricerca, inserimento e rimozione sono proporzionali al numero di elementi della sequenza (tempo lineare). Il contenitore incentrati scegliere una funzione hash ragionevole, la dimensione del bucket medio e dimensioni di tabella hash (numero totale di bucket), ma è possibile sostituire qualsiasi o tutte queste scelte. Visualizzare, ad esempio, le funzioni [hash_set::max_load_factor (STL/CLR)](../dotnet/hash-set-max-load-factor-stl-clr.md) e [hash_set::rehash (STL/CLR)](../dotnet/hash-set-rehash-stl-clr.md).  
  
 Un hash_set supporta gli iteratori bidirezionali, pertanto che è possibile eseguire per gli elementi adiacenti, dato un iteratore che definisce un elemento nella sequenza controllata. Un nodo head speciale corrispondente per l'iteratore restituito da [hash_set:: end (STL/CLR)](../dotnet/hash-set-end-stl-clr.md)`()`. È possibile diminuire l'iteratore per raggiungere l'ultimo elemento nella sequenza controllata, se presente. È possibile incrementare un iteratore hash_set per raggiungere il nodo head e quindi confronterà uguale a `end()`. Ma non è possibile dereferenziare l'iteratore restituito da `end()`.  
  
 Si noti che è possibile fare riferimento a un elemento hash_set assegnato direttamente alla posizione numerica, che richiede un iteratore ad accesso casuale.  
  
 Un iteratore hash_set archivia un handle al relativo nodo hash_set associato, che a sua volta memorizza un handle per il contenitore associato. È possibile utilizzare gli iteratori solo con i relativi oggetti contenitore associato. Un iteratore hash_set rimane valido finché il relativo nodo hash_set associato è associato a un hash_set. Inoltre, un iteratore valido dereferencable--è possibile utilizzarlo per accedere o modificare il valore dell'elemento che definisce, in modo fino a quando non è uguale a `end()`.  
  
 La cancellazione o eliminazione di un elemento chiama il distruttore per il valore archiviato. Eliminazione del contenitore Cancella tutti gli elementi. Di conseguenza, un contenitore il cui tipo di elemento è una classe di riferimento assicura che nessun elemento sopravvivere al contenitore. Si noti, tuttavia, che non è un contenitore di handle `not` eliminare definitivamente gli elementi.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/hash_set >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [hash_map (STL/CLR)](../dotnet/hash-map-stl-clr.md)   
 [hash_set](../dotnet/hash-set-stl-clr.md)   
 [hash_set](../dotnet/hash-set-stl-clr.md)   
 [eseguire il mapping (STL/CLR)](../dotnet/map-stl-clr.md)   
 [set (STL/CLR)](../dotnet/set-stl-clr.md)   
 [set (STL/CLR)](../dotnet/set-stl-clr.md)   
 [set (STL/CLR)](../dotnet/set-stl-clr.md)   
 [Riferimenti alla libreria STL/CLR](../dotnet/stl-clr-library-reference.md)