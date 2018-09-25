---
title: VerifyInheritanceHelper (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 09/24/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::VerifyInheritanceHelper
- implements/Microsoft::WRL::Details::VerifyInheritanceHelper::Verify
dev_langs:
- C++
helpviewer_keywords:
- Microsoft::WRL::Details::VerifyInheritanceHelper structure
- Microsoft::WRL::Details::VerifyInheritanceHelper::Verify method
ms.assetid: 8a48a702-0f71-4807-935b-8311f0a7a8b6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 6231345b837cae8f36e8441173300d804c0ea167
ms.sourcegitcommit: edb46b0239a0e616af4ec58906e12338c3e8d2c6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/25/2018
ms.locfileid: "47169633"
---
# <a name="verifyinheritancehelper-structure"></a>VerifyInheritanceHelper (struttura)

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template <
   typename I,
   typename Base
>
struct VerifyInheritanceHelper;
template <
   typename I
>
struct VerifyInheritanceHelper<I, Nil>;
```

### <a name="parameters"></a>Parametri

*I*<br/>
Tipo.

*base*<br/>
Un altro tipo.

## <a name="remarks"></a>Note

Verifica se un'interfaccia è derivata da un'altra interfaccia.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

Nome                                       | Descrizione
------------------------------------------ | -------------------------------------------------------------------------------------------------------------------------------------
[Verifyinheritancehelper:: Verify](#verify) | Testa le due interfacce specificate dai parametri di modello corrente e determina se un'interfaccia è derivata da altra.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`VerifyInheritanceHelper`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Namespace:** Microsoft::WRL::Details

## <a name="verify"></a>Verifyinheritancehelper:: Verify

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
static void Verify();
```

### <a name="remarks"></a>Note

Testa le due interfacce specificate dai parametri di modello corrente e determina se un'interfaccia è derivata da altra.

Se un'interfaccia non è derivata da un altro, viene generato un errore.
