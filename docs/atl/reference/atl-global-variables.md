---
title: Le variabili globali ATL | Microsoft Docs
ms.custom: ''
ms.date: 12/06/2017
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- ATLBASE/_pAtlModule
dev_langs:
- C++
helpviewer_keywords:
- global variables, ATL
- _pAtlModule
ms.assetid: e881a319-99ca-4f5d-8a0b-34b3dcd0f37f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 55844390b872cb0d94ff991ab79b8519388d009f
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43762460"
---
# <a name="atl-global-variables"></a>Variabili globali ATL

## <a name="patlmodule"></a>_pAtlModule

Una variabile globale memorizzando un puntatore al modulo corrente.  

```cpp  
__declspec(selectany) CAtlModule * _pAtlModule  
```  
### <a name="remarks"></a>Note

I metodi in questa variabile globale sono utilizzabile per fornire la funzionalità che la classe CComModule (obsoleta) fornita in Visual C++ 6.0.

### <a name="example"></a>Esempio

```cpp  
LONG lLocks = _pAtlModule->GetLockCount();  
```  
### <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h  

