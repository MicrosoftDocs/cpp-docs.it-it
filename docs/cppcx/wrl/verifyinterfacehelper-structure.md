---
description: 'Altre informazioni su: struttura VerifyInterfaceHelper'
title: VerifyInterfaceHelper (struttura)
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::VerifyInterfaceHelper
- implements/Microsoft::WRL::Details::VerifyInterfaceHelper::Verify
helpviewer_keywords:
- Microsoft::WRL::Details::VerifyInterfaceHelper structure
- Microsoft::WRL::Details::VerifyInterfaceHelper::Verify method
ms.assetid: ea95b641-199a-4fdf-964b-186b40cb3ba7
ms.openlocfilehash: a9b51eac55666d15b8362fc070d0feb731e9674d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97135031"
---
# <a name="verifyinterfacehelper-structure"></a>VerifyInterfaceHelper (struttura)

Supporta l'infrastruttura della libreria di modelli C++ Windows Runtime e non può essere utilizzata direttamente dal codice.

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

## <a name="remarks"></a>Commenti

Verifica che l'interfaccia specificata dal parametro di modello soddisfi determinati requisiti.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

Nome                                            | Description
----------------------------------------------- | ---------------------------------------------------------------------------------------------------
[Metodo VerifyInterfaceHelper::Verify](#verify) | Verifica che l'interfaccia specificata dal parametro di modello corrente soddisfi determinati requisiti.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`VerifyInterfaceHelper`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="verifyinterfacehelperverify"></a><a name="verify"></a> VerifyInterfaceHelper:: Verify

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
static void Verify();
```

### <a name="remarks"></a>Commenti

Verifica che l'interfaccia specificata dal parametro di modello corrente soddisfi determinati requisiti.
