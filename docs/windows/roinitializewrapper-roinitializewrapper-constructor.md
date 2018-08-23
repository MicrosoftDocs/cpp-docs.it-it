---
title: 'Costruttore roinitializewrapper:: Roinitializewrapper | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::RoInitializeWrapper::RoInitializeWrapper
dev_langs:
- C++
ms.assetid: c6f7fb07-14af-4574-9135-cea164607f30
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 528c66da24c4cbf6c22af5b1b5f8dd3afffff64f
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42604646"
---
# <a name="roinitializewrapperroinitializewrapper-constructor"></a>Costruttore RoInitializeWrapper::RoInitializeWrapper

Inizializza una nuova istanza di **RoInitializeWrapper** classe.

## <a name="syntax"></a>Sintassi

```cpp
RoInitializeWrapper(   RO_INIT_TYPE flags)  
```

### <a name="parameters"></a>Parametri

*flags*  
Una delle enumerazioni RO_INIT_TYPE, che specifica il supporto fornito dal Runtime di Windows.

## <a name="remarks"></a>Note

Il **RoInitializeWrapper** classe richiama `Windows::Foundation::Initialize(flags)`.

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="see-also"></a>Vedere anche

[Classe HandleT](../windows/handlet-class.md)