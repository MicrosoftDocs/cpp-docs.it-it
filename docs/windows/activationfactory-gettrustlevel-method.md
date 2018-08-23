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
ms.openlocfilehash: bfec8bfa6940fd4a702334f0d3068c6d936ea8c1
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42607314"
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

*trustLvl*  
Quando questa operazione viene completata, il livello di attendibilità del runtime di classe che il **ActivationFactory** crea un'istanza.

## <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, viene generato un errore di asserzione e *trustLvl* è impostata su `FullTrust`.

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe ActivationFactory](../windows/activationfactory-class.md)