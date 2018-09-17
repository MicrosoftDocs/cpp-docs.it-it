---
title: I percorsi di ricerca dei dipendenti | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- NMAKE program, dependents
- dependents, NMAKE
ms.assetid: bf998e47-da74-48b5-891d-d3d8ce57264b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d1fd407f99abb98fb949b6d5bcc45b10c6ff9121
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45706304"
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