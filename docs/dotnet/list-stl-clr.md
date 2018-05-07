---
title: elenco (STL/CLR) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::list
dev_langs:
- C++
helpviewer_keywords:
- <cliext/list> header [STL/CLR]
- list class [STL/CLR]
- <list> header [STL/CLR]
ms.assetid: a70c45c8-a257-4f6b-8434-b27ff6685bac
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 4ff009da3ca29697e9b3affceb424bcd84b9b896
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="list-stlclr"></a>list (STL/CLR)
La classe modello descrive un oggetto che controlla una sequenza di lunghezza variabile di elementi che dispone di accesso bidirezionale. Utilizzare il contenitore `list` per gestire una sequenza di elementi come un elenco collegato bidirezionale di nodi, ognuno l'archiviazione di un elemento.  
  
 Nella sezione successiva, `GValue` equivale `Value` , a meno che quest'ultimo è un tipo riferimento, nel qual caso è `Value^`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename Value>  
    ref class list  
        :   public  
        System::ICloneable,  
        System::Collections::IEnumerable,  
        System::Collections::ICollection,  
        System::Collections::Generic::IEnumerable<GValue>,  
        System::Collections::Generic::ICollection<GValue>,  
        Microsoft::VisualC::StlClr::IList<GValue>  
    { ..... };  
