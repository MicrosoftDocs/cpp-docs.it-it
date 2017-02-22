---
title: "deque (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::deque"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<cliext/deque> (intestazione) [STL/CLR]"
  - "<deque> (intestazione) [STL/CLR]"
  - "deque (classe) [STL/CLR]"
ms.assetid: dd669da3-3c0e-45e9-8596-f6b483720941
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# deque (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un oggetto che comandi di una sequenza variare lunghezza di elementi che ha accesso casuale.  Utilizzare il contenitore `deque` per gestire una sequenza di elementi simile a un blocco contiguo di archiviazione, ma che possono aumentare o ridurre a entrambe le estremità senza la necessità di copiare tutti gli elementi rimanenti.  Pertanto può implementare in modo efficiente `double-ended queue`. \(Il nome\).  
  
 In descrizione di seguito, `GValue` sono gli stessi di `Value` eccetto l'ultimo sia un tipo di riferimento, nel qual caso viene `Value^`.  
  
## Sintassi  
  
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
  
#### Parametri  
 Coefficiente G  
 Il tipo generico di elemento nella sequenza selezionata.  
  
 Valore  
 Tipo di un elemento nella sequenza controllata.  
  
## Membri  
  
|Definizione del tipo|Descrizione|  
|--------------------------|-----------------|  
|[deque::const\_iterator](../dotnet/deque-const-iterator-stl-clr.md)|Il tipo di un iteratore costante della sequenza controllata.|  
|[deque::const\_reference](../dotnet/deque-const-reference-stl-clr.md)|Il tipo di un riferimento costante a un elemento.|  
|[deque::const\_reverse\_iterator](../dotnet/deque-const-reverse-iterator-stl-clr.md)|Il tipo di iteratore inverso costante per la sequenza selezionata.|  
|[deque::difference\_type](../dotnet/deque-difference-type-stl-clr.md)|Il tipo di una distanza con segno tra due elementi.|  
|[deque::generic\_container](../dotnet/deque-generic-container-stl-clr.md)|Il tipo dell'interfaccia generica del contenitore.|  
|[deque::generic\_iterator](../dotnet/deque-generic-iterator-stl-clr.md)|Il tipo di iteratore per l'interfaccia generica del contenitore.|  
|[deque::generic\_reverse\_iterator](../dotnet/deque-generic-reverse-iterator-stl-clr.md)|Il tipo di iteratore inverso per l'interfaccia generica del contenitore.|  
|[deque::generic\_value](../dotnet/deque-generic-value-stl-clr.md)|Il tipo di elemento dell'interfaccia generica del contenitore.|  
|[deque::iterator](../dotnet/deque-iterator-stl-clr.md)|Il tipo di un iteratore della sequenza controllata.|  
|[deque::reference](../dotnet/deque-reference-stl-clr.md)|Il tipo di un riferimento a un elemento.|  
|[deque::reverse\_iterator](../dotnet/deque-reverse-iterator-stl-clr.md)|Il tipo di iteratore inverso per la sequenza selezionata.|  
|[deque::size\_type](../dotnet/deque-size-type-stl-clr.md)|Il tipo di una distanza con segno tra due elementi.|  
|[deque::value\_type](../dotnet/deque-value-type-stl-clr.md)|Il tipo di un elemento.|  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[deque::assign](../dotnet/deque-assign-stl-clr.md)|Sostituisce tutti gli elementi.|  
|[deque::at](../dotnet/deque-at-stl-clr.md)|Accede a un elemento in una posizione specificata.|  
|[deque::back](../dotnet/deque-back-stl-clr.md)|Accede all'ultimo.|  
|[deque::begin](../dotnet/deque-begin-stl-clr.md)|Definisce l'inizio della sequenza controllata.|  
|[deque::clear](../dotnet/deque-clear-stl-clr.md)|Rimuove tutti gli elementi.|  
|[deque::deque](../dotnet/deque-deque-stl-clr.md)|Costruisce un oggetto contenitore.|  
|[deque::empty](../dotnet/deque-empty-stl-clr.md)|Consente di verificare se non sono presenti elementi.|  
|[deque::end](../dotnet/deque-end-stl-clr.md)|Definisce la fine della sequenza controllata.|  
|[deque::erase](../dotnet/deque-erase-stl-clr.md)|Rimuove gli elementi alle posizioni specificate.|  
|[deque::front](../dotnet/deque-front-stl-clr.md)|Accede al primo elemento.|  
|[deque::insert](../dotnet/deque-insert-stl-clr.md)|Aggiunge elementi a una posizione specificata.|  
|[deque::pop\_back](../dotnet/deque-pop-back-stl-clr.md)|Rimuove l'ultimo elemento.|  
|[deque::pop\_front](../dotnet/deque-pop-front-stl-clr.md)|Rimuove il primo elemento.|  
|[deque::push\_back](../dotnet/deque-push-back-stl-clr.md)|Aggiunge un nuovo ultimo elemento.|  
|[deque::push\_front](../dotnet/deque-push-front-stl-clr.md)|Aggiunge un nuovo primo elemento.|  
|[deque::rbegin](../dotnet/deque-rbegin-stl-clr.md)|Definisce l'inizio della sequenza inversa controllata.|  
|[deque::rend](../dotnet/deque-rend-stl-clr.md)|Definisce la fine della sequenza inversa controllata.|  
|[deque::resize](../dotnet/deque-resize-stl-clr.md)|Modifica il numero di elementi.|  
|[deque::size](../dotnet/deque-size-stl-clr.md)|Conta il numero di elementi.|  
|[deque::swap](../dotnet/deque-swap-stl-clr.md)|Scambia il contenuto di due contenitori.|  
|[deque::to\_array](../dotnet/deque-to-array-stl-clr.md)|Copia la sequenza selezionata una nuova matrice.|  
  
