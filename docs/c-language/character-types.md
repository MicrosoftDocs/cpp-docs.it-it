---
title: Tipi di carattere | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- character data types [C]
- types [C], character
ms.assetid: d3ca8cda-c0d7-43af-9472-697e8ef015ce
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1cd26eea35da463211b144e98faa0636f5204f6f
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32383693"
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