---
title: Errore del compilatore C2026 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2026
dev_langs:
- C++
helpviewer_keywords:
- C2026
ms.assetid: 8e64b6e1-b967-479b-be97-d12dc4a8e389
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a6b2952daa8cc7b3642cca5ba278990fde7d1ebe
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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