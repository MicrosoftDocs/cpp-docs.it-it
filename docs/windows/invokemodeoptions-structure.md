---
title: Struttura InvokeModeOptions | Documenti Microsoft
ms.custom: ''
ms.date: 03/22/2018
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-windows
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::InvokeModeOptions
- event/Microsoft::WRL::InvokeMode
dev_langs:
- C++
helpviewer_keywords:
- InvokeModeOptions structure
- InvokeMode enum
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b27789f582b383530a675da83456a100780760b4
ms.sourcegitcommit: 1d11412c8f5e6ddf4edded89e0ef5097cc89f812
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/22/2018
---
# <a name="invokemodeoptions-structure"></a>Struttura InvokeModeOptions

Specifica se per generare tutti gli eventi nella coda di delegato, o di interrompere la generazione dopo che viene generato un errore. I valori consentiti specificati nella `InvokeMode` enum.

## <a name="syntax"></a>Sintassi

```
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

[Microsoft:: wrl Namespace](../windows/microsoft-wrl-namespace.md)
[Microsoft::WRL::AgileEventSource (classe)](../windows/agileeventsource-class.md)