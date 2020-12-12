---
description: 'Altre informazioni su: bad_any_cast Class'
title: Classe bad_any_cast
ms.date: 04/04/2019
f1_keywords:
- any/std::bad_any_cast
- any/std::bad_any_cast::what
helpviewer_keywords:
- any/std::bad_any_cast
- any/std::bad_any_cast::what
ms.openlocfilehash: 5b38405bf1fc826592995df4037c5853e88ad9eb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97321627"
---
# <a name="bad_any_cast-class"></a>Classe bad_any_cast

Oggetti generati da un oggetto non riuscito `any_cast` .

## <a name="syntax"></a>Sintassi

```cpp
class bad_any_cast
```

### <a name="member-functions"></a>Funzioni membro

|Nome|Description|
|-|-|
|[cosa](#what)|Restituisce il tipo.|

## <a name="what"></a><a name="what"></a> cosa

Restituisce il tipo.

```cpp
const char* what() const noexcept override;
```
