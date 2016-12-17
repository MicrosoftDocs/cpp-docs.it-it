---
title: "list (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::list"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<cliext/list> (intestazione) [STL/CLR]"
  - "<list> (intestazione) [STL/CLR]"
  - "classe elenco [STL/CLR]"
ms.assetid: a70c45c8-a257-4f6b-8434-b27ff6685bac
caps.latest.revision: 17
caps.handback.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# list (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un oggetto che comandi di una sequenza variare lunghezza di elementi che ha accesso bidirezionale.  Utilizzare il contenitore `list` per gestire una sequenza di elementi come elenco collegato bidirezionale di nodi, ogni un elemento archiviando.  
  
 In descrizione di seguito, `GValue` sono gli stessi di `Value` eccetto l'ultimo sia un tipo di riferimento, nel qual caso viene `Value^`.  
  
## Sintassi  
  
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
  
#### Parametri  
 Valore  
 Tipo di un elemento nella sequenza controllata.  
  
## Membri  
  
|Definizione del tipo|Descrizione|  
|--------------------------|-----------------|  
|[list::const\_iterator](../dotnet/list-const-iterator-stl-clr.md)|Il tipo di un iteratore costante della sequenza controllata.|  
|[list::const\_reference](../dotnet/list-const-reference-stl-clr.md)|Il tipo di un riferimento costante a un elemento.|  
|[list::const\_reverse\_iterator](../dotnet/list-const-reverse-iterator-stl-clr.md)|Il tipo di iteratore inverso costante per la sequenza selezionata.|  
|[list::difference\_type](../dotnet/list-difference-type-stl-clr.md)|Il tipo di una distanza con segno tra due elementi.|  
|[list::generic\_container](../dotnet/list-generic-container-stl-clr.md)|Il tipo dell'interfaccia generica del contenitore.|  
|[list::generic\_iterator](../dotnet/list-generic-iterator-stl-clr.md)|Il tipo di iteratore per l'interfaccia generica del contenitore.|  
|[list::generic\_reverse\_iterator](../dotnet/list-generic-reverse-iterator-stl-clr.md)|Il tipo di iteratore inverso per l'interfaccia generica del contenitore.|  
|[list::generic\_value](../dotnet/list-generic-value-stl-clr.md)|Il tipo di elemento dell'interfaccia generica del contenitore.|  
|[list::iterator](../dotnet/list-iterator-stl-clr.md)|Il tipo di un iteratore della sequenza controllata.|  
|[list::reference](../dotnet/list-reference-stl-clr.md)|Il tipo di un riferimento a un elemento.|  
|[list::reverse\_iterator](../dotnet/list-reverse-iterator-stl-clr.md)|Il tipo di iteratore inverso per la sequenza selezionata.|  
|[list::size\_type](../dotnet/list-size-type-stl-clr.md)|Il tipo di una distanza con segno tra due elementi.|  
|[list::value\_type](../dotnet/list-value-type-stl-clr.md)|Il tipo di un elemento.|  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[list::assign](../dotnet/list-assign-stl-clr.md)|Sostituisce tutti gli elementi.|  
|[list::back](../dotnet/list-back-stl-clr.md)|Accede all'ultimo.|  
|[list::begin](../dotnet/list-begin-stl-clr.md)|Definisce l'inizio della sequenza controllata.|  
|[list::clear](../dotnet/list-clear-stl-clr.md)|Rimuove tutti gli elementi.|  
|[list::empty](../dotnet/list-empty-stl-clr.md)|Consente di verificare se non sono presenti elementi.|  
|[list::end](../dotnet/list-end-stl-clr.md)|Definisce la fine della sequenza controllata.|  
|[list::erase](../dotnet/list-erase-stl-clr.md)|Rimuove gli elementi alle posizioni specificate.|  
|[list::front](../dotnet/list-front-stl-clr.md)|Accede al primo elemento.|  
|[list::insert](../dotnet/list-insert-stl-clr.md)|Aggiunge elementi a una posizione specificata.|  
|[list::list](../dotnet/list-list-stl-clr.md)|Costruisce un oggetto contenitore.|  
|[list::merge](../dotnet/list-merge-stl-clr.md)|Unisce due sequenze controllate ordinate.|  
|[list::pop\_back](../dotnet/list-pop-back-stl-clr.md)|Rimuove l'ultimo elemento.|  
|[list::pop\_front](../dotnet/list-pop-front-stl-clr.md)|Rimuove il primo elemento.|  
|[list::push\_back](../dotnet/list-push-back-stl-clr.md)|Aggiunge un nuovo ultimo elemento.|  
|[list::push\_front](../dotnet/list-push-front-stl-clr.md)|Aggiunge un nuovo primo elemento.|  
|[list::rbegin](../dotnet/list-rbegin-stl-clr.md)|Definisce l'inizio della sequenza inversa controllata.|  
|[list::remove](../dotnet/list-remove-stl-clr.md)|Rimuove un elemento con un valore specificato.|  
|[list::remove\_if](../dotnet/list-remove-if-stl-clr.md)|Rimuove gli elementi che superano un determinato test.|  
|[list::rend](../dotnet/list-rend-stl-clr.md)|Definisce la fine della sequenza inversa controllata.|  
|[list::resize](../dotnet/list-resize-stl-clr.md)|Modifica il numero di elementi.|  
|[list::reverse](../dotnet/list-reverse-stl-clr.md)|L'inversione della sequenza selezionata.|  
|[list::size](../dotnet/list-size-stl-clr.md)|Conta il numero di elementi.|  
|[list::sort](../dotnet/list-sort-stl-clr.md)|Ordina la sequenza controllata.|  
|[list::splice](../dotnet/list-splice-stl-clr.md)|Raggruppa i collegamenti tra i nodi.|  
|[list::swap](../dotnet/list-swap-stl-clr.md)|Scambia il contenuto di due contenitori.|  
|[list::to\_array](../dotnet/list-to-array-stl-clr.md)|Copia la sequenza selezionata una nuova matrice.|  
|[list::unique](../dotnet/list-unique-stl-clr.md)|Rimuove elementi adiacenti che superano un test specificato.|  
  
