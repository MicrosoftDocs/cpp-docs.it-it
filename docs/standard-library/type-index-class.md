---
title: Classe type_index | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- typeindex/std::type_index
dev_langs:
- C++
helpviewer_keywords:
- type_index class
ms.assetid: db366119-74cb-43e8-aacf-9679e561fa2f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e301b8d47c1a054a5b80bff105950d876d90b047
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33853996"
---
# <a name="typeindex-class"></a>Classe type_index

La classe `type_index` esegue il wrapping di un puntatore a una classe [type_info](../cpp/type-info-class.md) per facilitare l'indicizzazione in base a tali oggetti.

classe type_index { public: type_index(const type_info& tinfo); const char *name() const; size_t hash_code() const; bool operator==(const type_info& right) const; bool operator!=(const type_info& right) const; bool operator<(const type_info& right) const; bool operator\<=(const type_info& right) const; bool operator>(const type_info& right) const; bool operator>=(const type_info& right) const; };

Il costruttore inizializza un oggetto `ptr` con `&tinfo`.

`name` restituisce `ptr->name()`.

`hash_code` restituisce `ptr->hash_code().`

`operator==` restituisce `*ptr == right.ptr`.

`operator!=` restituisce `!(*this == right)`.

`operator<` restituisce `*ptr->before(*right.ptr)`.

`operator<=` restituisce `!(right < *this).`

`operator>` restituisce `right < *this`.

`operator>=` restituisce `!(*this < right)`.

## <a name="see-also"></a>Vedere anche

[Informazioni sui tipi di runtime](../cpp/run-time-type-information.md)<br/>
[\<typeindex>](../standard-library/typeindex.md)<br/>
