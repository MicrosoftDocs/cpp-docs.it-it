---
title: Compilatore avviso (livello 4) C4289 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4289
dev_langs: C++
helpviewer_keywords: C4289
ms.assetid: 0dbd2863-4cde-4e16-894b-104a2d5fa724
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 6e3d37052f5b88d01daa882f0a0ea799bb799cdc
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-4-c4289"></a>Avviso del compilatore (livello 4) C4289
utilizzata estensione non standard. 'variabile': variabile di controllo ciclo dichiarata nel ciclo for e utilizzata all'esterno dell'ambito del ciclo for  
  
 Durante la compilazione con [/Ze](../../build/reference/za-ze-disable-language-extensions.md) e **/Zc:forScope-**, una variabile dichiarata in un [per](../../cpp/for-statement-cpp.md) ciclo è stato utilizzato dopo il **per**-ambito ciclo for.  
  
 Vedere [/Zc: forScope](../../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md) per informazioni su come specificare il comportamento standard in **per** cicli con **/Ze**.  
  
 Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .  
  
 L'esempio seguente genera l'errore C4289:  
  
```  
// C4289.cpp  
// compile with: /W4 /Zc:forScope-  
#pragma warning(default:4289)  
int main() {  
   for (int i = 0 ; ; )   // C4289  
      break;  
   i++;  
}  
```