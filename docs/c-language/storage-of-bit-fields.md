---
description: 'Altre informazioni su: archiviazione dei campi di bit'
title: Archiviazione dei campi di bit
ms.date: 11/04/2016
ms.assetid: 4816a241-1580-4d1c-82ed-13d359733959
ms.openlocfilehash: 43066fe648bc380a8278168f336ebcf10cbbbdf5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97205304"
---
# <a name="storage-of-bit-fields"></a>Archiviazione dei campi di bit

**ANSI 3.5.2.1** L'ordine di allocazione dei campi di bit in un tipo int

I campi di bit sono allocati in un Integer dal bit meno significativo a quello più significativo. Nel codice riportato di seguito

```
struct mybitfields
{
   unsigned a : 4;
   unsigned b : 5;
   unsigned c : 7;
} test;

int main( void )
{
   test.a = 2;
   test.b = 31;
   test.c = 0;
}
```

i bit sono disposti come segue:

```
00000001 11110010
cccccccb bbbbaaaa
```

Poiché i processori 80x86 memorizzano il byte basso degli Integer prima del byte alto, l'Integer 0x01F2 superiore viene archiviato nella memoria fisica come 0xF2 seguito da 0x01.

## <a name="see-also"></a>Vedi anche

[Strutture, unioni, enumerazioni e campi di bit](../c-language/structures-unions-enumerations-and-bit-fields.md)
