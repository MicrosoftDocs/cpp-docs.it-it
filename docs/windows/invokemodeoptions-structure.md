---
title: Struttura InvokeModeOptions | Documenti Microsoft
ms.custom: ''
ms.date: 03/22/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::InvokeModeOptions
dev_langs:
- C++
helpviewer_keywords:
- InvokeModeOptions structure
- InvokeMode enum
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5b1eb0e7f6cf49a7c6ac12a4810ae1622e263e2f
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="invokemodeoptions-structure"></a>Struttura InvokeModeOptions

Specifica se per generare tutti gli eventi nella coda di delegato, o di interrompere la generazione dopo che viene generato un errore. I valori consentiti specificati nella `InvokeMode` enum.

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

[Microsoft:: wrl Namespace](../windows/microsoft-wrl-namespace.md)
[Microsoft::WRL::AgileEventSource (classe)](../windows/agileeventsource-class.md)