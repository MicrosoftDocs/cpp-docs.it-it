---
title: VerifyInterfaceHelper (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 09/24/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::VerifyInterfaceHelper
- implements/Microsoft::WRL::Details::VerifyInterfaceHelper::Verify
dev_langs:
- C++
helpviewer_keywords:
- Microsoft::WRL::Details::VerifyInterfaceHelper structure
- Microsoft::WRL::Details::VerifyInterfaceHelper::Verify method
ms.assetid: ea95b641-199a-4fdf-964b-186b40cb3ba7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e7aa7d796fb30a30a100f5f914feec57909407e5
ms.sourcegitcommit: edb46b0239a0e616af4ec58906e12338c3e8d2c6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/25/2018
ms.locfileid: "47169762"
---
# <a name="verifyinterfacehelper-structure"></a>VerifyInterfaceHelper (struttura)

Supporta l'infrastruttura di libreria modelli C++ per Windows Runtime e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template <
   bool isWinRTInterface,
   typename I
>
struct VerifyInterfaceHelper;

template <
   typename I
>
struct VerifyInterfaceHelper<false, I>;
```

### <a name="parameters"></a>Parametri

*I*<br/>
Interfaccia da verificare.

*isWinRTInterface*

## <a name="remarks"></a>Note

Verifica che l'interfaccia specificata dal parametro di modello soddisfi determinati requisiti.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

Nome                                            | Descrizione
----------------------------------------------- | ---------------------------------------------------------------------------------------------------
[Metodo VerifyInterfaceHelper::Verify](#verify) | Verifica che l'interfaccia specificata dal parametro di modello corrente soddisfi determinati requisiti.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`VerifyInterfaceHelper`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Namespace:** Microsoft::WRL::Details

## <a name="verify"></a>Verifyinterfacehelper:: Verify

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
static void Verify();
```

### <a name="remarks"></a>Note

Verifica che l'interfaccia specificata dal parametro di modello corrente soddisfi determinati requisiti.
