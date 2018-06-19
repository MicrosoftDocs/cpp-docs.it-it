---
title: Errore del compilatore C2117 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2117
dev_langs:
- C++
helpviewer_keywords:
- C2117
ms.assetid: b947379d-5861-42fc-ac26-170318579cbd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7a51bebc1edf7398d91356adb16f35443820cef2
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33166874"
---
# <a name="compiler-error-c2117"></a>Errore del compilatore C2117
'identifier': overflow dei limiti della matrice  
  
 Una matrice ha troppi inizializzatori:  
  
-   Gli inizializzatori e gli elementi della matrice non corrispondono per dimensione e quantità.  
  
-   Nessuno spazio per una terminazione null in una stringa.  
  
 L'esempio seguente genera l'errore C2117:  
  
```  
// C2117.cpp  
int main() {  
   char abc[4] = "abcd";   // C2117  
   char def[4] = "abd";   // OK  
}  
```