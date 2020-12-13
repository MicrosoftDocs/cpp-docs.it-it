---
description: 'Altre informazioni su: bad_optional_access Class'
title: Classe bad_optional_access
ms.date: 08/06/2019
f1_keywords:
- optional/std::bad_optional_access
ms.openlocfilehash: e3439c53766a1890592bde8ed449f5ff2779f347
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97132756"
---
# <a name="bad_optional_access-class"></a>Classe bad_optional_access

Definisce il tipo di oggetti generati come eccezioni per segnalare la situazione in cui viene effettuato un tentativo di accesso al valore di un `optional` oggetto che non contiene un valore.

## <a name="syntax"></a>Sintassi

```cpp
class bad_optional_access : public exception
{
public:
    bad_optional_access() noexcept;
    bad_optional_access(const bad_optional_access&) noexcept;
    bad_optional_access& operator=(const bad_optional_access&) noexcept;
    const char* what() const noexcept override;
};
```

## <a name="see-also"></a>Vedere anche

[\<optional>](optional.md)\
[Classe optional](optional-class.md)
