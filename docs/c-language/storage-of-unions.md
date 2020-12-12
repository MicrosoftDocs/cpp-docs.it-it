---
description: 'Altre informazioni su: archiviazione di unioni'
title: Archiviazione di unioni
ms.date: 11/04/2016
helpviewer_keywords:
- storage, union
- union keyword [C], storage
- union keyword [C]
ms.assetid: b33d246a-8d20-41c4-89b2-ab05f1428792
ms.openlocfilehash: bd95f1c1955049299192d0b4dbd333c86aecce25
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97205278"
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

## <a name="see-also"></a>Vedi anche

[Dichiarazioni di Unione](../c-language/union-declarations.md)
