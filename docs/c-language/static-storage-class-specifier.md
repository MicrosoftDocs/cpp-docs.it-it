---
title: Identificatori di classi di archiviazione static
ms.date: 11/04/2016
helpviewer_keywords:
- static variables, specifier
- storage classes, static
- static storage class specifiers
ms.assetid: 9bce361e-919b-46b9-8148-40d7ab0eb024
ms.openlocfilehash: ef85ee4d757cb9579431427fba7b46a0e5ac905f
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56148231"
---
# <a name="static-storage-class-specifier"></a>Identificatori di classi di archiviazione static

Una variabile dichiarata a livello interno con l'identificatore di classe di archiviazione **static** ha una durata globale, ma è visibile solo all'interno del blocco in cui è dichiarata. Per le stringhe costanti, l'uso di **static** è utile perché riduce il sovraccarico dovuto a inizializzazioni frequenti nelle funzioni chiamate più spesso.

## <a name="remarks"></a>Osservazioni

Se non viene inizializzata in modo esplicito, una variabile **static** viene inizializzata su 0 per impostazione predefinita. All'interno di una funzione, **static** determina l'allocazione della memoria e funge da definizione. Le variabili statiche interne forniscono memoria privata, permanente e visibile a una sola funzione.

## <a name="see-also"></a>Vedere anche

[Classi di archiviazione C](c-storage-classes.md)<br/>
[Classi di archiviazione (C++)](../cpp/storage-classes-cpp.md)