|Proprietà|Descrizione|  
|---------------|-----------------|  
|[deque::back\_item](../dotnet/deque-back-item-stl-clr.md)|Accede all'ultimo.|  
|[deque::front\_item](../dotnet/deque-front-item-stl-clr.md)|Accede al primo elemento.|  
  
|Operatore|Descrizione|  
|---------------|-----------------|  
|[deque::operator\!\=](../dotnet/deque-operator-inequality-stl-clr.md)|Determina se due oggetti `deque` non sono uguali.|  
|[deque::operator](../dotnet/deque-operator-stl-clr.md)|Accede a un elemento in una posizione specificata.|  
|[operator\< \(deque\)](../dotnet/operator-less-than-deque-stl-clr.md)|Determina se un oggetto di `deque` è inferiore a un altro oggetto di `deque`.|  
|[operator\<\= \(deque\)](../dotnet/operator-less-or-equal-deque-stl-clr.md)|Determina se un oggetto di `deque` è minore o uguale a un altro oggetto di `deque`.|  
|[operator\= \(deque\)](../dotnet/operator-assign-deque-stl-clr.md)|Sostituisce la sequenza selezionata.|  
|[operator\=\= \(deque\)](../dotnet/operator-equality-deque-stl-clr.md)|Determina se un oggetto di `deque` equivale a un altro oggetto di `deque`.|  
|[operator\> \(deque\)](../dotnet/operator-greater-than-deque-stl-clr.md)|Determina se un oggetto di `deque` è maggiore di un altro oggetto di `deque`.|  
|[operator\>\= \(deque\)](../dotnet/operator-greater-or-equal-deque-stl-clr.md)|Determina se un oggetto di `deque` è maggiore o uguale a un altro oggetto di `deque`.|  
  
## Interfacce  
  
