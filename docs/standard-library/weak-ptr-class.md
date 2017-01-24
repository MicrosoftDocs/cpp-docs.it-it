---
title: "Classe weak_ptr | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.tr1.weak_ptr"
  - "tr1.weak_ptr"
  - "weak_ptr"
  - "tr1::weak_ptr"
  - "std::tr1::weak_ptr"
  - "memory/std::tr1::weak_ptr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "weak_ptr (classe)"
  - "weak_ptr (classe) [TR1]"
ms.assetid: 2db4afb2-c7be-46fc-9c20-34ec2f8cc7c2
caps.latest.revision: 22
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe weak_ptr
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Esegue il wrapping di un puntatore collegato in modo debole.  
  
## Sintassi  
  
```  
template<class Ty> class weak_ptr {  
public:  
    typedef Ty element_type;  
  
    weak_ptr();  
    weak_ptr(const weak_ptr&);  
    template<class Other>  
        weak_ptr(const weak_ptr<Other>&);  
    template<class Other>  
        weak_ptr(const shared_ptr<Other>&);  
  
    weak_ptr& operator=(const weak_ptr&);  
    template<class Other>  
        weak_ptr& operator=(const weak_ptr<Other>&);  
    template<class Other>  
        weak_ptr& operator=(shared_ptr<Other>&);  
  
    void swap(weak_ptr&);  
    void reset();  
  
    long use_count() const;  
    bool expired() const;  
    shared_ptr<Ty> lock() const;  
    };  
```  
  
#### Parametri  
 `Ty`  
 Tipo controllato dal puntatore debole.  
  
## Note  
 La classe modello descrive un oggetto che punta a una risorsa gestita da uno o più oggetti [Classe shared\_ptr](../standard-library/shared-ptr-class.md).  Gli oggetti `weak_ptr` che puntano a una risorsa non influiscono sul conteggio dei riferimenti della risorsa.  Pertanto, quando l'ultimo oggetto `shared_ptr` che gestisce la risorsa viene eliminato, la risorsa verrà liberata, anche se sono presenti oggetti `weak_ptr` che puntano a tale risorsa.  Ciò è essenziale per evitare cicli nelle strutture di dati.  
  
 Un oggetto `weak_ptr` punta a una risorsa se è stato costruito da un oggetto `shared_ptr` proprietario di tale risorsa, se è stato costruito da un oggetto `weak_ptr` che punta a tale risorsa o se la risorsa è stata assegnata a esso con [weak\_ptr::operator\=](../Topic/weak_ptr::operator=.md).  Un oggetto `weak_ptr` non fornisce accesso diretto alla risorsa a cui punta.  Il codice che deve usare la risorsa lo fa tramite un oggetto `shared_ptr` proprietario di tale risorsa, creato chiamando la funzione membro [weak\_ptr::lock](../Topic/weak_ptr::lock.md).  Un oggetto `weak_ptr` è scaduto quando la risorsa a cui punta è stata liberata perché tutti gli oggetti `shared_ptr` proprietari della risorsa sono stati eliminati.  Chiamando `lock` su un oggetto `weak_ptr` scaduto viene creato un oggetto shared\_ptr vuoto.  
  
 Un oggetto weak\_ptr vuoto non punta ad alcuna risorsa e non ha alcun blocco di controllo.  La sua funzione membro `lock` restituisce un oggetto shared\_ptr vuoto.  
  
 Si verifica un ciclo quando due o più risorse controllate da oggetti `shared_ptr` contengono oggetti `shared_ptr` che fanno riferimento uno con l'altro.  Ad esempio, un elenco collegato circolare con tre elementi ha un nodo head `N0`, tale nodo contiene un oggetto `shared_ptr` proprietario del nodo successivo `N1`, tale nodo contiene un oggetto `shared_ptr` proprietario del nodo successivo `N2` e tale nodo, a sua volta, contiene un oggetto `shared_ptr` proprietario del nodo head `N0`, che chiude il ciclo.  In questo caso, nessuno dei conteggi dei riferimenti diventerà mai zero e i nodi nel ciclo non verranno liberati.  Per eliminare il ciclo, l'ultimo nodo `N2` deve contenere un oggetto `weak_ptr` che punta all'oggetto `N0` anziché un oggetto `shared_ptr`.  Poiché l'oggetto `weak_ptr` non è proprietario di `N0`, non influisce sul conteggio dei riferimenti di `N0` e quando l'ultimo riferimento del programma al nodo head viene eliminato, anche i nodi nell'elenco vengono eliminati.  
  
## Membri  
  
### Costruttori  
  
|||  
|-|-|  
|[weak\_ptr::weak\_ptr](../Topic/weak_ptr::weak_ptr.md)|Costruisce un oggetto `weak_ptr`.|  
  
### Metodi  
  
|||  
|-|-|  
|[weak\_ptr::element\_type](../Topic/weak_ptr::element_type.md)|Tipo dell'elemento.|  
|[weak\_ptr::expired](../Topic/weak_ptr::expired.md)|Verifica se la proprietà è scaduta.|  
|[weak\_ptr::lock](../Topic/weak_ptr::lock.md)|Ottiene la proprietà esclusiva di una risorsa.|  
|[weak\_ptr::owner\_before](../Topic/weak_ptr::owner_before.md)|Restituisce `true` se `weak_ptr` è ordinato in posizione precedente al \(o è minore del\) puntatore fornito.|  
|[weak\_ptr::reset](../Topic/weak_ptr::reset.md)|Rilascia una risorsa di proprietà.|  
|[weak\_ptr::swap](../Topic/weak_ptr::swap.md)|Scambia due oggetti `weak_ptr`.|  
|[weak\_ptr::use\_count](../Topic/weak_ptr::use_count.md)|Conta il numero di oggetti `shared_ptr` designati.|  
  
### Operatori  
  
|||  
|-|-|  
|[weak\_ptr::operator\=](../Topic/weak_ptr::operator=.md)|Sostituisce una risorsa di proprietà.|  
  
## Requisiti  
 **Intestazione:** \<memory\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Classe shared\_ptr](../standard-library/shared-ptr-class.md)