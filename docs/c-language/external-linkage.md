---
title: Collegamento esterno
ms.date: 11/04/2016
helpviewer_keywords:
- linkage [C++], external
- external linkage, about external linkage
- external linkage
ms.assetid: a6f8ea69-b405-4cdd-bf12-ad5462b73183
ms.openlocfilehash: d8a7655b7504aa8458bda8db24ff3f919b5b09c1
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91509915"
---
# <a name="external-linkage"></a>Collegamento esterno

Se la prima dichiarazione a livello di ambito file per un identificatore non usa l' **`static`** identificatore della classe di archiviazione, l'oggetto dispone di un collegamento esterno.

Se la dichiarazione di un identificatore per una funzione non dispone di *Storage-Class-specifier*, il relativo collegamento è determinato esattamente come se fosse dichiarato con *Storage-Class-specifier* **`extern`** . Se la dichiarazione di un identificatore per un oggetto ha un ambito file e nessun *storage-class-specifier*, il relativo collegamento è esterno.

Il nome di un identificatore con collegamento esterno definisce la stessa funzione o oggetto dati di una qualunque altra dichiarazione per lo stesso nome con collegamento esterno. Le due dichiarazioni possono trovarsi nella stessa unità di conversione o in unità di conversione diverse. Se l'oggetto o la funzione dispongono anche di durata globale, l'oggetto o la funzione sono condivisi dall'intero programma.

## <a name="see-also"></a>Vedere anche

[Uso di extern per specificare un collegamento](../cpp/extern-cpp.md)
