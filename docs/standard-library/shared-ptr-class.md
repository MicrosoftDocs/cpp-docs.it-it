---
title: "Classe shared_ptr | Microsoft Docs"
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
  - "shared_ptr"
  - "tr1::shared_ptr"
  - "memory/std::tr1::shared_ptr"
  - "std::tr1::shared_ptr"
  - "std.tr1.shared_ptr"
  - "tr1.shared_ptr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "shared_ptr (classe)"
  - "shared_ptr (classe) [TR1]"
ms.assetid: 1469fc51-c658-43f1-886c-f4530dd84860
caps.latest.revision: 29
caps.handback.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe shared_ptr
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Esegue il wrapping di un puntatore intelligente con conteggio dei riferimenti attorno a un oggetto allocato in modo dinamico.  
  
## Sintassi  
  
```  
template<class Ty>  
   class shared_ptr {  
public:  
    typedef Ty element_type;  
  
    shared_ptr();  
    shared_ptr(nullptr_t);   
    shared_ptr(const shared_ptr& sp);  
    shared_ptr(shared_ptr&& sp);  
    template<class Other>  
        explicit shared_ptr(Other * ptr);  
    template<class Other, class D>  
        shared_ptr(Other * ptr, D dtor);  
    template<class D>  
        shared_ptr(nullptr_t, D dtor);  
    template<class Other, class D, class A>  
        shared_ptr(Other *ptr, D dtor, A alloc);  
    template<class D, class A>  
        shared_ptr(nullptr_t, D dtor, A alloc);  
    template<class Other>  
        shared_ptr(const shared_ptr<Other>& sp);  
    template<class Other>  
        shared_ptr(const shared_ptr<Other>&& sp);  
    template<class Other>  
        explicit shared_ptr(const weak_ptr<Other>& wp);  
    template<class Other>  
        shared_ptr(auto_ptr<Other>& ap);  
    template<class Other, class D>  
        shared_ptr(unique_ptr<Other, D>&& up);  
    template<class Other>  
        shared_ptr(const shared_ptr<Other>& sp, Ty *ptr);  
    ~shared_ptr();  
    shared_ptr& operator=(const shared_ptr& sp);  
    template<class Other>   
        shared_ptr& operator=(const shared_ptr<Other>& sp);  
    shared_ptr& operator=(shared_ptr&& sp);  
    template<class Other>   
        shared_ptr& operator=(shared_ptr<Other>&& sp);  
    template<class Other>   
        shared_ptr& operator=(auto_ptr< Other >&& ap);  
    template <class Other, class D>   
        shared_ptr& operator=(const unique_ptr< Other, D>& up) = delete;  
    template <class Other, class D>  
        shared_ptr& operator=(unique_ptr<Other, D>&& up);  
    void swap(shared_ptr& sp);  
    void reset();  
    template<class Other>  
        void reset(Other *ptr);  
    template<class Other, class D>  
        void reset(Other *ptr, D dtor);  
    template<class Other, class D, class A>  
        void reset(Other *ptr, D dtor, A alloc);  
    Ty *get() const;  
    Ty& operator*() const;  
    Ty *operator->() const;  
    long use_count() const;  
    bool unique() const;  
    operator bool() const;  
  
    template<class Other>  
        bool owner_before(shared_ptr<Other> const& ptr) const;  
    template<class Other>  
        bool owner_before(weak_ptr<Other> const& ptr) const;  
    template<class D, class Ty>   
        D* get_deleter(shared_ptr<Ty> const& ptr);  
};  
  
```  
  
#### Parametri  
 `Ty`  
 Tipo controllato dal puntatore condiviso.  
  
 `Other`  
 Tipo controllato dal puntatore argomento.  
  
 `ptr`  
 Puntatore da copiare.  
  
 `D`  
 Tipo del metodo Deleter.  
  
 `A`  
 Tipo dell'allocatore.  
  
 `dtor`  
 Metodo Deleter.  
  
 `alloc`  
 Allocatore.  
  
 `sp`  
 Puntatore intelligente da copiare o spostare.  
  
 `wp`  
 Puntatore debole da copiare o spostare.  
  
 `ap`  
 Puntatore automatico da copiare o spostare.  
  
 `up`  
 Puntatore univoco da spostare.  
  
