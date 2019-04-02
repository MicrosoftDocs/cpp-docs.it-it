---
title: Platform::Delegate (classe)
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::Delegate
helpviewer_keywords:
- Platform::Delegate Class
ms.assetid: 82b21271-768f-4193-9ca2-be68ddfd546e
ms.openlocfilehash: 4116de3240c3ef334db51095997f946731372708
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58769238"
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

Usare la parola chiave [delegate](../extensions/delegate-cpp-component-extensions.md) per creare i delegati; non usare esplicitamente Platform::Delegate. Per altre informazioni, vedere [Delegati](../cppcx/delegates-c-cx.md). Per un esempio su come creare e utilizzare un delegato, vedere [Creating Windows Runtime Components in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp).

### <a name="requirements"></a>Requisiti

**Client minimo supportato:** Windows 8

**Server minimo supportato:** Windows Server 2012

**Spazio dei nomi:** Piattaforma

**Metadati:** platform.winmd

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)
