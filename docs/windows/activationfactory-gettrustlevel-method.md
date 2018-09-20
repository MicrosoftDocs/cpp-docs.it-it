---
title: 'Metodo activationfactory:: Gettrustlevel | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::ActivationFactory::GetTrustLevel
dev_langs:
- C++
helpviewer_keywords:
- GetTrustLevel method
ms.assetid: 31547ae6-d2ab-4039-923c-154d53fb1a8b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: eba02bea09784e3431b3697eb9ac9a47de978348
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46424560"
---
# <a name="activationfactorygettrustlevel-method"></a>Metodo ActivationFactory::GetTrustLevel

Ottiene il livello di attendibilità dell'oggetto a cui l'oggetto corrente **ActivationFactory** crea un'istanza.

## <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(
   GetTrustLevel
)(_Out_ TrustLevel* trustLvl);
```

### <a name="parameters"></a>Parametri

*trustLvl*<br/>
Quando questa operazione viene completata, il livello di attendibilità del runtime di classe che il **ActivationFactory** crea un'istanza.

## <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, viene generato un errore di asserzione e *trustLvl* è impostata su `FullTrust`.

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe ActivationFactory](../windows/activationfactory-class.md)