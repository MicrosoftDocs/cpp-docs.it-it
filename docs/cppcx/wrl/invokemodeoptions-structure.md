---
description: 'Altre informazioni su: struttura InvokeModeOptions'
title: Struttura InvokeModeOptions
ms.date: 03/22/2018
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::InvokeModeOptions
helpviewer_keywords:
- InvokeModeOptions structure
- InvokeMode enum
ms.openlocfilehash: 1e1382242c95c47355239c220c43c278280dd451
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97298981"
---
# <a name="invokemodeoptions-structure"></a>Struttura InvokeModeOptions

Specifica se generare tutti gli eventi nella coda dei delegati o di interrompere l'attivazione dopo la generazione di un errore. I valori consentiti sono specificati nell' `InvokeMode` enumerazione.

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

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Microsoft:: WRL](microsoft-wrl-namespace.md)<br/>
[Classe Microsoft:: WRL:: AgileEventSource](agileeventsource-class.md)
