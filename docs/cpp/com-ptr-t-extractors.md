---
title: _com_ptr_t Extractors
description: Vengono descritti gli operatori di estrazione per la classe _com_ptr_t.
ms.date: 07/07/2020
f1_keywords:
- _com_ptr_t::operatorInterface&
- _com_ptr_t::operatorbool
- _com_ptr_t::operator->
- _com_ptr_t::operator*
helpviewer_keywords:
- operator Interface& [C++]
- '* operator [C++], with specific objects'
- operator& [C++]
- operator* [C++]
- -> operator [C++], with specific objects
- '& operator [C++], with specific objects'
- operator Interface* [C++]
- operator * [C++]
- operator->
- operator bool
- extractors, _com_ptr_t class
- extractors [C++]
ms.assetid: 194b9e0e-123c-49ff-a187-0a7fcd68145a
ms.openlocfilehash: e7b06bb11ab34a1a1a7f6fab98d177821f60b20c
ms.sourcegitcommit: e17cc8a478b51739d67304d7d82422967b35f716
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/08/2020
ms.locfileid: "86127845"
---
# <a name="_com_ptr_t-extractors"></a>`_com_ptr_t`Estrattori

**Specifiche di Microsoft**

Estrae il puntatore a interfaccia COM incapsulato.

## <a name="syntax"></a>Sintassi

```c++
operator Interface*( ) const throw( );
operator Interface&( ) const;
Interface& operator*( ) const;
Interface* operator->( ) const;
Interface** operator&( ) throw( );
operator bool( ) const throw( );
```

## <a name="remarks"></a>Osservazioni

- **`operator Interface*`** Restituisce il puntatore a interfaccia incapsulato, che può essere NULL.

- **`operator Interface&`** Restituisce un riferimento al puntatore a interfaccia incapsulato e genera un errore se il puntatore è NULL.

- **`operator*`** Consente a un oggetto puntatore intelligente di agire come se fosse l'interfaccia incapsulata effettiva quando viene dereferenziata.

- **`operator->`** Consente a un oggetto puntatore intelligente di agire come se fosse l'interfaccia incapsulata effettiva quando viene dereferenziata.

- **`operator&`** Rilascia qualsiasi puntatore a interfaccia incapsulato, sostituendolo con NULL e restituisce l'indirizzo del puntatore incapsulato. Questo operatore consente di passare il puntatore intelligente per indirizzo a una funzione che ha un parametro *out* tramite il quale restituisce un puntatore a interfaccia.

- **`operator bool`** Consente di utilizzare un oggetto puntatore intelligente in un'espressione condizionale. Questo operatore restituisce TRUE se il puntatore non è NULL.

  > [!NOTE]
  > Poiché **`operator bool`** non è dichiarato come **`explicit`** , `_com_ptr_t` è implicitamente convertibile in **`bool`** , che è convertibile in qualsiasi tipo scalare. Questo può avere conseguenze impreviste nel codice. Abilita [Avviso del compilatore (livello 4) C4800](../error-messages/compiler-warnings/compiler-warning-level-3-c4800.md) per impedire l'uso non intenzionale di questa conversione.

## <a name="see-also"></a>Vedere anche

[_com_ptr_t (classe)](../cpp/com-ptr-t-class.md)
