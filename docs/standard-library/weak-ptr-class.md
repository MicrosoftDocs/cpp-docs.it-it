---
title: Classe weak_ptr | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- weak_ptr
- memory/std::weak_ptr
- memory/std::weak_ptr::element_type
- memory/std::weak_ptr::expired
- memory/std::weak_ptr::lock
- memory/std::weak_ptr::owner_before
- memory/std::weak_ptr::reset
- memory/std::weak_ptr::swap
- memory/std::weak_ptr::use_count
- memory/std::weak_ptr::operator=
- memory/std::weak_ptr::element_type
- memory/std::weak_ptr::expired
- memory/std::weak_ptr::lock
- memory/std::weak_ptr::owner_before
- memory/std::weak_ptr::reset
- memory/std::weak_ptr::swap
- memory/std::weak_ptr::use_count
dev_langs:
- C++
helpviewer_keywords:
- weak_ptr class
ms.assetid: 2db4afb2-c7be-46fc-9c20-34ec2f8cc7c2
caps.latest.revision: 22
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 491992306060125ab91d64560113f7f8a3b740b1
ms.openlocfilehash: 9e36da6c4f7dde6df281d8ad229373d861ee045a
ms.lasthandoff: 02/24/2017

---
# <a name="weakptr-class"></a>Classe weak_ptr
Esegue il wrapping di un puntatore collegato in modo debole.  
  
## <a name="syntax"></a>Sintassi  
```    
template<class _Ty>
   class weak_ptr {  
public:  
   typedef Ty element_type;  
   weak_ptr();
   weak_ptr(const weak_ptr&);
   template <class Other>  
      weak_ptr(const weak_ptr<Other>&);
   template <class Other>  
      weak_ptr(const shared_ptr<Other>&);
   weak_ptr& operator=(const weak_ptr&);
   template <class Other>  
      weak_ptr& operator=(const weak_ptr<Other>&);
   template <class Other>  
      weak_ptr& operator=(shared_ptr<Other>&);
   void swap(weak_ptr&);
   void reset();
   long use_count() const;
   bool expired() const;
   shared_ptr<Ty> lock() const;
   };  
```    
#### <a name="parameters"></a>Parametri  
 `Ty`  
 Tipo controllato dal puntatore debole.  
  
