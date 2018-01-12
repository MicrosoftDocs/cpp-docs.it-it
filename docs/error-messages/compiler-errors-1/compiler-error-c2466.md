---
title: Errore del compilatore C2466 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2466
dev_langs: C++
helpviewer_keywords: C2466
ms.assetid: 75b251d1-7d0b-4a86-afca-26adedf74486
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 3a41ea550abff9e48973452996cf5621e6bc4c42
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2466"></a>Errore del compilatore C2466
Impossibile allocare una matrice di dimensione costante 0  
  
 Una matrice viene allocata o dichiarata con dimensione zero. L'espressione costante per la dimensione della matrice deve essere un numero intero maggiore di zero. Una dichiarazione di matrice con dimensione zero è valida solo per una classe, struttura o membro di unione e solo con le estensioni Microsoft ([/Ze](../../build/reference/za-ze-disable-language-extensions.md)).  
  
 L'esempio seguente genera l'errore C2466:  
  
```  
// C2466.cpp  
// compile with: /c  
int i[0];   // C2466  
int j[1];   // OK  
char *p;  
```