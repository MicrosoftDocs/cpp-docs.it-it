---
title: 'Procedura: Gestire eventi mediante WRL'
ms.date: 11/04/2016
ms.topic: reference
ms.assetid: 1c77543f-7b0c-4a94-93bf-e3225885ed76
ms.openlocfilehash: 959a85d6cf6de666ae56d09035acefe9a3828ae8
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59033177"
---
# <a name="how-to-handle-events-using-wrl"></a>Procedura: Gestire eventi mediante WRL

Questo documento illustra come usare la libreria di modelli C++ (WRL) di Windows Runtime per sottoscrivere e gestire gli eventi di un oggetto Windows Runtime.

Per un esempio più semplice che crea un'istanza del componente e recupera un valore della proprietà, vedere [come: Attivare e utilizzare un componente di Runtime Windows](how-to-activate-and-use-a-windows-runtime-component-using-wrl.md).

## <a name="subscribing-to-and-handling-events"></a>Sottoscrizione e la gestione degli eventi

La procedura seguente avvia un `ABI::Windows::System::Threading::IDeviceWatcher` dell'oggetto e usare i gestori eventi per monitorare lo stato di avanzamento. Il `IDeviceWatcher` interfaccia consente di enumerare i dispositivi in modo asincrono o in background e ricevere una notifica quando i dispositivi sono aggiunto, rimosso o modificati. Il [Callback](callback-function-wrl.md) funzione è una parte importante di questo esempio perché consente di specificare i gestori di eventi che elaborano i risultati dell'operazione in background. Segue un esempio completo.

> [!WARNING]
> Sebbene in genere si usa la libreria di modelli C++ di Windows Runtime in un'app Universal Windows Platform, questo esempio Usa un'app console a scopo illustrativo. Le funzioni come `wprintf_s` non sono disponibili in un'app della piattaforma Windows universale. Per altre informazioni sui tipi e funzioni che è possibile usare in un'app Universal Windows Platform, vedere [funzioni CRT non supportate nelle App della piattaforma Windows Universal](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md) e [Win32 e COM per App UWP](/uwp/win32-and-com/win32-and-com-for-uwp-apps).

1. Includere (`#include`) le richieste di Windows Runtime, libreria modelli C++ per Windows Runtime o delle intestazioni della libreria Standard C++.

   [!code-cpp[wrl-consume-event#2](../codesnippet/CPP/how-to-handle-events-using-wrl_1.cpp)]

   `Windows.Devices.Enumeration.h` dichiara i tipi necessari per enumerare i dispositivi.

   Si consiglia di utilizzare la direttiva `using namespace` nel file con estensione cpp per rendere il codice più leggibile.

2. Dichiarare le variabili locali per l'app. In questo esempio contiene il numero di dispositivi enumerati e token di registrazione che permettono in un secondo momento la sottoscrizione di eventi.

   [!code-cpp[wrl-consume-event#7](../codesnippet/CPP/how-to-handle-events-using-wrl_2.cpp)]

3. Inizializzare il Runtime di Windows.

   [!code-cpp[wrl-consume-event#3](../codesnippet/CPP/how-to-handle-events-using-wrl_3.cpp)]

4. Creare un [evento](event-class-wrl.md) oggetto che consente di sincronizzare il completamento del processo di enumerazione per l'app principale.

   [!code-cpp[wrl-consume-event#4](../codesnippet/CPP/how-to-handle-events-using-wrl_4.cpp)]

   > [!NOTE]
   > Questo evento è a scopo dimostrativo solo come parte di un'app console. Questo esempio Usa l'evento per garantire che un'operazione asincrona venga completata prima l'app si chiude. Nella maggior parte delle App, in genere non rischiare che completamento delle operazioni asincrone.

5. Creare una factory di attivazione per il `IDeviceWatcher` interfaccia.

   [!code-cpp[wrl-consume-event#5](../codesnippet/CPP/how-to-handle-events-using-wrl_5.cpp)]

   Il Runtime di Windows utilizza nomi completi per identificare i tipi. Il `RuntimeClass_Windows_Devices_Enumeration_DeviceInformation` parametro è una stringa che viene fornita dal Runtime di Windows e che contiene il nome di classe di runtime necessari.

6. Creare il `IDeviceWatcher` oggetto.

   [!code-cpp[wrl-consume-event#6](../codesnippet/CPP/how-to-handle-events-using-wrl_6.cpp)]

7. Usare la `Callback` funzione per sottoscrivere i `Added`, `EnumerationCompleted`, e `Stopped` eventi.

   [!code-cpp[wrl-consume-event#8](../codesnippet/CPP/how-to-handle-events-using-wrl_7.cpp)]

   Il `Added` gestore dell'evento incrementa il conteggio dei dispositivi enumerati. Arresta il processo di enumerazione dopo dieci dispositivi si trovano.

   Il `Stopped` gestore dell'evento rimuove i gestori eventi e imposta l'evento di completamento.

   Il `EnumerationCompleted` gestore eventi Arresta il processo di enumerazione. Questo evento viene gestito nel caso in cui sono presenti meno di dieci dispositivi.

   > [!TIP]
   > Questo esempio Usa un'espressione lambda per definire i metodi di callback. È anche possibile usare gli oggetti funzione (funtori), i puntatori a funzione, o [std:: Function](../../standard-library/function-class.md) oggetti. Per altre informazioni sulle espressioni lambda, vedere [Espressioni lambda in C++](../../cpp/lambda-expressions-in-cpp.md).

8. Avviare il processo di enumerazione.

   [!code-cpp[wrl-consume-event#9](../codesnippet/CPP/how-to-handle-events-using-wrl_8.cpp)]

9. Attendere il processo di enumerazione completare e quindi stampa un messaggio. Tutti gli oggetti `ComPtr` e RAII lasciano l'ambito e vengono rilasciati automaticamente.

   [!code-cpp[wrl-consume-event#10](../codesnippet/CPP/how-to-handle-events-using-wrl_9.cpp)]

Ecco un esempio completo:

[!code-cpp[wrl-consume-event#1](../codesnippet/CPP/how-to-handle-events-using-wrl_10.cpp)]

## <a name="compiling-the-code"></a>Compilazione del codice

Per compilare il codice, copiarlo e quindi incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `wrl-consume-events.cpp` e quindi eseguire il comando seguente in un **Prompt dei comandi di Visual Studio** finestra.

`cl.exe wrl-consume-events.cpp runtimeobject.lib`

## <a name="see-also"></a>Vedere anche

[Libreria di modelli di Windows Runtime C++ (WRL)](windows-runtime-cpp-template-library-wrl.md)