## <a name="remarks"></a>Note  
 La classe modello descrive un oggetto che punta a una risorsa gestita da uno o più oggetti [classe shared_ptr](../standard-library/shared-ptr-class.md). Gli oggetti `weak_ptr` che puntano a una risorsa non influiscono sul conteggio dei riferimenti della risorsa. Pertanto, quando l'ultimo oggetto `shared_ptr` che gestisce la risorsa viene eliminato, la risorsa verrà liberata, anche se sono presenti oggetti `weak_ptr` che puntano a tale risorsa. Ciò è essenziale per evitare cicli nelle strutture di dati.  
  
 Un oggetto `weak_ptr` punta a una risorsa se è stato costruito da un oggetto `shared_ptr` proprietario di tale risorsa, se è stato costruito da un oggetto `weak_ptr` che punta a tale risorsa o se la risorsa è stata assegnata a esso con [operator=](#weak_ptr__operator_eq). Un oggetto `weak_ptr` non fornisce accesso diretto alla risorsa a cui punta. Il codice che deve usare la risorsa lo fa tramite un oggetto `shared_ptr` proprietario di tale risorsa, creato chiamando la funzione membro [lock](#weak_ptr__lock). Un oggetto `weak_ptr` è scaduto quando la risorsa a cui punta è stata liberata perché tutti gli oggetti `shared_ptr` proprietari della risorsa sono stati eliminati. Chiamando `lock` su un oggetto `weak_ptr` scaduto viene creato un oggetto shared_ptr vuoto.  
  
 Un oggetto weak_ptr vuoto non punta ad alcuna risorsa e non ha alcun blocco di controllo. La sua funzione membro `lock` restituisce un oggetto shared_ptr vuoto.  
  
 Si verifica un ciclo quando due o più risorse controllate da oggetti `shared_ptr` contengono oggetti `shared_ptr` che fanno riferimento uno con l'altro. Ad esempio, un elenco collegato circolare con tre elementi ha un nodo head `N0`, tale nodo contiene un oggetto `shared_ptr` proprietario del nodo successivo `N1`, tale nodo contiene un oggetto `shared_ptr` proprietario del nodo successivo `N2` e tale nodo, a sua volta, contiene un oggetto `shared_ptr` proprietario del nodo head `N0`, che chiude il ciclo. In questo caso, nessuno dei conteggi dei riferimenti diventerà mai zero e i nodi nel ciclo non verranno liberati. Per eliminare il ciclo, l'ultimo nodo `N2` deve contenere un oggetto `weak_ptr` che punta all'oggetto `N0` anziché un oggetto `shared_ptr`. Poiché l'oggetto `weak_ptr` non è proprietario di `N0`, non influisce sul conteggio dei riferimenti di `N0` e quando l'ultimo riferimento del programma al nodo head viene eliminato, anche i nodi nell'elenco vengono eliminati.  
  
## <a name="members"></a>Membri  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[weak_ptr](#weak_ptr__weak_ptr)|Costruisce un oggetto `weak_ptr`.|  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[element_type](#weak_ptr__element_type)|Tipo dell'elemento.|  
|[expired](#weak_ptr__expired)|Verifica se la proprietà è scaduta.|  
|[lock](#weak_ptr__lock)|Ottiene la proprietà esclusiva di una risorsa.|  
|[owner_before](#weak_ptr__owner_before)|Restituisce `true` se `weak_ptr` è ordinato in posizione precedente al (o è minore del) puntatore fornito.|  
|[reset](#weak_ptr__reset)|Rilascia una risorsa di proprietà.|  
|[swap](#weak_ptr__swap)|Scambia due oggetti `weak_ptr`.|  
|[use_count](#weak_ptr__use_count)|Conta il numero di oggetti `shared_ptr` designati.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator=](#weak_ptr__operator_eq)|Sostituisce una risorsa di proprietà.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<memory>  
  
 **Spazio dei nomi:** std  
  
##  <a name="weak_ptr__element_type"></a>  element_type  
 Tipo dell'elemento.  
  
```  
typedef Ty element_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello `Ty`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__memory__weak_ptr_element_type.cpp   
// compile with: /EHsc   
#include <memory>   
#include <iostream>   
  
int main()   
    {   
    std::shared_ptr<int> sp0(new int(5));   
    std::weak_ptr<int> wp0(sp0);   
    std::weak_ptr<int>::element_type val = *wp0.lock();   
  
    std::cout << "*wp0.lock() == " << val << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
*wp0.lock() == 5  
```  
  
##  <a name="weak_ptr__expired"></a>  expired  
 Verifica se la proprietà è scaduta.  
  
```  
bool expired() const;
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce `true` se `*this` è scaduto, altrimenti restituisce `false`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__memory__weak_ptr_expired.cpp   
// compile with: /EHsc   
#include <memory>   
#include <iostream>   

struct deleter
{
    void operator()(int *p)
    {
        delete p;
    }
};

int main()
{
    std::weak_ptr<int> wp;

    {
        std::shared_ptr<int> sp(new int(10));
        wp = sp;
        std::cout << "wp.expired() == " << std::boolalpha
            << wp.expired() << std::endl;
        std::cout << "*wp.lock() == " << *wp.lock() << std::endl;
    }

    // check expired after sp is destroyed   
    std::cout << "wp.expired() == " << std::boolalpha
        << wp.expired() << std::endl;
    std::cout << "(bool)wp.lock() == " << std::boolalpha
        << (bool)wp.lock() << std::endl;

    return (0);
}
  
```  
  
```Output  
wp.expired() == false  
*wp.lock() == 10  
wp.expired() == true  
(bool)wp.lock() == false  
```  
  
##  <a name="weak_ptr__lock"></a>  lock  
 Ottiene la proprietà esclusiva di una risorsa.  
  
```  
shared_ptr<Ty> lock() const;
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce un oggetto shared_ptr vuoto se `*this` è scaduto; in caso contrario, restituisce un oggetto [classe shared_ptr](../standard-library/shared-ptr-class.md)`<Ty>` proprietario della risorsa a cui punta `*this`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__memory__weak_ptr_lock.cpp   
// compile with: /EHsc   
#include <memory>   
#include <iostream>   

struct deleter
{
    void operator()(int *p)
    {
        delete p;
    }
};

int main()
{
    std::weak_ptr<int> wp;

    {
        std::shared_ptr<int> sp(new int(10));
        wp = sp;
        std::cout << "wp.expired() == " << std::boolalpha
            << wp.expired() << std::endl;
        std::cout << "*wp.lock() == " << *wp.lock() << std::endl;
    }

    // check expired after sp is destroyed   
    std::cout << "wp.expired() == " << std::boolalpha
        << wp.expired() << std::endl;
    std::cout << "(bool)wp.lock() == " << std::boolalpha
        << (bool)wp.lock() << std::endl;

    return (0);
}
  
```  
  
```Output  
wp.expired() == false  
*wp.lock() == 10  
wp.expired() == true  
(bool)wp.lock() == false  
```  
  
##  <a name="weak_ptr__operator_eq"></a>  operator=  
 Sostituisce una risorsa di proprietà.  
  
```  
weak_ptr& operator=(const weak_ptr& wp);

template <class Other>  
weak_ptr& operator=(const weak_ptr<Other>& wp);

template <class Other>  
weak_ptr& operator=(const shared_ptr<Other>& sp);
```  
  
### <a name="parameters"></a>Parametri  
 `Other`  
 Tipo controllato dal puntatore dell'argomento condiviso/debole.  
  
 `wp`  
 Puntatore debole da copiare.  
  
 `sp`  
 Puntatore condiviso da copiare.  
  
### <a name="remarks"></a>Note  
 Tutti gli operatori rilasciano la risorsa a cui punta `*this` e assegnano a `*this` la proprietà della risorsa descritta dalla sequenza di operandi. Se un operatore ha esito negativo, `*this` non viene modificato.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__memory__weak_ptr_operator_as.cpp   
// compile with: /EHsc   
#include <memory>   
#include <iostream>   
  
int main()
{
    std::shared_ptr<int> sp0(new int(5));
    std::weak_ptr<int> wp0(sp0);
    std::cout << "*wp0.lock() == " << *wp0.lock() << std::endl;

    std::shared_ptr<int> sp1(new int(10));
    wp0 = sp1;
    std::cout << "*wp0.lock() == " << *wp0.lock() << std::endl;

    std::weak_ptr<int> wp1;
    wp1 = wp0;
    std::cout << "*wp1.lock() == " << *wp1.lock() << std::endl;

    return (0);
}
  
```  
  
```Output  
*wp0.lock() == 5  
*wp0.lock() == 10  
*wp1.lock() == 10  
```  
  
##  <a name="weak_ptr__owner_before"></a>  owner_before  
 Restituisce `true` se `weak_ptr` è ordinato in posizione precedente al (o è minore del) puntatore fornito.  
  
```  
template <class Other>  
bool owner_before(const shared_ptr<Other>& ptr);

template <class Other>  
bool owner_before(const weak_ptr<Other>& ptr);
```  
  
### <a name="parameters"></a>Parametri  
 `ptr`  
 Riferimento `lvalue` a `shared_ptr` o `weak_ptr`.  
  
### <a name="remarks"></a>Note  
 La funzione membro di modello restituisce `true` se `*this` è `ordered before``ptr`.  
  
##  <a name="weak_ptr__reset"></a>  reset  
 Rilascia una risorsa di proprietà.  
  
```  
void reset();
```  
  
### <a name="remarks"></a>Note  
 La funzione membro rilascia la risorsa a cui punta `*this` e converte `*this` in un oggetto weak_ptr vuoto.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__memory__weak_ptr_reset.cpp   
// compile with: /EHsc   
#include <memory>   
#include <iostream>   
  
int main()
{
    std::shared_ptr<int> sp(new int(5));
    std::weak_ptr<int> wp(sp);
    std::cout << "*wp.lock() == " << *wp.lock() << std::endl;
    std::cout << "wp.expired() == " << std::boolalpha
        << wp.expired() << std::endl;

    wp.reset();
    std::cout << "wp.expired() == " << std::boolalpha
        << wp.expired() << std::endl;

    return (0);
}

```  
  
```Output  
*wp.lock() == 5  
wp.expired() == false  
wp.expired() == true  
```  
  
##  <a name="weak_ptr__swap"></a>  swap  
 Scambia due oggetti `weak_ptr`.  
  
```  
void swap(weak_ptr& wp);
```  
  
### <a name="parameters"></a>Parametri  
 `wp`  
 Puntatore debole da scambiare.  
  
### <a name="remarks"></a>Note  
 La funzione membro lascia che la risorsa originariamente puntata da `*this` venga in seguito puntata da `wp` e che la risorsa originariamente puntata da `wp` venga in seguito puntata da `*this`. La funzione non modifica i conteggi dei riferimenti per le due risorse e non genera alcuna eccezione.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__memory__weak_ptr_swap.cpp   
// compile with: /EHsc   
#include <memory>   
#include <iostream>   
 
struct deleter
{
    void operator()(int *p)
    {
        delete p;
    }
};

int main()
{
    std::shared_ptr<int> sp1(new int(5));
    std::shared_ptr<int> sp2(new int(10));
    std::cout << "*sp1 == " << *sp1 << std::endl;

    sp1.swap(sp2);
    std::cout << "*sp1 == " << *sp1 << std::endl;

    swap(sp1, sp2);
    std::cout << "*sp1 == " << *sp1 << std::endl;
    std::cout << std::endl;

    std::weak_ptr<int> wp1(sp1);
    std::weak_ptr<int> wp2(sp2);
    std::cout << "*wp1 == " << *wp1.lock() << std::endl;

    wp1.swap(wp2);
    std::cout << "*wp1 == " << *wp1.lock() << std::endl;

    swap(wp1, wp2);
    std::cout << "*wp1 == " << *wp1.lock() << std::endl;

    return (0);
}

```  
  
```Output  
*sp1 == 5  
*sp1 == 10  
*sp1 == 5  
  
*wp1 == 5  
*wp1 == 10  
*wp1 == 5  
```  
  
##  <a name="weak_ptr__use_count"></a>  use_count  
 Conta il numero di oggetti `shared_ptr` designati.  
  
```  
long use_count() const;
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce il numero di oggetti `shared_ptr` che possiedono la risorsa a cui puntava `*this`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__memory__weak_ptr_use_count.cpp   
// compile with: /EHsc   
#include <memory>   
#include <iostream>   

int main()
{
    std::shared_ptr<int> sp1(new int(5));
    std::weak_ptr<int> wp(sp1);
    std::cout << "wp.use_count() == "
        << wp.use_count() << std::endl;

    std::shared_ptr<int> sp2(sp1);
    std::cout << "wp.use_count() == "
        << wp.use_count() << std::endl;

    return (0);
} 
  
```  
  
```Output  
wp.use_count() == 1  
wp.use_count() == 2  
```  
  
##  <a name="weak_ptr__weak_ptr"></a>  weak_ptr  
 Costruisce un oggetto `weak_ptr`.  
  
```  
weak_ptr();

weak_ptr(const weak_ptr& wp);

template <class Other>  
weak_ptr(const weak_ptr<Other>& wp);

template <class Other>  
weak_ptr(const shared_ptr<Other>& sp);
```  
  
### <a name="parameters"></a>Parametri  
 `Other`  
 Tipo controllato dal puntatore dell'argomento condiviso/debole.  
  
 `wp`  
 Puntatore debole da copiare.  
  
 `sp`  
 Puntatore condiviso da copiare.  
  
### <a name="remarks"></a>Note  
 Ogni costruttore crea un oggetto che punta alla risorsa descritta dalla sequenza di operandi.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__memory__weak_ptr_construct.cpp   
// compile with: /EHsc   
#include <memory>   
#include <iostream>   
  
int main()
{
    std::weak_ptr<int> wp0;
    std::cout << "wp0.expired() == " << std::boolalpha
        << wp0.expired() << std::endl;

    std::shared_ptr<int> sp1(new int(5));
    std::weak_ptr<int> wp1(sp1);
    std::cout << "*wp1.lock() == "
        << *wp1.lock() << std::endl;

    std::weak_ptr<int> wp2(wp1);
    std::cout << "*wp2.lock() == "
        << *wp2.lock() << std::endl;

    return (0);
}
  
```  
  
```Output  
wp0.expired() == true  
*wp1.lock() == 5  
*wp2.lock() == 5  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Classe shared_ptr](../standard-library/shared-ptr-class.md)


