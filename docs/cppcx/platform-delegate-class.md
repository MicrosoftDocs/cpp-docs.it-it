---
title: Platform::Delegate (classe)
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::Delegate
helpviewer_keywords:
- Platform::Delegate Class
ms.assetid: 82b21271-768f-4193-9ca2-be68ddfd546e
ms.openlocfilehash: 1b4a4955bbff53e6e0c5606f2900e22cc69146cc
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50446228"
---
# <a name="platformdelegate-class"></a>Platform::Delegate (classe)

Rappresenta un oggetto funzione.

## <a name="syntax"></a>Sintassi

```cpp
public delegate void delegate_name();
```

### <a name="members"></a>Membri

La classe Delegate include metodi Equals(), GetHashCode() e ToString() derivati dalla [Platform::Object Class](../cppcx/platform-object-class.md).

### <a name="remarks"></a>Note

Usare la parola chiave [delegate](../windows/delegate-cpp-component-extensions.md) per creare i delegati; non usare esplicitamente Platform::Delegate. Per altre informazioni, vedere [Delegati](../cppcx/delegates-c-cx.md). Per un esempio su come creare e utilizzare un delegato, vedere [Creating Windows Runtime Components in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp).

### <a name="requirements"></a>Requisiti

**Client minimo supportato:** Windows 8

**Server minimo supportato:** Windows Server 2012

**Spazio dei nomi:** Platform

**Metadati:** platform.winmd

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)