## Note  
 La classe modello descrive un oggetto che utilizza il conteggio dei riferimenti per gestire le risorse.  Un oggetto `shared_ptr` contiene efficacemente un puntatore a una risorsa che contiene un puntatore null.  Una risorsa può appartenere a non più di un oggetto `shared_ptr`. Quando un oggetto `shared_ptr` proprietario di una risorsa particolare viene eliminato, la risorsa viene liberata.  
  
 Un oggetto `shared_ptr` smette di contenere una risorsa quando viene riassegnato o reimpostato.  
  
 Un argomento di modello `Ty` potrebbe essere un tipo incompleto ad eccezione di quanto indicato per determinate funzioni membro.  
  
 Quando un oggetto `shared_ptr<Ty>` viene costruito da un puntatore di risorse di tipo `G*` o `shared_ptr<G>`, il tipo di puntatore `G*` deve essere convertibile in `Ty*`.  In caso contrario, il codice non verrà compilato.  Ad esempio:  
  
```cpp  
class F {};  
class G : public F {};  
```  
  
```cpp  
  
#include <memory>  
  
using namespace std;  
  
shared_ptr<G> sp0(new G);   // okay, template parameter G and argument G*  
shared_ptr<G> sp1(sp0);     // okay, template parameter G and argument shared_ptr<G>  
shared_ptr<F> sp2(new G);   // okay, G* convertible to F*  
shared_ptr<F> sp3(sp0);     // okay, template parameter F and argument shared_ptr<G>  
shared_ptr<F> sp4(sp2);     // okay, template parameter F and argument shared_ptr<F>  
shared_ptr<int> sp5(new G); // error, G* not convertible to int*  
shared_ptr<int> sp6(sp2);   // error, template parameter int and argument shared_ptr<F>  
```  
  
 Un oggetto `shared_ptr` possiede una risorsa nei casi seguenti:  
  
-   se viene costruito con un puntatore alla risorsa,  
  
-   se è stato creato da un oggetto `shared_ptr` proprietario della risorsa,  
  
-   se è stato creato da un oggetto [Classe weak\_ptr](../standard-library/weak-ptr-class.md) che punta alla risorsa o  
  
-   se la proprietà di tale risorsa è stata assegnata all'oggetto stesso con [shared\_ptr::operator\=](../Topic/shared_ptr::operator=.md) o chiamando la funzione membro [shared\_ptr::reset](../Topic/shared_ptr::reset.md).  
  
 Gli oggetti `shared_ptr` che possiedono una risorsa condividono un blocco di controllo.  Il blocco di controllo contiene gli elementi seguenti:  
  
-   numero di oggetti `shared_ptr` che possiedono la risorsa,  
  
-   numero di oggetti `weak_ptr` che puntano alla risorsa,  
  
-   metodo Deleter per tale risorsa \(se disponibile\),  
  
