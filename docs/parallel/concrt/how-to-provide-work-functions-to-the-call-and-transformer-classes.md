---
title: 'Procedura: fornire funzioni lavoro alle classi call e transformer | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- call class, example
- using the transformer class [Concurrency Runtime]
- using the call class [Concurrency Runtime]
ms.assetid: df715ce4-8507-41ca-b204-636d11707a73
caps.latest.revision: "15"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 52ab28a015fa0312a5d064401451640c2747e9db
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-provide-work-functions-to-the-call-and-transformer-classes"></a>Procedura: Fornire funzioni lavoro alle classi call e transformer
Questo argomento vengono illustrate diverse modalità per fornire funzioni lavoro al [Concurrency:: Call](../../parallel/concrt/reference/call-class.md) e [Concurrency:: transformer](../../parallel/concrt/reference/transformer-class.md) classi.  
  
 Nel primo esempio viene illustrato come passare un'espressione lambda a un `call` oggetto. Nel secondo esempio viene illustrato come passare un oggetto funzione a un `call` oggetto. Il terzo esempio viene illustrato come associare un metodo della classe per un `call` oggetto.  
  
 A scopo illustrativo, ogni esempio in questo argomento viene utilizzato il `call` classe. Per un esempio che utilizza il `transformer` classe, vedere [procedura: usare la classe transformer in Pipeline di dati](../../parallel/concrt/how-to-use-transformer-in-a-data-pipeline.md).  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato un modo comune per utilizzare il `call` classe. In questo esempio viene passata una funzione lambda per il `call` costruttore.  
  
 [!code-cpp[concrt-call-lambda#1](../../parallel/concrt/codesnippet/cpp/how-to-provide-work-functions-to-the-call-and-transformer-classes_1.cpp)]  
  
 Questo esempio produce il seguente output:  
  
```Output  
13 squared is 169.  
```  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente è simile al precedente, ad eccezione del fatto che usa la `call` classe insieme a un oggetto funzione (functor).  
  
 [!code-cpp[concrt-call-functor#1](../../parallel/concrt/codesnippet/cpp/how-to-provide-work-functions-to-the-call-and-transformer-classes_2.cpp)]  
  
## <a name="example"></a>Esempio  

 Nell'esempio seguente è simile al precedente, ad eccezione del fatto che usa il [std::bind1st](../../standard-library/functional-functions.md#bind1st) e [std:: mem_fun](../../standard-library/functional-functions.md#mem_fun) funzioni per associare un `call` oggetto a un metodo di classe.  

  
 Utilizzare questa tecnica se è necessario associare un `call` o `transformer` oggetto a un metodo di classe specifico anziché l'operatore di chiamata di funzione, `operator()`.  
  
 [!code-cpp[concrt-call-method#1](../../parallel/concrt/codesnippet/cpp/how-to-provide-work-functions-to-the-call-and-transformer-classes_3.cpp)]  
  
 È inoltre possibile assegnare il risultato del `bind1st` funzione un [std:: Function](../../standard-library/function-class.md) o utilizzare il `auto` (parola chiave), come illustrato nell'esempio seguente.  
  
 [!code-cpp[concrt-call-method#2](../../parallel/concrt/codesnippet/cpp/how-to-provide-work-functions-to-the-call-and-transformer-classes_4.cpp)]  
  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `call.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc call.cpp**  
  
## <a name="see-also"></a>Vedere anche  
 [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)   
 [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)   
 [Procedura: usare la classe transformer in Pipeline di dati](../../parallel/concrt/how-to-use-transformer-in-a-data-pipeline.md)   
 [Call (classe)](../../parallel/concrt/reference/call-class.md)   
 [Classe transformer](../../parallel/concrt/reference/transformer-class.md)
