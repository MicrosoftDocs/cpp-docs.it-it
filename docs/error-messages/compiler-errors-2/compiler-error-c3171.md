---
title: Errore del compilatore C3171 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3171
dev_langs:
- C++
helpviewer_keywords:
- C3171
ms.assetid: 1ce26997-7ef1-4c9f-84da-003ea1a4251e
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: ebd64aa2c80f6e21b1e5c1829d8e165d46207718
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3171"></a>Errore del compilatore C3171
'module': non è possibile specificare attributi module diversi nello stesso progetto  
  
 [modulo](../../windows/module-cpp.md) sono stati trovati attributi con elenchi di parametri diverso in due dei file in una compilazione. Solo uno univoco `module` attributo può essere specificato per ogni compilazione.  
  
 Identico `module` attributi possono essere specificati in più di un file di codice sorgente.  
  
 Ad esempio, se le operazioni seguenti `module` sono stati trovati attributi:  
  
```  
// C3171.cpp  
[ module(name="MyModule", uuid="373a1a4e-469b-11d3-a6b0-00c04f79ae8f", version="1.0") ];  
int main() {}  
```  
  
 E quindi,  
  
```  
// C3171b.cpp  
// compile with: C3171.cpp  
// C3171 expected  
[ module(name="MyModule", uuid="373a1a4e-469b-11d3-a6b0-00c04f79ae8f", version="1.1") ];  
```  
  
 il compilatore genera C3171 (prendere nota dei valori di versione diverso).
