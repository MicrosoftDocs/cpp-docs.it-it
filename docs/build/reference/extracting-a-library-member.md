---
title: L'estrazione di un membro di una libreria | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- Lib
dev_langs:
- C++
helpviewer_keywords:
- LIB [C++], extracting library members
- EXTRACT library manager option
- libraries, extracting members
- -EXTRACT library manager option
- extracting library members
- /EXTRACT library manager option
ms.assetid: a2c5c2a1-9b7e-489a-a9a4-1dec694e1fc5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0dc0dc67a6d9e4a3ff61aa3b82ac10b9eabcb94b
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32371242"
---
# <a name="extracting-a-library-member"></a>Estrazione di membri dalle librerie
È possibile utilizzare LIB per creare un file oggetto (obj) che contiene una copia di un membro di una raccolta esistente. Per estrarre una copia di un membro, utilizzare la sintassi seguente:  
  
```  
LIB library /EXTRACT:member /OUT:objectfile  
```  
  
 Questo comando crea un file obj chiamato */objectfile* che contiene una copia di un `member` di un *libreria*. Il `member` nome viene fatta distinzione tra maiuscole e minuscole. È possibile estrarre un solo membro in un unico comando. È obbligatorio, l'opzione /OUT non è presente alcun nome di output predefinito. Se un file denominato */objectfile* esiste già nella directory specificata (o la directory corrente, se è specificata alcuna directory con */objectfile*), la cartella */objectfile*sostituisce il file esistente.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento a LIB](../../build/reference/lib-reference.md)