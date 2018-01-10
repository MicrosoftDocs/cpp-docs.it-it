---
title: Errore del compilatore C2720 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2720
dev_langs: C++
helpviewer_keywords: C2720
ms.assetid: 9ee3aab7-711b-4f5a-b2f1-cb62b130f1ce
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: cfd1e41ea3b9479f07faa9a1cbf0739bc0b7e8b6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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