-   allocatore personalizzato per un blocco di controllo \(se presente\).  
  
 Un oggetto `shared_ptr` inizializzato tramite un puntatore null possiede un blocco di controllo e non è vuoto.  Dopo che un oggetto `shared_ptr` rilascia una risorsa, non possiede più tale risorsa.  Dopo che un oggetto `weak_ptr` rilascia una risorsa, non punta più a tale risorsa.  
  
 Quando il numero di oggetti `shared_ptr` che possiedono una risorsa diventa zero, la risorsa viene liberata, eliminandola o passandone l'indirizzo a un metodo Deleter, in base al modo in cui la proprietà della risorsa è stata inizialmente creata.  Quando il numero di oggetti `shared_ptr` che possiedono una risorsa è zero e il numero di oggetti `weak_ptr` che puntano a tale risorsa è zero, il blocco di controllo viene liberato, utilizzando l'allocatore personalizzato per un blocco di controllo \(se presente\).  
  
 Un oggetto vuoto `shared_ptr` non possiede alcuna risorsa e non ha blocco di controllo.  
  
 Un metodo Deleter è un oggetto funzione con una funzione membro `operator()`.  Il tipo deve essere costruibile per copia e i relativi costruttore copia e distruttore copia non devono generare eccezioni.  Accetta un parametro, ovvero l'oggetto da eliminare.  
  
 Alcune funzioni accettano un elenco di argomenti che definiscono le proprietà dell'oggetto `shared_ptr<Ty>` risultante o dell'oggetto `weak_ptr<Ty>`.  È possibile specificare tale elenco di argomenti in diversi modi:  
  
 nessun argomento, ovvero l'oggetto risultante è un oggetto `shared_ptr` o `weak_ptr` vuoto.  
  
 `ptr`, ovvero un puntatore di tipo `Other*` alla risorsa da gestire.  L'oggetto `Ty` deve essere un tipo completo.  Se la funzione ha esito negativo \(perché il blocco di controllo non può essere allocato\), valuta l'espressione `delete ptr`.  
  
 `ptr, dtor`, ovvero un puntatore di tipo `Other*` alla risorsa da gestire e un metodo Deleter per tale risorsa.  Se la funzione ha esito negativo \(perché il blocco di controllo non può essere allocato\), chiama `dtor(ptr)` che deve essere ben definito.  
  
 `ptr, dtor, alloc`, ovvero un puntatore di tipo `Other*` alla risorsa da gestire, un metodo Deleter per tale risorsa e un allocatore per gestire qualsiasi archiviazione che deve essere allocata e liberata.  Se la funzione ha esito negativo \(perché il blocco di controllo non può essere allocato\), chiama `dtor(ptr)` che deve essere ben definito.  
  
 `sp`, ovvero un oggetto `shared_ptr<Other>` proprietario della risorsa da gestire.  
  
 `wp`, ovvero un oggetto `weak_ptr<Other>` che punta alla risorsa da gestire.  
  
 `ap`, ovvero un oggetto `auto_ptr<Other>` che contiene un puntatore alla risorsa da gestire.  Se la funzione ha esito positivo, chiama `ap.release()`, in caso contrario lascia `ap` invariato.  
  
 In tutti i casi, il tipo di puntatore `Other*` deve essere convertibile in `Ty*`.  
  
## Thread safety  
 Più thread possono leggere e scrivere contemporaneamente oggetti `shared_ptr` diversi, anche se gli oggetti sono copie che ne condividono la proprietà.  
  
## Membri  
  
### Costruttori  
  
|||  
|-|-|  
|[shared\_ptr::shared\_ptr](../Topic/shared_ptr::shared_ptr.md)|Costruisce un oggetto `shared_ptr`.|  
|[shared\_ptr::~shared\_ptr](../Topic/shared_ptr::~shared_ptr.md)|Elimina un oggetto `shared_ptr`.|  
  
### Metodi  
  
|||  
|-|-|  
|[shared\_ptr::element\_type](../Topic/shared_ptr::element_type.md)|Tipo di un elemento.|  
|[shared\_ptr::get](../Topic/shared_ptr::get.md)|Ottiene l'indirizzo della risorsa posseduta.|  
|[shared\_ptr::owner\_before](../Topic/shared_ptr::owner_before.md)|Restituisce true se `shared_ptr` è ordinato in posizione precedente \(o è minore di\) del puntatore fornito.|  
|[shared\_ptr::reset](../Topic/shared_ptr::reset.md)|Sostituisce una risorsa di proprietà.|  
|[shared\_ptr::swap](../Topic/shared_ptr::swap.md)|Scambia due oggetti `shared_ptr`.|  
|[shared\_ptr::unique](../Topic/shared_ptr::unique.md)|Verifica se la risorsa di proprietà è univoca.|  
|[shared\_ptr::use\_count](../Topic/shared_ptr::use_count.md)|Conta il numero dei proprietari delle risorse.|  
  
### Operatori  
  
|||  
|-|-|  
|[shared\_ptr::operator boolean\-type](../Topic/shared_ptr::operator%20boolean-type.md)|Verifica se una risorsa di proprietà esiste.|  
|[shared\_ptr::operator\*](../Topic/shared_ptr::operator*.md)|Ottiene il valore definito.|  
|[shared\_ptr::operator\=](../Topic/shared_ptr::operator=.md)|Sostituisce la risorsa di proprietà.|  
|[shared\_ptr::operator\-\>](../Topic/shared_ptr::operator-%3E.md)|Ottiene un puntatore al valore definito.|  
  
## Requisiti  
 **Intestazione:** \<memory\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Classe weak\_ptr](../standard-library/weak-ptr-class.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)