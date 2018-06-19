---
title: Errore del compilatore C3286 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3286
dev_langs:
- C++
helpviewer_keywords:
- C3286
ms.assetid: 554328c8-cf44-4f7d-a8d2-def74d28ecdd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: dc47c103e93fe1e4f20f5007c6688b5b6648bf32
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33248183"
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