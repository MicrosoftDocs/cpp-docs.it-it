---
title: Classe bad_any_cast
ms.date: 04/04/2019
f1_keywords:
- any/std::bad_any_cast
- any/std::bad_any_cast::what
helpviewer_keywords:
- any/std::bad_any_cast
- any/std::bad_any_cast::what
ms.openlocfilehash: b47ca4f615c6f317f17ce64e8388ae5d698185ea
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88844587"
---
# <a name="bad_any_cast-class"></a>Classe bad_any_cast

Oggetti generati da un oggetto non riuscito `any_cast` .

## <a name="syntax"></a>Sintassi

```cpp
class bad_any_cast
```

### <a name="member-functions"></a>Funzioni membro

|Nome|Descrizione|
|-|-|
|[cosa](#what)|Restituisce il tipo.|

## <a name="what"></a><a name="what"></a> cosa

Restituisce il tipo.

```cpp
const char* what() const noexcept override;
```
