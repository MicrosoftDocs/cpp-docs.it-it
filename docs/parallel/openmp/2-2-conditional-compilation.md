---
title: 2.2 Compilazione condizionale
ms.date: 11/04/2016
ms.assetid: 8f9c914d-736c-48cf-899d-c8029dbe1e32
ms.openlocfilehash: 9dc107ee9e5328df205d4b6f826f71c23abfb3ba
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50658549"
---
# <a name="22-conditional-compilation"></a>2.2 Compilazione condizionale

La _**OPENMP** nome della macro viene definita da implementazioni conformi OpenMP come costante decimale *yyyymm*, che sarà l'anno e mese della specifica approvata. Questa macro non deve essere oggetto di un **#define** o una **#undef** pre-elaborazione della direttiva.

```
#ifdef _OPENMP
iam = omp_get_thread_num() + index;
#endif
```

Se i fornitori di definiscono le estensioni e OpenMP, si possono specificare altre macro predefinite.