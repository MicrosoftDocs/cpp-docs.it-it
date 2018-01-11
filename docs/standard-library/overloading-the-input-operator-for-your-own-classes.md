---
title: Overload dell'operatore &gt;&gt; per classi personalizzate | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- operator>>
- operator>>, overloading for your own classes
- operator >>, overloading for your own classes
ms.assetid: 40dab4e0-3f97-4745-9cc8-b86e740fa246
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: dc6d7662c5072e2fb3fac8c95df05c274fd8cf9e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="overloading-the-gtgt-operator-for-your-own-classes"></a>Overload dell'operatore &gt;&gt; per classi personalizzate
I flussi di input usano l'operatore di estrazione (`>>`) per i tipi standard. È possibile scrivere operatori di estrazione simili per i tipi personalizzati. L'esito positivo dipende dall'uso degli spazi vuoti in modo preciso.  
  
 Di seguito è riportato un esempio di un operatore di estrazione per la classe `Date` presentata in precedenza:  
  
```  
istream& operator>> (istream& is, Date& dt)  
{  
    is>> dt.mo>> dt.da>> dt.yr;  
    return is;  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Flussi di input](../standard-library/input-streams.md)

