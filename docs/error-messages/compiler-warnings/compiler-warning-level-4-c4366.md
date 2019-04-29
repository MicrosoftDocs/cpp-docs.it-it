---
title: Avviso del compilatore (livello 4) C4366
ms.date: 11/04/2016
f1_keywords:
- C4366
helpviewer_keywords:
- C4366
ms.assetid: 65d2942f-3741-42f4-adf2-4920d5a055ca
ms.openlocfilehash: 11fcb0070359201de39ca5f33c83d000e02f0835
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62391556"
---
# <a name="compiler-warning-level-4-c4366"></a>Avviso del compilatore (livello 4) C4366

Il risultato dell'operatore 'operator' unario potrebbe essere non allineato

Se un membro di struttura non è stato possibile mai essere allineato a causa della compressione, il compilatore genererà un avviso quando che indirizzo del membro viene assegnato a un puntatore allineato. Per impostazione predefinita, tutti i puntatori sono allineati.

Per risolvere C4366, modificare l'allineamento della struttura o il puntatore dichiarato con la [unaligned](../../cpp/unaligned.md) (parola chiave).

Per altre informazioni, vedere unaligned e [pack](../../preprocessor/pack.md).

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