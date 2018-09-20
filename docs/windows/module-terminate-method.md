---
title: 'Metodo Module:: Terminate | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Module::Terminate
dev_langs:
- C++
helpviewer_keywords:
- Terminate method
ms.assetid: cf358117-45dc-43c7-ac1e-1e1eedc59e41
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 76f483c1c57c65c035bcbb0f8c82b4f72cbb06f2
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46398729"
---
# <a name="moduleterminate-method"></a>Metodo Module::Terminate

Fa sì che tutte le factory creata un'istanza mediante il modulo da arrestare.

## <a name="syntax"></a>Sintassi

```cpp
void Terminate();
```

## <a name="remarks"></a>Note

Rilascia le factory nella cache.

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe Module](../windows/module-class.md)