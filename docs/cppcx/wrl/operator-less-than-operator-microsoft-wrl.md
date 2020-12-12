---
description: 'Altre informazioni su: operatore operator &lt; (Microsoft:: WRL)'
title: 'operatore operator &lt; (Microsoft:: WRL)'
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::operator<
ms.assetid: bfae0e1c-1648-482b-99c2-3217d62aba46
ms.openlocfilehash: 1edbb8218ef07355040bd05ab99db8f97be1cb59
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97330771"
---
# <a name="operatorlt-operator-microsoftwrl"></a>operatore operator &lt; (Microsoft:: WRL)

Determina se l'indirizzo di un oggetto è minore di un altro.

## <a name="syntax"></a>Sintassi

```cpp
template<class T, class U>
bool operator<(const ComPtr<T>& a, const ComPtr<U>& b) throw();
template<class T, class U>
bool operator<(const Details::ComPtrRef<ComPtr<T>>& a, const Details::ComPtrRef<ComPtr<U>>& b) throw();
```

### <a name="parameters"></a>Parametri

*un*<br/>
Oggetto a sinistra.

*b*<br/>
Oggetto a destra.

## <a name="return-value"></a>Valore restituito

**`true`** Se l'indirizzo di *un oggetto* è minore dell'indirizzo di *b*; in caso contrario, **`false`** .

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Microsoft:: WRL](microsoft-wrl-namespace.md)
