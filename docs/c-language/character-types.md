---
title: Tipi di carattere | Microsoft Docs
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
- character data types [C]
- types [C], character
ms.assetid: d3ca8cda-c0d7-43af-9472-697e8ef015ce
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: f0f8639e90787ddcc90b7a302f226d305f29dce1
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="character-types"></a>Tipi di carattere
Una costante carattere Integer non preceduta dalla lettera **L** presenta il tipo `int`. Il valore di una costante carattere Integer che contiene un carattere singolo è il valore numerico del carattere interpretato come Integer. Ad esempio, il valore numerico del carattere `a` in formato decimale è 97 e in formato esadecimale 61.  
  
 Da un punto di vista sintattico una costante carattere "wide" è una costante carattere preceduta dalla lettera **L**. Una costante carattere "wide" presenta il tipo `wchar_t`, un tipo Integer definito nel file di intestazione STDDEF.H. Ad esempio:  
  
```  
char    schar =  'x';   /* A character constant          */  
wchar_t wchar = L'x';   /* A wide-character constant for   
                            the same character           */  
```  
  
 Le costanti carattere "wide" hanno un'ampiezza di 16 bit e specificano i membri del set di caratteri di esecuzione esteso. Consentono di esprimere in alfabeti caratteri che sono troppo grandi per essere rappresentati dal tipo `char`. Per altre informazioni sui caratteri wide, vedere [Caratteri multibyte e wide](../c-language/multibyte-and-wide-characters.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Costanti carattere C](../c-language/c-character-constants.md)
