---
title: RemoveReference (struttura)
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- internal/Microsoft::WRL::Details::RemoveReference
helpviewer_keywords:
- RemoveReference structure
ms.assetid: 43ff91bb-815a-440e-b9fb-7dcbb7c863af
ms.openlocfilehash: 7753c1ad41f12fa8c14d2f10c9e2f91e043a5846
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213603"
---
# <a name="removereference-structure"></a>RemoveReference (struttura)

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template<class T>
struct RemoveReference;

template<class T>
struct RemoveReference<T&>;

template<class T>
struct RemoveReference<T&&>;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Classe.

## <a name="remarks"></a>Osservazioni

Rimuove il riferimento o il tratto di riferimento rvalue dal parametro di modello di classe specificato.

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`Type`|Sinonimo del parametro di modello di classe.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`RemoveReference`

## <a name="requirements"></a>Requisiti

**Intestazione:** Internal. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Details](microsoft-wrl-details-namespace.md)
