---
title: Gli operatori binari | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- member-selection operators
- operators [C++], binary
- binary operators
ms.assetid: c0e7fbff-bc87-4708-8333-504ac09ee83e
caps.latest.revision: 7
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
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 384ac135c7ecb63b864160723984ef5d271e1395
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="binary-operators"></a>Operatori binari
Nella tabella seguente viene mostrato un elenco di operatori che possono essere sottoposti a overload.  
  
### <a name="redefinable-binary-operators"></a>Operatori binari ridefinibili  
  
|Operatore|Name|  
|--------------|----------|  
|**,**|Virgola|  
|`!=`|Disuguaglianza|  
|`%`|Modulo|  
|`%=`|Modulo/assegnazione|  
|**&**|AND bit per bit|  
|**&&**|AND logico|  
|**&=**|AND bit/assegnazione|  
|**\***|Moltiplicazione|  
|**\*=**|Moltiplicazione/assegnazione|  
|**+**|Addizione|  
|`+=`|Addizione/assegnazione|  
|**-**|Sottrazione|  
|**-=**|Sottrazione/assegnazione|  
|**->**|Selezione dei membri|  
|**->\***|Selezione puntatore a membro|  
|**/**|Divisione|  
|`/=`|Divisione/assegnazione|  
|**<**|Minore di|  
|**<<**|Spostamento a sinistra|  
|**<<=**|Spostamento a sinistra/assegnazione|  
|**<=**|Minore o uguale a|  
|**=**|Assegnazione|  
|`==`|Uguaglianza|  
|**>**|Maggiore di|  
|**>=**|Maggiore o uguale a|  
|**>>**|Spostamento a destra|  
|**>>=**|Spostamento a destra/assegnazione|  
|**^**|OR esclusivo|  
|`^=`|OR esclusivo/assegnazione|  
|**&#124;**|OR inclusivo bit per bit|  
|`&#124;=`|OR inclusivo bit/assegnazione|  
|`&#124;&#124;`|OR logico|  
  
 Per dichiarare una funzione di un operatore binario come membro non statico, è necessario dichiararla nel seguente formato:  
  
 *tipo ret* **operatore**`op`**(** `arg` **)**  
  
 dove *ret-type* è il tipo restituito, `op` è uno degli operatori elencati nella tabella precedente, e `arg` è un argomento di qualsiasi tipo.  
  
 Per dichiarare una funzione di un operatore binario come funzione globale, è necessario dichiararla nel seguente formato:  
  
 *tipo ret* **operatore**`op`**(** `arg1` **,** `arg2` **)**  
  
 dove *ret-type* e `op` vengono così descritti per le funzioni dell'operatore membro e `arg1` e `arg2` sono argomenti. Almeno uno degli argomenti deve essere di tipo di classe.  
  
> [!NOTE]
>  Non c'è alcuna restrizione sui tipi restituiti degli operatori binari; tuttavia, la maggior parte degli operatori binari definiti dall'utente restituiscono un tipo di classe o un riferimento al tipo di classe.  
  
## <a name="see-also"></a>Vedere anche  
 [Overload degli operatori](../cpp/operator-overloading.md)
