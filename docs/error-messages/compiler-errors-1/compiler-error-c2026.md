---
title: Errore del compilatore C2026 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2026
dev_langs:
- C++
helpviewer_keywords:
- C2026
ms.assetid: 8e64b6e1-b967-479b-be97-d12dc4a8e389
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 97937579c12730fecfa89c69d9e7cf51229b5c6c
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="compiler-error-c2026"></a>Errore del compilatore C2026
caratteri finali troncato stringa troppo grande.  
  
 La stringa è supera al limite di 16380 caratteri a byte singolo.  
  
 Prima di concatenazione delle stringhe adiacenti, una stringa non può essere più lunga di 16380 caratteri a byte singolo.  
  
 Una stringa Unicode di questa lunghezza di circa la metà anche genera l'errore.  
  
 Se si dispone di una stringa definita come indicato di seguito, viene generato C2026:  
  
```  
char sz[] =  
"\  
imagine a really, really \  
long string here\  
";  
```  
  
 È possibile suddividere la come indicato di seguito:  
  
```  
char sz[] =  
"\  
imagine a really, really "  
"long string here\  
";  
```  
  
 È consigliabile archiviare i valori letterali stringa eccezionalmente elevate (32 KB o più) in una risorsa personalizzata o un file esterno. Vedere [la creazione di una nuova risorsa personalizzata o dati](../../windows/creating-a-new-custom-or-data-resource.md) per ulteriori informazioni.
