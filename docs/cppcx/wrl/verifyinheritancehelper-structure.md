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
ms.openlocfilehash: c37a0eb74fd65b3d349d5b8b7c792fbaf7d1ac9a
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58784757"
---
# <a name="verifyinheritancehelper-structure"></a>VerifyInheritanceHelper (struttura)

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

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

## <a name="remarks"></a>Note

Verifica se un'interfaccia è derivata da un'altra interfaccia.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

Nome                                       | Descrizione
------------------------------------------ | -------------------------------------------------------------------------------------------------------------------------------------
[VerifyInheritanceHelper::Verify](#verify) | Testa le due interfacce specificate dai parametri di modello corrente e determina se un'interfaccia è derivata da altra.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`VerifyInheritanceHelper`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="verify"></a>VerifyInheritanceHelper::Verify

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
static void Verify();
```

### <a name="remarks"></a>Note

Testa le due interfacce specificate dai parametri di modello corrente e determina se un'interfaccia è derivata da altra.

Se un'interfaccia non è derivata da un altro, viene generato un errore.
