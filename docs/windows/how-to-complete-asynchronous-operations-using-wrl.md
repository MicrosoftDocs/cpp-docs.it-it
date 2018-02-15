---
title: 'Procedura: completare operazioni asincrone mediante WRL | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
ms.assetid: 02173eae-731b-49bc-b412-f1f69388b99d
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 3b5ff1f5bd36c2cf834375ac0999db835b731284
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="how-to-complete-asynchronous-operations-using-wrl"></a>Procedura: completare operazioni asincrone mediante WRL
In questo documento viene illustrato come utilizzare la libreria di modelli C++ (WRL) di Windows Runtime per avviare le operazioni asincrone ed eseguirle quando le operazioni vengono completate.  
  
 Questo documento sono illustrati due esempi. Nel primo esempio viene avviato un timer asincrono e attende lo scadenza del timer. In questo esempio, specificare l'azione asincrona quando si crea l'oggetto timer. Nel secondo esempio viene eseguito un thread di lavoro in background. Questo esempio viene illustrato come utilizzare un metodo di Windows Runtime che restituisce un `IAsyncInfo` interfaccia. Il [Callback](../windows/callback-function-windows-runtime-cpp-template-library.md) funzione è una parte importante di entrambi gli esempi poiché consente di specificare un gestore eventi per elaborare i risultati delle operazioni asincrone.  
  
 Per un esempio di base che crea un'istanza di un componente e recupera un valore della proprietà, vedere [procedura: attivare e utilizzare un componente Windows Runtime](../windows/how-to-activate-and-use-a-windows-runtime-component-using-wrl.md).  
  
> [!TIP]
>  Questi esempi utilizzano espressioni lambda per definire i metodi di callback. È inoltre possibile utilizzare gli oggetti funzione (funtori), i puntatori a funzione, o [std:: Function](../standard-library/function-class.md) oggetti. Per ulteriori informazioni sulle espressioni lambda C++, vedere [espressioni Lambda](../cpp/lambda-expressions-in-cpp.md).  
  
## <a name="example-working-with-a-timer"></a>Esempio: Utilizzo di un Timer  
 La procedura seguente avvia un timer asincrono e attesa lo scadenza del timer. Segue un esempio completo.  
  
> [!WARNING]
>  Sebbene in genere, si utilizza la libreria di modelli C++ di Windows Runtime in un'app di Windows della piattaforma UWP (Universal), in questo esempio Usa un'applicazione console a scopo illustrativo. Le funzioni come `wprintf_s` non sono disponibili da un'app UWP. Per ulteriori informazioni sui tipi e funzioni che è possibile utilizzare in un'app UWP, vedere [funzioni CRT non supportate nelle App Universal Windows Platform](../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md) e [Win32 e COM per App UWP](/uwp/win32-and-com/win32-and-com-for-uwp-apps).  
  
