---
title: Errore del compilatore C3297 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3297
dev_langs:
- C++
helpviewer_keywords:
- C3297
ms.assetid: 2a718b4c-6cdb-4418-92c0-fc3a259431c4
caps.latest.revision: 3
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
translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: 2722db505b0e1d55137dad31d0af9aff8a28b9b9
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c3297"></a>Errore del compilatore C3297
'constraint_2': impossibile utilizzare 'constraint_1' come vincolo poiché 'constraint_1' contiene il vincolo value  
  
 Le classi di valori sono sealed. Se un vincolo è una classe di valori, un altro vincolo non può mai derivare da quella stessa classe.  
  
 Per ulteriori informazioni, vedere [vincoli sui parametri di tipo generico (C + + CLI)](../../windows/constraints-on-generic-type-parameters-cpp-cli.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3297.  
  
```  
// C3297.cpp  
// compile with: /clr /c  
generic<class T, class U>  
where T : value class  
where U : T   // C3297  
public ref struct R {};  
```
