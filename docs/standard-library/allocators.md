---
title: Allocatori | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- allocators
- C++ Standard Library, allocators
ms.assetid: ac95023b-9e7d-49f5-861a-bf7a9a340746
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: eb2c193fd12578e69abef2db555ebbc4fa061e1e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="allocators"></a>Allocatori
Gli allocatori vengono usati dalla libreria standard C++ per gestire l'allocazione e la deallocazione di elementi archiviati in contenitori. Tutti i contenitori dalla libreria standard C++, a eccezione di std::array, hanno un parametro di modello di tipo `allocator<Type>`, dove `Type` rappresenta il tipo di elemento del contenitore. Ad esempio, la classe vector viene dichiarata come segue:  
  
```  
template <  
    class Type,  
    class Allocator = allocator<Type>  
>  
class vector  
```  
  
 La libreria standard C++ offre un'implementazione predefinita per un allocatore. In C++11 e versioni successive, l'allocatore predefinito viene aggiornato in modo da esporre un'interfaccia più piccola. Il nuovo allocatore viene chiamato *allocatore minimo*. In particolare, il membro `construct()` dell'allocatore minimo supporta la semantica di spostamento, che consente di migliorare notevolmente le prestazioni. Nella maggior parte dei casi, l'allocatore predefinito dovrebbe essere sufficiente. In C++ 11 tutti i tipi e le funzioni della a libreria standard che accettano un parametro di tipo allocatore supportano l'iinterfaccia dell'allocatore minimo, tra cui `std::function`, `shared_ptr, allocate_shared()` e `basic_string`.  Per altre informazioni sull'allocatore predefinito, vedere [Classe allocator](../standard-library/allocator-class.md).  
  
## <a name="writing-your-own-allocator-c11"></a>Scrittura di un codificatore personalizzato (C++11)  
 L'allocatore predefinito usa `new` e `delete` per allocare e deallocare la memoria. Se si vuole usare un altro metodo di allocazione della memoria, ad esempio l'uso di memoria condivisa, è necessario creare un allocatore personale. Se si usa C++ 11 ed è necessario scrivere un nuovo allocatore personalizzato, renderlo un allocatore minimo se possibile. Anche se è già stato implementato un allocatore obsoleto, provare a modificarlo in modo che diventi un *allocatore minimo* per sfruttare il più efficiente metodo `construct()` che verrà visualizzato automaticamente.  
  
 Un allocatore minimo richiede molto meno boilerplate e consente di concentrarsi sulle funzioni membro `allocate` e `deallocate` che eseguono tutto il lavoro. Durante la creazione di un allocatore minimo, non implementare i membri tranne quelli illustrati nell'esempio riportato di seguito:  
  
1.  un costruttore di copia di conversione (vedere l'esempio)  
  
2.  operator==  
  
3.  operator!=  
  
4.  allocate  
  
5.  deallocate  
  
 Il membro `construct()` predefinito di C++11 che verrà fornito eseguire l'inoltro perfetto e abilita la semantica di spostamento; in molti casi, è molto più efficiente rispetto alla versione precedente.  
  
> [!WARNING]
>  In fase di compilazione, la libreria standard C++ usa la classe allocator_traits per trovare i membri specificati esplicitamente dall'utente e offre un'implementazione predefinita per gli eventuali membri non presenti. Non interferiscono con questo meccanismo fornendo una specializzazione di allocator_traits per l'allocatore.  
  
 L'esempio seguente mostra un'implementazione minima di un allocatore che usa `malloc` e `free`. Si noti l'uso del nuovo tipo di eccezione `std::bad_array_new_length` che viene generato se la dimensione della matrice è minore di zero o maggiore della dimensione massima consentita.  
  
```  
#pragma once  
#include <stdlib.h> //size_t, malloc, free  
#include <new> // bad_alloc, bad_array_new_length  
#include <memory>  
template <class T>  
struct Mallocator  
{  
    typedef T value_type;  
    Mallocator() noexcept {} //default ctor not required by C++ Standard Library  
  
    // A converting copy constructor:  
    template<class U> Mallocator(const Mallocator<U>&) noexcept {}  
    template<class U> bool operator==(const Mallocator<U>&) const noexcept  
    {  
        return true;  
    }  
    template<class U> bool operator!=(const Mallocator<U>&) const noexcept  
    {  
        return false;  
    }  
    T* allocate(const size_t n) const;  
    void deallocate(T* const p, size_t) const noexcept;  
};  
  
template <class T>  
T* Mallocator<T>::allocate(const size_t n) const  
{  
    if (n == 0)  
    {  
        return nullptr;  
    }  
    if (n > static_cast<size_t>(-1) / sizeof(T))  
    {  
        throw std::bad_array_new_length();  
    }  
    void* const pv = malloc(n * sizeof(T));  
    if (!pv) { throw std::bad_alloc(); }  
    return static_cast<T*>(pv);  
}  
  
template<class T>  
void Mallocator<T>::deallocate(T * const p, size_t) const noexcept  
{  
    free(p);  
}  
```  
  
## <a name="writing-your-own-allocator-c03"></a>Scrittura di un codificatore personalizzato (C++03)  
 In C++03 qualsiasi allocatore usato con i contenitori della libreria standard C++ deve implementare le definizioni dei tipi seguenti:  
  
|||  
|-|-|  
|`const_pointer`|`rebind`|  
|`const_reference`|`reference`|  
|`difference_type`|`size_type`|  
|`pointer`|`value_type`|  
  
 Inoltre, qualsiasi allocatore usato con i contenitori della libreria standard C++ deve implementare i metodi seguenti:  
  
|||  
|-|-|  
|Costruttore|`deallocate`|  
|Costruttore di copia|`destroy`|  
|Distruttore|`max_size`|  
|`address`|`operator==`|  
|`allocate`|`operator!=`|  
|`construct`||  
  
 Per altre informazioni sulle definizioni dei tipi e sui metodi, vedere [Classe allocator](../standard-library/allocator-class.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)




