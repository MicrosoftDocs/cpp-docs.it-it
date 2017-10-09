---
title: Errore del compilatore C2157 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C2157
dev_langs:
- C++
helpviewer_keywords:
- C2157
ms.assetid: babbca24-16dc-4b69-be14-a675029249c1
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 5735d0394be8114f2e0747e7e0d8dfefc84e580b
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="compiler-error-c2157"></a>Errore del compilatore C2157
'function': deve essere dichiarato prima dell'utilizzo in un elenco pragma  
  
 Il nome della funzione non è stato dichiarato prima di essere usato come riferimento nell'elenco delle funzioni per un pragma [alloc_text](../../preprocessor/alloc-text.md) .  
  
 L'esempio seguente genera l'errore C2157:  
  
```  
// C2157.cpp  
// compile with: /c  
#pragma alloc_text( "func", func)   // C2157  
  
// OK  
extern "C" void func();  
#pragma alloc_text( "func", func)  
```
