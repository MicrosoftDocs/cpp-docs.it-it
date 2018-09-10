---
title: 'Classe platform:: Delegate | Microsoft Docs'
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::Delegate
dev_langs:
- C++
helpviewer_keywords:
- Platform::Delegate Class
ms.assetid: 82b21271-768f-4193-9ca2-be68ddfd546e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 78ac7cce43dbe08097c1e7b78423fadafc7f5309
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44101911"
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

Usare la parola chiave [delegate](../windows/delegate-cpp-component-extensions.md) per creare i delegati; non usare esplicitamente Platform::Delegate. Per altre informazioni, vedere [Delegati](../cppcx/delegates-c-cx.md). Per un esempio di come creare e utilizzare un delegato, vedere [creazione di componenti Windows Runtime in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp).

### <a name="requirements"></a>Requisiti

**Client minimo supportato:** Windows 8

**Server minimo supportato:** Windows Server 2012

**Spazio dei nomi:** Platform

**Metadati:** platform.winmd

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)