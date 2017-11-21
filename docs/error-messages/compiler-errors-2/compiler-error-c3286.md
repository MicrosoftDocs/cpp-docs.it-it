---
title: Errore del compilatore C3286 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C3286
dev_langs: C++
helpviewer_keywords: C3286
ms.assetid: 554328c8-cf44-4f7d-a8d2-def74d28ecdd
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: ea704fce0aebd3ffa83410104b38ceb5d359a6c6
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c3286"></a>Errore del compilatore C3286  
  
> '*identificatore*': una variabile di iterazione non può avere identificatori di classe di archiviazione  
  
Impossibile specificare una classe di archiviazione in una variabile di iterazione. Per ulteriori informazioni, vedere [classi di archiviazione (C++)](../../cpp/storage-classes-cpp.md) e [per ognuno, in](../../dotnet/for-each-in.md).  
  
## <a name="example"></a>Esempio  
  
L'esempio seguente genera l'errore C3286 e inoltre illustrato l'utilizzo corretto.  
  
```cpp  
// C3286.cpp  
// compile with: /clr  
int main() {  
   array<int> ^p = { 1, 2, 3 };  
   for each (static int i in p) {}   // C3286   
   for each (int j in p) {}   // OK  
}  
```