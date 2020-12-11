---
description: 'Altre informazioni su: variabili globali ATL'
title: Variabili globali ATL
ms.date: 12/06/2017
f1_keywords:
- ATLBASE/_pAtlModule
helpviewer_keywords:
- global variables, ATL
- _pAtlModule
ms.assetid: e881a319-99ca-4f5d-8a0b-34b3dcd0f37f
ms.openlocfilehash: 8d0544651e32f5e569973466af8ce04af1433766
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97158777"
---
# <a name="atl-global-variables"></a>Variabili globali ATL

## <a name="_patlmodule"></a>_pAtlModule

Variabile globale che archivia un puntatore al modulo corrente.

```cpp
__declspec(selectany) CAtlModule * _pAtlModule
```

### <a name="remarks"></a>Commenti

I metodi di questa variabile globale possono essere usati per fornire la funzionalità fornita dalla classe (obsoleta) CComModule in Visual C++ 6,0.

### <a name="example"></a>Esempio

```cpp
LONG lLocks = _pAtlModule->GetLockCount();
```

### <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h
