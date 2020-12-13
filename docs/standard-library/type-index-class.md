---
description: 'Altre informazioni su: type_index Class'
title: Classe type_index
ms.date: 11/04/2016
f1_keywords:
- typeindex/std::type_index
helpviewer_keywords:
- type_index class
ms.assetid: db366119-74cb-43e8-aacf-9679e561fa2f
ms.openlocfilehash: 4e9156420811d2712a5b9331d0ece0e7847103e9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97142688"
---
# <a name="type_index-class"></a>Classe type_index

La classe `type_index` esegue il wrapping di un puntatore a una classe [type_info](../cpp/type-info-class.md) per facilitare l'indicizzazione in base a tali oggetti.

Classe type_index {public: type_index (const type_info& tInfo); const char * name () const; size_t hash_code () const; bool operator = = (const type_info& Right) const; bool operator! = (const type_info& Right) const; bool operator< (const type_info& Right) const; bool operator \<=(const type_info& right) const;
   bool operator> (const type_info& Right) const; bool operator>= (const type_info& Right) const;};

Il costruttore inizializza un oggetto `ptr` con `&tinfo`.

`name` restituisce `ptr->name()`.

`hash_code` restituisce `ptr->hash_code().`

`operator==` restituisce `*ptr == right.ptr`.

`operator!=` restituisce `!(*this == right)`.

`operator<` restituisce `*ptr->before(*right.ptr)`.

`operator<=` restituisce `!(right < *this).`

`operator>` restituisce `right < *this`.

`operator>=` restituisce `!(*this < right)`.

## <a name="see-also"></a>Vedi anche

[Informazioni sui tipi in fase di esecuzione](../cpp/run-time-type-information.md)\
[\<typeindex>](../standard-library/typeindex.md)
