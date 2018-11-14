---
title: _com_ptr_t Extractors
ms.date: 11/04/2016
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
ms.openlocfilehash: bac1f9a139d2fb0092ef0869587ae8b54342fe82
ms.sourcegitcommit: 1819bd2ff79fba7ec172504b9a34455c70c73f10
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/09/2018
ms.locfileid: "51330320"
---
# <a name="comptrt-extractors"></a>_com_ptr_t Extractors

**Sezione specifica Microsoft**

Estrae il puntatore a interfaccia COM incapsulato.

## <a name="syntax"></a>Sintassi

```
operator Interface*( ) const throw( );
operator Interface&( ) const;
Interface& operator*( ) const;
Interface* operator->( ) const;
Interface** operator&( ) throw( );
operator bool( ) const throw( );
```

## <a name="remarks"></a>Note

- **operatore Interface** <strong>\*</strong> restituisce il puntatore a interfaccia incapsulato, che può essere NULL.

- **operatore Interface &** restituisce un riferimento a puntatore a interfaccia incapsulato e genera un errore se il puntatore è NULL.

- **operatore** <strong>\*</strong> consente a un oggetto del puntatore intelligente di agire come se fosse l'effettiva interfaccia incapsulata una volta dereferenziato.

- **operator ->** consente a un oggetto del puntatore intelligente di agire come se fosse l'effettiva interfaccia incapsulata una volta dereferenziato.

- **operatore &** rilascia qualsiasi puntatore a interfaccia incapsulato, sostituendolo con valore NULL e restituisce l'indirizzo del puntatore incapsulato. In questo modo il puntatore intelligente deve essere passato in base all'indirizzo a una funzione che ha un *out* parametro con il quale restituisce un puntatore a interfaccia.

- **operatore bool** consente a un oggetto del puntatore intelligente da utilizzare in un'espressione condizionale. Questo operatore restituisce TRUE se il puntatore non NULL.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_ptr_t](../cpp/com-ptr-t-class.md)