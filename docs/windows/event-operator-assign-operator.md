---
title: 'Event:: operator = (operatore) | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Event::operator=
dev_langs:
- C++
helpviewer_keywords:
- operator= operator
ms.assetid: d8fe9820-8856-4899-9553-56226bdc4945
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 7c95ac2e16ef4f4b279f0da287a4ca2a3d0f18a7
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42610463"
---
# <a name="eventoperator-operator"></a>Operatore Event::operator=

Assegna l'oggetto specificato **evento** riferimento all'oggetto corrente **evento** istanza.

## <a name="syntax"></a>Sintassi

```cpp
WRL_NOTHROW Event& operator=(
   _Inout_ Event&& h
);
```

### <a name="parameters"></a>Parametri

*h*  
Un riferimento rvalue a un **evento** istanza.

## <a name="return-value"></a>Valore restituito

Un puntatore all'oggetto corrente **evento** istanza.

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="see-also"></a>Vedere anche

[Classe di eventi (Libreria modelli C++ per Windows Runtime)](../windows/event-class-windows-runtime-cpp-template-library.md)