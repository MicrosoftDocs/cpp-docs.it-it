---
title: Archiviazione dei campi di bit | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: 4816a241-1580-4d1c-82ed-13d359733959
caps.latest.revision: 6
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: b0e25945ff20adcccce060363601cfc1a1a1f6fd
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

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
