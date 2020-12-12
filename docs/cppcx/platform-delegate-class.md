---
description: 'Altre informazioni su: Platform::D classe elegate'
title: Platform::Delegate (classe)
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::Delegate
helpviewer_keywords:
- Platform::Delegate Class
ms.assetid: 82b21271-768f-4193-9ca2-be68ddfd546e
ms.openlocfilehash: 58baedf595d3ee8d9cc4975e787193abf522233c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97176106"
---
# <a name="platformdelegate-class"></a>Platform::Delegate (classe)

Rappresenta un oggetto funzione.

## <a name="syntax"></a>Sintassi

```cpp
public delegate void delegate_name();
```

### <a name="members"></a>Members

La classe Delegate include metodi Equals(), GetHashCode() e ToString() derivati dalla [Platform::Object Class](../cppcx/platform-object-class.md).

### <a name="remarks"></a>Commenti

Usare la parola chiave [delegate](../extensions/delegate-cpp-component-extensions.md) per creare i delegati; non usare esplicitamente Platform::Delegate. Per ulteriori informazioni, vedi [Delegati](../cppcx/delegates-c-cx.md). Per un esempio su come creare e utilizzare un delegato, vedere [Creating Windows Runtime Components in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp).

### <a name="requirements"></a>Requisiti

**Client minimo supportato:** Windows 8

**Server minimo supportato:** Windows Server 2012

**Spazio dei nomi:** Platform

**Metadati:** Platform. winmd

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)
