---
title: Errore del compilatore C2026 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
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
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 4fafe461008e3545243d693e0d9e34acd57163e0
ms.openlocfilehash: c429f81c64b7710b7edc2b8540d98e8c790e4062
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c2026"></a>Errore del compilatore C2026
la stringa è troppo grande. I caratteri finali verranno troncati  
  
 La stringa è supera al limite di 16380 caratteri a byte singolo.  
  
 Prima di concatenazione delle stringhe adiacenti, una stringa non può essere più 16380 caratteri a byte singolo.  
  
 Una stringa Unicode di circa la metà questa lunghezza anche genera questo errore.  
  
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
  
 Si consiglia di archiviare i valori letterali stringa eccezionalmente grandi (32 KB o più) in una risorsa personalizzata o un file esterno. Vedere [la creazione di una nuova risorsa personalizzata o dati](../../windows/creating-a-new-custom-or-data-resource.md) per ulteriori informazioni.
