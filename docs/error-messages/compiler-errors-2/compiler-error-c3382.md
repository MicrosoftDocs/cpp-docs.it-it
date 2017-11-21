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
ms.openlocfilehash: 782e5c4cc61294dbdaecbd63ff5c6031d387f843
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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