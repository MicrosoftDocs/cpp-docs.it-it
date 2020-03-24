---
title: Struttura InvokeModeOptions
ms.date: 03/22/2018
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::InvokeModeOptions
helpviewer_keywords:
- InvokeModeOptions structure
- InvokeMode enum
ms.openlocfilehash: 9bca49479d97ee371f6728f90a9aa96da0387f54
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213837"
---
# <a name="invokemodeoptions-structure"></a>Struttura InvokeModeOptions

Specifica se generare tutti gli eventi nella coda dei delegati o di interrompere l'attivazione dopo la generazione di un errore. I valori consentiti sono specificati nell'enumerazione `InvokeMode`.

## <a name="syntax"></a>Sintassi

```cpp
enum InvokeMode
{
   StopOnFirstError = 1,
   FireAll = 2,
};

struct InvokeModeOptions
{
   static const InvokeMode invokeMode = invokeModeValue;
};
```

## <a name="requirements"></a>Requisiti

**Intestazione:** Event. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](microsoft-wrl-namespace.md)<br/>
[Classe Microsoft:: WRL:: AgileEventSource](agileeventsource-class.md)
