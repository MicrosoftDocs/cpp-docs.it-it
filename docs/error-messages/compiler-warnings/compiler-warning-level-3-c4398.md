---
title: Avviso (livello 3) del compilatore C4398 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4398
dev_langs:
- C++
helpviewer_keywords:
- C4398
ms.assetid: b6221432-9fed-4272-a547-a73f587904e6
caps.latest.revision: 6
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: cc82b83860786ffc3f0aee73ede18ecadef16a7a
ms.openlocfilehash: 18270bb89bcc5d1855750c572a5b6fb9e51c2ba3
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-warning-level-3-c4398"></a>Avviso del compilatore (livello 3) C4398
'variabile': oggetto globale per processo potrebbe non funzionare correttamente con più domini di applicazione. si consiglia di utilizzare __declspec(appdomain)  
  
 Una funzione virtuale con [clrcall](../../cpp/clrcall.md) la convenzione di chiamata in un tipo nativo determina la creazione di una variabile di dominio di applicazione per. Tale variabile potrebbe non funzionare correttamente se utilizzato in più domini applicazione.  
  
 È possibile risolvere il problema, contrassegnare in modo esplicito la variabile `__declspec(appdomain)`. Nelle versioni di Visual Studio precedenti a Visual Studio 2017, è possibile risolvere il problema eseguendo la compilazione con **/clr: pure**, che rende le variabili globali per dominio applicazione per impostazione predefinita.  
  
 Per ulteriori informazioni, vedere [appdomain](../../cpp/appdomain.md) e [domini applicazione e Visual C++](../../dotnet/application-domains-and-visual-cpp.md).  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene generato l'errore C4398.  
  
```  
// C4398.cpp  
// compile with: /clr /W3 /c  
struct S {  
   virtual void f( System::String ^ );   // String^ parameter makes function __clrcall  
};  
  
S glob_s;   // C4398  
__declspec(appdomain) S glob_s2;   // OK  
```
