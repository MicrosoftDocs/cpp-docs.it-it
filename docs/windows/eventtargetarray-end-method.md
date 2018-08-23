---
title: 'Metodo eventtargetarray:: end | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::Details::EventTargetArray::End
dev_langs:
- C++
helpviewer_keywords:
- End method
ms.assetid: 20c491b8-f355-4d8f-ad14-8f46121d9af6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 341333b0c4f51c42004ad638a5a8f4fcb7d7e466
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42596491"
---
# <a name="eventtargetarrayend-method"></a>Metodo EventTargetArray::End

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
ComPtr<IUnknown>* End();
```

## <a name="return-value"></a>Valore restituito

L'indirizzo dell'ultimo elemento nella matrice interna di gestori di eventi.

## <a name="remarks"></a>Note

Ottiene l'indirizzo dell'ultimo elemento nella matrice interna di gestori di eventi.

## <a name="requirements"></a>Requisiti

**Intestazione:** Event. h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Classe EventTargetArray](../windows/eventtargetarray-class.md)  
[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)