---
title: "Procedura: completare operazioni asincrone mediante WRL | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: 02173eae-731b-49bc-b412-f1f69388b99d
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# Procedura: completare operazioni asincrone mediante WRL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo documento mostra come utilizzare [!INCLUDE[cppwrl](../windows/includes/cppwrl_md.md)] \([!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)]\) per avviare le operazioni asincrone ed eseguirle quando le operazioni vengono completate.  
  
 Questo documento mostra due esempi.  Il primo esempio avvia un timer asincrono e attende che il timer scada.  In questo esempio, si specifica l'azione asincrona quando si crea l'oggetto timer.  Nel secondo esempio viene eseguito un thread di lavoro in background.  In questo esempio viene illustrato come utilizzare un metodo [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] che restituisce un'interfaccia `IAsyncInfo`.  La funzione [Callback](../windows/callback-function-windows-runtime-cpp-template-library.md) rappresenta una parte importante di entrambi gli esempi poiché permette di specificare un gestore eventi per elaborare i risultati delle operazioni asincrone.  
  
 Per un ulteriore esempio di base che crea un'istanza di tale componente e recupera un valore di proprietà, vedere [Procedura: attivare e utilizzare un componente Windows Runtime](../windows/how-to-activate-and-use-a-windows-runtime-component-using-wrl.md).  
  
> [!TIP]
>  In questi esempi si utilizzano espressioni lambda per definire le callback.  È inoltre possibile utilizzare gli oggetti funzione \(functors\), i puntatori a funzione, o gli oggetti di [std::function](../standard-library/function-class.md).  Per ulteriori informazioni sulle espressioni lambda C\+\+, vedere [Espressioni lambda](../cpp/lambda-expressions-in-cpp.md).  
  
## Esempio: Utilizzare un timer  
 I passaggi seguenti avviano un timer asincrono e attendono che il timer scada.  Di seguito viene fornito l'esempio completo.  
  
