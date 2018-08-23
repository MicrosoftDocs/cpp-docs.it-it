---
title: 'Metodo asyncbase:: Trytransitiontoerror | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::AsyncBase::TryTransitionToError
dev_langs:
- C++
helpviewer_keywords:
- TryTransitionToError method
ms.assetid: f6d11c25-1ce3-43f9-af1c-97c4dc0f6f0f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 1244b87410a09996d946408ff77dbb552b339c85
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42591154"
---
# <a name="asyncbasetrytransitiontoerror-method"></a>Metodo AsyncBase::TryTransitionToError

Indica se il codice di errore può modificare lo stato di errore interno.

## <a name="syntax"></a>Sintassi

```cpp
bool TryTransitionToError(
   const HRESULT error
);
```

### <a name="parameters"></a>Parametri

*Errore*  
Un errore HRESULT.

## <a name="return-value"></a>Valore restituito

**true** se lo stato di errore interno è stato modificato; in caso contrario, **false**.

## <a name="remarks"></a>Note

Questa operazione modifica lo stato di errore solo se lo stato di errore è già impostato su S_OK. Questa operazione non ha effetto se lo stato di errore è già errore, annullato, completato o chiuso.

## <a name="requirements"></a>Requisiti

**Intestazione:** Async. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe AsyncBase](../windows/asyncbase-class.md)