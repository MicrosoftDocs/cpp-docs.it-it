---
title: Errore del compilatore C2006 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2006
dev_langs: C++
helpviewer_keywords: C2006
ms.assetid: caaed6f7-ceb9-4742-8820-d66657c0b04d
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 4db382ab78cbd230813fada89f9c04244035932f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2006"></a>Errore del compilatore C2006
'direttiva directive' è previsto un nome, trovato 'token'  
  
 Le direttive quali [#include](../../preprocessor/hash-include-directive-c-cpp.md) o [#import](../../preprocessor/hash-import-directive-cpp.md) richiedono un nome di file. Per correggere l'errore, verificare *token* è un nome file valido. Inoltre, inserire il nome del file in virgolette doppie o parentesi angolari.  
  
 L'esempio seguente genera l'errore C2006:  
  
```  
// C2006.cpp  
#include stdio.h   // C2006  
```  
  
 Possibile soluzione:  
  
```  
// C2006b.cpp  
// compile with: /c  
#include <stdio.h>  
```