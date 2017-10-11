---
title: Identificatori di classi di archiviazione static | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- static variables, specifier
- storage classes, static
- static storage class specifiers
ms.assetid: 9bce361e-919b-46b9-8148-40d7ab0eb024
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 16d1bf59dfd4b3ef5f037aed9c0f6febfdf1a2e8
ms.openlocfilehash: 0a51dfc10ac0ae05a67a280b4b76c2c92eb57a0b
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="static-storage-class-specifier"></a>Identificatori di classi di archiviazione static
Una variabile dichiarata a livello interno con l'identificatore di classe di archiviazione **static** ha una durata globale, ma è visibile solo all'interno del blocco in cui è dichiarata. Per le stringhe costanti, l'uso di **static** è utile perché riduce il sovraccarico dovuto a inizializzazioni frequenti nelle funzioni chiamate più spesso.  
  
## <a name="remarks"></a>Osservazioni  
Se non viene inizializzata in modo esplicito, una variabile **static** viene inizializzata su 0 per impostazione predefinita. All'interno di una funzione, **static** determina l'allocazione della memoria e funge da definizione. Le variabili statiche interne forniscono memoria privata, permanente e visibile a una sola funzione.  
  
## <a name="see-also"></a>Vedere anche  
[Classi di archiviazione C](c-storage-classes.md)  
[Classi di archiviazione (C++)](../cpp/storage-classes-cpp.md)  
