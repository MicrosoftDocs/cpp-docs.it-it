---
title: Collegamenti in nomi con ambito File | Documenti Microsoft
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
- scope [C++], linkage rules
- linkage [C++], scope linkage rules
- names [C++], scope linkage rules
- static modifier, file scope
- static names and file scope
- file scope [C++]
- declarations [C++], external
- external linkage, scope linkage rules
- static variables, external declarations
ms.assetid: 38d3fa5e-1861-466e-a590-84b86f7b184e
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 581d7798f4f3aaa409d843f8b7f3b5869b47407e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linkage-in-names-with-file-scope"></a>Collegamenti in nomi con ambito file
Le regole seguenti di collegamento vengono applicate ai nomi (ad eccezione di `typedef` e dei nomi dell'enumeratore) con ambito file:  
  
-   Se un nome è dichiarato in modo esplicito come **statico**, dispone di un collegamento interno e identifica un elemento del programma all'interno delle proprie unità di conversione.  
  
-   I nomi dell'enumeratore e i nomi `typedef` non dispongono di collegamento.  
  
-   Tutti gli altri nomi con ambito file non dispongono di collegamento esterno.  
  
 **Sezione specifica Microsoft**  
  
-   Se il nome di una funzione con ambito file è dichiarato in modo esplicito come **inline**, dispone di collegamento esterno se ne viene creata un'istanza o il relativo indirizzo viene fatto riferimento. Pertanto, è possibile che una funzione con ambito file includa un collegamento interno o esterno.  
  
 **Fine sezione specifica Microsoft**  
  
 La classe dispone di collegamento interno se:  
  
-   Non usa funzionalità C++ (ad esempio controllo dell'accesso ai membri, funzioni membro, costruttori, distruttori e così via).  
  
-   Non è usato nella dichiarazione di un altro nome con collegamento esterno. Questo vincolo significa che gli oggetti del tipo classe passati alle funzioni con collegamento esterno fanno in modo che la classe disponga di un collegamento esterno.  
  
## <a name="see-also"></a>Vedere anche  
 [Programma e collegamento](../cpp/program-and-linkage-cpp.md)