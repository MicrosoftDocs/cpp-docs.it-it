---
title: Archiviazione di unioni
ms.date: 11/04/2016
helpviewer_keywords:
- storage, union
- union keyword [C], storage
- union keyword [C]
ms.assetid: b33d246a-8d20-41c4-89b2-ab05f1428792
ms.openlocfilehash: 64e8b5184eeccd4de6d196e40ec464807bec93e7
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87211658"
---
# <a name="storage-of-unions"></a>Archiviazione di unioni

Lo spazio di archiviazione associato a una variabile di unione è lo spazio di archiviazione necessario per il membro di dimensioni maggiori dell'unione. Quando un membro di dimensioni più piccole viene archiviato, la variabile di unione può contenere lo spazio di memoria inutilizzato. Tutti i membri vengono archiviati nello stesso spazio di memoria e iniziano allo stesso indirizzo. Il valore archiviato viene sovrascritto ogni volta che un valore viene assegnato a un membro diverso. Ad esempio:

```
union         /* Defines a union named x */
{
    char *a, b;
    float f[20];
} x;
```

I membri dell' `x` Unione sono, nell'ordine di dichiarazione, un puntatore a un **`char`** valore, un **`char`** valore e una matrice di **`float`** valori. Lo spazio di archiviazione allocato per `x` è lo spazio di archiviazione necessario per la matrice `f`di 20 elementi, poiché `f` è il membro più lungo dell'unione. Poiché nessun tag è associato all'unione, il tipo è senza nome o "anonimo".

## <a name="see-also"></a>Vedere anche

[Dichiarazioni di Unione](../c-language/union-declarations.md)
