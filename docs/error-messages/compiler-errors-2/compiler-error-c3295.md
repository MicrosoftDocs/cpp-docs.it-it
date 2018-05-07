---
title: Errore del compilatore C3295 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3295
dev_langs:
- C++
helpviewer_keywords:
- C3295
ms.assetid: 83f0aa4d-0e0a-4905-9f66-fcf9991fc07a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 25fd1a04e0be46943b4fd183b470b369f810a0d1
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c3295"></a>Errore del compilatore C3295
'#pragma pragma' può essere usato solo nell'ambito globale o dello spazio dei nomi  
  
 Alcuni pragma non possono essere usati in una funzione.  Vedere [direttive Pragma e parola chiave pragma](../../preprocessor/pragma-directives-and-the-pragma-keyword.md) per ulteriori informazioni.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3295.  
  
```  
// C3295.cpp  
int main() {  
   #pragma managed   // C3295  
}  
```