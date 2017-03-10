---
title: Identificatori di classi di archiviazione static | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
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
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Human Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: 34f60570d18882ddfb7ebef78977d6b2f5c82000
ms.lasthandoff: 02/24/2017

---
# <a name="static-storage-class-specifier"></a>Identificatori di classi di archiviazione static
Una variabile dichiarata a livello interno con l'identificatore di classe di archiviazione **static** ha una durata globale, ma è visibile solo all'interno del blocco in cui è dichiarata. Per le stringhe costanti, l'uso di **static** è utile perché riduce il sovraccarico dovuto a inizializzazioni frequenti nelle funzioni chiamate più spesso.  
  
## <a name="remarks"></a>Osservazioni  
Se non viene inizializzata in modo esplicito, una variabile **static** viene inizializzata su 0 per impostazione predefinita. All'interno di una funzione, **static** determina l'allocazione della memoria e funge da definizione. Le variabili statiche interne forniscono memoria privata, permanente e visibile a una sola funzione.  
  
## <a name="see-also"></a>Vedere anche  
[Classi di archiviazione C](c-storage-classes.md)  
[Classi di archiviazione (C++)](../cpp/storage-classes-cpp.md)  
