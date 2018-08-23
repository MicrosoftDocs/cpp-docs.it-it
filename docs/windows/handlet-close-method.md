---
title: 'Metodo handlet:: Close | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleT::Close
dev_langs:
- C++
helpviewer_keywords:
- Close method
ms.assetid: 1b9d597c-abcf-4028-a068-0344560009f6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: ab919b3aeba45462a15900429493225f00909d5a
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42602454"
---
# <a name="handletclose-method"></a>Metodo HandleT::Close

Chiude l'oggetto corrente **HandleT** oggetto.

## <a name="syntax"></a>Sintassi

```cpp
void Close();
```

## <a name="remarks"></a>Note

L'handle sottostante l'oggetto corrente **HandleT** viene chiusa e il **HandleT** viene impostato sullo stato non valido.

Se l'handle non chiusa correttamente, viene generata un'eccezione nel thread chiamante.

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="see-also"></a>Vedere anche

[Classe HandleT](../windows/handlet-class.md)