---
title: Compilatore avviso (livello 4) C4256 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4256
dev_langs:
- C++
helpviewer_keywords:
- C4256
ms.assetid: a755a32e-895a-4837-a2b5-4ea06b736798
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ed1a40f0da75460c4306f69da0f26eb0888bef66
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33297222"
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