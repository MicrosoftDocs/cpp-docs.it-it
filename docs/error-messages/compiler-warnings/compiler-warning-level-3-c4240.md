---
title: Compilatore avviso (livello 3) C4240 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4240
dev_langs: C++
helpviewer_keywords: C4240
ms.assetid: a2657cdb-18e1-493f-882b-4e10c0bca71d
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 662aaeb3246fac20bd0ac9f3412424bfacac5698
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-3-c4240"></a>Avviso del compilatore (livello 3) C4240
utilizzata estensione non standard: accesso a 'NomeClasse', ora definito come 'identificatore di accesso,' precedentemente è stato definito come 'identificatore di accesso'  
  
 In compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)), è possibile modificare l'accesso a una classe annidata. Nelle estensioni di Microsoft (/Ze) valore predefinito, è possibile, con l'avviso.  
  
## <a name="example"></a>Esempio  
  
```  
// C4240.cpp  
// compile with: /W3  
class X  
{  
private:  
   class N;  
public:  
   class N  
   {   // C4240  
   };  
};  
  
int main()  
{  
}  
```