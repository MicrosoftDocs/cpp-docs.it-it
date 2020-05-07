---
title: Archiviazione di unioni
ms.date: 11/04/2016
helpviewer_keywords:
- storage, union
- union keyword [C], storage
- union keyword [C]
ms.assetid: b33d246a-8d20-41c4-89b2-ab05f1428792
ms.openlocfilehash: 49b99dc17fd7bdddd8a47e3bfd5913a70a7631a7
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62157929"
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

I membri dell'unione `x` sono, nell'ordine di dichiarazione, un puntatore a un valore `char`, un valore `char` e una matrice di valori **float**. Lo spazio di archiviazione allocato per `x` è lo spazio di archiviazione necessario per la matrice `f`di 20 elementi, poiché `f` è il membro più lungo dell'unione. Poiché nessun tag è associato all'unione, il tipo è senza nome o "anonimo".

## <a name="see-also"></a>Vedere anche

[Dichiarazioni di Unione](../c-language/union-declarations.md)