> [!WARNING]
>  Sebbene in genere si utilizza [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] in un'applicazione [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)], in questo esempio viene utilizzata un'applicazione console a scopo illustrativo.  Le funzioni come `wprintf_s` non sono disponibili in un'applicazione di [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)].  Per ulteriori informazioni sui tipi e le funzioni che è possibile utilizzare in un'applicazione [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)], vedere [Funzioni CRT non supportate da \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx) e [Win32 e COM per le applicazioni Windows Store](http://msdn.microsoft.com/library/windows/apps/br205757.aspx).  
  
1.  Includere \(`#include`\) qualsiasi intestazione di libreria standard C\+\+ [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] o [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] obbligatoria.  
  
     [!code-cpp[wrl-consume-async#2](../windows/codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_1.cpp)]  
  
     Windows.System.Threading.h dichiara i tipi necessari per utilizzare un timer asincrono.  
  
     Si consiglia di utilizzare la direttiva `using namespace` nel file con estensione cpp per rendere il codice più leggibile.  
  
2.  Inizializzare [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)].  
  
     [!code-cpp[wrl-consume-async#3](../windows/codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_2.cpp)]  
  
3.  Creare una factory di attivazione per l'interfaccia `ABI::Windows::System::Threading::IThreadPoolTimer`.  
  
     [!code-cpp[wrl-consume-async#4](../windows/codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_3.cpp)]  
  
     I nomi completi di [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] da utilizzare per identificare i tipi.  Il parametro `RuntimeClass_Windows_System_Threading_ThreadPoolTimer` è una stringa fornita da [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] e contiene il nome di classe di runtime richiesta.  
  
4.  Creare un oggetto di [Evento](../windows/event-class-windows-runtime-cpp-template-library.md) che sincronizza la callback del timer per l'applicazione principale.  
  
     [!code-cpp[wrl-consume-async#5](../windows/codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_4.cpp)]  
  
    > [!NOTE]
    >  Questo evento è solo a scopo dimostrativo in un'applicazione console.  In questo esempio viene utilizzato l'evento per garantire che un'operazione asincrona completi prima di uscire dall'applicazione.  Nella maggior parte delle applicazioni, in genere non si attende che le operazioni asincrone completino.  
  
5.  Creare un oggetto `IThreadPoolTimer` che scade dopo due secondi.  Utilizzare la funzione `Callback` per creare il gestore eventi \(un oggetto `ABI::Windows::System::Threading::ITimerElapsedHandler` \).  
  
     [!code-cpp[wrl-consume-async#6](../windows/codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_5.cpp)]  
  
6.  Stampa un messaggio nella console e attende la callback del timer per completare.  Tutti gli oggetti `ComPtr` e RAII lasciano l'ambito e vengono rilasciati automaticamente.  
  
     [!code-cpp[wrl-consume-async#7](../windows/codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_6.cpp)]  
  
 Di seguito è disponibile l'esempio completo.  
  
 [!code-cpp[wrl-consume-async#1](../windows/codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_7.cpp)]  
  
### Compilazione del codice  
 Per compilare il codice, copiarlo e quindi incollarlo in un progetto di Visual Studio, o incollarlo in un file denominato `wrl-consume-async.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **cl.exe wrl\-consume\-async.cpp runtimeobject.lib**  
  
## Esempio: Utilizzo di un thread in background  
 I passaggi seguenti avviano un thread di lavoro e definiscono l'azione che deve essere eseguita da tale thread.  Di seguito viene fornito l'esempio completo.  
  
> [!TIP]
>  In questo esempio viene illustrato come utilizzare l'interfaccia `ABI::Windows::Foundation::IAsyncAction`.  È possibile applicare questo modello a qualsiasi interfaccia che implementa `IAsyncInfo`: `IAsyncAction`, `IAsyncActionWithProgress`, `IAsyncOperation` e `IAsyncOperationWithProgress`.  
  
1.  Includere \(`#include`\) qualsiasi intestazione di libreria standard C\+\+ [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] o [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] obbligatoria.  
  
     [!code-cpp[wrl-consume-asyncOp#2](../windows/codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_8.cpp)]  
  
     Windows.System.Threading.h dichiara i tipi necessari per utilizzare un thread di lavoro.  
  
     Si consiglia di utilizzare la direttiva `using namespace` nel file con estensione .cpp per rendere il codice più leggibile.  
  
2.  Inizializzare [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)].  
  
     [!code-cpp[wrl-consume-asyncOp#3](../windows/codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_9.cpp)]  
  
3.  Creare una factory di attivazione per l'interfaccia `ABI::Windows::System::Threading::IThreadPoolStatics`.  
  
     [!code-cpp[wrl-consume-asyncOp#4](../windows/codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_10.cpp)]  
  
4.  Creare un oggetto [Evento](../windows/event-class-windows-runtime-cpp-template-library.md) che sincronizza il completamento del thread di lavoro con l'applicazione principale.  
  
     [!code-cpp[wrl-consume-asyncOp#5](../windows/codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_11.cpp)]  
  
    > [!NOTE]
    >  Questo evento è solo a scopo dimostrativo in un'applicazione console.  In questo esempio viene utilizzato l'evento per garantire che un'operazione asincrona completi prima di uscire dall'applicazione.  Nella maggior parte delle applicazioni, in genere non si attende che le operazioni asincrone completino.  
  
5.  Chiamare il metodo `IThreadPoolStatics::RunAsync` per la creazione di un thread di lavoro.  Utilizzare la funzione `Callback` per definire l'azione.  
  
     [!code-cpp[wrl-consume-asyncOp#6](../windows/codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_12.cpp)]  
  
     La funzione `IsPrime` è definita nell'esempio completo che segue.  
  
6.  Stampa un messaggio nella console e attende il thread per completare.  Tutti gli oggetti `ComPtr` e RAII lasciano l'ambito e vengono rilasciati automaticamente.  
  
     [!code-cpp[wrl-consume-asyncOp#7](../windows/codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_13.cpp)]  
  
 Di seguito è disponibile l'esempio completo.  
  
 [!code-cpp[wrl-consume-asyncOp#1](../windows/codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_14.cpp)]  
  
### Compilazione del codice  
 Per compilare il codice, copiarlo e quindi incollarlo in un progetto di Visual Studio, o incollarlo in un file denominato `wrl-consume-asyncOp.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **cl.exe wrl\-consume\-asyncOp.cpp runtimeobject.lib**  
  
## Vedere anche  
 [Libreria di modelli di Windows Runtime C\+\+ \(WRL\)](../windows/windows-runtime-cpp-template-library-wrl.md)