---
title: Errore del compilatore C2601 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2601
dev_langs:
- C++
helpviewer_keywords:
- C2601
ms.assetid: 88275582-5f37-45d7-807d-05f06ba00965
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 49598223c3f68271065cc6212da19767020c51e9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33230825"
---
# <a name="compiler-error-c2601"></a>Errore del compilatore C2601
'function': non sono valide le definizioni di funzione locale  
  
 Codice tenta di definire una funzione all'interno di una funzione.  
  
 In alternativa, nel codice sorgente prima della posizione dell'errore C2601 potrebbe essere presente una parentesi graffa supplementare.  
  
 L'esempio seguente genera l'errore C2601:  
  
```  
// C2601.cpp  
int main() {  
   int i = 0;  
  
   void funcname(int j) {   // C2601  
      j++;  
   }  
}  
```