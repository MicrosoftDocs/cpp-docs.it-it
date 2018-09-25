---
title: IsBaseOfStrict (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 09/21/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- internal/Microsoft::WRL::Details::IsBaseOfStrict
- internal/Microsoft::WRL::Details::IsBaseOfStrict::value
dev_langs:
- C++
helpviewer_keywords:
- Microsoft::WRL::Details::IsBaseOfStrict structure
- Microsoft::WRL::Details::IsBaseOfStrict::value constant
ms.assetid: 6fed7366-c8d4-4991-b4fb-43ed93f8e1bf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 137f572f01d4aa72b9141c3ca172426fdb575b48
ms.sourcegitcommit: edb46b0239a0e616af4ec58906e12338c3e8d2c6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/25/2018
ms.locfileid: "47169524"
---
# <a name="isbaseofstrict-structure"></a>IsBaseOfStrict (struttura)

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template <
   typename Base,
   typename Derived
>

struct IsBaseOfStrict;
template <
   typename Base
>
struct IsBaseOfStrict<Base, Base>;
```

### <a name="parameters"></a>Parametri

*base*<br/>
Tipo di base.

*Derivati*<br/>
Il tipo derivato.

## <a name="remarks"></a>Note

Verifica se un tipo è la base di un altro tipo.

Il primo modello di verifica se un tipo è derivato da un tipo di base, che potrebbe produrre `true` o `false`. Il secondo modello di verifica se un tipo è derivato da se stessa, che restituisce sempre `false`.

## <a name="members"></a>Membri

### <a name="public-constants"></a>Costanti pubbliche

nome                            | Descrizione
------------------------------- | --------------------------------------------------
[Isbaseofstrict:: value](#value) | Indica se un tipo è la base di un altro.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IsBaseOfStrict`

## <a name="requirements"></a>Requisiti

**Intestazione:** FTM

**Namespace:** Microsoft::WRL::Details

## <a name="value"></a>Isbaseofstrict:: value

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
static const bool value = __is_base_of(Base, Derived);
```

### <a name="remarks"></a>Note

Indica se un tipo è la base di un altro.

`value` viene `true` se tipo `Base` è una classe di base del tipo `Derived`, in caso contrario è `false`.