|Proprietà|Descrizione|  
|---------------|-----------------|  
|[list::back\_item](../dotnet/list-back-item-stl-clr.md)|Accede all'ultimo.|  
|[list::front\_item](../dotnet/list-front-item-stl-clr.md)|Accede al primo elemento.|  
  
|Operatore|Descrizione|  
|---------------|-----------------|  
|[list::operator\=](../dotnet/list-operator-assign-stl-clr.md)|Sostituisce la sequenza selezionata.|  
|[operator\!\= \(list\)](../dotnet/operator-inequality-list-stl-clr.md)|Determina se un oggetto di `list` non equivale a un altro oggetto di `list`.|  
|[operator\< \(list\)](../dotnet/operator-less-than-list-stl-clr.md)|Determina se un oggetto di `list` è inferiore a un altro oggetto di `list`.|  
|[operator\<\= \(list\)](../dotnet/operator-less-or-equal-list-stl-clr.md)|Determina se un oggetto di `list` è minore o uguale a un altro oggetto di `list`.|  
|[operator\=\= \(list\)](../dotnet/operator-equality-list-stl-clr.md)|Determina se un oggetto di `list` equivale a un altro oggetto di `list`.|  
|[operator\> \(list\)](../dotnet/operator-greater-than-list-stl-clr.md)|Determina se un oggetto di `list` è maggiore di un altro oggetto di `list`.|  
|[operator\>\= \(list\)](../dotnet/operator-greater-or-equal-list-stl-clr.md)|Determina se un oggetto di `list` è maggiore o uguale a un altro oggetto di `list`.|  
  
## Interfacce  
  
|Interfaccia|Descrizione|  
|-----------------|-----------------|  
|<xref:System.ICloneable>|Duplicare un oggetto.|  
|<xref:System.Collections.IEnumerable>|Sequenza degli elementi.|  
|<xref:System.Collections.ICollection>|Gestire il gruppo di elementi.|  
|<xref:System.Collections.Generic.IEnumerable%601>|Sequenza dagli elementi tipizzati.|  
|<xref:System.Collections.Generic.ICollection%601>|Gestire il gruppo di elementi tipizzati.|  
|IListValue\<\>|Gestire il contenitore generico.|  
  
## Note  
 L'oggetto alloca e libera la memoria per la sequenza che controlla mentre i singoli nodi in un collegamento bidirezionale l'elenco.  Ridisporre gli elementi cambiando i collegamenti tra i nodi, mai copiando il contenuto di un nodo a un altro.  Ciò significa che è possibile inserire liberamente e rimuovere elementi senza pregiudicare gli elementi rimanenti.  Pertanto, un elenco è un buon candidato per il contenitore sottostante per classe modello [queue](../dotnet/queue-stl-clr.md) o classe modello [stack](../dotnet/stack-stl-clr.md).  
  
 Un oggetto di `list` supporta gli iteratori bidirezionali, è possibile avanzare agli elementi adiacenti fornito un iteratore che definisce un elemento nella sequenza selezionata.  Un nodo head speciale corrisponde all'iteratore restituito da [list::end](../dotnet/list-end-stl-clr.md)`()`.  È possibile diminuire questo iteratore per ottenere l'ultimo elemento della sequenza selezionata, se presente.  È possibile incrementare un iteratore di elenco per ottenere il nodo head quindi confronterà il segno di uguale a `end()`.  Ma non è possibile dereferenziare l'iteratore restituito da `end()`.  
  
 Si noti che non è possibile fare riferimento a un elemento dell'elenco fornito direttamente la posizione numerica \-\- ciò richiede un iteratore di accesso casuale.  Pertanto viene `not` utilizzabile come elenco sottostante per classe modello [priority\_queue](../dotnet/priority-queue-stl-clr.md).  
  
 Un iteratore di elenco memorizzare l'handle al nodo dell'elenco collegato, che a sua volta memorizzare l'handle al relativo contenitore collegato.  È possibile utilizzare gli iteratori solo con i relativi oggetti contenitore collegati.  Un iteratore di elenco rimane valido a condizione che il relativo nodo collegato elenco sia associato a un elenco.  Inoltre, un iteratore valido è dereferencable \-\- è possibile utilizzarlo per accedere e modificare il valore dell'elemento che definisce \-\- a condizione che non sia uguale a `end()`.  
  
 Clearing or rimozione di un elemento chiama il distruttore per il valore archiviato.  Eliminare il contenitore di cancellare tutti gli elementi.  Pertanto, un contenitore del cui tipo di elemento è una classe di riferimento garantisce che nessun elemento sopravviva il contenitore.  Nota, tuttavia, che un contenitore handles fa `not` eliminato i relativi elementi.  
  
## Requisiti  
 **Intestazione:**\<cliext\/list\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [deque](../dotnet/deque-stl-clr.md)   
 [priority\_queue](../dotnet/priority-queue-stl-clr.md)   
 [queue](../dotnet/queue-stl-clr.md)   
 [stack](../dotnet/stack-stl-clr.md)   
 [vettore](../dotnet/vector-stl-clr.md)   
 [Libreria STL\/CLR](../dotnet/stl-clr-library-reference.md)