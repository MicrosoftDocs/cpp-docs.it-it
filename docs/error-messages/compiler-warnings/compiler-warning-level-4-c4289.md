---
title: Compilatore avviso (livello 4) C4289 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4289
dev_langs:
- C++
helpviewer_keywords:
- C4289
ms.assetid: 0dbd2863-4cde-4e16-894b-104a2d5fa724
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6f7f09bd85d3740d43b6e4b6a80ed562f8cc2261
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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