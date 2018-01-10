---
title: deque (STL/CLR) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::deque
dev_langs: C++
helpviewer_keywords:
- deque class [STL/CLR]
- <deque> header [STL/CLR]
- <cliext/deque> header [STL/CLR]
ms.assetid: dd669da3-3c0e-45e9-8596-f6b483720941
caps.latest.revision: "22"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 9bd847b2641e6670a91d2edf1eb926aca423ad2f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="deque-stlclr"></a>deque (STL/CLR)
La classe modello descrive un oggetto che controlla una sequenza di lunghezza variabile di elementi che dispone di accesso casuale. Utilizzare il contenitore `deque` per gestire una sequenza di elementi che è simile a un blocco contiguo di archiviazione, ma che possibile aumentare o diminuire in delle estremità senza la necessità di copiare tutti gli elementi rimanenti. In questo modo può implementare in modo efficiente un `double-ended queue`. (Da qui il nome.)  
  
 Nella sezione successiva, `GValue` equivale `Value` , a meno che quest'ultimo è un tipo riferimento, nel qual caso è `Value^`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename Value>  
    ref class deque  
        :   public  
        System::ICloneable,  
        System::Collections::IEnumerable,  
        System::Collections::ICollection,  
        System::Collections::Generic::IEnumerable<GValue>,  
        System::Collections::Generic::ICollection<GValue>,  
        System::Collections::Generic::IList<GValue>,  
        Microsoft::VisualC::StlClr::IDeque<GValue>  
    { ..... };  
