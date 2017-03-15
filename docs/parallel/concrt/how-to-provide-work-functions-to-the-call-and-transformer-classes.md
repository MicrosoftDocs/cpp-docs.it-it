---
title: "Procedura: Fornire funzioni lavoro alle classi call e transformer | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "call (classe), esempio"
  - "utilizzo della classe transformer [Runtime di concorrenza]"
  - "utilizzo della classe call [Runtime di concorrenza]"
ms.assetid: df715ce4-8507-41ca-b204-636d11707a73
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# Procedura: Fornire funzioni lavoro alle classi call e transformer
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo argomento vengono illustrati vari modi per fornire funzioni lavoro alle classi [concurrency::call](../../parallel/concrt/reference/call-class.md) e [concurrency::transformer](../../parallel/concrt/reference/transformer-class.md).  
  
 Nel primo esempio viene illustrato come passare un'espressione lambda a un oggetto `call`.  Nel secondo esempio viene illustrato come passare un oggetto funzione a un oggetto `call`.  Nel terzo esempio viene illustrato come associare un metodo della classe a un oggetto `call`.  
  
 A titolo esemplificativo, ogni esempio in questo argomento utilizza la classe `call`.  Per un esempio che utilizza la classe `transformer`, vedere [Procedura: Usare la classe transformer in una pipeline di dati](../../parallel/concrt/how-to-use-transformer-in-a-data-pipeline.md).  
  
## Esempio  
 Nell'esempio seguente viene illustrato un utilizzo comune della classe `call`.  In questo esempio viene passata una funzione lambda al costruttore `call`.  
  
 [!code-cpp[concrt-call-lambda#1](../../parallel/concrt/codesnippet/CPP/how-to-provide-work-functions-to-the-call-and-transformer-classes_1.cpp)]  
  
 Questo esempio produce l'output che segue.  
  
  **13 squared is 169.**   
## Esempio  
 L'esempio seguente è simile al precedente, ad eccezione del fatto che la classe `call` viene utilizzata insieme a un oggetto funzione \(functor\).  
  
 [!code-cpp[concrt-call-functor#1](../../parallel/concrt/codesnippet/CPP/how-to-provide-work-functions-to-the-call-and-transformer-classes_2.cpp)]  
  
## Esempio  
 L'esempio seguente è simile al precedente, con l'unica eccezione che utilizza le funzioni [std::bind1st](../Topic/bind1st%20Function.md) e [std::mem\_fun](../Topic/mem_fun%20Function.md) per associare un oggetto `call` a un metodo della classe.  
  
 Utilizzare questa tecnica se è necessario associare un oggetto `call` o `transformer` a un metodo della classe specifico anziché l'operatore della chiamata di funzione, `operator()`.  
  
 [!code-cpp[concrt-call-method#1](../../parallel/concrt/codesnippet/CPP/how-to-provide-work-functions-to-the-call-and-transformer-classes_3.cpp)]  
  
 È inoltre possibile assegnare il risultato della funzione `bind1st` a un oggetto [std::function](../../standard-library/function-class.md) oppure utilizzare la parola chiave `auto`, come mostrato nell'esempio seguente.  
  
 [!code-cpp[concrt-call-method#2](../../parallel/concrt/codesnippet/CPP/how-to-provide-work-functions-to-the-call-and-transformer-classes_4.cpp)]  
  
## Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio o incollarlo in un file denominato `call.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **cl.exe \/EHsc call.cpp**  
  
## Vedere anche  
 [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)   
 [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)   
 [Procedura: Usare la classe transformer in una pipeline di dati](../../parallel/concrt/how-to-use-transformer-in-a-data-pipeline.md)   
 [Classe call](../../parallel/concrt/reference/call-class.md)   
 [Classe transformer](../../parallel/concrt/reference/transformer-class.md)