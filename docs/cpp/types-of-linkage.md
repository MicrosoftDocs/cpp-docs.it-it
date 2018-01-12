---
title: Tipi di collegamento | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs: C++
helpviewer_keywords:
- no linkage
- linkage [C++], none
- linkage [C++], types of
- types [C++], linkage
- internal linkage, types of linkage
- external linkage, linkage types
ms.assetid: 41326c7f-4602-4bad-a648-697604858ba0
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f71fc6e0d0251db38cd1c3dc1032ba6c71ba3ba4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="types-of-linkage"></a>Tipi di collegamento
Il modo in cui sono condivisi gli oggetti e le funzioni tra le unità di conversione è chiamato collegamento. Tali nomi possono includere:  
  
-   Collegamento interno, nel qual caso fare riferimento solo agli elementi del programma nelle rispettive unità di conversione; non sono condivise con altre unità di conversione.  
  
     Lo stesso nome in un'altra unità di conversione può fare riferimento a un oggetto diverso o a una classe diversa. I nomi con collegamento interno vengono talvolta definiti come locali alle unità di conversione.  
  
     Una dichiarazione di esempio di un nome con collegamento interno è:  
  
    ```  
    static int i;   // The static keyword ensures internal linkage.  
    ```  
  
-   Collegamento esterno, in questo caso possono fare riferimento a elementi di programma in qualsiasi unità di conversione nel programma (l'elemento del programma è condiviso tra le unità di conversione).  
  
     Lo stesso nome in un'altra unità di conversione fa riferimento allo stesso oggetto o a una classe. I nomi con collegamento esterno vengono talvolta definiti come globali.  
  
     Una dichiarazione di esempio di un nome con collegamento esterno è:  
  
    ```  
    extern int i;  
    ```  
  
-   Nessun collegamento, in questo caso si fa riferimento alle entità univoche. Lo stesso nome in un altro ambito può non fare riferimento allo stesso oggetto. Un esempio è un'enumerazione. (Si noti, tuttavia, che è possibile passare un puntatore a un oggetto senza il collegamento. Questo rende l'oggetto accessibile ad altre unità di conversione).  
  
## <a name="see-also"></a>Vedere anche  
 [Programma e collegamento](../cpp/program-and-linkage-cpp.md)