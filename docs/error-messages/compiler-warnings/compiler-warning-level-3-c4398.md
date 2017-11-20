---
title: Compilatore avviso (livello 3) C4398 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4398
dev_langs: C++
helpviewer_keywords: C4398
ms.assetid: b6221432-9fed-4272-a547-a73f587904e6
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 60d5379d18dd5105de2645b609dc13ad9882ac09
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-3-c4398"></a>Avviso del compilatore (livello 3) C4398
'variabile': oggetto globale per processo potrebbe non funzionare correttamente con più domini di applicazione. è consigliabile utilizzare __declspec(appdomain)  
  
 Una funzione virtuale con [clrcall](../../cpp/clrcall.md) convenzione di chiamata in un tipo nativo determina la creazione di una variabile di dominio di applicazione per. Tale variabile potrebbe non funzionare correttamente se utilizzato in più domini applicazione.  
  
 È possibile risolvere il problema, contrassegnare in modo esplicito la variabile `__declspec(appdomain)`. Nelle versioni di Visual Studio precedenti a Visual Studio 2017, è possibile risolvere il problema eseguendo la compilazione con **/clr: pure**, che rende le variabili globali per dominio applicazione per impostazione predefinita.  
  
 Per ulteriori informazioni, vedere [appdomain](../../cpp/appdomain.md) e [domini applicazione e Visual C++](../../dotnet/application-domains-and-visual-cpp.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4398.  
  
```  
// C4398.cpp  
// compile with: /clr /W3 /c  
struct S {  
   virtual void f( System::String ^ );   // String^ parameter makes function __clrcall  
};  
  
S glob_s;   // C4398  
__declspec(appdomain) S glob_s2;   // OK  
```