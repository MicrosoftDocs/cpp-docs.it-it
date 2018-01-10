---
title: Errore del compilatore C3120 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3120
dev_langs: C++
helpviewer_keywords: C3120
ms.assetid: 9b6b210f-9948-4517-a4cc-b4aaadebde68
caps.latest.revision: "5"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f52809bca6ddc4672e8206822071f91c62c7009e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3120"></a>Errore del compilatore C3120
'nome_metodo': i metodi di interfaccia non possono accettare un elenco di argomenti variabili  
  
 Un metodo di interfaccia non può accettare un elenco di argomenti variabili. Ad esempio, la definizione dell'interfaccia seguente genera l'errore C3120:  
  
```  
// C3120.cpp  
__interface A {  
int X(int i, ...);    // C3120  
};  
  
int main(void) { return(0); }  
```