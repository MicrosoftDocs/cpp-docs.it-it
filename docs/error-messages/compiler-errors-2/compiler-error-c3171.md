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
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ed053e37dfbf5f3c85cf1f8ec44912eca3148315
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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