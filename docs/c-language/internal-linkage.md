---
description: 'Altre informazioni su: collegamento interno'
title: Collegamento interno
ms.date: 11/04/2016
helpviewer_keywords:
- internal linkage
- linkage [C++], internal
ms.assetid: 80be7b51-c930-43db-94d6-4f09a64077bf
ms.openlocfilehash: a22de598f119ec303cb7ea78255c2537c6ed306e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97181865"
---
# <a name="internal-linkage"></a>Collegamento interno

Se la dichiarazione di un identificatore di ambito file per un oggetto o una funzione contiene *Storage-Class-specifier* **`static`** , l'identificatore dispone di un collegamento interno. In caso contrario, l'identificatore disporrà di collegamento esterno. Per la descrizione di [storage-class-specifier](../c-language/c-storage-classes.md) non terminale, vedere *Classi di archiviazione*.

Nell'unità di conversione, ogni istanza di un identificatore con collegamento interno indica lo stesso identificatore o la stessa funzione. Gli identificatori collegati internamente sono specifici di un'unità di conversione.

## <a name="see-also"></a>Vedi anche

[Uso di extern per specificare un collegamento](../cpp/extern-cpp.md)
