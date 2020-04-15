---
title: VerifyInheritanceHelper (struttura)
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::VerifyInheritanceHelper
- implements/Microsoft::WRL::Details::VerifyInheritanceHelper::Verify
helpviewer_keywords:
- Microsoft::WRL::Details::VerifyInheritanceHelper structure
- Microsoft::WRL::Details::VerifyInheritanceHelper::Verify method
ms.assetid: 8a48a702-0f71-4807-935b-8311f0a7a8b6
ms.openlocfilehash: 3650cfb70ffc12572b3965534eff4e1f2ecb2cf5
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374223"
---
# <a name="verifyinheritancehelper-structure"></a>VerifyInheritanceHelper (struttura)

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template <typename I, typename Base>
struct VerifyInheritanceHelper;

template <typename I>
struct VerifyInheritanceHelper<I, Nil>;
```

### <a name="parameters"></a>Parametri

*Ho*<br/>
Tipo.

*Base*<br/>
Un altro tipo.

## <a name="remarks"></a>Osservazioni

Verifica se un'interfaccia è derivata da un'altra interfaccia.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

Nome                                       | Descrizione
------------------------------------------ | -------------------------------------------------------------------------------------------------------------------------------------
[VerifyInheritanceHelper::Verify](#verify) | Verifica le due interfacce specificate dai parametri di modello correnti e determina se un'interfaccia è derivata dall'altra.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`VerifyInheritanceHelper`

## <a name="requirements"></a>Requisiti

**Intestazione:** implements.h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="verifyinheritancehelperverify"></a><a name="verify"></a>VerifyInheritanceHelper::Verify

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
static void Verify();
```

### <a name="remarks"></a>Osservazioni

Verifica le due interfacce specificate dai parametri di modello correnti e determina se un'interfaccia è derivata dall'altra.

Se un'interfaccia non è derivata dall'altra, viene generato un errore.
