---
title: Percorsi di ricerca dei dipendenti
ms.date: 11/04/2016
helpviewer_keywords:
- NMAKE program, dependents
- dependents, NMAKE
ms.assetid: bf998e47-da74-48b5-891d-d3d8ce57264b
ms.openlocfilehash: 9f2251a5fff9d708a783797d04606572e5ebce62
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57426459"
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

[Dipendenti](../build/dependents.md)
