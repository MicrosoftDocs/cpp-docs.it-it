---
title: Compilatore avviso (livello 4) C4431 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4431
dev_langs:
- C++
helpviewer_keywords:
- C4431
ms.assetid: 58434ab6-dd8d-427b-953a-602fb7453ae6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2bb5a76a1ddf1f1104fe88511c9bf9bf88bf6602
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-4-c4431"></a>Avviso del compilatore (livello 4) C4431
identificatore di tipo mancante, verrà utilizzato int. Nota: default-int non è più supportato in C++  
  
 Questo errore può essere generato come risultato delle operazioni di conformità del compilatore eseguite per Visual C++ 2005: Visual C++ non vengono più creati gli identificatori non tipizzati come int per impostazione predefinita. Il tipo di un identificatore deve essere specificato in modo esplicito.  
  
 Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4431.  
  
```  
// C4431.c  
// compile with: /c /W4  
#pragma warning(default:4431)  
i;   // C4431  
int i;   // OK  
```