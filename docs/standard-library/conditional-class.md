---
title: Classe conditional | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- type_traits/std::conditional
dev_langs:
- C++
helpviewer_keywords:
- conditional class
- conditional
ms.assetid: ece9f539-fb28-4e26-a79f-3264bc984493
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7a553c2975dd5a58673bd4caa6e7c9ba25d33183
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44106613"
---
# <a name="conditional-class"></a>Classe conditional

Seleziona uno dei tipi, a seconda della condizione specificata.

## <a name="syntax"></a>Sintassi

```cpp
template <bool B, class T1, class T2>
struct conditional;

template <bool _Test, class _T1, class _T2>
using conditional_t = typename conditional<_Test, _T1, _T2>::type;
```

### <a name="parameters"></a>Parametri

*B*<br/>
Valore che determina il tipo selezionato.

*T1*<br/>
Il risultato di tipo quando B è true.

*T2*<br/>
Il risultato di tipo quando B è false.

## <a name="remarks"></a>Note

Il typedef del membro di modello `conditional<B, T1, T2>::type` restituisca *T1* quando *B* restituisce **true**e viene restituito *T2* quando  *B* restituisca **false**.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
