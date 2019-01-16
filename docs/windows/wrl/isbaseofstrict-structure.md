---
title: IsBaseOfStrict (struttura)
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- internal/Microsoft::WRL::Details::IsBaseOfStrict
- internal/Microsoft::WRL::Details::IsBaseOfStrict::value
helpviewer_keywords:
- Microsoft::WRL::Details::IsBaseOfStrict structure
- Microsoft::WRL::Details::IsBaseOfStrict::value constant
ms.assetid: 6fed7366-c8d4-4991-b4fb-43ed93f8e1bf
ms.openlocfilehash: 85aeb71ceaa162cc6366836dd286f2f9983d34e2
ms.sourcegitcommit: 360b55e89e5954f494e52b1cf989fbaceda06f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/16/2019
ms.locfileid: "54336819"
---
# <a name="isbaseofstrict-structure"></a>IsBaseOfStrict (struttura)

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template <typename Base, typename Derived>
struct IsBaseOfStrict;

template <typename Base>
struct IsBaseOfStrict<Base, Base>;
```

### <a name="parameters"></a>Parametri

*Base*<br/>
Tipo di base.

*Derivati*<br/>
Il tipo derivato.

## <a name="remarks"></a>Note

Verifica se un tipo è la base di un altro tipo.

Il primo modello di verifica se un tipo è derivato da un tipo di base, che potrebbe produrre **true** oppure **false**. Il secondo modello di verifica se un tipo è derivato da se stessa, che restituisce sempre **false**.

## <a name="members"></a>Membri

### <a name="public-constants"></a>Costanti pubbliche

nome                            | Descrizione
------------------------------- | --------------------------------------------------
[IsBaseOfStrict::value](#value) | Indica se un tipo è la base di un altro.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IsBaseOfStrict`

## <a name="requirements"></a>Requisiti

**Intestazione:** FTM

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="value"></a>IsBaseOfStrict::value

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
static const bool value = __is_base_of(Base, Derived);
```

### <a name="remarks"></a>Note

Indica se un tipo è la base di un altro.

`value` viene **true** se tipo `Base` è una classe di base del tipo `Derived`, in caso contrario è **false**.
