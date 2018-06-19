---
title: Vector (STL/CLR) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::vector
dev_langs:
- C++
helpviewer_keywords:
- vector class [STL/CLR]
- <cliext/vector> header [STL/CLR]
- <vector> header [STL/CLR]
ms.assetid: f90060d5-097a-4e9d-9a26-a634b5b9c6c2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: de5d09d569933dc06666ed2008081703d59c1564
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33172638"
---
# <a name="vector-stlclr"></a>vector (STL/CLR)
La classe modello descrive un oggetto che controlla una sequenza di lunghezza variabile di elementi che dispone di accesso casuale. Utilizzare il contenitore `vector` per gestire una sequenza di elementi come un blocco contiguo di archiviazione. Il blocco viene implementato come una matrice le cui dimensioni aumentano su richiesta.  
  
 Nella sezione successiva, `GValue` equivale `Value` , a meno che quest'ultimo è un tipo riferimento, nel qual caso è `Value^`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename Value>  
    ref class vector  
        :   public  
        System::ICloneable,  
        System::Collections::IEnumerable,  
        System::Collections::ICollection,  
        System::Collections::Generic::IEnumerable<GValue>,  
        System::Collections::Generic::ICollection<GValue>,  
        System::Collections::Generic::IList<GValue>,  
        Microsoft::VisualC::StlClr::IVector<GValue>  
    { ..... };  
