---
title: "Avviso del compilatore (livello 3) C4398 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4398"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4398"
ms.assetid: b6221432-9fed-4272-a547-a73f587904e6
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 3) C4398
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'variabile': l'oggetto globale per processo potrebbe non funzionare correttamente con più domini di applicazione. Si consiglia di utilizzare \_\_declspec\(appdomain\)  
  
 Una funzione virtuale con la convenzione di chiamata [\_\_clrcall](../../cpp/clrcall.md) in un tipo nativo determina la creazione di una variabile di dominio per applicazione.  Quando viene utilizzata in più domini applicazione, una variabile di questo tipo potrebbe non funzionare correttamente.  
  
 È possibile risolvere il problema eseguendo la compilazione con **\/clr:pure**, che crea variabili globali per dominio applicazione per impostazione predefinita, oppure contrassegnando la variabile `__declspec(appdomain)` in modo esplicito.  
  
 Per ulteriori informazioni, vedere [appdomain](../../cpp/appdomain.md) e [Domini applicazione e Visual C\+\+](../../dotnet/application-domains-and-visual-cpp.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4398:  
  
```  
// C4398.cpp  
// compile with: /clr /W3 /c  
struct S {  
   virtual void f( System::String ^ );   // String^ parameter makes function __clrcall  
};  
  
S glob_s;   // C4398  
__declspec(appdomain) S glob_s2;   // OK  
```