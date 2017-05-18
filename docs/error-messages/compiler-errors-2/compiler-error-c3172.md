---
title: Errore del compilatore C3172 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3172
dev_langs:
- C++
helpviewer_keywords:
- C3172
ms.assetid: 1834e2fd-6036-4c33-aff2-b51bc7c99441
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: a82768750e6a7837bb81edd8a51847f83c294c20
ms.openlocfilehash: a53e7bc0b8543813e5745773f6a7548eb9a83442
ms.contentlocale: it-it
ms.lasthandoff: 04/04/2017

---
# <a name="compiler-error-c3172"></a>Errore del compilatore C3172
'nome_modulo': non è possibile specificare attributi idl_module diversi nello stesso progetto  
  
 [idl_module](../../windows/idl-module.md) attributi con lo stesso nome ma con una diversa `dllname` o `version` i parametri sono stati trovati in due dei file in una compilazione. Solo uno univoco `idl_module` attributo può essere specificato per ogni compilazione.  
  
 Identico `idl_module` attributi possono essere specificati in più di un file di codice sorgente.  
  
 Ad esempio, se le operazioni seguenti `idl_module` sono stati trovati attributi:  
  
```  
// C3172.cpp  
[module(name="MyMod")];  
[ idl_module(name="x", dllname="file.dll", version="1.1") ];  
int main() {}  
```  
  
 E quindi,  
  
```  
// C3172b.cpp  
// compile with: C3172.cpp  
// C3172 expected  
[ idl_module(name="x", dllname="file.dll", version="1.0") ];  
```  
  
 il compilatore genera C3172 (prendere nota dei valori di versione diverso).
