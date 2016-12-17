---
title: "Procedura: gestire eventi mediante WRL | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: 1c77543f-7b0c-4a94-93bf-e3225885ed76
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: gestire eventi mediante WRL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il seguente documento mostra come utilizzare [!INCLUDE[cppwrl](../windows/includes/cppwrl_md.md)] \([!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)]\) per sottoscrivere e gestire gli eventi di un oggetto [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)].  
  
 Per un ulteriore esempio di base che crea un'istanza di tale componente e recupera un valore di proprietà, vedere [Procedura: attivare e utilizzare un componente Windows Runtime](../windows/how-to-activate-and-use-a-windows-runtime-component-using-wrl.md).  
  
## Sottoscrizione al gestore eventi  
 I passaggi seguenti avviano un oggetto `ABI::Windows::System::Threading::IDeviceWatcher` e utilizzano i gestori eventi per monitorare i progressi.  L'interfaccia `IDeviceWatcher` consente di enumerare i dispositivi in modo asincrono, o in background e di ricevere una notifica quando i dispositivi vengono aggiunti, rimossi, oppure modificati.  La funzione di [Callback](../windows/callback-function-windows-runtime-cpp-template-library.md) rappresenta una parte importante di questo esempio poiché consente di specificare i gestori eventi che elaborano i risultati di un'operazione in background.  Di seguito viene fornito l'esempio completo.  
  
> [!WARNING]
>  Sebbene in genere si utilizza [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] in un'applicazione [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)], in questo esempio viene utilizzata un'applicazione console a scopo illustrativo.  Le funzioni come `wprintf_s` non sono disponibili in un'applicazione di [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)].  Per ulteriori informazioni sui tipi e le funzioni che è possibile utilizzare in un'applicazione [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)], vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx) e [Win32 e COM per le applicazioni Windows Store](http://msdn.microsoft.com/library/windows/apps/br205757.aspx).  
  
1.  Includere \(`#include`\) qualsiasi intestazione di libreria standard C\+\+ [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] o [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] obbligatoria.  
  
     [!code-cpp[wrl-consume-event#2](../windows/codesnippet/CPP/how-to-handle-events-using-wrl_1.cpp)]  
  
     Windows.Devices.Enumeration.h dichiara i tipi necessari per enumerare i dispositivi.  
  
     Si consiglia di utilizzare la direttiva `using namespace` nel file con estensione cpp per rendere il codice più leggibile.  
  
2.  Dichiarare le variabili locali per l'applicazione.  In questo esempio viene utilizzato il conteggio del numero dei dispositivi enumerati e dei token di registrazione che consentono in un secondo momento di annullare la sottoscrizione agli eventi.  
  
     [!code-cpp[wrl-consume-event#7](../windows/codesnippet/CPP/how-to-handle-events-using-wrl_2.cpp)]  
  
3.  Inizializzare [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)].  
  
     [!code-cpp[wrl-consume-event#3](../windows/codesnippet/CPP/how-to-handle-events-using-wrl_3.cpp)]  
  
4.  Creare un oggetto [Evento](../windows/event-class-windows-runtime-cpp-template-library.md) che sincronizza il completamento del processo di enumerazione con l'applicazione principale.  
  
     [!code-cpp[wrl-consume-event#4](../windows/codesnippet/CPP/how-to-handle-events-using-wrl_4.cpp)]  
  
    > [!NOTE]
    >  Questo evento è solo a scopo dimostrativo in un'applicazione console.  In questo esempio viene utilizzato l'evento per garantire che un'operazione asincrona completi prima di uscire dall'applicazione.  Nella maggior parte delle applicazioni, in genere non si attende che le operazioni asincrone completino.  
  
5.  Creare una factory di attivazione per l'interfaccia `IDeviceWatcher`.  
  
     [!code-cpp[wrl-consume-event#5](../windows/codesnippet/CPP/how-to-handle-events-using-wrl_5.cpp)]  
  
     I nomi completi di [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] da utilizzare per identificare i tipi.  Il parametro `RuntimeClass_Windows_Devices_Enumeration_DeviceInformation` è una stringa fornita da [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] e contiene il nome di classe di runtime richiesta.  
  
6.  Creare l'oggetti `IDeviceWatcher`.  
  
     [!code-cpp[wrl-consume-event#6](../windows/codesnippet/CPP/how-to-handle-events-using-wrl_6.cpp)]  
  
7.  Utilizzare la funzione `Callback` per effettuare la sottoscrizione a `Added`, a `EnumerationCompleted` e ad eventi `Stopped`.  
  
     [!code-cpp[wrl-consume-event#8](../windows/codesnippet/CPP/how-to-handle-events-using-wrl_7.cpp)]  
  
     Il gestore eventi `Added` incrementa il conteggio dei dispositivi enumerati.  Interrompe il processo di enumerazione dopo aver identificato dieci dispositivi.  
  
     Il gestore eventi `Stopped` rimuove i gestori eventi e imposta l'evento di completamento.  
  
     Il gestore eventi `EnumerationCompleted` interrompe il processo di enumerazione.  Gestiamo questo evento nel caso siano presenti meno di dieci dispositivi.  
  
    > [!TIP]
    >  Questo esempio utilizza un'espressione lambda per definire le callback.  È inoltre possibile utilizzare gli oggetti funzione \(functors\), i puntatori a funzione, o gli oggetti di [std::function](../standard-library/function-class.md).  Per ulteriori informazioni sulle espressioni lambda, vedere [Espressioni lambda](../cpp/lambda-expressions-in-cpp.md).  
  
8.  Avvia il processo di enumerazione.  
  
     [!code-cpp[wrl-consume-event#9](../windows/codesnippet/CPP/how-to-handle-events-using-wrl_8.cpp)]  
  
9. Attende il processo di enumerazione per completare e stampare un messaggio.  Tutti gli oggetti `ComPtr` e RAII lasciano l'ambito e vengono rilasciati automaticamente.  
  
     [!code-cpp[wrl-consume-event#10](../windows/codesnippet/CPP/how-to-handle-events-using-wrl_9.cpp)]  
  
 Di seguito è disponibile l'esempio completo.  
  
 [!code-cpp[wrl-consume-event#1](../windows/codesnippet/CPP/how-to-handle-events-using-wrl_10.cpp)]  
  
## Compilazione del codice  
 Per compilare il codice, copiarlo e quindi incollarlo in un progetto di Visual Studio, o incollarlo in un file denominato `wrl-consume-events.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **cl.exe wrl\-consume\-events.cpp runtimeobject.lib**  
  
## Vedere anche  
 [Libreria di modelli di Windows Runtime C\+\+ \(WRL\)](../windows/windows-runtime-cpp-template-library-wrl.md)