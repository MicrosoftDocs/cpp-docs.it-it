---
title: Errore irreversibile C1104 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C1104
dev_langs:
- C++
helpviewer_keywords:
- C1104
ms.assetid: 45bd85c4-77d3-4d3c-b167-49c563aefb4d
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: 54e2c67b6b384fcbe05ef8db21605a89e6a7fc08
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="fatal-error-c1104"></a>Errore irreversibile C1104
errore irreversibile durante l'importazione di libid: 'message'  
  
 Il compilatore ha rilevato un problema durante l'importazione di una libreria dei tipi.  Non è possibile, ad esempio, specificare una libreria dei tipi con libid e specificare anche `no_registry`.  
  
 Per ulteriori informazioni, vedere [#import direttiva](../../preprocessor/hash-import-directive-cpp.md).  
  
 L'esempio seguente genera l'errore C1104:  
  
```  
// C1104.cpp  
#import "libid:11111111.1111.1111.1111.111111111111" version("4.0") lcid("9") no_registry auto_search   // C1104  
```
