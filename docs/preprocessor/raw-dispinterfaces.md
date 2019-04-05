---
title: raw_dispinterfaces
ms.date: 11/04/2016
f1_keywords:
- raw_dispinterfaces
helpviewer_keywords:
- raw_dispinterfaces attribute
ms.assetid: f762864d-29bf-445b-825a-ba7b29a95409
ms.openlocfilehash: ef8ed3992c77df0f1d551e923ddc90c2d1bb9b0b
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59027923"
---
# <a name="rawdispinterfaces"></a>raw_dispinterfaces
**Sezione specifica C++**

Indica al compilatore di generare funzioni wrapper di basso livello per i metodi di interfaccia dispatch e proprietà che chiamano `IDispatch::Invoke` e restituire il codice di errore HRESULT.

## <a name="syntax"></a>Sintassi

```
raw_dispinterfaces
```

## <a name="remarks"></a>Note

Se questo attributo non viene specificato, solo i wrapper di alto livello vengono generati, che generano eccezioni C++ in caso di errore.

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedere anche

[Attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[Direttiva #import](../preprocessor/hash-import-directive-cpp.md)