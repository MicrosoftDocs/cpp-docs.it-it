---
title: Collegamento interno
ms.date: 11/04/2016
helpviewer_keywords:
- internal linkage
- linkage [C++], internal
ms.assetid: 80be7b51-c930-43db-94d6-4f09a64077bf
ms.openlocfilehash: 79601af27f847a3afe7e8bdaefa926cd45459847
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56150740"
---
# <a name="internal-linkage"></a>Collegamento interno

Se la dichiarazione di un identificatore di ambito file per un oggetto o una funzione contiene *storage-class-specifier* **static**, l'identificatore dispone di collegamento interno. In caso contrario, l'identificatore disporrà di collegamento esterno. Per la descrizione di [storage-class-specifier](../c-language/c-storage-classes.md) non terminale, vedere *Classi di archiviazione*.

Nell'unità di conversione, ogni istanza di un identificatore con collegamento interno indica lo stesso identificatore o la stessa funzione. Gli identificatori collegati internamente sono specifici di un'unità di conversione.

## <a name="see-also"></a>Vedere anche

[Uso di extern per specificare un collegamento](../cpp/using-extern-to-specify-linkage.md)
