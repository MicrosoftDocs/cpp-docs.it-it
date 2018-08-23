---
title: 'Costruttore Module:: module | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Module::Module
dev_langs:
- C++
helpviewer_keywords:
- Module, constructor
ms.assetid: 5436fc74-61dc-41b6-81af-4f03177159aa
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e0459c729368dc182de955f85afda514b2ff5071
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42591862"
---
# <a name="modulemodule-constructor"></a>Costruttore Module::Module

Inizializza una nuova istanza di **modulo** classe.

## <a name="syntax"></a>Sintassi

```cpp
Module();
```

## <a name="remarks"></a>Note

Questo costruttore è protetto e non può essere chiamato con il **nuovo** (parola chiave). In alternativa, chiamare [metodo Module:: GetModule](../windows/module-getmodule-method.md) oppure [metodo Module:: Create](../windows/module-create-method.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche
[Classe Module](../windows/module-class.md)