```  
  
#### <a name="parameters"></a>Parametri  
 Valore  
 Tipo di un elemento nella sequenza controllata.  
  
## <a name="members"></a>Membri  
  
|Definizione dei tipi|Descrizione|  
|---------------------|-----------------|  
|[list::const_iterator (STL/CLR)](../dotnet/list-const-iterator-stl-clr.md)|Tipo di un iteratore costante per la sequenza controllata.|  
|[list::const_reference (STL/CLR)](../dotnet/list-const-reference-stl-clr.md)|Tipo di un riferimento costante a un elemento.|  
|[list::const_reverse_iterator (STL/CLR)](../dotnet/list-const-reverse-iterator-stl-clr.md)|Tipo di un iteratore inverso costante per la sequenza controllata.|  
|[list::difference_type (STL/CLR)](../dotnet/list-difference-type-stl-clr.md)|Tipo di una distanza Signed tra due elementi.|  
|[list::generic_container (STL/CLR)](../dotnet/list-generic-container-stl-clr.md)|Il tipo dell'interfaccia generica per il contenitore.|  
|[list::generic_iterator (STL/CLR)](../dotnet/list-generic-iterator-stl-clr.md)|Il tipo di iteratore per l'interfaccia generica per il contenitore.|  
|[list::generic_reverse_iterator (STL/CLR)](../dotnet/list-generic-reverse-iterator-stl-clr.md)|Il tipo di un iteratore inverso per l'interfaccia generica per il contenitore.|  
|[list::generic_value (STL/CLR)](../dotnet/list-generic-value-stl-clr.md)|Il tipo di un elemento per l'interfaccia generica per il contenitore.|  
|[list::iterator (STL/CLR)](../dotnet/list-iterator-stl-clr.md)|Tipo di un iteratore per la sequenza controllata.|  
|[list::reference (STL/CLR)](../dotnet/list-reference-stl-clr.md)|Tipo di un riferimento a un elemento.|  
|[list::reverse_iterator (STL/CLR)](../dotnet/list-reverse-iterator-stl-clr.md)|Tipo di un iteratore inverso della sequenza controllata.|  
|[list::size_type (STL/CLR)](../dotnet/list-size-type-stl-clr.md)|Tipo di una distanza Signed tra due elementi.|  
|[list::value_type (STL/CLR)](../dotnet/list-value-type-stl-clr.md)|Tipo di un elemento.|  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[list::assign (STL/CLR)](../dotnet/list-assign-stl-clr.md)|Sostituisce tutti gli elementi.|  
|[list::back (STL/CLR)](../dotnet/list-back-stl-clr.md)|Accede all'ultimo elemento.|  
|[list::begin (STL/CLR)](../dotnet/list-begin-stl-clr.md)|Indica l'inizio della sequenza controllata.|  
|[list::clear (STL/CLR)](../dotnet/list-clear-stl-clr.md)|Rimuove tutti gli elementi.|  
|[list::empty (STL/CLR)](../dotnet/list-empty-stl-clr.md)|Verifica se sono presenti o meno degli elementi.|  
|[list::end (STL/CLR)](../dotnet/list-end-stl-clr.md)|Designa la fine della sequenza controllata.|  
|[list::erase (STL/CLR)](../dotnet/list-erase-stl-clr.md)|Rimuove gli elementi in corrispondenza delle posizioni specificate.|  
|[list::front (STL/CLR)](../dotnet/list-front-stl-clr.md)|Accede al primo elemento.|  
|[list::insert (STL/CLR)](../dotnet/list-insert-stl-clr.md)|Aggiunge gli elementi in una posizione specificata.|  
|[list::list (STL/CLR)](../dotnet/list-list-stl-clr.md)|Costruisce un oggetto contenitore.|  
|[list::merge (STL/CLR)](../dotnet/list-merge-stl-clr.md)|Unisce due sequenze controllate ordinate.|  
|[list::pop_back (STL/CLR)](../dotnet/list-pop-back-stl-clr.md)|Rimuove l'ultimo elemento.|  
|[list::pop_front (STL/CLR)](../dotnet/list-pop-front-stl-clr.md)|Rimuove il primo elemento.|  
|[list::push_back (STL/CLR)](../dotnet/list-push-back-stl-clr.md)|Aggiunge un nuovo ultimo elemento.|  
|[list::push_front (STL/CLR)](../dotnet/list-push-front-stl-clr.md)|Aggiunge un nuovo elemento di primo.|  
|[list::rbegin (STL/CLR)](../dotnet/list-rbegin-stl-clr.md)|Indica l'inizio della sequenza controllata inversa.|  
|[list::remove (STL/CLR)](../dotnet/list-remove-stl-clr.md)|Rimuove un elemento con un valore specificato.|  
|[list::remove_if (STL/CLR)](../dotnet/list-remove-if-stl-clr.md)|Rimuove gli elementi che superano un test specificato.|  
|[list::rend (STL/CLR)](../dotnet/list-rend-stl-clr.md)|Indica la fine della sequenza controllata inversa.|  
|[list::resize (STL/CLR)](../dotnet/list-resize-stl-clr.md)|Modifica il numero di elementi.|  
|[list::reverse (STL/CLR)](../dotnet/list-reverse-stl-clr.md)|Inverte la sequenza controllata.|  
|[list::size (STL/CLR)](../dotnet/list-size-stl-clr.md)|Conta il numero di elementi.|  
|[list::sort (STL/CLR)](../dotnet/list-sort-stl-clr.md)|Ordina la sequenza controllata.|  
|[list::splice (STL/CLR)](../dotnet/list-splice-stl-clr.md)|Unisce di nuovo i collegamenti tra nodi.|  
|[list::swap (STL/CLR)](../dotnet/list-swap-stl-clr.md)|Scambia il contenuto di due contenitori.|  
|[list::to_array (STL/CLR)](../dotnet/list-to-array-stl-clr.md)|La sequenza controllata viene copiata in una nuova matrice.|  
|[list::unique (STL/CLR)](../dotnet/list-unique-stl-clr.md)|Rimuove gli elementi adiacenti che superano un test specificato.|  
  
|Proprietà|Descrizione|  
|--------------|-----------------|  
|[list::back_item (STL/CLR)](../dotnet/list-back-item-stl-clr.md)|Accede all'ultimo elemento.|  
|[list::front_item (STL/CLR)](../dotnet/list-front-item-stl-clr.md)|Accede al primo elemento.|  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|[list::operator= (STL/CLR)](../dotnet/list-operator-assign-stl-clr.md)|Sostituisce la sequenza controllata.|  
|[operator!= (list) (STL/CLR)](../dotnet/operator-inequality-list-stl-clr.md)|Determina se un `list` oggetto non è uguale a un altro `list` oggetto.|  
|[operator< (list) (STL/CLR)](../dotnet/operator-less-than-list-stl-clr.md)|Determina se un `list` oggetto è minore di un altro `list` oggetto.|  
|[operator<= (list) (STL/CLR)](../dotnet/operator-less-or-equal-list-stl-clr.md)|Determina se un `list` oggetto è minore o uguale a un altro `list` oggetto.|  
|[operator== (list) (STL/CLR)](../dotnet/operator-equality-list-stl-clr.md)|Determina se un `list` è uguale a un altro oggetto `list` oggetto.|  
|[operator> (list) (STL/CLR)](../dotnet/operator-greater-than-list-stl-clr.md)|Determina se un `list` è maggiore di un altro oggetto `list` oggetto.|  
|[operator>= (list) (STL/CLR)](../dotnet/operator-greater-or-equal-list-stl-clr.md)|Determina se un `list` oggetto è maggiore o uguale a un altro `list` oggetto.|  
  
## <a name="interfaces"></a>Interfacce  
  
|Interfaccia|Descrizione|  
|---------------|-----------------|  
|<xref:System.ICloneable>|Duplicare un oggetto.|  
|<xref:System.Collections.IEnumerable>|Tra gli elementi di sequenza.|  
|<xref:System.Collections.ICollection>|Gestione gruppo di elementi.|  
|<xref:System.Collections.Generic.IEnumerable%601>|Sequenza tramite elementi tipizzati.|  
|<xref:System.Collections.Generic.ICollection%601>|Gestione gruppo di elementi tipizzati.|  
|IList\<valore >|Gestisci contenitore generico.|  
  
## <a name="remarks"></a>Note  
 L'oggetto alloca e libera spazio di archiviazione per la sequenza che controlla come singoli nodi in un elenco di collegamento bidirezionale. Riorganizza elementi modificando i collegamenti tra nodi, mai copiando il contenuto di un nodo a un altro. Pertanto, è possibile inserire e rimuovere elementi liberamente senza disturbare elementi rimanenti. Di conseguenza, un elenco è un buon candidato per il contenitore sottostante per la classe modello [coda (STL/CLR)](../dotnet/queue-stl-clr.md) o classe modello [stack (STL/CLR)](../dotnet/stack-stl-clr.md).  
  
 Oggetto `list` oggetto supporta gli iteratori bidirezionali, pertanto è possibile eseguire per gli elementi adiacenti, dato un iteratore che definisce un elemento nella sequenza controllata. Un nodo head speciale corrispondente per l'iteratore restituito da [List:: end (STL/CLR)](../dotnet/list-end-stl-clr.md)`()`. È possibile diminuire l'iteratore per raggiungere l'ultimo elemento nella sequenza controllata, se presente. È possibile incrementare un iteratore di elenco per raggiungere il nodo head e quindi confronterà uguale a `end()`. Ma non è possibile dereferenziare l'iteratore restituito da `end()`.  
  
 Si noti che è possibile fare riferimento a un elemento di elenco specificato direttamente la posizione numerica, che richiede un iteratore ad accesso casuale. È un elenco `not` utilizzabile come contenitore sottostante per la classe modello [priority_queue (STL/CLR)](../dotnet/priority-queue-stl-clr.md).  
  
 Un iteratore di elenco Archivia un handle per il nodo dell'elenco associato, che a sua volta memorizza un handle per il contenitore associato. È possibile utilizzare gli iteratori solo con i relativi oggetti contenitore associato. Un iteratore di elenco rimane valido finché il relativo nodo elenco associato è associato a un elenco. Inoltre, un iteratore valido dereferencable--è possibile utilizzarlo per accedere o modificare il valore dell'elemento che definisce, in modo fino a quando non è uguale a `end()`.  
  
 La cancellazione o eliminazione di un elemento chiama il distruttore per il valore archiviato. Eliminazione del contenitore Cancella tutti gli elementi. Di conseguenza, un contenitore il cui tipo di elemento è una classe di riferimento assicura che nessun elemento sopravvivere al contenitore. Si noti, tuttavia, che non è un contenitore di handle `not` eliminare definitivamente gli elementi.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/list >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [deque (STL/CLR)](../dotnet/deque-stl-clr.md)   
 [priority_queue (STL/CLR)](../dotnet/priority-queue-stl-clr.md)   
 [coda (STL/CLR)](../dotnet/queue-stl-clr.md)   
 [stack (STL/CLR)](../dotnet/stack-stl-clr.md)   
 [Vector (STL/CLR)](../dotnet/vector-stl-clr.md)   
 [Riferimenti alla libreria STL/CLR](../dotnet/stl-clr-library-reference.md)