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
ms.openlocfilehash: 31ac39104c041d1d119f6cd06de5f9c4a620dac0
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80190027"
---
# <a name="_com_ptr_t-extractors"></a>_com_ptr_t Extractors

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

## <a name="remarks"></a>Osservazioni

- **operator interface** <strong>\*</strong> restituisce il puntatore a interfaccia incapsulato, che può essere null.

- **& dell'interfaccia operatore** Restituisce un riferimento al puntatore a interfaccia incapsulato e genera un errore se il puntatore è NULL.

- **operator** <strong>\*</strong> consente a un oggetto puntatore intelligente di agire come se fosse l'interfaccia incapsulata effettiva quando si dereferenziavano.

- **operatore->** Consente a un oggetto puntatore intelligente di agire come se fosse l'interfaccia incapsulata effettiva quando viene dereferenziata.

- **operatore &** Rilascia qualsiasi puntatore a interfaccia incapsulato, sostituendolo con NULL e restituisce l'indirizzo del puntatore incapsulato. In questo modo, il puntatore intelligente viene passato in base all'indirizzo a una funzione che ha un parametro *out* tramite il quale restituisce un puntatore a interfaccia.

- **operatore bool** Consente di utilizzare un oggetto puntatore intelligente in un'espressione condizionale. Questo operatore restituisce TRUE se il puntatore non è NULL.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_ptr_t](../cpp/com-ptr-t-class.md)
