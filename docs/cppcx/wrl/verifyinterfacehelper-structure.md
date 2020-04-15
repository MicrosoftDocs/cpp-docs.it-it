---
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
ms.openlocfilehash: 09c2cc7e08e2dc0e8df42c64d285c37627c5925a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374242"
---
# <a name="verifyinterfacehelper-structure"></a>VerifyInterfaceHelper (struttura)

Supporta l'infrastruttura della libreria di modelli di Windows Runtime di C, non è destinato a essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template <bool isWinRTInterface, typename I>
struct VerifyInterfaceHelper;

template <typename I>
struct VerifyInterfaceHelper<false, I>;
```

### <a name="parameters"></a>Parametri

*Ho*<br/>
Interfaccia da verificare.

*isWinRTInterface (interfaccia utente)*

## <a name="remarks"></a>Osservazioni

Verifica che l'interfaccia specificata dal parametro di modello soddisfi determinati requisiti.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

Nome                                            | Descrizione
----------------------------------------------- | ---------------------------------------------------------------------------------------------------
[Metodo VerifyInterfaceHelper::Verify](#verify) | Verifica che l'interfaccia specificata dal parametro di modello corrente soddisfi determinati requisiti.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`VerifyInterfaceHelper`

## <a name="requirements"></a>Requisiti

**Intestazione:** implements.h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="verifyinterfacehelperverify"></a><a name="verify"></a>VerifyInterfaceHelper::Verify

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
static void Verify();
```

### <a name="remarks"></a>Osservazioni

Verifica che l'interfaccia specificata dal parametro di modello corrente soddisfi determinati requisiti.
