---
title: Classe bad_any_cast
ms.date: 04/04/2019
f1_keywords:
- any/std::bad_any_cast
- any/std::bad_any_cast::what
helpviewer_keywords:
- any/std::bad_any_cast
- any/std::bad_any_cast::what
ms.openlocfilehash: 5172281d1918a8b4ac33bcf412bf4be82b04ef56
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68268683"
---
# <a name="badanycast-class"></a>Classe bad_any_cast

Gli oggetti generati da un tentativo fallito `any_cast`.

## <a name="syntax"></a>Sintassi

```cpp
class bad_any_cast
```

### <a name="member-functions"></a>Funzioni membro

|||
|-|-|
|[what](#what)|Restituisce il tipo.|

## <a name="what"></a> Novità

Restituisce il tipo.

```cpp
const char* what() const noexcept override;
```
