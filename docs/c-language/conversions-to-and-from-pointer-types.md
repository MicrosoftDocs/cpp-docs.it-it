---
title: Conversioni da e verso tipi di puntatore | Microsoft Docs
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
- pointers, converting
- conversions, pointer
- type casts, involving pointers
- void pointers
ms.assetid: 3facc56f-06d3-4570-b1a2-7d4927b83086
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ca8507d8890b1f1865ccefd6ce56a1b6f069d0f8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="conversions-to-and-from-pointer-types"></a>Conversioni da e verso tipi di puntatore
Un puntatore a un tipo di valore può essere convertito in un puntatore a un tipo diverso. Tuttavia, il risultato può essere non definito a causa dei requisiti di allineamento e delle dimensioni dei diversi tipi in archivio. Un puntatore a un oggetto può essere convertito in un puntatore a un oggetto il cui tipo richiede un allineamento di archiviazione ugualmente o meno rigido e nuovamente senza modifiche.  
  
 Un puntatore a `void` può essere convertito in o da un puntatore con un tipo qualsiasi, senza restrizioni o perdita di informazioni. Se il risultato viene riconvertito nel tipo originale, il puntatore originale viene recuperato.  
  
 Se un puntatore viene convertito in un altro puntatore con lo stesso tipo, ma con qualificatori diversi o aggiuntivi, il nuovo puntatore è uguale a quello precedente, fatta eccezione per le restrizioni imposte dal nuovo qualificatore.  
  
 Un valore del puntatore può inoltre essere convertito in un valore integrale. Il percorso di conversione dipende dalla dimensione del puntatore e dalla dimensione del tipo integrale, in base alle regole seguenti:  
  
-   Se la dimensione del puntatore è maggiore o uguale alla dimensione del tipo integrale, il puntatore si comporta come un valore unsigned nella conversione, ad eccezione del fatto che non può essere convertito in un valore mobile.  
  
-   Se il puntatore è minore del tipo integrale, il puntatore viene prima convertito in un puntatore con la stessa dimensione del tipo integrale, quindi viene convertito nel tipo integrale.  
  
 Al contrario, un tipo integrale può essere convertito in un tipo di puntatore in base alle regole seguenti:  
  
-   Se il tipo integrale ha la stessa dimensione del tipo di puntatore, la conversione consente semplicemente al valore integrale di essere considerato come puntatore (Unsigned Integer).  
  
-   Se la dimensione del tipo integrale è diversa dalla dimensione del tipo di puntatore, il tipo integrale viene prima convertito nella dimensione del puntatore usando i percorsi di conversione specificati nelle tabelle [Conversione dai tipi integrali con segno](../c-language/conversions-from-signed-integral-types.md) e [Conversione dai tipi integrali senza segno](../c-language/conversions-from-unsigned-integral-types.md). Viene quindi utilizzato come valore del puntatore.  
  
 Un'espressione costante integrale con valore 0 o la stessa espressione trasmessa al tipo **void \*** può essere convertita con un cast di tipo, un'assegnazione o un confronto in un puntatore di qualsiasi tipo. Questa operazione produce un puntatore null equivalente a un altro puntatore null dello stesso tipo, ma questo puntatore null non corrisponde a nessun puntatore a una funzione o un oggetto. I numeri interi diversi dalla costante 0 possono essere convertiti in un tipo di puntatore, ma il risultato non è portabile.  
  
## <a name="see-also"></a>Vedere anche  
 [Conversioni di assegnazione](../c-language/assignment-conversions.md)