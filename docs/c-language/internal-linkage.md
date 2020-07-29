---
title: Collegamento interno
ms.date: 11/04/2016
helpviewer_keywords:
- internal linkage
- linkage [C++], internal
ms.assetid: 80be7b51-c930-43db-94d6-4f09a64077bf
ms.openlocfilehash: 3709ca815877b98fe5dfe6e5b2eca6b5c627641b
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87229597"
---
# <a name="internal-linkage"></a>Collegamento interno

Se la dichiarazione di un identificatore di ambito file per un oggetto o una funzione contiene *Storage-Class-specifier* **`static`** , l'identificatore dispone di un collegamento interno. In caso contrario, l'identificatore disporrà di collegamento esterno. Per la descrizione di [storage-class-specifier](../c-language/c-storage-classes.md) non terminale, vedere *Classi di archiviazione*.

Nell'unità di conversione, ogni istanza di un identificatore con collegamento interno indica lo stesso identificatore o la stessa funzione. Gli identificatori collegati internamente sono specifici di un'unità di conversione.

## <a name="see-also"></a>Vedere anche

[Uso di extern per specificare un collegamento](../cpp/using-extern-to-specify-linkage.md)
