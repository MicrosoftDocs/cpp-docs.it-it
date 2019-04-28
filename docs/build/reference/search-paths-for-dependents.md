---
title: Percorsi di ricerca dei dipendenti
ms.date: 11/04/2016
helpviewer_keywords:
- NMAKE program, dependents
- dependents, NMAKE
ms.assetid: bf998e47-da74-48b5-891d-d3d8ce57264b
ms.openlocfilehash: bc2c430c43f408065234c9df50977003eafd3cb1
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62318303"
---
# <a name="search-paths-for-dependents"></a>Percorsi di ricerca dei dipendenti

Ogni dipendente presenta un percorso di ricerca facoltativo, specificato come indicato di seguito:

## <a name="syntax"></a>Sintassi

```
{directory[;directory...]}dependent
```

## <a name="remarks"></a>Note

NMAKE cerca un elemento dipendente prima di tutto nella directory corrente, quindi nella directory nell'ordine specificato. Una macro è possibile specificare parzialmente o totalmente un percorso di ricerca. Racchiudere i nomi delle directory tra parentesi graffe ({}); separare più directory con un punto e virgola (;). Spazi o tabulazioni non sono consentite.

## <a name="see-also"></a>Vedere anche

[Dipendenti](dependents.md)
