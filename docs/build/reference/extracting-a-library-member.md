---
title: L'estrazione di un membro di una libreria | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: Lib
dev_langs: C++
helpviewer_keywords:
- LIB [C++], extracting library members
- EXTRACT library manager option
- libraries, extracting members
- -EXTRACT library manager option
- extracting library members
- /EXTRACT library manager option
ms.assetid: a2c5c2a1-9b7e-489a-a9a4-1dec694e1fc5
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 38f45463bb76f858d1b88c059de57a4b8b86227e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="extracting-a-library-member"></a>Estrazione di membri dalle librerie
È possibile utilizzare LIB per creare un file oggetto (obj) che contiene una copia di un membro di una raccolta esistente. Per estrarre una copia di un membro, utilizzare la sintassi seguente:  
  
```  
LIB library /EXTRACT:member /OUT:objectfile  
```  
  
 Questo comando crea un file obj chiamato */objectfile* che contiene una copia di un `member` di un *libreria*. Il `member` nome viene fatta distinzione tra maiuscole e minuscole. È possibile estrarre un solo membro in un unico comando. È obbligatorio, l'opzione /OUT non è presente alcun nome di output predefinito. Se un file denominato */objectfile* esiste già nella directory specificata (o la directory corrente, se è specificata alcuna directory con */objectfile*), la cartella */objectfile*sostituisce il file esistente.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento a LIB](../../build/reference/lib-reference.md)