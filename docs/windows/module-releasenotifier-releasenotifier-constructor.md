---
title: Costruttore Module::ReleaseNotifier::ReleaseNotifier | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Module::ReleaseNotifier::ReleaseNotifier
dev_langs:
- C++
helpviewer_keywords:
- ReleaseNotifier, constructor
ms.assetid: 889a3c9a-2366-44a1-ba7d-a59c1885e7f3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e43abd46ccfb150936ff435360611289f18a1270
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46405021"
---
# <a name="modulereleasenotifierreleasenotifier-constructor"></a>Costruttore Module::ReleaseNotifier::ReleaseNotifier

Inizializza una nuova istanza di **Module:: releasenotifier** classe.

## <a name="syntax"></a>Sintassi

```cpp
ReleaseNotifier(bool release) throw();
```

### <a name="parameters"></a>Parametri

*release*<br/>
**true** per eliminare questa istanza quando la `Release` viene chiamato; **false** non eliminare questa istanza.

## <a name="exceptions"></a>Eccezioni

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe Module::ReleaseNotifier](../windows/module-releasenotifier-class.md)