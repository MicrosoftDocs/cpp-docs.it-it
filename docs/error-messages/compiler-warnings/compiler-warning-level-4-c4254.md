---
title: Compilatore avviso (livello 4) C4254 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: c4254
dev_langs: C++
helpviewer_keywords: C4254
ms.assetid: c7dcef24-d535-4c98-bb41-fc3d2b88fd11
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 386ed491aab54fcfb94880f4f75e5a6e7c081a69
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-4-c4254"></a>Avviso del compilatore (livello 4) C4254
'operator': conversione da 'type1' a 'type2', possibile perdita di dati  
  
 Un campo di bit più grande è stato assegnato a un campo di bit inferiori. Potrebbe verificarsi una perdita di dati.  
  
 Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .  
  
 L'esempio seguente genera l'errore C4254:  
  
```  
// C4254.cpp  
// compile with: /W4  
#pragma warning(default: 4254)  
  
struct X {  
   int a : 20;  
   int b : 12;  
};  
  
int main() {  
   X *x = new X();  
   x->b = 10;  
   x->a = 4;  
   x->a = x->b;    // OK  
   x->b = x->a;    // C4254  
};  
```