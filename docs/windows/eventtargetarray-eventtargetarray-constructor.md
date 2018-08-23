---
title: 'Costruttore eventtargetarray:: Eventtargetarray | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::Details::EventTargetArray::EventTargetArray
dev_langs:
- C++
helpviewer_keywords:
- EventTargetArray, constructor
ms.assetid: 6c6d3737-3cd3-4515-a8f6-d27901bb8ed2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 2bbf6cb67973d7538aa7aea0d846cbadf030d585
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42590652"
---
# <a name="eventtargetarrayeventtargetarray-constructor"></a>Costruttore EventTargetArray::EventTargetArray

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
EventTargetArray(
   _Out_ HRESULT* hr,
   size_t items
);
```

### <a name="parameters"></a>Parametri

*risorse umane*  
Dopo le operazioni di questo costruttore, parametro *hr* indica se l'allocazione della matrice ha avuto esito positivo o negativo. La tabella seguente elenca i possibili valori per *hr*.

S_OK l'operazione ha avuto esito positivo.

Non è stato possibile allocare memoria E_OUTOFMEMORY per la matrice.

Parametro S_FALSE *elementi* è minore o uguale a zero.

*elementi*  
Il numero di elementi della matrice da allocare.

## <a name="remarks"></a>Note

Inizializza una nuova istanza di **EventTargetArray** classe.

**EventTargetArray** viene usato per mantenere una matrice dei gestori eventi in un `EventSource` oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** Event. h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Classe EventTargetArray](../windows/eventtargetarray-class.md)  
[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)