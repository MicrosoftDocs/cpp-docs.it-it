---
title: Errore del compilatore C3381 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3381
dev_langs:
- C++
helpviewer_keywords:
- C3381
ms.assetid: d276c89f-8377-4cb6-a8d4-7770885f06c4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a27961694bc5fad4080d8aceaf2f1cb65404319c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c3381"></a>Errore del compilatore C3381
'assembly': gli identificatori di accesso assembly sono disponibili solo in codice compilato con un'opzione /clr  
  
 I tipi nativi possono essere visibili all'esterno dell'assembly, ma è possibile specificare solo l'accesso all'assembly per i tipi nativi in una **/clr** compilazione.  
  
 Per ulteriori informazioni, vedere [digitare visibilità](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Type_visibility) e [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3381.  
  
```  
// C3381.cpp  
// compile with: /c  
public class A {};   // C3381  
```