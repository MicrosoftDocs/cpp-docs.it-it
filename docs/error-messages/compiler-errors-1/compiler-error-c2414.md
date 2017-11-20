---
title: Errore del compilatore C2414 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2414
dev_langs: C++
helpviewer_keywords: C2414
ms.assetid: bbe94e03-862e-4990-b15e-544ae464727d
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: f3b532fdb8448f616916adcaf047dc83923f62c0
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c2414"></a>Errore del compilatore C2414
numero non valido di operandi  
  
### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolvere il problema, verificare le seguenti cause possibili:  
  
1.  Il codice operativo non supporta il numero di operandi utilizzati. Controllare un manuale di riferimento del linguaggio assembly per determinare il numero corretto di operandi.  
  
2.  Un processore più recente supporta l'istruzione con un numero diverso di operandi. Regolare il [/arch (architettura minima della CPU)](../../build/reference/arch-minimum-cpu-architecture.md) opzione per usare il processore di versioni successive.