---
title: 2.2 compilazione condizionale | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 8f9c914d-736c-48cf-899d-c8029dbe1e32
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 25b52ce624777efe85e27b8ce5e7941bc2f5dcba
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46440381"
---
# <a name="22-conditional-compilation"></a>2.2 Compilazione condizionale

La _**OPENMP** nome della macro viene definita da implementazioni conformi OpenMP come costante decimale *yyyymm*, che sarà l'anno e mese della specifica approvata. Questa macro non deve essere oggetto di un **#define** o una **#undef** pre-elaborazione della direttiva.

```
#ifdef _OPENMP
iam = omp_get_thread_num() + index;
#endif
```

Se i fornitori di definiscono le estensioni e OpenMP, si possono specificare altre macro predefinite.