```  
  
#### <a name="parameters"></a>Parametri  
 Valore  
 Tipo di un elemento nella sequenza controllata.  
  
## <a name="members"></a>Membri  
  
|Definizione dei tipi|Descrizione|  
|---------------------|-----------------|  
|[vector::const_iterator (STL/CLR)](../dotnet/vector-const-iterator-stl-clr.md)|Tipo di un iteratore costante per la sequenza controllata.|  
|[vector::const_reference (STL/CLR)](../dotnet/vector-const-reference-stl-clr.md)|Tipo di un riferimento costante a un elemento.|  
|[vector::const_reverse_iterator (STL/CLR)](../dotnet/vector-const-reverse-iterator-stl-clr.md)|Tipo di un iteratore inverso costante per la sequenza controllata.|  
|[vector::difference_type (STL/CLR)](../dotnet/vector-difference-type-stl-clr.md)|Tipo di una distanza Signed tra due elementi.|  
|[vector::generic_container (STL/CLR)](../dotnet/vector-generic-container-stl-clr.md)|Il tipo dell'interfaccia generica per il contenitore.|  
|[vector::generic_iterator (STL/CLR)](../dotnet/vector-generic-iterator-stl-clr.md)|Il tipo di iteratore per l'interfaccia generica per il contenitore.|  
|[vector::generic_reverse_iterator (STL/CLR)](../dotnet/vector-generic-reverse-iterator-stl-clr.md)|Il tipo di un iteratore inverso per l'interfaccia generica per il contenitore.|  
|[vector::generic_value (STL/CLR)](../dotnet/vector-generic-value-stl-clr.md)|Il tipo di un elemento per l'interfaccia generica per il contenitore.|  
|[vector::iterator (STL/CLR)](../dotnet/vector-iterator-stl-clr.md)|Tipo di un iteratore per la sequenza controllata.|  
|[vector::reference (STL/CLR)](../dotnet/vector-reference-stl-clr.md)|Tipo di un riferimento a un elemento.|  
|[vector::reverse_iterator (STL/CLR)](../dotnet/vector-reverse-iterator-stl-clr.md)|Tipo di un iteratore inverso della sequenza controllata.|  
|[vector::size_type (STL/CLR)](../dotnet/vector-size-type-stl-clr.md)|Tipo di una distanza Signed tra due elementi.|  
|[vector::value_type (STL/CLR)](../dotnet/vector-value-type-stl-clr.md)|Tipo di un elemento.|  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[vector::assign (STL/CLR)](../dotnet/vector-assign-stl-clr.md)|Sostituisce tutti gli elementi.|  
|[vector::at (STL/CLR)](../dotnet/vector-at-stl-clr.md)|Accede a un elemento in una posizione specificata.|  
|[vector::back (STL/CLR)](../dotnet/vector-back-stl-clr.md)|Accede all'ultimo elemento.|  
|[vector::begin (STL/CLR)](../dotnet/vector-begin-stl-clr.md)|Indica l'inizio della sequenza controllata.|  
|[vector::capacity (STL/CLR)](../dotnet/vector-capacity-stl-clr.md)|Indica le dimensioni di archiviazione allocato per il contenitore.|  
|[vector::clear (STL/CLR)](../dotnet/vector-clear-stl-clr.md)|Rimuove tutti gli elementi.|  
|[vector::empty (STL/CLR)](../dotnet/vector-empty-stl-clr.md)|Verifica se sono presenti o meno degli elementi.|  
|[vector::end (STL/CLR)](../dotnet/vector-end-stl-clr.md)|Designa la fine della sequenza controllata.|  
|[vector::erase (STL/CLR)](../dotnet/vector-erase-stl-clr.md)|Rimuove gli elementi in corrispondenza delle posizioni specificate.|  
|[vector::front (STL/CLR)](../dotnet/vector-front-stl-clr.md)|Accede al primo elemento.|  
|[vector::insert (STL/CLR)](../dotnet/vector-insert-stl-clr.md)|Aggiunge gli elementi in una posizione specificata.|  
|[vector::pop_back (STL/CLR)](../dotnet/vector-pop-back-stl-clr.md)|Rimuove l'ultimo elemento.|  
|[vector::push_back (STL/CLR)](../dotnet/vector-push-back-stl-clr.md)|Aggiunge un nuovo ultimo elemento.|  
|[vector::rbegin (STL/CLR)](../dotnet/vector-rbegin-stl-clr.md)|Indica l'inizio della sequenza controllata inversa.|  
|[vector::rend (STL/CLR)](../dotnet/vector-rend-stl-clr.md)|Indica la fine della sequenza controllata inversa.|  
|[vector::reserve (STL/CLR)](../dotnet/vector-reserve-stl-clr.md)|Assicura una capacità minima di crescita per il contenitore.|  
|[vector::resize (STL/CLR)](../dotnet/vector-resize-stl-clr.md)|Modifica il numero di elementi.|  
|[vector::size (STL/CLR)](../dotnet/vector-size-stl-clr.md)|Conta il numero di elementi.|  
|[vector::swap (STL/CLR)](../dotnet/vector-swap-stl-clr.md)|Scambia il contenuto di due contenitori.|  
|[vector::to_array (STL/CLR)](../dotnet/vector-to-array-stl-clr.md)|La sequenza controllata viene copiata in una nuova matrice.|  
|[vector::vector (STL/CLR)](../dotnet/vector-vector-stl-clr.md)|Costruisce un oggetto contenitore.|  
  
|Proprietà|Descrizione|  
|--------------|-----------------|  
|[vector::back_item (STL/CLR)](../dotnet/vector-back-item-stl-clr.md)|Accede all'ultimo elemento.|  
|[vector::front_item (STL/CLR)](../dotnet/vector-front-item-stl-clr.md)|Accede al primo elemento.|  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|[vector::operator= (STL/CLR)](../dotnet/vector-operator-assign-stl-clr.md)|Sostituisce la sequenza controllata.|  
|[vector::operator(STL/CLR)](../dotnet/vector-operator-stl-clr.md)|Accede a un elemento in una posizione specificata.|  
|[operator!= (vector) (STL/CLR)](../dotnet/operator-inequality-vector-stl-clr.md)|Determina se un `vector` oggetto non è uguale a un altro `vector` oggetto.|  
|[operator< (vector) (STL/CLR)](../dotnet/operator-less-than-vector-stl-clr.md)|Determina se un `vector` oggetto è minore di un altro `vector` oggetto.|  
|[operator<= (vector) (STL/CLR)](../dotnet/operator-less-or-equal-vector-stl-clr.md)|Determina se un `vector` oggetto è minore o uguale a un altro `vector` oggetto.|  
|[operator== (vector) (STL/CLR)](../dotnet/operator-equality-vector-stl-clr.md)|Determina se un `vector` è uguale a un altro oggetto `vector` oggetto.|  
|[operator> (vector) (STL/CLR)](../dotnet/operator-greater-than-vector-stl-clr.md)|Determina se un `vector` è maggiore di un altro oggetto `vector` oggetto.|  
|[operator>= (vector) (STL/CLR)](../dotnet/operator-greater-or-equal-vector-stl-clr.md)|Determina se un `vector` oggetto è maggiore o uguale a un altro `vector` oggetto.|  
  
## <a name="interfaces"></a>Interfacce  
  
|Interfaccia|Descrizione|  
|---------------|-----------------|  
|<xref:System.ICloneable>|Duplicare un oggetto.|  
|<xref:System.Collections.IEnumerable>|Tra gli elementi di sequenza.|  
|<xref:System.Collections.ICollection>|Gestione gruppo di elementi.|  
|<xref:System.Collections.Generic.IEnumerable%601>|Sequenza tramite elementi tipizzati.|  
|<xref:System.Collections.Generic.ICollection%601>|Gestione gruppo di elementi tipizzati.|  
|<xref:System.Collections.Generic.IList%601>|Gestisci gruppo ordinato di elementi tipizzati.|  
|IVector < valore\>|Gestisci contenitore generico.|  
  
## <a name="remarks"></a>Note  
 L'oggetto alloca e libera spazio di archiviazione per la sequenza da esso controllata mediante una matrice di stored `Value` elementi, cresce su richiesta. Aumento delle dimensioni è rappresentato in modo che il costo di aggiunta di un nuovo elemento è un tempo costante ammortizzato. In altre parole, il costo di aggiungere elementi alla fine non aumenta, in Media, come la lunghezza della sequenza controllata ottiene maggiore. Di conseguenza, un vettore è un buon candidato per il contenitore sottostante per la classe modello [stack (STL/CLR)](../dotnet/stack-stl-clr.md).  
  
 Oggetto `vector` iteratori ad accesso casuale supporta, ovvero è possibile fare riferimento a un elemento assegnato direttamente alla posizione numerica, partendo da zero per il primo elemento (anteriore), per `size() - 1` per l'ultimo elemento (indietro). Significa anche che un vettore è un buon candidato per il contenitore sottostante per la classe modello [priority_queue (STL/CLR)](../dotnet/priority-queue-stl-clr.md).  
  
 Un iteratore vettore archivia un handle a un oggetto vettore associato, insieme a differenza dell'elemento che definisce. È possibile utilizzare gli iteratori solo con i relativi oggetti contenitore associato. La differenza di un elemento del vettore è uguale alla posizione.  
  
 Inserimento o l'eliminazione di elementi è possibile modificare il valore dell'elemento archiviato in una determinata posizione, pertanto è anche possibile modificare il valore designato dall'iteratore. (Il contenitore potrebbe essere necessario copiare elementi alto o verso il basso per creare uno spazio vuoto prima di effettuare un inserimento o per compilare un foro dopo una cancellazione.) Tuttavia, un iteratore vettore rimane valido finché la distorsione è compreso nell'intervallo `[0, size()]`. Inoltre, un iteratore valido rimane dereferencable - è possibile usarlo per accedere o modificare il valore dell'elemento che definisce, purché la distorsione non è uguale a `size()`.  
  
 La cancellazione o eliminazione di un elemento chiama il distruttore per il valore archiviato. Eliminazione del contenitore Cancella tutti gli elementi. Di conseguenza, un contenitore il cui tipo di elemento è una classe di riferimento assicura che nessun elemento sopravvivere al contenitore. Si noti, tuttavia, che un contenitore di handle non comporta l'eliminazione dei relativi elementi.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/vector >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [deque (STL/CLR)](../dotnet/deque-stl-clr.md)   
 [elenco (STL/CLR)](../dotnet/list-stl-clr.md)   
 [priority_queue (STL/CLR)](../dotnet/priority-queue-stl-clr.md)   
 [coda (STL/CLR)](../dotnet/queue-stl-clr.md)   
 [stack (STL/CLR)](../dotnet/stack-stl-clr.md)   
 [vector::size (STL/CLR)](../dotnet/vector-size-stl-clr.md)  
 [Riferimenti alla libreria STL/CLR](../dotnet/stl-clr-library-reference.md)