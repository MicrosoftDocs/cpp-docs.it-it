---
description: 'Altre informazioni su: __sptr, __uptr'
title: __sptr, __uptr
ms.date: 10/10/2018
f1_keywords:
- __uptr_cpp
- __sptr_cpp
- __uptr
- __sptr
- _uptr
- _sptr
helpviewer_keywords:
- __sptr modifier
- __uptr modifier
ms.assetid: c7f5f3b2-9106-4a0b-a6de-d1588ab153ed
ms.openlocfilehash: 13e365e0e8258c1860df2f107a3dad0ade76e529
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97113727"
---
# <a name="__sptr-__uptr"></a>__sptr, __uptr

**Specifico di Microsoft**

Usare il **`__sptr`** **`__uptr`** modificatore o in una dichiarazione di puntatore a 32 bit per specificare il modo in cui il compilatore converte un puntatore a 32 bit in un puntatore a 64 bit. Un puntatore a 32 bit viene convertito, ad esempio, quando viene assegnato a una variabile puntatore a 64 bit o è dereferenziato su una piattaforma a 64 bit.

La documentazione di Microsoft per il supporto delle piattaforme a 64 bit talvolta si riferisce al bit più significativo di un puntatore a 32 bit come il bit di segno. Per impostazione predefinita, il compilatore utilizza l'estensione del segno per convertire un puntatore a 32 bit in un puntatore a 64 bit. Pertanto i 32 bit meno significativi del puntatore a 64 bit vengono impostati sul valore del puntatore a 32 bit e i 32 bit più significativi vengono impostati sul valore di bit di segno del puntatore a 32 bit. Questa conversione produce risultati corretti se il bit di segno è pari a 0, ma non se il bit di segno è pari a 1. Ad esempio, l'indirizzo 0x7FFFFFFF a 32 bit produce l'indirizzo 0x000000007FFFFFFF equivalente a 64 bit, ma l'indirizzo 0x80000000 a 32 bit vien modificato in modo errato in 0xFFFFFFFF80000000.

Il **`__sptr`** modificatore, o puntatore firmato, specifica che una conversione del puntatore imposta i bit più significativi di un puntatore a 64 bit sul bit di segno del puntatore a 32 bit. Il **`__uptr`** modificatore, o puntatore senza segno, specifica che una conversione imposta i bit più significativi su zero. Nelle dichiarazioni seguenti vengono illustrati **`__sptr`** i **`__uptr`** modificatori e utilizzati con due puntatori non qualificati, due puntatori qualificati con il tipo di [__ptr32](../cpp/ptr32-ptr64.md) e un parametro di funzione.

```cpp
int * __sptr psp;
int * __uptr pup;
int * __ptr32 __sptr psp32;
int * __ptr32 __uptr pup32;
void MyFunction(char * __uptr __ptr32 myValue);
```

Usare i **`__sptr`** **`__uptr`** modificatori e con le dichiarazioni del puntatore. Usare i modificatori nella posizione di un [qualificatore di tipo puntatore](../c-language/pointer-declarations.md), il che significa che il modificatore deve seguire l'asterisco. Non è possibile usare i modificatori con [puntatori a membri](../cpp/pointers-to-members.md). I modificatori non influiscono sulle dichiarazioni di tipo non puntatore.

Per compatibilità con le versioni precedenti, **_sptr** e **_uptr** sono sinonimi per **`__sptr`** e, **`__uptr`** a meno che non sia specificata l'opzione del compilatore [/za \( Disable Language Extensions)](../build/reference/za-ze-disable-language-extensions.md) .

## <a name="example"></a>Esempio

Nell'esempio seguente vengono dichiarati puntatori a 32 bit che utilizzano i **`__sptr`** **`__uptr`** modificatori e, viene assegnato ogni puntatore a 32 bit a una variabile puntatore a 64 bit, quindi viene visualizzato il valore esadecimale di ogni puntatore a 64 bit. Nell'esempio viene eseguita la compilazione con il compilatore nativo a 64 bit e viene effettuata l'esecuzione su una piattaforma a 64 bit.

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

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Modificatori specifici Microsoft](../cpp/microsoft-specific-modifiers.md)
