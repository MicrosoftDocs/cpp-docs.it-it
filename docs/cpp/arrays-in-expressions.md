---
title: Matrici nelle espressioni | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- expressions [C++], arrays in
- arrays [C++], in expressions
ms.assetid: 6e5a795b-d6bd-4e39-b313-6a20d47c4d4b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e3e57a97d9be3ef6245c09c6112caf72318fe784
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="arrays-in-expressions"></a>Matrici nelle espressioni
Quando un identificatore di un tipo di matrice viene visualizzata in un'espressione diversa da `sizeof`, AddressOf (**&**), o l'inizializzazione di un riferimento, viene convertito in un puntatore al primo elemento della matrice. Ad esempio:  
  
```  
char szError1[] = "Error: Disk drive not ready.";  
char *psz = szError1;  
```  
  
 Il puntatore `psz` fa riferimento al primo elemento della matrice `szError1`. Tenere presente che, a differenza dei puntatori, le matrici non sono l-value modificabili. Pertanto, la seguente assegnazione non è valida:  
  
```  
szError1 = psz;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Array](../cpp/arrays-cpp.md)