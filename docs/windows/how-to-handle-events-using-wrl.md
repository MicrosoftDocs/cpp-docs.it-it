---
title: 'Procedura: gestire eventi mediante WRL | Documenti Microsoft'
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
ms.assetid: 1c77543f-7b0c-4a94-93bf-e3225885ed76
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: f79d35267750c42466a0b2448f9b10c37fe81f05
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="how-to-handle-events-using-wrl"></a>Procedura: gestire eventi mediante WRL
Questo documento viene illustrato come utilizzare la libreria di modelli C++ (WRL) di Windows Runtime per sottoscrivere e gestire gli eventi di un oggetto Windows Runtime.  
  
 Per un esempio di base che crea un'istanza del componente e recupera un valore della proprietà, vedere [procedura: attivare e utilizzare un componente Windows Runtime](../windows/how-to-activate-and-use-a-windows-runtime-component-using-wrl.md).  
  
## <a name="subscribing-to-and-handling-events"></a>Sottoscrizione e la gestione degli eventi  
 I passaggi seguenti inizio un `ABI::Windows::System::Threading::IDeviceWatcher` dell'oggetto e utilizzare i gestori eventi per monitorare lo stato di avanzamento. Il `IDeviceWatcher` interfaccia consente di enumerare i dispositivi in modo asincrono o in background e ricevere una notifica quando i dispositivi vengono aggiunti, rimossi o modificati. Il [Callback](../windows/callback-function-windows-runtime-cpp-template-library.md) funzione è una parte importante di questo esempio, in quanto consente di specificare i gestori di eventi che elaborano i risultati dell'operazione in background. Segue un esempio completo.  
  
> [!WARNING]
>  Sebbene in genere, si utilizza la libreria di modelli C++ di Windows Runtime in un'app Universal Windows Platform, questo esempio Usa un'applicazione console a scopo illustrativo. Le funzioni come `wprintf_s` non sono disponibili da un'app Universal Windows Platform. Per ulteriori informazioni sui tipi e funzioni che è possibile utilizzare in un'app Universal Windows Platform, vedere [funzioni CRT non supportate nelle App Universal Windows Platform](../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md) e [Win32 e COM per App UWP](/uwp/win32-and-com/win32-and-com-for-uwp-apps).  
  
1.  Includere (`#include`) le richieste di Windows Runtime, libreria di modelli di Windows Runtime C++ o delle intestazioni della libreria Standard C++.  
  
     [!code-cpp[wrl-consume-event#2](../windows/codesnippet/CPP/how-to-handle-events-using-wrl_1.cpp)]  
  
     Windows.Devices.Enumeration.h dichiara i tipi necessari per enumerare i dispositivi.  
  
     Si consiglia di utilizzare la direttiva `using namespace` nel file con estensione cpp per rendere il codice più leggibile.  
  
2.  Dichiarare le variabili locali per l'app. In questo esempio contiene il numero di dispositivi enumerati e token di registrazione che consentono di in un secondo momento la sottoscrizione di eventi.  
  
     [!code-cpp[wrl-consume-event#7](../windows/codesnippet/CPP/how-to-handle-events-using-wrl_2.cpp)]  
  
3.  Inizializzare il Runtime di Windows.  
  
     [!code-cpp[wrl-consume-event#3](../windows/codesnippet/CPP/how-to-handle-events-using-wrl_3.cpp)]  
  
4.  Creare un [evento](../windows/event-class-windows-runtime-cpp-template-library.md) oggetto che consente di sincronizzare il completamento del processo di enumerazione per l'app principale.  
  
     [!code-cpp[wrl-consume-event#4](../windows/codesnippet/CPP/how-to-handle-events-using-wrl_4.cpp)]  
  
    > [!NOTE]
    >  Questo evento è per una dimostrazione solo come parte di un'applicazione console. In questo esempio viene utilizzato l'evento per garantire che un'operazione asincrona viene completata prima l'app si chiude. Nella maggior parte delle App, in genere non attendere completamento delle operazioni asincrone.  
  
5.  Creare una factory di attivazione per il `IDeviceWatcher` interfaccia.  
  
     [!code-cpp[wrl-consume-event#5](../windows/codesnippet/CPP/how-to-handle-events-using-wrl_5.cpp)]  
  
     Il Runtime di Windows utilizza nomi completi per identificare i tipi. Il `RuntimeClass_Windows_Devices_Enumeration_DeviceInformation` parametro è una stringa che viene fornita da Windows Runtime e contiene il nome di classe di runtime richiesto.  
  
6.  Creare il `IDeviceWatcher` oggetto.  
  
     [!code-cpp[wrl-consume-event#6](../windows/codesnippet/CPP/how-to-handle-events-using-wrl_6.cpp)]  
  
7.  Utilizzare il `Callback` funzione per sottoscrivere il `Added`, `EnumerationCompleted`, e `Stopped` eventi.  
  
     [!code-cpp[wrl-consume-event#8](../windows/codesnippet/CPP/how-to-handle-events-using-wrl_7.cpp)]  
  
     Il `Added` gestore dell'evento incrementa il conteggio dei dispositivi enumerati. Si interrompe il processo di enumerazione dopo dieci dispositivi presenti.  
  
     Il `Stopped` gestore eventi rimuove i gestori eventi e imposta l'evento di completamento.  
  
     Il `EnumerationCompleted` gestore dell'evento interrompe il processo di enumerazione. Questo evento viene gestito nel caso in cui sono presenti meno di dieci dispositivi.  
  
    > [!TIP]
    >  In questo esempio viene utilizzata un'espressione lambda per definire i metodi di callback. È inoltre possibile utilizzare gli oggetti funzione (funtori), i puntatori a funzione, o [std:: Function](../standard-library/function-class.md) oggetti. Per altre informazioni sulle espressioni lambda, vedere [Espressioni lambda in C++](../cpp/lambda-expressions-in-cpp.md).  
  
8.  Avviare il processo di enumerazione.  
  
     [!code-cpp[wrl-consume-event#9](../windows/codesnippet/CPP/how-to-handle-events-using-wrl_8.cpp)]  
  
9. Attendere che il processo di enumerazione completare e quindi stampare un messaggio. Tutti gli oggetti `ComPtr` e RAII lasciano l'ambito e vengono rilasciati automaticamente.  
  
     [!code-cpp[wrl-consume-event#10](../windows/codesnippet/CPP/how-to-handle-events-using-wrl_9.cpp)]  
  
 Di seguito è riportato un esempio completo:  
  
 [!code-cpp[wrl-consume-event#1](../windows/codesnippet/CPP/how-to-handle-events-using-wrl_10.cpp)]  
  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Per compilare il codice, copiarlo e quindi incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `wrl-consume-events.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **cl.exe wrl-consume-events.cpp runtimeobject.lib**  
  
## <a name="see-also"></a>Vedere anche  
 [Libreria di modelli di Windows Runtime C++ (WRL)](../windows/windows-runtime-cpp-template-library-wrl.md)