```  
  
#### <a name="parameters"></a>Parametri  
 GValue  
 Il tipo generico di un elemento nella sequenza controllata.  
  
 Valore  
 Tipo di un elemento nella sequenza controllata.  
  
## <a name="members"></a>Membri  
  
|Definizione dei tipi|Descrizione|  
|---------------------|-----------------|  
|[deque::const_iterator (STL/CLR)](../dotnet/deque-const-iterator-stl-clr.md)|Tipo di un iteratore costante per la sequenza controllata.|  
|[deque::const_reference (STL/CLR)](../dotnet/deque-const-reference-stl-clr.md)|Tipo di un riferimento costante a un elemento.|  
|[deque::const_reverse_iterator (STL/CLR)](../dotnet/deque-const-reverse-iterator-stl-clr.md)|Tipo di un iteratore inverso costante per la sequenza controllata.|  
|[deque::difference_type (STL/CLR)](../dotnet/deque-difference-type-stl-clr.md)|Tipo di una distanza Signed tra due elementi.|  
|[deque::generic_container (STL/CLR)](../dotnet/deque-generic-container-stl-clr.md)|Il tipo dell'interfaccia generica per il contenitore.|  
|[deque::generic_iterator (STL/CLR)](../dotnet/deque-generic-iterator-stl-clr.md)|Il tipo di iteratore per l'interfaccia generica per il contenitore.|  
|[deque::generic_reverse_iterator (STL/CLR)](../dotnet/deque-generic-reverse-iterator-stl-clr.md)|Il tipo di un iteratore inverso per l'interfaccia generica per il contenitore.|  
|[deque::generic_value (STL/CLR)](../dotnet/deque-generic-value-stl-clr.md)|Il tipo di un elemento per l'interfaccia generica per il contenitore.|  
|[deque::iterator (STL/CLR)](../dotnet/deque-iterator-stl-clr.md)|Tipo di un iteratore per la sequenza controllata.|  
|[deque::reference (STL/CLR)](../dotnet/deque-reference-stl-clr.md)|Tipo di un riferimento a un elemento.|  
|[deque::reverse_iterator (STL/CLR)](../dotnet/deque-reverse-iterator-stl-clr.md)|Tipo di un iteratore inverso della sequenza controllata.|  
|[deque::size_type (STL/CLR)](../dotnet/deque-size-type-stl-clr.md)|Tipo di una distanza Signed tra due elementi.|  
|[deque::value_type (STL/CLR)](../dotnet/deque-value-type-stl-clr.md)|Tipo di un elemento.|  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[deque::assign (STL/CLR)](../dotnet/deque-assign-stl-clr.md)|Sostituisce tutti gli elementi.|  
|[deque::at (STL/CLR)](../dotnet/deque-at-stl-clr.md)|Accede a un elemento in una posizione specificata.|  
|[deque::back (STL/CLR)](../dotnet/deque-back-stl-clr.md)|Accede all'ultimo elemento.|  
|[deque::begin (STL/CLR)](../dotnet/deque-begin-stl-clr.md)|Indica l'inizio della sequenza controllata.|  
|[deque::clear (STL/CLR)](../dotnet/deque-clear-stl-clr.md)|Rimuove tutti gli elementi.|  
|[deque::deque (STL/CLR)](../dotnet/deque-deque-stl-clr.md)|Costruisce un oggetto contenitore.|  
|[deque::empty (STL/CLR)](../dotnet/deque-empty-stl-clr.md)|Verifica se sono presenti o meno degli elementi.|  
|[deque::end (STL/CLR)](../dotnet/deque-end-stl-clr.md)|Designa la fine della sequenza controllata.|  
|[deque::erase (STL/CLR)](../dotnet/deque-erase-stl-clr.md)|Rimuove gli elementi in corrispondenza delle posizioni specificate.|  
|[deque::front (STL/CLR)](../dotnet/deque-front-stl-clr.md)|Accede al primo elemento.|  
|[deque::insert (STL/CLR)](../dotnet/deque-insert-stl-clr.md)|Aggiunge gli elementi in una posizione specificata.|  
|[deque::pop_back (STL/CLR)](../dotnet/deque-pop-back-stl-clr.md)|Rimuove l'ultimo elemento.|  
|[deque::pop_front (STL/CLR)](../dotnet/deque-pop-front-stl-clr.md)|Rimuove il primo elemento.|  
|[deque::push_back (STL/CLR)](../dotnet/deque-push-back-stl-clr.md)|Aggiunge un nuovo ultimo elemento.|  
|[deque::push_front (STL/CLR)](../dotnet/deque-push-front-stl-clr.md)|Aggiunge un nuovo elemento di primo.|  
|[deque::rbegin (STL/CLR)](../dotnet/deque-rbegin-stl-clr.md)|Indica l'inizio della sequenza controllata inversa.|  
|[deque::rend (STL/CLR)](../dotnet/deque-rend-stl-clr.md)|Indica la fine della sequenza controllata inversa.|  
|[deque::resize (STL/CLR)](../dotnet/deque-resize-stl-clr.md)|Modifica il numero di elementi.|  
|[deque::size (STL/CLR)](../dotnet/deque-size-stl-clr.md)|Conta il numero di elementi.|  
|[deque::swap (STL/CLR)](../dotnet/deque-swap-stl-clr.md)|Scambia il contenuto di due contenitori.|  
|[deque::to_array (STL/CLR)](../dotnet/deque-to-array-stl-clr.md)|La sequenza controllata viene copiata in una nuova matrice.|  
  
|Proprietà|Descrizione|  
|--------------|-----------------|  
|[deque::back_item (STL/CLR)](../dotnet/deque-back-item-stl-clr.md)|Accede all'ultimo elemento.|  
|[deque::front_item (STL/CLR)](../dotnet/deque-front-item-stl-clr.md)|Accede al primo elemento.|  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|[deque::operator!= (STL/CLR)](../dotnet/deque-operator-inequality-stl-clr.md)|Determina se due `deque` oggetti non sono uguali.|  
|[deque::operator(STL/CLR)](../dotnet/deque-operator-stl-clr.md)|Accede a un elemento in una posizione specificata.|  
|[operator< (deque) (STL/CLR)](../dotnet/operator-less-than-deque-stl-clr.md)|Determina se un `deque` oggetto è minore di un altro `deque` oggetto.|  
|[operator<= (deque) (STL/CLR)](../dotnet/operator-less-or-equal-deque-stl-clr.md)|Determina se un `deque` oggetto è minore o uguale a un altro `deque` oggetto.|  
|[operator= (deque) (STL/CLR)](../dotnet/operator-assign-deque-stl-clr.md)|Sostituisce la sequenza controllata.|  
|[operator== (deque) (STL/CLR)](../dotnet/operator-equality-deque-stl-clr.md)|Determina se un `deque` è uguale a un altro oggetto `deque` oggetto.|  
|[operator> (deque) (STL/CLR)](../dotnet/operator-greater-than-deque-stl-clr.md)|Determina se un `deque` è maggiore di un altro oggetto `deque` oggetto.|  
|[operator>= (deque) (STL/CLR)](../dotnet/operator-greater-or-equal-deque-stl-clr.md)|Determina se un `deque` oggetto è maggiore o uguale a un altro `deque` oggetto.|  
  
## <a name="interfaces"></a>Interfacce  
  
|Interfaccia|Descrizione|  
|---------------|-----------------|  
|<xref:System.ICloneable>|Duplicare un oggetto.|  
|<xref:System.Collections.IEnumerable>|Tra gli elementi di sequenza.|  
|<xref:System.Collections.ICollection>|Gestione gruppo di elementi.|  
|<xref:System.Collections.Generic.IEnumerable%601>|Sequenza tramite elementi tipizzati.|  
|<xref:System.Collections.Generic.ICollection%601>|Gestione gruppo di elementi tipizzati.|  
|<xref:System.Collections.Generic.IList%601>|Gestisci gruppo ordinato di elementi tipizzati.|  
|IDeque < valore\>|Gestisci contenitore generico.|  
  
## <a name="remarks"></a>Note  
 L'oggetto alloca e libera spazio di archiviazione per la sequenza da esso controllata mediante una matrice di handle che definiscono i blocchi di stored `Value` elementi. La matrice si espande nella richiesta. Aumento delle dimensioni è rappresentato in modo che il costo di anteponendo o aggiungendo un nuovo elemento è un tempo costante e non vengono richiesto l'intervento elementi rimanenti. È anche possibile rimuovere un elemento in delle estremità in un tempo costante e senza disturbare elementi rimanenti. Di conseguenza, una classe deque è un buon candidato per il contenitore sottostante per la classe modello [coda (STL/CLR)](../dotnet/queue-stl-clr.md) o classe modello [stack (STL/CLR)](../dotnet/stack-stl-clr.md).  
  
 Oggetto `deque` oggetto supporta gli iteratori ad accesso casuale, che significa che è possibile fare riferimento a un elemento assegnato direttamente alla posizione numerica, partendo da zero per il primo elemento (anteriore), per [deque:: Size (STL/CLR)](../dotnet/deque-size-stl-clr.md) `() - 1` per l'ultimo elemento (indietro). Significa anche che una classe deque è un buon candidato per il contenitore sottostante per la classe modello [priority_queue (STL/CLR)](../dotnet/priority-queue-stl-clr.md).  
  
 Un iteratore deque archivia un handle a un oggetto deque associati, con la differenza dell'elemento che definisce. È possibile utilizzare gli iteratori solo con i relativi oggetti contenitore associato. È la differenza di un elemento di deque `not` necessariamente uguale alla relativa posizione. Il primo elemento inserito ha distorsione zero, il successivo elemento aggiunto dispone distorsione 1, ma l'elemento immediatamente successivo antecedente ha distorsione -1.  
  
 Inserimento o eliminazione di elementi in delle estremità non `not` modificare il valore di un elemento archiviato in qualsiasi distorsione valido. Inserimento o eliminazione di un elemento interno, tuttavia, `can` modificare il valore dell'elemento archiviato in una deviazione specificata, in modo è inoltre possibile modificare il valore designato dall'iteratore. (Il contenitore potrebbe essere necessario copiare elementi alto o verso il basso per creare uno spazio vuoto prima di effettuare un inserimento o per compilare un foro dopo una cancellazione.) Tuttavia, un iteratore deque rimane valido finché la distorsione designa un elemento valido. Inoltre, un iteratore valido rimane dereferencable - è possibile usarlo per accedere o modificare il valore dell'elemento che definisce, purché la distorsione non è uguale alla differenza di per l'iteratore restituito da `end()`.  
  
 La cancellazione o eliminazione di un elemento chiama il distruttore per il valore archiviato. Eliminazione del contenitore Cancella tutti gli elementi. Di conseguenza, un contenitore il cui tipo di elemento è una classe di riferimento assicura che nessun elemento sopravvivere al contenitore. Si noti, tuttavia, che non è un contenitore di handle `not` eliminare definitivamente gli elementi.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/deque >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [elenco (STL/CLR)](../dotnet/list-stl-clr.md)   
 [priority_queue (STL/CLR)](../dotnet/priority-queue-stl-clr.md)   
 [coda (STL/CLR)](../dotnet/queue-stl-clr.md)   
 [stack (STL/CLR)](../dotnet/stack-stl-clr.md)   
 [Vector (STL/CLR)](../dotnet/vector-stl-clr.md)   
 [Riferimenti alla libreria STL/CLR](../dotnet/stl-clr-library-reference.md)