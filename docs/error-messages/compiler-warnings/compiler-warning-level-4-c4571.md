---
title: "Avviso del compilatore (livello 4) C4571 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4571"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4571"
ms.assetid: 07aa17bd-b15c-4266-824c-57cc445e8edd
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4571
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Messaggio informativo: la semantica di catch\(...\) è cambiata dopo Visual C\+\+ 7.1; le eccezioni strutturate \(SEH\) non vengono più rilevate  
  
 L'avviso C4571 viene visualizzato per ogni blocco catch\(...\) quando si esegue la compilazione con **\/EHs**.  
  
 Quando si esegue la compilazione con **\/EHs**, un blocco catch\(...\) non rileverà un'eccezione strutturata, causata ad esempio da una divisione per zero o un puntatore null, ma rileverà solo le eccezioni C\+\+ generate in modo esplicito.  Per ulteriori informazioni, vedere [Gestione delle eccezioni](../../cpp/exception-handling-in-visual-cpp.md).  
  
 Per impostazione predefinita, questo avviso non è attivo.  Attivare la visualizzazione dell'avviso per assicurarsi che durante la compilazione con **\/EHs** i blocchi catch\(...\) non rilevino le eccezioni strutturate.  Per ulteriori informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
 È possibile evitare la visualizzazione dell'avviso C4571 in uno dei seguenti modi:  
  
-   Eseguire la compilazione con **\/EHa** se si desidera che i blocchi catch\(...\) continuino a rilevare le eccezioni strutturate.  
  
-   Non attivare la visualizzazione dell'avviso C4571 se si desidera continuare a utilizzare i blocchi catch\(...\) senza che rilevino le eccezioni strutturate.  Queste ultime possono comunque essere intercettate utilizzando le parole chiave di gestione delle eccezioni **\_\_try**, **\_\_except** e **\_\_finally**.  È tuttavia opportuno tenere presente che i distruttori compilati con **\/EHs** verranno chiamati solo quando viene generata un'eccezione C\+\+ e non quando si verifica un'eccezione SEH.  
  
-   Sostituire il blocco catch\(...\) con blocchi catch per eccezioni C\+\+ specifiche ed eventualmente aggiungere la gestione delle eccezioni strutturate alla gestione delle eccezioni C\+\+ \(**\_\_try**, **\_\_except** e **\_\_finally**\).  Per ulteriori informazioni, vedere [Gestione strutturata delle eccezioni](../../cpp/structured-exception-handling-c-cpp.md).  
  
 Per ulteriori informazioni, vedere [\/EH \(Modello di gestione delle eccezioni\)](../../build/reference/eh-exception-handling-model.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4571:  
  
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