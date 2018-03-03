---
title: Compilatore avviso (livello 4) C4670 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4670
dev_langs:
- C++
helpviewer_keywords:
- C4670
ms.assetid: e172b134-b1fb-4dfe-8e9d-209ea08b73c7
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 1a4a3e75a9e22c8e3bb31e9d00480a5c5396c645
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-4-c4670"></a>Avviso del compilatore (livello 4) C4670
'identifier': classe base inaccessibile  
  
 La classe base specificata di un oggetto che viene generato in un blocco **try** non è accessibile. Non è possibile creare un'istanza dell'oggetto se questo viene generato. Verificare che la classe base venga ereditata con l'identificatore di accesso corretto.  
  
 L'esempio seguente genera l'errore C4670:  
  
```  
// C4670.cpp  
// compile with: /EHsc /W4  
class A  
{  
};  
  
class B : /* public */ A  
{  
} b;   // inherits A with private access by default  
  
int main()  
{  
    try  
    {  
       throw b;   // C4670  
    }  
    catch( B )  
    {  
    }  
}  
```