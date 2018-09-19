---
title: sptr, uptr | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- __uptr_cpp
- __sptr_cpp
dev_langs:
- C++
helpviewer_keywords:
- __sptr modifier
- __uptr modifier
ms.assetid: c7f5f3b2-9106-4a0b-a6de-d1588ab153ed
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 269fe70a5a40a90a512c826e98ba2c8ea698a55b
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46052517"
---
# <a name="sptr-uptr"></a>__sptr, __uptr

**Sezione specifica Microsoft**

Usare la **sptr** oppure **uptr** modificatore in una dichiarazione di puntatore a 32 bit per specificare come il compilatore converte un puntatore a 32 bit in un puntatore a 64 bit. Un puntatore a 32 bit viene convertito, ad esempio, quando viene assegnato a una variabile puntatore a 64 bit o è dereferenziato su una piattaforma a 64 bit.

La documentazione di Microsoft per il supporto delle piattaforme a 64 bit talvolta si riferisce al bit più significativo di un puntatore a 32 bit come il bit di segno. Per impostazione predefinita, il compilatore utilizza l'estensione del segno per convertire un puntatore a 32 bit in un puntatore a 64 bit. Pertanto i 32 bit meno significativi del puntatore a 64 bit vengono impostati sul valore del puntatore a 32 bit e i 32 bit più significativi vengono impostati sul valore di bit di segno del puntatore a 32 bit. Questa conversione produce risultati corretti se il bit di segno è pari a 0, ma non se il bit di segno è pari a 1. Ad esempio, l'indirizzo 0x7FFFFFFF a 32 bit produce l'indirizzo 0x000000007FFFFFFF equivalente a 64 bit, ma l'indirizzo 0x80000000 a 32 bit vien modificato in modo errato in 0xFFFFFFFF80000000.

Il **sptr**, oppure puntatore con segno, modificatore specifica che una conversione del puntatore imposta i bit più significativi di un puntatore a 64 bit sul bit di segno del puntatore a 32 bit. Il **uptr**, oppure puntatore senza segno, modificatore specifica che una conversione imposta i bit più significativi su zero. Le dichiarazioni seguenti mostrano il **sptr** e **uptr** modificatori usati con due puntatori non qualificati, due puntatori qualificati con il [__ptr32](../cpp/ptr32-ptr64.md) tipo e una funzione parametro.

```cpp
int * __sptr psp;
int * __uptr pup;
int * __ptr32 __sptr psp32;
int * __ptr32 __uptr pup32;
void MyFunction(char * __uptr __ptr32 myValue);
```

Usare la **sptr** e **uptr** modificatori con dichiarazioni del puntatore. Usare i modificatori nella posizione di un [qualificatore di tipo puntatore](../c-language/pointer-declarations.md), ossia il modificatore deve seguire l'asterisco. Non è possibile usare i modificatori con [puntatori a membri](../cpp/pointers-to-members.md). I modificatori non influiscono sulle dichiarazioni di tipo non puntatore.

## <a name="example"></a>Esempio

L'esempio seguente dichiara i puntatori a 32 bit che usano il **sptr** e **uptr** modificatori, viene assegnato ciascun puntatore a 32 bit a una variabile puntatore a 64 bit e quindi Visualizza il valore esadecimale di ogni 64 - puntatore di bit. Nell'esempio viene eseguita la compilazione con il compilatore nativo a 64 bit e viene effettuata l'esecuzione su una piattaforma a 64 bit.

```cpp
// sptr_uptr.cpp
// processor: x64
#include "stdio.h"

int main()
{
    void *        __ptr64 p64;
    void *        __ptr32 p32d; //default signed pointer
    void * __sptr __ptr32 p32s; //explicit signed pointer
    void * __uptr __ptr32 p32u; //explicit unsigned pointer

// Set the 32-bit pointers to a value whose sign bit is 1.
    p32d = reinterpret_cast<void *>(0x87654321);
    p32s = p32d;
    p32u = p32d;

// The printf() function automatically displays leading zeroes with each 32-bit pointer. These are unrelated
// to the __sptr and __uptr modifiers.
    printf("Display each 32-bit pointer (as an unsigned 64-bit pointer):\n");
    printf("p32d:       %p\n", p32d);
    printf("p32s:       %p\n", p32s);
    printf("p32u:       %p\n", p32u);

    printf("\nDisplay the 64-bit pointer created from each 32-bit pointer:\n");
    p64 = p32d;
    printf("p32d: p64 = %p\n", p64);
    p64 = p32s;
    printf("p32s: p64 = %p\n", p64);
    p64 = p32u;
    printf("p32u: p64 = %p\n", p64);
    return 0;
}
```

```Output
Display each 32-bit pointer (as an unsigned 64-bit pointer):
p32d:       0000000087654321
p32s:       0000000087654321
p32u:       0000000087654321

Display the 64-bit pointer created from each 32-bit pointer:
p32d: p64 = FFFFFFFF87654321
p32s: p64 = FFFFFFFF87654321
p32u: p64 = 0000000087654321
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Modificatori specifici Microsoft](../cpp/microsoft-specific-modifiers.md)