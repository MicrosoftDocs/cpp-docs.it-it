---
title: Compilatore avviso (livello 4) C4366 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4366
dev_langs: C++
helpviewer_keywords: C4366
ms.assetid: 65d2942f-3741-42f4-adf2-4920d5a055ca
caps.latest.revision: "14"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 0d610bfcf2e432870fc081298d3dfc3a60c73bd4
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-4-c4366"></a>Avviso del compilatore (livello 4) C4366
Il risultato dell'operatore 'operator' unario potrebbe essere non allineato  
  
 Se un membro di struttura può mai essere allineato a causa di compressione, il compilatore genererà un avviso quando che l'indirizzo del membro viene assegnato a un puntatore allineato. Per impostazione predefinita, tutti i puntatori sono allineati.  
  
 Per risolvere C4366, modificare l'allineamento della struttura o dichiarare il puntatore del mouse con il [unaligned](../../cpp/unaligned.md) (parola chiave).  
  
 Per ulteriori informazioni, vedere unaligned e [pack](../../preprocessor/pack.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4366.  
  
```  
// C4366.cpp  
// compile with: /W4 /c  
// processor: IPF x64  
#pragma pack(1)  
struct X {  
   short s1;  
   int s2;  
};  
  
int main() {  
   X x;  
   short * ps1 = &x.s1;   // OK  
   int * ps2 = &x.s2;   // C4366  
}  
```