---
title: Identificatori di classi di archiviazione static
ms.date: 11/04/2016
helpviewer_keywords:
- static variables, specifier
- storage classes, static
- static storage class specifiers
ms.assetid: 9bce361e-919b-46b9-8148-40d7ab0eb024
ms.openlocfilehash: e84e2745c6077f038f47295119936a1ad6431bdd
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87229493"
---
# <a name="static-storage-class-specifier"></a>Identificatori di classi di archiviazione static

Una variabile dichiarata a livello interno con l' **`static`** identificatore della classe di archiviazione ha una durata globale ma è visibile solo all'interno del blocco in cui è dichiarata. Per le stringhe costanti, **`static`** l'uso di è utile perché riduce il sovraccarico dell'inizializzazione frequente nelle funzioni chiamate spesso.

## <a name="remarks"></a>Osservazioni

Se non si inizializza in modo esplicito una **`static`** variabile, viene inizializzata su 0 per impostazione predefinita. All'interno di una funzione, lo **`static`** spazio di archiviazione viene allocato e funge da definizione. Le variabili statiche interne forniscono memoria privata, permanente e visibile a una sola funzione.

## <a name="see-also"></a>Vedere anche

[Classi di archiviazione C](c-storage-classes.md)<br/>
[Classi di archiviazione (C++)](../cpp/storage-classes-cpp.md)
