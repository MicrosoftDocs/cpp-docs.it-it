---
title: Archiviazione dei campi di bit | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: 4816a241-1580-4d1c-82ed-13d359733959
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c39fa4455cfdc387ab5aa2068c80494a4a8810ef
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46020088"
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

## <a name="see-also"></a>Vedere anche

[Strutture, unioni, enumerazioni e campi di bit](../c-language/structures-unions-enumerations-and-bit-fields.md)