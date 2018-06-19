---
title: Compilatore avviso (livello 4) C4366 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4366
dev_langs:
- C++
helpviewer_keywords:
- C4366
ms.assetid: 65d2942f-3741-42f4-adf2-4920d5a055ca
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 12410a567cb55d6dea74b8e5e595009e56b1071f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33293702"
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