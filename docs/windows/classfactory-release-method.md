---
title: 'Metodo ClassFactory:: Release | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::ClassFactory::Release
dev_langs:
- C++
helpviewer_keywords:
- Release method
ms.assetid: 49da2002-f9d6-4d7f-8a65-48c20b1bf99f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e1af266d769b950324a1a4a9b8023b6b8e164038
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42606035"
---
# <a name="classfactoryrelease-method"></a>Metodo ClassFactory::Release

Decrementa il conteggio dei riferimenti per l'oggetto corrente **ClassFactory** oggetto.

## <a name="syntax"></a>Sintassi

```cpp
STDMETHOD_(
   ULONG,
   Release
)();
```

## <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT che descrive l'errore.

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe ClassFactory](../windows/classfactory-class.md)