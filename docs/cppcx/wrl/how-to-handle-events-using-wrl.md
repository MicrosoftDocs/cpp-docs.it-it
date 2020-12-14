---
description: 'Altre informazioni su: procedura: gestire gli eventi tramite WRL'
title: 'Procedura: gestire eventi mediante WRL'
ms.date: 11/04/2016
ms.topic: reference
ms.assetid: 1c77543f-7b0c-4a94-93bf-e3225885ed76
ms.openlocfilehash: b1be04c1356594e2dc2060d031f35d836ad277bb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97229184"
---
# <a name="how-to-handle-events-using-wrl"></a>Procedura: gestire eventi mediante WRL

In questo documento viene illustrato come utilizzare la libreria di modelli C++ Windows Runtime (WRL) per sottoscrivere e gestire gli eventi di un oggetto Windows Runtime.

Per un esempio più semplice in cui viene creata un'istanza del componente e viene recuperato un valore di proprietà, vedere [procedura: attivare e utilizzare un componente Windows Runtime](how-to-activate-and-use-a-windows-runtime-component-using-wrl.md).

## <a name="subscribing-to-and-handling-events"></a>Sottoscrizione e gestione degli eventi

Nei passaggi seguenti viene avviato un `ABI::Windows::System::Threading::IDeviceWatcher` oggetto e vengono utilizzati i gestori eventi per monitorare lo stato di avanzamento. L' `IDeviceWatcher` interfaccia consente di enumerare i dispositivi in modo asincrono o in background e di ricevere una notifica quando vengono aggiunti, rimossi o modificati i dispositivi. La funzione di [callback](callback-function-wrl.md) è una parte importante di questo esempio perché consente di specificare i gestori eventi che elaborano i risultati dell'operazione in background. L'esempio completo segue.

> [!WARNING]
> Anche se in genere si usa la libreria di modelli Windows Runtime C++ in un'app piattaforma UWP (Universal Windows Platform), questo esempio usa un'app console per l'illustrazione. Funzioni come `wprintf_s` non sono disponibili da un'app piattaforma UWP (Universal Windows Platform). Per altre informazioni sui tipi e sulle funzioni che è possibile usare in un'app piattaforma UWP (Universal Windows Platform), vedere [funzioni CRT non supportate nelle app piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md) e [Win32 e com per le app UWP](/uwp/win32-and-com/win32-and-com-for-uwp-apps).

1. Includere ( `#include` ) qualsiasi Windows Runtime necessario, Windows Runtime libreria di modelli c++ o intestazioni della libreria standard c++.

   [!code-cpp[wrl-consume-event#2](../codesnippet/CPP/how-to-handle-events-using-wrl_1.cpp)]

   `Windows.Devices.Enumeration.h` dichiara i tipi necessari per enumerare i dispositivi.

   Si consiglia di utilizzare la direttiva `using namespace` nel file con estensione cpp per rendere il codice più leggibile.

2. Dichiarare le variabili locali per l'app. Questo esempio include il conteggio del numero di dispositivi enumerati e i token di registrazione che consentono di annullare la sottoscrizione di eventi in un secondo momento.

   [!code-cpp[wrl-consume-event#7](../codesnippet/CPP/how-to-handle-events-using-wrl_2.cpp)]

3. Inizializzare il Windows Runtime.

   [!code-cpp[wrl-consume-event#3](../codesnippet/CPP/how-to-handle-events-using-wrl_3.cpp)]

4. Creare un oggetto [evento](event-class-wrl.md) che sincronizza il completamento del processo di enumerazione con l'app principale.

   [!code-cpp[wrl-consume-event#4](../codesnippet/CPP/how-to-handle-events-using-wrl_4.cpp)]

   > [!NOTE]
   > Questo evento è a scopo dimostrativo solo come parte di un'app console. Questo esempio usa l'evento per garantire il completamento di un'operazione asincrona prima che l'app venga chiusa. Nella maggior parte delle app, in genere non è necessario attendere il completamento delle operazioni asincrone.

5. Creare una factory di attivazione per l' `IDeviceWatcher` interfaccia.

   [!code-cpp[wrl-consume-event#5](../codesnippet/CPP/how-to-handle-events-using-wrl_5.cpp)]

   Il Windows Runtime utilizza nomi completi per identificare i tipi. Il `RuntimeClass_Windows_Devices_Enumeration_DeviceInformation` parametro è una stringa fornita dal Windows Runtime e contiene il nome della classe runtime richiesta.

6. Creare l'oggetto `IDeviceWatcher`.

   [!code-cpp[wrl-consume-event#6](../codesnippet/CPP/how-to-handle-events-using-wrl_6.cpp)]

7. Utilizzare la `Callback` funzione per sottoscrivere gli `Added` `EnumerationCompleted` eventi, e `Stopped` .

   [!code-cpp[wrl-consume-event#8](../codesnippet/CPP/how-to-handle-events-using-wrl_7.cpp)]

   Il `Added` gestore eventi incrementa il numero di dispositivi enumerati. Arresta il processo di enumerazione dopo che sono stati trovati dieci dispositivi.

   Il `Stopped` gestore eventi rimuove i gestori eventi e imposta l'evento di completamento.

   Il `EnumerationCompleted` gestore eventi interrompe il processo di enumerazione. Questo evento viene gestito se sono presenti meno di dieci dispositivi.

   > [!TIP]
   > In questo esempio viene utilizzata un'espressione lambda per definire i callback. È anche possibile usare oggetti funzione (funtori), puntatori a funzione o oggetti [std:: Function](../../standard-library/function-class.md) . Per ulteriori informazioni sulle espressioni lambda, vedere [espressioni lambda](../../cpp/lambda-expressions-in-cpp.md).

8. Avviare il processo di enumerazione.

   [!code-cpp[wrl-consume-event#9](../codesnippet/CPP/how-to-handle-events-using-wrl_8.cpp)]

9. Attendere il completamento del processo di enumerazione, quindi stampare un messaggio. Tutti gli oggetti `ComPtr` e RAII lasciano l'ambito e vengono rilasciati automaticamente.

   [!code-cpp[wrl-consume-event#10](../codesnippet/CPP/how-to-handle-events-using-wrl_9.cpp)]

Di seguito è riportato l'esempio completo:

[!code-cpp[wrl-consume-event#1](../codesnippet/CPP/how-to-handle-events-using-wrl_10.cpp)]

## <a name="compiling-the-code"></a>Compilazione del codice

Per compilare il codice, copiarlo e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato, `wrl-consume-events.cpp` quindi eseguire il comando seguente in una finestra del **prompt dei comandi di Visual Studio** .

`cl.exe wrl-consume-events.cpp runtimeobject.lib`

## <a name="see-also"></a>Vedi anche

[Libreria di modelli di Windows Runtime C++ (WRL)](windows-runtime-cpp-template-library-wrl.md)
