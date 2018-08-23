---
title: 'Module:: releasenotifier:: richiamo metodo | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Module::ReleaseNotifier::Invoke
dev_langs:
- C++
helpviewer_keywords:
- Invoke method
ms.assetid: f62686fe-74bf-482b-a46b-6a3c09b80e7e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: da71ab887145f3bcb1341b5ea6004a24253a4a5f
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42594500"
---
# <a name="modulereleasenotifierinvoke-method"></a>Metodo Module::ReleaseNotifier::Invoke

Quando implementato, chiama un gestore eventi quando viene rilasciato l'ultimo oggetto in un modulo.

## <a name="syntax"></a>Sintassi

```cpp
virtual void Invoke() = 0;
```

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe Module::ReleaseNotifier](../windows/module-releasenotifier-class.md)