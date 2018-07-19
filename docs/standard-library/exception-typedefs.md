---
title: Typedef &lt;exception&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- exception/std::exception_ptr
- exception/std::terminate_handler
- exception/std::unexpected_handler
ms.assetid: 2a338480-35e2-46f7-b223-52d4e84a5768
ms.openlocfilehash: a1c32311109ee19056c0a73d922ab1a965e3fbbb
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38954125"
---
# <a name="ltexceptiongt-typedefs"></a>Typedef &lt;exception&gt;

||||
|-|-|-|
|[exception_ptr](#exception_ptr)|[terminate_handler](#terminate_handler)|[unexpected_handler](#unexpected_handler)|

## <a name="exception_ptr"></a>  exception_ptr

Tipo che descrive un puntatore a un'eccezione.

```cpp
typedef unspecified exception_ptr;
```

### <a name="remarks"></a>Note

Classe interna non specificata utilizzata per implementare il tipo `exception_ptr`.

Utilizzare un oggetto `exception_ptr` per fare riferimento all'eccezione corrente o a un'istanza di un'eccezione definita dall'utente. Nell'implementazione Microsoft, un'eccezione è rappresentata da una struttura [EXCEPTION_RECORD](http://msdn.microsoft.com/library/windows/desktop/aa363082). Ogni oggetto `exception_ptr` include un campo di riferimento all'eccezione che punta a una copia della struttura `EXCEPTION_RECORD` che rappresenta l'eccezione.

Quando si dichiara una variabile `exception_ptr`, la variabile non è associata ad alcuna eccezione. Ciò significa che il campo di riferimento all'eccezione è NULL. Questo oggetto `exception_ptr` è denominato *null exception_ptr*.

Utilizzare la funzione `current_exception` o `make_exception_ptr` per assegnare un'eccezione a un oggetto `exception_ptr`. Quando si assegna un'eccezione a una variabile `exception_ptr`, il campo di riferimento all'eccezione punta a una copia dell'eccezione. Se la memoria disponibile non è sufficiente per consentire la copia dell'eccezione, il campo di riferimento all'eccezione punta a una copia di un'eccezione [std::bad_alloc](../standard-library/bad-alloc-class.md). Se il `current_exception` oppure `make_exception_ptr` funzione non è possibile copiare l'eccezione per qualsiasi altro motivo, la funzione chiama la `terminate` funzione CRT per uscire dal processo corrente.

Malgrado il nome, un oggetto `exception_ptr` non è un puntatore. Non obbedisce alla semantica dei puntatori e non può essere usato con gli operatori di accesso ai membri del puntatore (`->`) o gli operatori di riferimento indiretto (*). L'oggetto `exception_ptr` non dispone di membri dati pubblici o di funzioni membro.

**Confronti:**

È possibile usare gli operatori uguale (`==`) e non uguale (`!=`) per confrontare due oggetti `exception_ptr`. Gli operatori non confrontano il valore binario (schema di bit) delle strutture `EXCEPTION_RECORD` che rappresentano le eccezioni. Viceversa, gli operatori confrontano gli indirizzi del campo di riferimento all'eccezione degli oggetti `exception_ptr`. Di conseguenza, l'elemento `exception_ptr` Null e il valore NULL vengono considerati uguali.

## <a name="terminate_handler"></a>  terminate_handler

Il tipo descrive un puntatore a una funzione che è possibile utilizzare come `terminate_handler`.

```cpp
typedef void (*terminate_handler)();
```

### <a name="remarks"></a>Note

Il tipo descrive un puntatore a una funzione che è possibile utilizzare come gestore di terminazione.

### <a name="example"></a>Esempio

Per un esempio dell'utilizzo di `terminate_handler`, vedere [set_terminate](../standard-library/exception-functions.md#set_terminate).

## <a name="unexpected_handler"></a>  unexpected_handler

Il tipo descrive un puntatore a una funzione che è possibile usare come `unexpected_handler`.

```cpp
typedef void (*unexpected_handler)();
```

### <a name="example"></a>Esempio

Per un esempio dell'utilizzo di `unexpected_handler`, vedere [set_unexpected](../standard-library/exception-functions.md#set_unexpected).

## <a name="see-also"></a>Vedere anche

[\<exception>](../standard-library/exception.md)<br/>
