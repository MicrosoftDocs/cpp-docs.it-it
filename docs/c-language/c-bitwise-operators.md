---
title: Operatori bit per bit C | Microsoft Docs
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
- '| operator, bitwise operators'
- bitwise operators, Visual C
- bitwise operators
- operators [C], bitwise
- ^ operator, bitwise operators
- AND operator
- ampersand operator (&)
- ^ operator
- '& operator, bitwise operators'
ms.assetid: e22127b1-9a2d-4876-b01d-c8f72cec3317
caps.latest.revision: 8
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: 620177616e8b60d910d064d7c345633ac5155020
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="c-bitwise-operators"></a>Operatori bit per bit C
Gli operatori bit per bit eseguono operazioni di tipo AND bit per bit (**&**), OR bit per bit esclusivo (**^**) e OR bit per bit inclusivo (**&#124;**).  
  
 **Sintassi**  
  
 *AND-expression*:  
 *equality-expression*  
  
 *AND-expression*  **&**  *equality-expression*  
  
 *exclusive-OR-expression*:  
 *AND-expression*  
  
 *exclusive-OR-expression*  **^**  *AND-expression*  
  
 *inclusive-OR-expression*:  
 *exclusive-OR-expression*  
  
 *inclusive-OR-expression* &#124; *exclusive-OR-expression*  
  
 Gli operandi degli operatori bit per bit devono avere tipi di dati integrali, ma i tipi possono essere diversi. Questi operatori eseguono le conversioni aritmetiche comuni; il tipo del risultato è il tipo degli operandi dopo la conversione.  
  
 Gli operatori bit per bit C sono descritti di seguito:  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|**&**|L'operatore AND bit per bit confronta ogni bit del primo operando con il bit corrispondente del secondo operando. Se entrambi i bit sono 1, il bit del risultato corrispondente viene impostato su 1. In caso contrario, il bit di risultato corrispondente viene impostato su 0.|  
|**^**|L'operatore OR bit per bit esclusivo confronta ogni bit del primo operando con il bit corrispondente del secondo operando. Se un bit è 0 e l'altro bit è 1, il bit di risultato corrispondente viene impostato su 1. In caso contrario, il bit di risultato corrispondente viene impostato su 0.|  
|**&#124;**|L'operatore OR bit per bit inclusivo confronta ogni bit del primo operando con il bit corrispondente del secondo operando. Se un bit è 1 bit, il bit di risultato corrispondente viene impostato su 1. In caso contrario, il bit di risultato corrispondente viene impostato su 0.|  
  
## <a name="examples"></a>Esempi  
 Queste dichiarazioni vengono usate per gli esempi seguenti:  
  
```  
short i = 0xAB00;  
short j = 0xABCD;  
short n;  
  
n = i & j;  
```  
  
 Il risultato assegnato a `n` in questo primo esempio è identico a `i` (0xAB00 esadecimale).  
  
```  
n = i | j;  
  
n = i ^ j;  
```  
  
 L'operatore OR bit per bit inclusivo nel secondo esempio restituisce il valore 0xABCD (esadecimale), mentre l'operatore OR bit per bit esclusivo nel terzo esempio produce 0xCD (esadecimale).  
  
 **Sezione specifica Microsoft**  
  
 I risultati dell'elaborazione bit per bit su Integer con segno sono definiti dall'implementazione, in base allo standard C ANSI. Per il compilatore Microsoft C le operazioni bit per bit su Integer con segno funzionano in modo analogo alle operazioni bit per bit sui valori interi senza segno. Ad esempio, `-16 & 99` può essere espresso in formato binario come  
  
```  
  11111111 11110000  
& 00000000 01100011  
  _________________  
  00000000 01100000  
```  
  
 Il risultato dell'operazione AND bit per bit è 96 decimale.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Operatore AND bit per bit: &](../cpp/bitwise-and-operator-amp.md)   
 [Operatore OR bit per bit esclusivo: ^](../cpp/bitwise-exclusive-or-operator-hat.md)   
 [Operatore OR bit per bit inclusivo: &#124;](../cpp/bitwise-inclusive-or-operator-pipe.md)
