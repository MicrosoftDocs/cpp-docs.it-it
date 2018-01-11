---
title: Errore del compilatore C3382 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C3382
dev_langs: C++
helpviewer_keywords: C3382
ms.assetid: a7603abd-ac4e-4ae6-a02b-3bdc6d1908a6
caps.latest.revision: "3"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: c58047e409c60fd2b6cb65418131f6aadb1430a2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3382"></a>Errore del compilatore C3382
'sizeof' non supportato con /clr:safe  
  
 Il file di output di una compilazione **/clr:safe** è un file indipendente dai tipi verificabile e sizeof non è supportato perché il valore restituito dell'operatore sizeof è size_t, la cui dimensione varia a seconda del sistema operativo.  
  
 Per ulteriori informazioni, vedere,  
  
-   [Operatore sizeof](../../cpp/sizeof-operator.md)  
  
-   [/CLR (compilazione common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md)  
  
-   [Problemi comuni relativi alla migrazione di Visual C++ a 64 bit](../../build/common-visual-cpp-64-bit-migration-issues.md)  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3382.  
  
```  
// C3382.cpp  
// compile with: /clr:safe  
int main() {  
   sizeof( char );   // C3382  
}  
```