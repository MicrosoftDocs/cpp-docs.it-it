---
title: Compilatore avviso (livello 4) C4220 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4220
dev_langs:
- C++
helpviewer_keywords:
- C4220
ms.assetid: aba18868-825f-4763-9af6-3296406a80e4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8f5a48bc836bbead8bc9004f797855fcc4c1baaf
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-4-c4220"></a>Avviso del compilatore (livello 4) C4220
varargs corrisponde ai parametri rimanenti  
  
 Nelle estensioni di Microsoft (/Ze) valore predefinito, un puntatore a una funzione corrisponde a un puntatore a una funzione con argomenti simili, ma variabili.  
  
## <a name="example"></a>Esempio  
  
```  
// C4220.c  
// compile with: /W4  
  
int ( *pFunc1) ( int a, ... );  
int ( *pFunc2) ( int a, int b);  
  
int main()  
{  
   if ( pFunc1 != pFunc2 ) {};  // C4220  
}  
```  
  
 Tali puntatori non corrispondono in compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).