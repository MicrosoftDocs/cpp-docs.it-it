---
description: 'Altre informazioni su: Struttura VerifyInheritanceHelper'
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
ms.openlocfilehash: 672455482a2d21cb695124cad31740b6325c377d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97135044"
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

*I*<br/>
Tipo.

*Base*<br/>
Un altro tipo.

## <a name="remarks"></a>Commenti

Verifica se un'interfaccia è derivata da un'altra interfaccia.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

Nome                                       | Description
------------------------------------------ | -------------------------------------------------------------------------------------------------------------------------------------
[VerifyInheritanceHelper:: Verify](#verify) | Verifica le due interfacce specificate dai parametri del modello corrente e determina se un'interfaccia è derivata dall'altra.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`VerifyInheritanceHelper`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="verifyinheritancehelperverify"></a><a name="verify"></a> VerifyInheritanceHelper:: Verify

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
static void Verify();
```

### <a name="remarks"></a>Commenti

Verifica le due interfacce specificate dai parametri del modello corrente e determina se un'interfaccia è derivata dall'altra.

Se un'interfaccia non è derivata dall'altra, viene generato un errore.
