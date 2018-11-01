---
title: uuid (C++)
ms.date: 11/04/2016
f1_keywords:
- uuid_cpp
helpviewer_keywords:
- __declspec keyword [C++], uuid
- uuid __declspec keyword
ms.assetid: 9d004621-09bc-4a8d-871b-648f5d5102d7
ms.openlocfilehash: c121ad99dfbe0021a263f324ccdb9a95441bba33
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50511657"
---
# <a name="uuid-c"></a>uuid (C++)

**Sezione specifica Microsoft**

Il compilatore associa un GUID a una classe o struttura dichiarata o definita (COM oggetto definizioni complete solo) con i **uuid** attributo.

## <a name="syntax"></a>Sintassi

```
__declspec( uuid("ComObjectGUID") ) declarator
```

## <a name="remarks"></a>Note

Il **uuid** attributo accetta una stringa come argomento. Questa stringa denomina un GUID in formato normale del Registro di sistema con o senza il **{}** delimitatori. Ad esempio:

```cpp
struct __declspec(uuid("00000000-0000-0000-c000-000000000046")) IUnknown;
struct __declspec(uuid("{00020400-0000-0000-c000-000000000046}")) IDispatch;
```

Tale attributo può essere applicato in una ridichiarazione. In questo modo le intestazioni di sistema di fornire, ad esempio le definizioni delle interfacce `IUnknown`e alla ridichiarazione in un'altra intestazione (ad esempio \<Comdef. h >) per fornire il GUID.

La parola chiave [uuidof](../cpp/uuidof-operator.md) possono essere applicati per recuperare la costante GUID associata a un tipo definito dall'utente.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[__declspec](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)