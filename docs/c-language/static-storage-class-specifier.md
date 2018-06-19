---
title: Identificatori di classi di archiviazione static | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- static variables, specifier
- storage classes, static
- static storage class specifiers
ms.assetid: 9bce361e-919b-46b9-8148-40d7ab0eb024
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8a7d61e39eb706721ddf936f88f5df02a6eddf96
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32386316"
---
# <a name="static-storage-class-specifier"></a>Identificatori di classi di archiviazione static
Una variabile dichiarata a livello interno con l'identificatore di classe di archiviazione **static** ha una durata globale, ma è visibile solo all'interno del blocco in cui è dichiarata. Per le stringhe costanti, l'uso di **static** è utile perché riduce il sovraccarico dovuto a inizializzazioni frequenti nelle funzioni chiamate più spesso.  
  
## <a name="remarks"></a>Note  
Se non viene inizializzata in modo esplicito, una variabile **static** viene inizializzata su 0 per impostazione predefinita. All'interno di una funzione, **static** determina l'allocazione della memoria e funge da definizione. Le variabili statiche interne forniscono memoria privata, permanente e visibile a una sola funzione.  
  
## <a name="see-also"></a>Vedere anche  
[Classi di archiviazione C](c-storage-classes.md)  
[Classi di archiviazione (C++)](../cpp/storage-classes-cpp.md)  