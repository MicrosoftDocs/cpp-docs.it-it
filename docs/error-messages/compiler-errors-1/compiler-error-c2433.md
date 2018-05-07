---
title: Errore del compilatore C2433 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2433
dev_langs:
- C++
helpviewer_keywords:
- C2433
ms.assetid: 7079fedd-6059-4125-82ef-ebe275f1f9d1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8445e35b929dc3fa2d9d6507f0b6469df26130db
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2433"></a>Errore del compilatore C2433
'identifier': 'modifier' non è consentito nelle dichiarazioni di dati  
  
 Il `friend`, `virtual`, e `inline` modificatori non possono essere utilizzati per le dichiarazioni di dati.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2433.  
  
```  
// C2433.cpp  
class C{};  
  
int main() {  
   inline C c;   // C2433  
}  
```