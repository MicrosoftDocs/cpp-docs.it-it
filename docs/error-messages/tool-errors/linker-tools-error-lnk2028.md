---
title: Strumenti del linker LNK2028 errore | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK2028
dev_langs:
- C++
helpviewer_keywords:
- LNK2028
ms.assetid: e2b03293-6066-464d-a050-ce747bcf7f0e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7347e8edda7ad8b317d4e6e02dfc9345ac76f269
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="linker-tools-error-lnk2028"></a>Errore degli strumenti del linker LNK2028
"exported_function" (nome_decorato) a cui fa riferimento nella funzione "function_containing_function_call" (nome_decorato)  
  
 Quando si tenta di importare una funzione nativa in un'immagine pure, tenere presente che le convenzioni di chiamata implicite differiscono tra compilazioni pure e native.  
  
## <a name="example"></a>Esempio  
 In questo esempio di codice genera un componente con una funzione nativa esportata la cui convenzione di chiamata implicita [cdecl](../../cpp/cdecl.md).  
  
```  
// LNK2028.cpp  
// compile with: /LD  
__declspec(dllexport) int func() {  
   return 3;  
}  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente crea un client puro che utilizza la funzione nativa. Tuttavia, la convenzione di chiamata in **/clr: pure** è [clrcall](../../cpp/clrcall.md). L'esempio seguente genera l'errore LNK2028.  
  
```  
// LNK2028_b.cpp  
// compile with: /clr:pure lnk2028.lib  
// LNK2028 expected  
int func();  
  
int main() {  
   return func();  
}  
```