---
title: VerifyInterfaceHelper (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 10/03/2018
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
ms.openlocfilehash: b70155566695ade6b6778ade3b4758faebb3ea67
ms.sourcegitcommit: 955ef0f9d966e7c9c65e040f1e28fa83abe102a5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/04/2018
ms.locfileid: "48788865"
---
# <a name="verifyinterfacehelper-structure"></a>VerifyInterfaceHelper (struttura)

Supporta l'infrastruttura di libreria modelli C++ per Windows Runtime e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template <bool isWinRTInterface, typename I>
struct VerifyInterfaceHelper;

template <typename I>
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
