---
title: Compilatore avviso (livelli 2 e 3) C4008 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C4008
dev_langs: C++
helpviewer_keywords: C4008
ms.assetid: fb45e535-cb68-4743-80e9-a6e34cfffeca
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: da08cbd68cc1044ac62fbcdc20d3e5aa326c63ac
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-levels-2-and-3-c4008"></a>Avviso del compilatore (livelli 2 e 3) C4008
'identifier': attributo 'attribute' ignorato  
  
 Il compilatore ha ignorato l'attributo `__fastcall`, **static**o **inline** per una funzione (avviso di livello 3) o per i dati (avviso di livello 2).  
  
### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili  
  
1.  Attributo`__fastcall` con i dati.  
  
2.  Attributo**static** o **inline** con la funzione **main** .