|Interfaccia|Descrizione|  
|-----------------|-----------------|  
|<xref:System.ICloneable>|Duplicare un oggetto.|  
|<xref:System.Collections.IEnumerable>|Sequenza degli elementi.|  
|<xref:System.Collections.ICollection>|Gestire il gruppo di elementi.|  
|<xref:System.Collections.Generic.IEnumerable%601>|Sequenza dagli elementi tipizzati.|  
|<xref:System.Collections.Generic.ICollection%601>|Gestire il gruppo di elementi tipizzati.|  
|<xref:System.Collections.Generic.IList%601>|Gestire il gruppo ordinato di elementi tipizzati.|  
|IDequeValue\<\>|Gestire il contenitore generico.|  
  
## Note  
 L'oggetto alloca e libera la memoria per la sequenza che controlla da una matrice archiviata handles che definiscono i blocchi di elementi di `Value`.  La matrice aumentano su richiesta.  La crescita si verifica in modo che il costo di anteporre o di aggiungere un nuovo elemento tempo è costante e nessun elemento rimanente è disturbato.  È inoltre possibile eliminare un elemento a entrambe le estremità nel tempo costante e senza pregiudicare gli elementi rimanenti.  Pertanto, un deque è un buon candidato per il contenitore sottostante per classe modello [queue](../dotnet/queue-stl-clr.md) o classe modello [stack](../dotnet/stack-stl-clr.md).  
  
 Un oggetto di `deque` supporta gli iteratori di accesso casuale, è possibile fare riferimento a un elemento fornito direttamente la posizione numerica, contante da zero al primo elemento \(precedente\), a [deque::size](../dotnet/deque-size-stl-clr.md)`() - 1` per l'ultimo elemento \(indietro.  Significa anche che un deque è un buon candidato per il contenitore sottostante per classe modello [priority\_queue](../dotnet/priority-queue-stl-clr.md).  
  
 Un iteratore di deque memorizzare l'handle al relativo oggetto collegato di deque, con la polarizzazione dell'elemento che definisce.  È possibile utilizzare gli iteratori solo con i relativi oggetti contenitore collegati.  La polarizzazione di un elemento di `not` deque è necessariamente lo stesso effetto della posizione.  Il primo elemento inserito contiene zero diagonali, l'elemento aggiunto seguente è 1 diagonali, ma l'elemento anteposto seguente è \-1 diagonale.  
  
 Inserendo o cancellare gli elementi a entrambe le estremità fa `not` modifica il valore di un elemento memorizzato in qualsiasi polarizzazione valida.  Inserendo o deselezionando un elemento interno, tuttavia, la modifica di `can` il valore dell'elemento archiviato in una polarizzazione specificata, pertanto il valore definito da un iteratore può anche essere modificato. \(Il contenitore può essere necessario copiare elementi verso l'alto o verso il basso per creare un foro prima di accodamento o per riempire un foro dopo un erase\). Tuttavia, un iteratore di deque rimane valido a condizione che la polarizzazione definire un elemento valido.  Inoltre, un iteratore rimane valido dereferencable \-\- è possibile utilizzarlo per accedere e modificare il valore dell'elemento che definisce \-\- a condizione che la polarizzazione è pari a polarizzazione dell'iteratore restituito da `end()`.  
  
 Clearing or rimozione di un elemento chiama il distruttore per il valore archiviato.  Eliminare il contenitore di cancellare tutti gli elementi.  Pertanto, un contenitore del cui tipo di elemento è una classe di riferimento garantisce che nessun elemento sopravviva il contenitore.  Nota, tuttavia, che un contenitore handles fa `not` eliminato i relativi elementi.  
  
## Requisiti  
 **Intestazione:** \<cliext\/deque\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [list](../dotnet/list-stl-clr.md)   
 [priority\_queue](../dotnet/priority-queue-stl-clr.md)   
 [queue](../dotnet/queue-stl-clr.md)   
 [stack](../dotnet/stack-stl-clr.md)   
 [vettore](../dotnet/vector-stl-clr.md)   
 [Libreria STL\/CLR](../dotnet/stl-clr-library-reference.md)