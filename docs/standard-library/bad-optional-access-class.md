---
title: Classe bad_optional_access
ms.date: 11/04/2016
f1_keywords:
- optional/std::bad_optional_access
ms.assetid: 89a3b805-ab60-4858-b772-5855130c11b1
ms.openlocfilehash: f898d1e30dd173339192bdb3b75581d12b62fca7
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68269143"
---
# <a name="badoptionalaccess-class"></a>Classe bad_optional_access

Definisce il tipo di oggetti generati come eccezioni per segnalare la situazione in cui viene effettuato un tentativo per accedere al valore di un `optional` oggetti che non contengono un valore.

## <a name="syntax"></a>Sintassi

```cpp
class bad_optional_access : public exception
{
    public: bad_optional_access();
};
```
