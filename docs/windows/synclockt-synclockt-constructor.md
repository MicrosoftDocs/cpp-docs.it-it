---
title: 'Costruttore synclockt:: Synclockt | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockT::SyncLockT
dev_langs:
- C++
helpviewer_keywords:
- SyncLockT, constructor
ms.assetid: 713dfd9f-7369-4d86-b4a0-8b32c184d89b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: f2d8244b94a308970e87646505cdcade533b717f
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46376007"
---
# <a name="synclocktsynclockt-constructor"></a>Costruttore SyncLockT::SyncLockT

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
SyncLockT(
   _Inout_ SyncLockT&& other
);

explicit SyncLockT(
   typename SyncTraits::Type sync = SyncTraits::GetInvalidValue()  
);
```

### <a name="parameters"></a>Parametri

*other*<br/>
Un riferimento rvalue a un altro **SyncLockT** oggetto.

*sync*<br/>
Un riferimento a un altro `SyncLockWithStatusT` oggetto.

## <a name="remarks"></a>Note

Inizializza una nuova istanza di **SyncLockT** classe.

Il primo costruttore inizializza l'oggetto corrente **SyncLockT** da un altro oggetto **SyncLockT** oggetto specificato dal parametro *altri*e quindi invalida l'altri  **SyncLockT** oggetto. Il secondo costruttore viene **protette**e la inizializza corrente **SyncLockT** oggetto da uno stato non valido.

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers::Details

## <a name="see-also"></a>Vedere anche

[Classe SyncLockT](../windows/synclockt-class.md)