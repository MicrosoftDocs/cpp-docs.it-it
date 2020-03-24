---
title: Funzione AsWeak
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::AsWeak
helpviewer_keywords:
- AsWeak function
ms.assetid: a6f10cfc-c1d6-4761-adb9-1a119cc99913
ms.openlocfilehash: d11f55d57f4053fd6d46b727a8ed91b340d1764b
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80214175"
---
# <a name="asweak-function"></a>Funzione AsWeak

Recupera un riferimento debole a un'istanza specificata.

## <a name="syntax"></a>Sintassi

```cpp
template<typename T>
HRESULT AsWeak(
   _In_ T* p,
   _Out_ WeakRef* pWeak
);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Puntatore al tipo di parametro *p*.

*p*<br/>
Istanza di un tipo.

*pWeak*<br/>
Al termine di questa operazione, un puntatore a un riferimento debole al parametro *p*.

## <a name="return-value"></a>Valore restituito

S_OK, se l'operazione ha esito positivo; in caso contrario, viene generato un errore HRESULT che indica la cause dell'errore.

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](microsoft-wrl-namespace.md)
