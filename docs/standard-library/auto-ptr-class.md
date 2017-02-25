---
title: "Classe auto_ptr | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::auto_ptr"
  - "std.auto_ptr"
  - "auto_ptr"
  - "memory/std::auto_ptr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "auto_ptr (classe)"
ms.assetid: 7f9108b6-9eb3-4634-b615-cf7aa814f23b
caps.latest.revision: 26
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 26
---
# Classe auto_ptr
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Esegue il wrapping di un puntatore di tipo smart intorno a una risorsa, in modo da assicurare che la risorsa venga eliminata automaticamente quando il controllo lascia un blocco.  
  
 La classe `unique_ptr` con maggiori capacità prevale su `auto_ptr`.  Per altre informazioni, vedere la [Classe unique\_ptr](../standard-library/unique-ptr-class.md).  
  
 Per altre informazioni su `throw()` e sulla gestione delle eccezioni, vedere [Specifiche di eccezioni \(generazione\)](../cpp/exception-specifications-throw-cpp.md).  
  
## Sintassi  
  
```  
template<class Type>  
    class auto_ptr {  
public:  
    typedef Type element_type;  
    explicit auto_ptr(Type *_Ptr = 0) throw();  
    auto_ptr(auto_ptr<Type>& _Right) throw();  
    template<class Other>  
        operator auto_ptr<Other>() throw();  
    template<class Other>  
        auto_ptr<Type>& operator=(auto_ptr<Other>& _Right) throw();  
    template<class Other>  
        auto_ptr(auto_ptr<Other>& _Right);  
    auto_ptr<Type>& operator=(auto_ptr<Type>& _Right);  
    ~auto_ptr();  
    Type& operator*() const throw();  
    Type *operator->()const throw();  
    Type *get() const throw();  
    Type *release()throw();  
    void reset(Type *_Ptr = 0);  
};  
```  
  
#### Parametri  
 `_Right`  
 `auto_ptr` da cui ottenere una risorsa esistente.  
  
 `_Ptr`  
 Puntatore specificato per sostituire il puntatore archiviato.  
  
## Note  
 La classe modello descrive un puntatore di tipo smart pointer, definito `auto_ptr,`, a un oggetto allocato.  Il puntatore deve essere Null o deve designare un oggetto allocato da `new`.  `auto_ptr` trasferisce la proprietà se il valore archiviato viene assegnato a un altro oggetto.  Sostituisce il valore archiviato dopo un trasferimento con un puntatore Null. Il distruttore per `auto_ptr<Type>` elimina l'oggetto allocato.  `auto_ptr<Type>` assicura che un oggetto allocato venga eliminato automaticamente quando il controllo lascia un blocco, anche tramite un'eccezione generata.  Non costruire due oggetti `auto_ptr<Type>` proprietari dello stesso oggetto.  
  
 È possibile passare un oggetto `auto_ptr<Type>` in base al valore come argomento per una chiamata di funzione.  Un `auto_ptr` non può essere un elemento di un contenitore della libreria standard.  Non è possibile gestire in modo affidabile una sequenza di oggetti `auto_ptr<Type>` con un contenitore della libreria di modelli standard.  
  
## Membri  
  
### Costruttori  
  
|||  
|-|-|  
|[auto\_ptr](../Topic/auto_ptr::auto_ptr.md)|Costruttore per oggetti di tipo `auto_ptr`.|  
  
### Typedef  
  
|||  
|-|-|  
|[element\_type](../Topic/auto_ptr::element_type.md)|Il tipo è un sinonimo del parametro di modello `Type`.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[get](../Topic/auto_ptr::get.md)|La funzione membro restituisce il puntatore `myptr` archiviato.|  
|[release](../Topic/auto_ptr::release.md)|Il membro sostituisce il puntatore archiviato `myptr` con un puntatore Null e restituisce il puntatore archiviato in precedenza.|  
|[reset](../Topic/auto_ptr::reset.md)|La funzione membro valuta l'espressione `delete myptr`, ma solo se il valore del puntatore archiviato `myptr` cambia in seguito a una chiamata di funzione.  Sostituisce quindi il puntatore archiviato con `ptr`.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator \=](../Topic/auto_ptr::operator=.md)|Operatore di assegnazione che trasferisce la proprietà da un oggetto `auto_ptr` a un altro.|  
|[operator\*](../Topic/auto_ptr::operator*.md)|Operatore di dereferenziazione per oggetti di tipo `auto_ptr`.|  
|[operator\-\>](../Topic/auto_ptr::operator-%3E.md)|Operatore per consentire l'accesso ai membri.|  
|[operator auto\_ptr\<Other\>](../Topic/auto_ptr::operator%20auto_ptr%3COther%3E.md)|Esegue il cast da un tipo di `auto_ptr` a un altro tipo di `auto_ptr`.|  
|[operator auto\_ptr\_ref\<Other\>](../Topic/auto_ptr::operator%20auto_ptr_ref%3COther%3E.md)|Esegue il cast da un `auto_ptr` a un `auto_ptr_ref`.|  
  
## Requisiti  
 **Intestazione:** \<memory\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Classe unique\_ptr](../standard-library/unique-ptr-class.md)