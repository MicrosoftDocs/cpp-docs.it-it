---
title: Errore del compilatore C2433 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2433
dev_langs:
- C++
helpviewer_keywords:
- C2433
ms.assetid: 7079fedd-6059-4125-82ef-ebe275f1f9d1
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 565c013f36cf8c9037c461e74c24cf18a21194f9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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