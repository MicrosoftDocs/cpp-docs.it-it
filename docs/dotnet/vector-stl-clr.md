---
title: "vector (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::vector"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<cliext/vector> (intestazione) [STL/CLR]"
  - "<vector> (intestazione) [STL/CLR]"
  - "classe di vettori [STL/CLR]"
ms.assetid: f90060d5-097a-4e9d-9a26-a634b5b9c6c2
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 18
---
# vector (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un oggetto che comandi di una sequenza variare lunghezza di elementi che ha accesso casuale.  Utilizzare il contenitore `vector` per gestire una sequenza di elementi come blocco contiguo di archiviazione.  Il blocco viene implementato come una matrice le cui dimensioni aumentano su richiesta.  
  
 In descrizione di seguito, `GValue` sono gli stessi di `Value` eccetto l'ultimo sia un tipo di riferimento, nel qual caso viene `Value^`.  
  
## Sintassi  
  
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
  
#### Parametri  
 Valore  
 Tipo di un elemento nella sequenza controllata.  
  
## Membri  
  
|Definizione del tipo|Descrizione|  
|--------------------------|-----------------|  
|[vector::const\_iterator](../dotnet/vector-const-iterator-stl-clr.md)|Il tipo di un iteratore costante della sequenza controllata.|  
|[vector::const\_reference](../dotnet/vector-const-reference-stl-clr.md)|Il tipo di un riferimento costante a un elemento.|  
|[vector::const\_reverse\_iterator](../dotnet/vector-const-reverse-iterator-stl-clr.md)|Il tipo di iteratore inverso costante per la sequenza selezionata.|  
|[vector::difference\_type](../dotnet/vector-difference-type-stl-clr.md)|Il tipo di una distanza con segno tra due elementi.|  
|[vector::generic\_container](../dotnet/vector-generic-container-stl-clr.md)|Il tipo dell'interfaccia generica del contenitore.|  
|[vector::generic\_iterator](../dotnet/vector-generic-iterator-stl-clr.md)|Il tipo di iteratore per l'interfaccia generica del contenitore.|  
|[vector::generic\_reverse\_iterator](../dotnet/vector-generic-reverse-iterator-stl-clr.md)|Il tipo di iteratore inverso per l'interfaccia generica del contenitore.|  
|[vector::generic\_value](../dotnet/vector-generic-value-stl-clr.md)|Il tipo di elemento dell'interfaccia generica del contenitore.|  
|[vector::iterator](../dotnet/vector-iterator-stl-clr.md)|Il tipo di un iteratore della sequenza controllata.|  
|[vector::reference](../dotnet/vector-reference-stl-clr.md)|Il tipo di un riferimento a un elemento.|  
|[vector::reverse\_iterator](../dotnet/vector-reverse-iterator-stl-clr.md)|Il tipo di iteratore inverso per la sequenza selezionata.|  
|[vector::size\_type](../dotnet/vector-size-type-stl-clr.md)|Il tipo di una distanza con segno tra due elementi.|  
|[vector::value\_type](../dotnet/vector-value-type-stl-clr.md)|Il tipo di un elemento.|  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[vector::assign](../dotnet/vector-assign-stl-clr.md)|Sostituisce tutti gli elementi.|  
|[vector::at](../dotnet/vector-at-stl-clr.md)|Accede a un elemento in una posizione specificata.|  
|[vector::back](../dotnet/vector-back-stl-clr.md)|Accede all'ultimo.|  
|[vector::begin](../dotnet/vector-begin-stl-clr.md)|Definisce l'inizio della sequenza controllata.|  
|[vector::capacity](../dotnet/vector-capacity-stl-clr.md)|Restituisce la dimensione dello spazio di memorizzazione allocato per il contenitore.|  
|[vector::clear](../dotnet/vector-clear-stl-clr.md)|Rimuove tutti gli elementi.|  
|[vector::empty](../dotnet/vector-empty-stl-clr.md)|Consente di verificare se non sono presenti elementi.|  
|[vector::end](../dotnet/vector-end-stl-clr.md)|Definisce la fine della sequenza controllata.|  
|[vector::erase](../dotnet/vector-erase-stl-clr.md)|Rimuove gli elementi alle posizioni specificate.|  
|[vector::front](../dotnet/vector-front-stl-clr.md)|Accede al primo elemento.|  
|[vector::insert](../dotnet/vector-insert-stl-clr.md)|Aggiunge elementi a una posizione specificata.|  
|[vector::pop\_back](../dotnet/vector-pop-back-stl-clr.md)|Rimuove l'ultimo elemento.|  
|[vector::push\_back](../dotnet/vector-push-back-stl-clr.md)|Aggiunge un nuovo ultimo elemento.|  
|[vector::rbegin](../dotnet/vector-rbegin-stl-clr.md)|Definisce l'inizio della sequenza inversa controllata.|  
|[vector::rend](../dotnet/vector-rend-stl-clr.md)|Definisce la fine della sequenza inversa controllata.|  
|[vector::reserve](../dotnet/vector-reserve-stl-clr.md)|Fornisce una capacità minima di crescita del contenitore.|  
|[vector::resize](../dotnet/vector-resize-stl-clr.md)|Modifica il numero di elementi.|  
|[vector::size](../dotnet/vector-size-stl-clr.md)|Conta il numero di elementi.|  
|[vector::swap](../dotnet/vector-swap-stl-clr.md)|Scambia il contenuto di due contenitori.|  
|[vector::to\_array](../dotnet/vector-to-array-stl-clr.md)|Copia la sequenza selezionata una nuova matrice.|  
|[vector::vector](../dotnet/vector-vector-stl-clr.md)|Costruisce un oggetto contenitore.|  
  
