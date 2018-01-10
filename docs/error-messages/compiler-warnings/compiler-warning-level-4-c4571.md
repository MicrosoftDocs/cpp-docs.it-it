---
title: Compilatore avviso (livello 4) C4571 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4571
dev_langs: C++
helpviewer_keywords: C4571
ms.assetid: 07aa17bd-b15c-4266-824c-57cc445e8edd
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: cab2068b6117f092dcc098591bb620156b2c0cf6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-4-c4571"></a>Avviso del compilatore (livello 4) C4571
Messaggio informativo: catch è cambiata dopo Visual C++ 7.1; le eccezioni strutturate (SEH) non vengono più rilevate  
  
 C4571 viene generato per ogni blocco catch durante la compilazione con **/EHs**.  
  
 Durante la compilazione con **/EHs**, un blocco catch non rileverà un'eccezione strutturata (divisione per zero o un puntatore null, ad esempio), un catch rileverà solo generata in modo esplicito le eccezioni C++.  Per altre informazioni, vedere [Gestione delle eccezioni](../../cpp/exception-handling-in-visual-cpp.md).  
  
 Per impostazione predefinita, questo avviso non è attivo.  Attivare la visualizzazione dell'avviso per garantire che durante la compilazione con **/EHs** i blocchi catch (...) non si prevede di intercettare le eccezioni strutturate.  Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .  
  
 È possibile risolvere C4571 in uno dei seguenti modi,  
  
-   Eseguire la compilazione con **/EHa** se si desidera che i blocchi catch per intercettare le eccezioni strutturate.  
  
-   Non abilitare C4571 se non si desidera che i blocchi catch per intercettare le eccezioni strutturate, ma si desidera utilizzare i blocchi catch.  È comunque possibile intercettare le eccezioni strutturate utilizzando le parole chiave di gestione delle eccezioni (**try**, **except**, e **finally**).  Ma tenere presente che quando viene compilato **/EHs** distruttori verranno chiamati solo quando viene generata un'eccezione C++, non quando si verifica un'eccezione SEH.  
  
-   Sostituire il blocco catch con blocchi catch per eccezioni specifiche di C++ e, facoltativamente, aggiungere la gestione delle eccezioni C++ gestione delle eccezioni strutturata (**try**, **except**, e **_ finally**).  Vedere [strutturata delle eccezioni (C/C++)](../../cpp/structured-exception-handling-c-cpp.md) per ulteriori informazioni.  
  
 Vedere [/EH (modello di gestione delle eccezioni)](../../build/reference/eh-exception-handling-model.md) per ulteriori informazioni.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4571.  
  
```  
// C4571.cpp  
// compile with: /EHs /W4 /c  
#pragma warning(default : 4571)  
int main() {  
   try {  
      int i = 0, j = 1;  
      j /= i;   // this will throw a SE (divide by zero)  
   }  
   catch(...) {}   // C4571 warning  
}  
```