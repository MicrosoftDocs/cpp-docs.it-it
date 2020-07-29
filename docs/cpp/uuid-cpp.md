---
title: uuid (C++)
ms.date: 11/04/2016
f1_keywords:
- uuid_cpp
helpviewer_keywords:
- __declspec keyword [C++], uuid
- uuid __declspec keyword
ms.assetid: 9d004621-09bc-4a8d-871b-648f5d5102d7
ms.openlocfilehash: f775820fe7f84c5081a213ca9ecb07d617716a9d
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87226984"
---
# <a name="uuid-c"></a>uuid (C++)

**Specifico di Microsoft**

Il compilatore connette un GUID a una classe o a una struttura dichiarata o definita (solo definizioni di oggetti COM complete) con l' **`uuid`** attributo.

## <a name="syntax"></a>Sintassi

```
__declspec( uuid("ComObjectGUID") ) declarator
```

## <a name="remarks"></a>Osservazioni

L' **`uuid`** attributo accetta una stringa come argomento. Questa stringa denomina un GUID nel formato normale del registro di sistema con o senza i delimitatori **{}** . Ad esempio:

```cpp
struct __declspec(uuid("00000000-0000-0000-c000-000000000046")) IUnknown;
struct __declspec(uuid("{00020400-0000-0000-c000-000000000046}")) IDispatch;
```

Tale attributo può essere applicato in una ridichiarazione. Ciò consente alle intestazioni di sistema di fornire le definizioni delle interfacce, ad esempio `IUnknown` , e la ridichiarazione in un'altra intestazione (ad esempio \<comdef.h> ) per fornire il GUID.

È possibile applicare la parola chiave [__uuidof](../cpp/uuidof-operator.md) per recuperare il GUID costante associato a un tipo definito dall'utente.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[__declspec](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
