---
title: 'Costruttore weakref:: Weakref | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::WeakRef::WeakRef
dev_langs:
- C++
helpviewer_keywords:
- WeakRef, constructor
ms.assetid: 589f87e0-8dcc-4e82-aab2-f2f66f1ec47c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: d7c8bc81040ce8d4c1cea7497f9d1371fbb9d41f
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42611610"
---
# <a name="weakrefweakref-constructor"></a>Costruttore WeakRef::WeakRef

Inizializza una nuova istanza di **WeakRef** classe.

## <a name="syntax"></a>Sintassi

```cpp
WeakRef();
WeakRef(
   decltype(__nullptr)  
);

WeakRef(
   _In_opt_ IWeakReference* ptr
);

WeakRef(
   const ComPtr<IWeakReference>& ptr
);

WeakRef(
   const WeakRef& ptr
);

WeakRef(
   _Inout_ WeakRef&& ptr
);
```

### <a name="parameters"></a>Parametri

*ptr*  
Un puntatore, riferimento o riferimento rvalue a un oggetto esistente che inizializza l'oggetto corrente **WeakRef** oggetto.

## <a name="remarks"></a>Note

Il primo costruttore inizializza un oggetto vuoto **WeakRef** oggetto. Il secondo costruttore inizializza un **WeakRef** da un puntatore a oggetto di `IWeakReference` interfaccia. Il terzo costruttore inizializza un **WeakRef** oggetto da un riferimento a un `ComPtr<IWeakReference>` oggetto. Il quarto e quinto costruttore inizializza un **WeakRef** da un altro oggetto **WeakRef** oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe WeakRef](../windows/weakref-class.md)