---
title: Archiviazione dei campi di bit | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 4816a241-1580-4d1c-82ed-13d359733959
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: b984448e55380dd3f2223b098a048fec57cb0ba6
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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