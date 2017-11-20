---
title: Compilatore avviso (livello 4) C4212 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4212
dev_langs: C++
helpviewer_keywords: C4212
ms.assetid: df781ea1-182d-4f9f-9a31-55b6ce80c711
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: bffec0b612bbf815eb3579e78104dd8e3599bdb5
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-4-c4212"></a>Avviso del compilatore (livello 4) C4212
utilizzata estensione non standard: dichiarazione di funzione utilizzato i puntini di sospensione  
  
 Il prototipo di funzione è un numero variabile di argomenti. Non è la definizione di funzione.  
  
 L'esempio seguente genera l'errore C4212:  
  
```  
// C4212.c  
// compile with: /W4 /Ze /c  
void f(int , ...);  
void f(int i, int j) {}  
```