---
title: Definizione di una regola | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- NMAKE program, inference rules
- defining inference rules
ms.assetid: 071cd092-3f2e-4065-b0fb-36a9d393cfa8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7a8ff7c58033ac5f7e42764d185c45c206bf406f
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="defining-a-rule"></a>Definizione di una regola
Il *fromext* rappresenta l'estensione di file, dipendente e *toext* rappresenta l'estensione di file di destinazione.  
  
```  
.fromext.toext:  
   commands  
```  
  
## <a name="remarks"></a>Note  
 Le estensioni non sono tra maiuscole e minuscole. È possono richiamare le macro per rappresentare *fromext* e *toext*; le macro vengono espanse durante la pre-elaborazione. Il punto (.) precedente *fromext* devono essere visualizzati all'inizio della riga. I due punti (:) sono preceduto da zero o più spazi o tabulazioni. Può essere seguito solo da spazi o tabulazioni, un punto e virgola (;) per specificare un comando, un simbolo di cancelletto (#) per specificare un commento o un carattere di nuova riga. Altri spazi non sono consentiti. I comandi vengono specificati nei blocchi di descrizione.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
 [Percorsi di ricerca nelle regole](../build/search-paths-in-rules.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Regole di inferenza](../build/inference-rules.md)