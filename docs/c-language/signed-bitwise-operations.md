---
title: Operazioni bit per bit con segno | Microsoft Docs
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
helpviewer_keywords:
- bitwise operations
- signed bitwise operations
ms.assetid: 1e5cf65b-ee32-41a0-a5c2-82c1854091f6
caps.latest.revision: 6
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 16d1bf59dfd4b3ef5f037aed9c0f6febfdf1a2e8
ms.openlocfilehash: 9ffc5335bb28e619f166a524083937d17a59bb97
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="signed-bitwise-operations"></a>Operazioni bit per bit con segno
**ANSI 3.3**   Risultati delle operazioni bit per bit sui interi con segno  
  
 Le operazioni bit per bit sui valori Signed Integer funzionano in modo analogo alle operazioni bit per bit sui valori Unsigned Integer. Ad esempio, `-16 & 99` può essere espresso in formato binario come  
  
```  
  11111111 11110000  
& 00000000 01100011  
  _________________  
  00000000 01100000  
```  
  
 Il risultato dell'operazione AND bit per bit è 96.  
  
## <a name="see-also"></a>Vedere anche  
 [Valori Integer](../c-language/integers.md)
