---
title: 'operatore operator &lt; (Microsoft:: WRL)'
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::operator<
ms.assetid: bfae0e1c-1648-482b-99c2-3217d62aba46
ms.openlocfilehash: b438f823814e21e2da43f698471d782c88626628
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87226880"
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

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft:: WRL](microsoft-wrl-namespace.md)