1.  Includere (`#include`) le richieste di Windows Runtime, libreria di modelli di Windows Runtime C++ o delle intestazioni della libreria Standard C++.  
  
     [!code-cpp[wrl-consume-async#2](../windows/codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_1.cpp)]  
  
     Windows.System.Threading.h dichiara i tipi necessari per utilizzare un timer asincrono.  
  
     Si consiglia di utilizzare la direttiva `using namespace` nel file con estensione cpp per rendere il codice più leggibile.  
  
2.  Inizializzare il Runtime di Windows.  
  
     [!code-cpp[wrl-consume-async#3](../windows/codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_2.cpp)]  
  
3.  Creare una factory di attivazione per il `ABI::Windows::System::Threading::IThreadPoolTimer` interfaccia.  
  
     [!code-cpp[wrl-consume-async#4](../windows/codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_3.cpp)]  
  
     Il Runtime di Windows utilizza nomi completi per identificare i tipi. Il `RuntimeClass_Windows_System_Threading_ThreadPoolTimer` parametro è una stringa che viene fornita da Windows Runtime e contiene il nome di classe di runtime richiesto.  
  
4.  Creare un [evento](../windows/event-class-windows-runtime-cpp-template-library.md) oggetto che consente di sincronizzare il callback del timer per l'app principale.  
  
     [!code-cpp[wrl-consume-async#5](../windows/codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_4.cpp)]  
  
    > [!NOTE]
    >  Questo evento è per una dimostrazione solo come parte di un'applicazione console. In questo esempio viene utilizzato l'evento per garantire che un'operazione asincrona viene completata prima l'app si chiude. Nella maggior parte delle App, in genere non attendere completamento delle operazioni asincrone.  
  
5.  Creare un `IThreadPoolTimer` che scade dopo due secondi. Utilizzare il `Callback` funzione per creare il gestore dell'evento (un `ABI::Windows::System::Threading::ITimerElapsedHandler` oggetto).  
  
     [!code-cpp[wrl-consume-async#6](../windows/codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_5.cpp)]  
  
6.  Stampa un messaggio nella console e attendere che il callback del timer per il completamento. Tutti gli oggetti `ComPtr` e RAII lasciano l'ambito e vengono rilasciati automaticamente.  
  
     [!code-cpp[wrl-consume-async#7](../windows/codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_6.cpp)]  
  
 Di seguito è riportato un esempio completo:  
  
 [!code-cpp[wrl-consume-async#1](../windows/codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_7.cpp)]  
  
### <a name="compiling-the-code"></a>Compilazione del codice  
 Per compilare il codice, copiarlo e quindi incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `wrl-consume-async.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **cl.exe wrl-consume-async.cpp runtimeobject.lib**  
  
## <a name="example-working-with-a-background-thread"></a>Esempio: Utilizzo di un Thread in Background  
 La procedura seguente avvia un thread di lavoro e definisce l'azione eseguita da tale thread. Segue un esempio completo.  
  
> [!TIP]
>  Questo esempio viene illustrato come utilizzare il `ABI::Windows::Foundation::IAsyncAction` interfaccia. È possibile applicare questo modello per qualsiasi interfaccia implementata da `IAsyncInfo`: `IAsyncAction`, `IAsyncActionWithProgress`, `IAsyncOperation`, e `IAsyncOperationWithProgress`.  
  
1.  Includere (`#include`) le richieste di Windows Runtime, libreria di modelli di Windows Runtime C++ o delle intestazioni della libreria Standard C++.  
  
     [!code-cpp[wrl-consume-asyncOp#2](../windows/codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_8.cpp)]  
  
     Windows.System.Threading.h dichiara i tipi necessari per utilizzare un thread di lavoro.  
  
     È consigliabile utilizzare il `using namespace` direttiva nel file con estensione cpp per rendere il codice più leggibile.  
  
2.  Inizializzare il Runtime di Windows.  
  
     [!code-cpp[wrl-consume-asyncOp#3](../windows/codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_9.cpp)]  
  
3.  Creare una factory di attivazione per il `ABI::Windows::System::Threading::IThreadPoolStatics` interfaccia.  
  
     [!code-cpp[wrl-consume-asyncOp#4](../windows/codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_10.cpp)]  
  
4.  Creare un [evento](../windows/event-class-windows-runtime-cpp-template-library.md) oggetto che consente di sincronizzare il completamento del thread di lavoro per l'app principale.  
  
     [!code-cpp[wrl-consume-asyncOp#5](../windows/codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_11.cpp)]  
  
    > [!NOTE]
    >  Questo evento è per una dimostrazione solo come parte di un'applicazione console. In questo esempio viene utilizzato l'evento per garantire che un'operazione asincrona viene completata prima l'app si chiude. Nella maggior parte delle App, in genere non attendere completamento delle operazioni asincrone.  
  
5.  Chiamare il `IThreadPoolStatics::RunAsync` metodo per creare un thread di lavoro. Utilizzare il `Callback` (funzione) per definire l'azione.  
  
     [!code-cpp[wrl-consume-asyncOp#6](../windows/codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_12.cpp)]  
  
     Il `IsPrime` funzione è definita nell'esempio completo che segue.  
  
6.  Stampa un messaggio nella console e attendere il completamento del thread. Tutti gli oggetti `ComPtr` e RAII lasciano l'ambito e vengono rilasciati automaticamente.  
  
     [!code-cpp[wrl-consume-asyncOp#7](../windows/codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_13.cpp)]  
  
 Di seguito è riportato un esempio completo:  
  
 [!code-cpp[wrl-consume-asyncOp#1](../windows/codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_14.cpp)]  
  
### <a name="compiling-the-code"></a>Compilazione del codice  
 Per compilare il codice, copiarlo e quindi incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `wrl-consume-asyncOp.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **cl.exe wrl-consume-asyncOp.cpp runtimeobject.lib**  
  
## <a name="see-also"></a>Vedere anche  
 [Libreria di modelli di Windows Runtime C++ (WRL)](../windows/windows-runtime-cpp-template-library-wrl.md)