|Proprietà|Descrizione|  
|---------------|-----------------|  
|[vector::back\_item](../dotnet/vector-back-item-stl-clr.md)|Accede all'ultimo.|  
|[vector::front\_item](../dotnet/vector-front-item-stl-clr.md)|Accede al primo elemento.|  
  
|Operatore|Descrizione|  
|---------------|-----------------|  
|[vector::operator\=](../dotnet/vector-operator-assign-stl-clr.md)|Sostituisce la sequenza selezionata.|  
|[vector::operator](../dotnet/vector-operator-stl-clr.md)|Accede a un elemento in una posizione specificata.|  
|[operator\!\= \(vector\)](../dotnet/operator-inequality-vector-stl-clr.md)|Determina se un oggetto di `vector` non equivale a un altro oggetto di `vector`.|  
|[operator\< \(vector\)](../dotnet/operator-less-than-vector-stl-clr.md)|Determina se un oggetto di `vector` è inferiore a un altro oggetto di `vector`.|  
|[operator\<\= \(vector\)](../dotnet/operator-less-or-equal-vector-stl-clr.md)|Determina se un oggetto di `vector` è minore o uguale a un altro oggetto di `vector`.|  
|[operator\=\= \(vector\)](../dotnet/operator-equality-vector-stl-clr.md)|Determina se un oggetto di `vector` equivale a un altro oggetto di `vector`.|  
|[operator\> \(vector\)](../dotnet/operator-greater-than-vector-stl-clr.md)|Determina se un oggetto di `vector` è maggiore di un altro oggetto di `vector`.|  
|[operator\>\= \(vector\)](../dotnet/operator-greater-or-equal-vector-stl-clr.md)|Determina se un oggetto di `vector` è maggiore o uguale a un altro oggetto di `vector`.|  
  
## Interfacce  
  
|Interfaccia|Descrizione|  
|-----------------|-----------------|  
|<xref:System.ICloneable>|Duplicare un oggetto.|  
|<xref:System.Collections.IEnumerable>|Sequenza degli elementi.|  
|<xref:System.Collections.ICollection>|Gestire il gruppo di elementi.|  
|<xref:System.Collections.Generic.IEnumerable%601>|Sequenza dagli elementi tipizzati.|  
|<xref:System.Collections.Generic.ICollection%601>|Gestire il gruppo di elementi tipizzati.|  
|<xref:System.Collections.Generic.IList%601>|Gestire il gruppo ordinato di elementi tipizzati.|  
|IVectorValue\<\>|Gestire il contenitore generico.|  
  
## Note  
 L'oggetto alloca e libera la memoria per la sequenza che controlla da una matrice archiviati gli elementi di `Value`, che aumenta su richiesta.  La crescita si verifica in modo che il costo di aggiungere un nuovo elemento viene ammortizzato tempo costante.  Ovvero i costi di aggiunta di elementi alla fine non aumenta, in media, poiché la lunghezza della sequenza selezionata ottiene più grande.  Pertanto, un vettore è un buon candidato per il contenitore sottostante per classe modello [stack](../dotnet/stack-stl-clr.md).  
  
 `vector` supporta gli iteratori di accesso casuale, è possibile fare riferimento a un elemento fornito direttamente la posizione numerica, contante da zero al primo elemento \(precedente\), a [vector::size](../dotnet/vector-size-stl-clr.md)`() - 1` per l'ultimo elemento \(indietro.  Significa anche che un vettore è un buon candidato per il contenitore sottostante per classe modello [priority\_queue](../dotnet/priority-queue-stl-clr.md).  
  
 Un iteratore di vettore memorizzare l'handle al relativo oggetto collegato vettoriali, con la polarizzazione dell'elemento che definisce.  È possibile utilizzare gli iteratori solo con i relativi oggetti contenitore collegati.  La polarizzazione di un elemento vettoriale è la stessa della posizione.  
  
 L'inserimento o deselezionare items può modificare il valore dell'elemento archiviato in un percorso specificato, pertanto il valore definito da un iteratore può anche essere modificato. \(Il contenitore può essere necessario copiare elementi verso l'alto o verso il basso per creare un foro prima di accodamento o per riempire un foro dopo un erase\). Tuttavia, un iteratore di vettore rimane valido a condizione che la polarizzazione sia nell'intervallo `[0,` [vector::size](../dotnet/vector-size-stl-clr.md)`()]`.  Inoltre, un iteratore rimane valido dereferencable \-\- è possibile utilizzarlo per accedere e modificare il valore dell'elemento che definisce \-\- a condizione che la polarizzazione non sia uguale a `size()`.  
  
 Clearing or rimozione di un elemento chiama il distruttore per il valore archiviato.  Eliminare il contenitore di cancellare tutti gli elementi.  Pertanto, un contenitore del cui tipo di elemento è una classe di riferimento garantisce che nessun elemento sopravviva il contenitore.  Nota, tuttavia, che un contenitore handles fa `not` eliminato i relativi elementi.  
  
## Requisiti  
 **Intestazione:**\<cliext\/vector\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [deque](../dotnet/deque-stl-clr.md)   
 [list](../dotnet/list-stl-clr.md)   
 [priority\_queue](../dotnet/priority-queue-stl-clr.md)   
 [queue](../dotnet/queue-stl-clr.md)   
 [stack](../dotnet/stack-stl-clr.md)   
 [Libreria STL\/CLR](../dotnet/stl-clr-library-reference.md)