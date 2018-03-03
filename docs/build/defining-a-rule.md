---
title: Definizione di una regola | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- NMAKE program, inference rules
- defining inference rules
ms.assetid: 071cd092-3f2e-4065-b0fb-36a9d393cfa8
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c0d6ca616e3685db36d6d24b339a860eab4c6150
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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