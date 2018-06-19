---
title: Errore del compilatore C2153 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2153
dev_langs:
- C++
helpviewer_keywords:
- C2153
ms.assetid: cfc50cb7-9a0f-4b5b-879a-d419c99f7be1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a6d288434cce1e1584a61040145b07d26defd9dd
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33169725"
---
# <a name="compiler-error-c2153"></a>Errore del compilatore C2153
costanti hex devono avere almeno una cifra esadecimale  
  
 Le costanti esadecimali 0x, 0x e \x non sono validi. Almeno una cifra esadecimale deve seguire x o X.  
  
 L'esempio seguente genera l'errore C2153:  
  
```  
// C2153.cpp  
int main() {  
   int a= 0x;    // C2153  
   int b= 0xA;   // OK  
}  
```