---
title: 'operatore&lt; (Microsoft:: wrl)'
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::operator<
ms.assetid: bfae0e1c-1648-482b-99c2-3217d62aba46
ms.openlocfilehash: 8b9d9936eabb75b58eabde487db8d1eb42abc9dd
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58785456"
---
# <a name="operatorlt-operator-microsoftwrl"></a>operatore&lt; (Microsoft:: wrl)

Determina se l'indirizzo di un oggetto è minore di un altro.

## <a name="syntax"></a>Sintassi

```cpp
template<class T, class U>
bool operator<(const ComPtr<T>& a, const ComPtr<U>& b) throw();
template<class T, class U>
bool operator<(const Details::ComPtrRef<ComPtr<T>>& a, const Details::ComPtrRef<ComPtr<U>>& b) throw();
```

### <a name="parameters"></a>Parametri

*a*<br/>
Oggetto a sinistra.

*b*<br/>
Oggetto a destra.

## <a name="return-value"></a>Valore restituito

**true** se l'indirizzo del *una* è minore rispetto all'indirizzo del *b*; in caso contrario, **false**.

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](microsoft-wrl-namespace.md)