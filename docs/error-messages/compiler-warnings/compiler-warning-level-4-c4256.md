---
title: Compilatore avviso (livello 4) C4256 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4256
dev_langs:
- C++
helpviewer_keywords:
- C4256
ms.assetid: a755a32e-895a-4837-a2b5-4ea06b736798
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 4bbaec27948f061cb21eeb432446517d4f9a6b2c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-4-c4256"></a>Avviso del compilatore (livello 4) C4256
'function': costruttore di classe con basi virtuali ha '...'; le chiamate potrebbero non essere compatibili con le versioni precedenti di Visual C++  
  
 Possibili incompatibilità.  
  
 Si prenda in considerazione il seguente esempio di codice. Se la definizione del costruttore s2:: s2 (int i,...) è stato compilato con una versione del compilatore Visual C++ precedenti alla versione 7, ma nell'esempio seguente viene compilato utilizzando la versione corrente, la chiamata al costruttore per S3 non funzionerà correttamente perché una modifica di convenzione di chiamata speciale. Utilizzando Visual C++ 6.0, in entrambi i casi la chiamata non funziona comunque, a meno che non venga passato alcun parametro per i puntini di sospensione.  
  
 Per risolvere il problema,  
  
1.  Non utilizzare i puntini di sospensione in un costruttore.  
  
2.  Assicurarsi che tutti i componenti del progetto sono compilati con la versione corrente (incluse le eventuali librerie che definiscono o fanno riferimento a questa classe), quindi disattivare l'avviso utilizzando il [avviso](../../preprocessor/warning.md) pragma.  
  
 L'esempio seguente genera l'errore C4256:  
  
```  
// C4256.cpp  
// compile with: /W4  
// #pragma warning(disable : 4256)  
struct S1  
{  
};  
  
struct S2: virtual public S1  
{  
   S2( int i, ... )    // C4256  
   {  
      i = 0;  
   }  
   /*  
   // try the following line instead  
   S2( int i)  
   {  
      i = 0;  
   }  
   */  
};  
  
void func1()  
{  
   S2 S3( 2, 1, 2 );   // C4256  
   // try the following line instead  
   // S2 S3( 2 );  
}  
  
int main()  
{  
}  
```