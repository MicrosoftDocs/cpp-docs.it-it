---
title: Compilatore avviso (livello 1) C4377 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4377
dev_langs:
- C++
helpviewer_keywords:
- C4377
ms.assetid: a1c797b8-cd5e-4a56-b430-d07932e811cf
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b2cf61aa35bcfc40a40febb9e066caba6decd682
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4377"></a>Avviso del compilatore (livello 1) C4377
tipi nativi sono privati per impostazione predefinita. -d1PrivateNativeTypes è deprecato  
  
 Nelle versioni precedenti, i tipi nativi negli assembly erano pubblici per impostazione predefinita e un'opzione del compilatore non documentata (**/d1PrivateNativeTypes**) è stato utilizzato in modo privato.  
  
 Tutti i tipi, nativi e CLR, sono ora privati per impostazione predefinita in un assembly, in modo **/d1PrivateNativeTypes** non è più necessario.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4377.  
  
```  
// C4377.cpp  
// compile with: /clr /d1PrivateNativeTypes /W1  
// C4377 warning expected  
int main() {}  
```