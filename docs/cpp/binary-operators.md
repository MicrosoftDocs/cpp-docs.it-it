---
title: Gli operatori binari | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- member-selection operators [C++]
- operators [C++], binary
- binary operators [C++]
ms.assetid: c0e7fbff-bc87-4708-8333-504ac09ee83e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3b930c548ea411beb03255d694f2423903053288
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="binary-operators"></a>Operatori binari
Nella tabella seguente viene mostrato un elenco di operatori che possono essere sottoposti a overload.  
  
### <a name="redefinable-binary-operators"></a>Operatori binari ridefinibili  
  
|Operatore|nome|  
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