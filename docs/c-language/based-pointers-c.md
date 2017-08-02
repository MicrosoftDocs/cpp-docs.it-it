---
title: Puntatori based (C) | Microsoft Docs
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
- __based keyword [C]
- based pointers
- pointers, based
- based addressing
ms.assetid: b5446920-89e0-4e2f-91f3-1f2a769a08e8
caps.latest.revision: 10
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
ms.openlocfilehash: 26bc7760c0cb498004ad1dc185d11d1d6ebfeaea
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="based-pointers-c"></a>Puntatori based (C)
**Sezione specifica Microsoft**  
  
 [__based (Riferimento C++)](../cpp/based-pointers-cpp.md)  
  
 Per i compilatori C a 32 e a 64 bit Microsoft un puntatore based è un offset a 32 o a 64 bit di una base puntatore a 32 o a 64 bit. L'indirizzamento di base è utile per esercitare controllo sulle sezioni in cui gli oggetti vengono allocati, è possibile quindi ridurre la dimensione del file eseguibile e aumentare la velocità di esecuzione. In genere, il formato per specificare un puntatore based è  
  
```  
  
type  
__based(  
base  
)  
declarator  
  
```  
  
 La variante "basato sul puntatore" dell'indirizzamento di base consente la specifica di un puntatore come base. Il puntatore based, quindi, è un offset nella sezione di memoria a partire dall'inizio del puntatore su cui si basa. I puntatori basati sugli indirizzi di puntatori sono l'unico formato della parola chiave `__based` valida in compilazioni a 32 bit e a 64 bit. In compilazioni di tale tipo rappresentano spostamenti a 32 bit o a 64 bit da una base a 32 bit o a 64 bit.  
  
 Un utilizzo dei puntatori basati su puntatori è correlato agli identificatori persistenti che contengono puntatori. Un elenco collegato costituito da puntatori basati su un puntatore può essere salvato su disco e successivamente ricaricato in un'altra posizione della memoria, con i puntatori che rimangono validi.  
  
 Nell'esempio seguente viene mostrato un puntatore basato su un puntatore.  
  
```  
void *vpBuffer;  
  
struct llist_t  
{  
    void __based( vpBuffer ) *vpData;  
    struct llist_t __based( vpBuffer ) *llNext;  
};  
```  
  
 Il puntatore `vpBuffer` viene assegnato l'indirizzo di memoria allocata in un qualche punto successivo del programma. L'elenco collegato viene rilocato rispetto al valore `vpBuffer`.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Dichiaratori e dichiarazioni di variabili](../c-language/declarators-and-variable-declarations.md)
