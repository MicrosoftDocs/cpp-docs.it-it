---
title: Operatori relazionali _com_ptr_t
ms.date: 11/04/2016
f1_keywords:
- _com_ptr_t::operator>
- _com_ptr_t::operator>=
- _com_ptr_t::operator<=
- _com_ptr_t::operator==
- _com_ptr_t::operator!=
- _com_ptr_t::operator<
helpviewer_keywords:
- '>= operator [C++], comparing specific objects'
- '!= operator'
- operator > [C++], pointers
- operator>= [C++], pointers
- operator < [C++], pointers
- operator!= [C++], relational operators
- < operator [C++], comparing specific objects
- operator== [C++], pointers
- operator == [C++], pointers
- <= operator [C++], with specific objects
- relational operators [C++], _com_ptr_t class
- operator >= [C++], pointers
- operator != [C++], relational operators
- operator <= [C++], pointers
- '> operator [C++], comparing specific objects'
- operator<= [C++], pointers
- operator< [C++], pointers
- == operator [C++], with specific Visual C++ objects
ms.assetid: 5ae4028c-33ee-485d-bbda-88d2604d6d4b
ms.openlocfilehash: eea752410ce350417252c1de58e73ec49bf3f54f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50440300"
---
# <a name="comptrt-relational-operators"></a>Operatori relazionali _com_ptr_t

**Sezione specifica Microsoft**

Confrontare l'oggetto del puntatore intelligente a un altro puntatore intelligente, puntatore a interfaccia raw o NULL.

## <a name="syntax"></a>Sintassi

```
template<typename _OtherIID> 
bool operator==( const _com_ptr_t<_OtherIID>& p );

template<typename _OtherIID>  
bool operator==( _com_ptr_t<_OtherIID>& p );

template<typename _InterfaceType> 
bool operator==( _InterfaceType* p );

template<> 
bool operator==( Interface* p );

template<> 
bool operator==( const _com_ptr_t& p ) throw();

template<> 
bool operator==( _com_ptr_t& p ) throw();

bool operator==( Int null );

template<typename _OtherIID> 
bool operator!=( const _com_ptr_t<_OtherIID>& p );

template<typename _OtherIID> 
bool operator!=( _com_ptr_t<_OtherIID>& p );

template<typename _InterfaceType> 
bool operator!=( _InterfaceType* p );

bool operator!=( Int null );

template<typename _OtherIID> 
bool operator<( const _com_ptr_t<_OtherIID>& p );

template<typename _OtherIID> 
bool operator<( _com_ptr_t<_OtherIID>& p );

template<typename _InterfaceType> 
bool operator<( _InterfaceType* p );

template<typename _OtherIID> 
bool operator>( const _com_ptr_t<_OtherIID>& p );

template<typename _OtherIID> 
bool operator>(_com_ptr_t< _OtherIID>& p );

template<typename _InterfaceType> 
bool operator>( _InterfaceType* p );

template<typename _OtherIID> 
bool operator<=( const _com_ptr_t<_OtherIID>& p );

template<typename _OtherIID> 
bool operator<=( _com_ptr_t<_OtherIID>& p );

template<typename _InterfaceType> 
bool operator<=( _InterfaceType* p );

template<typename _OtherIID>
bool operator>=( const _com_ptr_t<_OtherIID>& p );

template<typename _OtherIID> 
bool operator>=( _com_ptr_t<_OtherIID>& p );

template<typename _InterfaceType> 
bool operator>=( _InterfaceType* p );
```

## <a name="remarks"></a>Note

Confronta un puntatore intelligente dell'oggetto a un'altra smart puntatore, puntatore a interfaccia raw o NULL. Fatta eccezione per i test di puntatore NULL, questi operatori di query prima di tutto entrambi i puntatori per `IUnknown`e confrontare i risultati.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_ptr_t](../cpp/com-ptr-t-class.md)