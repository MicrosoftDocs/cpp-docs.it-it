---
title: Compilatore avviso (livello 1) C4041 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4041
dev_langs:
- C++
helpviewer_keywords:
- C4041
ms.assetid: 107ee9fd-4b88-4f22-a18f-a20726831095
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 42779d33cad8fc867b08b412d2ded294360a0812
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4041"></a>Avviso del compilatore (livello 1) C4041
limite del compilatore: termine output per il browser  
  
 Le informazioni di visualizzazione hanno superato il limite del compilatore.  
  
 Questo avviso può essere causato dalla compilazione con [/FR](../../build/reference/fr-fr-create-dot-sbr-file.md) (informazioni di visualizzazione con variabili locali).  
  
### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili  
  
1.  Compilare con /Fr (informazioni di visualizzazione senza variabili locali).  
  
2.  Disabilitare l'output per il browser (compilare senza /FR o /Fr).