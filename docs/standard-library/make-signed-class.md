---
title: Classe make_signed | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- type_traits/std::make_signed
dev_langs:
- C++
helpviewer_keywords:
- make_signed class
- make_signed
ms.assetid: 686247c0-247c-496b-9b1b-ba9dcd633621
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f339b0e26475607ed95f60e33173aa624b892871
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44108941"
---
# <a name="makesigned-class"></a>Classe make_signed

Rende la dimensione del tipo o del tipo firmato più piccolo superiore o uguale a quella del tipo.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct make_signed;

template <class T>
using make_signed_t = typename make_signed<T>::type;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo da modificare.

## <a name="remarks"></a>Note

Un'istanza del modificatore di tipo contiene un tipo modificato che è *T* se `is_signed<T>` risulta vera. In caso contrario è il tipo senza segno più piccolo `UT` per il quale `sizeof (T) <= sizeof (UT)`.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
