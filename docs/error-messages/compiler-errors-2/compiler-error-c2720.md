---
title: Errore del compilatore C2720 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2720
dev_langs:
- C++
helpviewer_keywords:
- C2720
ms.assetid: 9ee3aab7-711b-4f5a-b2f1-cb62b130f1ce
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8c6215cd2e83f1fa3a48c3cbd4970cd2d3466fc0
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2720"></a>Errore del compilatore C2720  
  
> '*identificatore*': '*identificatore*' identificatore classe di archiviazione non valido per i membri  
  
La classe di archiviazione non può essere usata per i membri della classe esterni alla dichiarazione. Per correggere l'errore, rimuovere il non necessari [classe di archiviazione](../../cpp/storage-classes-cpp.md) identificatore dalla definizione del membro all'esterno della dichiarazione di classe.  
  
## <a name="example"></a>Esempio  
  
L'esempio seguente genera l'errore C2720 e mostra come risolverlo:  
  
```cpp  
// C2720.cpp  
struct S {  
   static int i;  
};  
static S::i;   // C2720 - remove the unneeded 'static' to fix it  
```