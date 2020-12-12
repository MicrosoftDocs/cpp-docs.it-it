---
description: 'Altre informazioni su: procedura: completare operazioni asincrone mediante WRL'
title: 'Procedura: completare operazioni asincrone mediante WRL'
ms.date: 11/04/2016
ms.topic: reference
ms.assetid: 02173eae-731b-49bc-b412-f1f69388b99d
ms.openlocfilehash: f8c929d737f113d995b5d171896517b3d94a6aa4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97124592"
---
# <a name="how-to-complete-asynchronous-operations-using-wrl"></a>Procedura: completare operazioni asincrone mediante WRL

In questo documento viene illustrato come utilizzare la libreria di modelli C++ Windows Runtime (WRL) per avviare le operazioni asincrone ed eseguire il lavoro quando le operazioni vengono completate.

In questo documento vengono illustrati due esempi. Il primo esempio avvia un timer asincrono e attende la scadenza del timer. In questo esempio si specifica l'azione asincrona quando si crea l'oggetto timer. Nel secondo esempio viene eseguito un thread di lavoro in background. Questo esempio illustra come usare un metodo di Windows Runtime che restituisce un' `IAsyncInfo` interfaccia. La funzione di [callback](callback-function-wrl.md) è una parte importante di entrambi gli esempi perché consente loro di specificare un gestore eventi per elaborare i risultati delle operazioni asincrone.

Per un esempio più semplice in cui viene creata un'istanza di un componente e viene recuperato un valore di proprietà, vedere [procedura: attivare e utilizzare un componente Windows Runtime](how-to-activate-and-use-a-windows-runtime-component-using-wrl.md).

> [!TIP]
> In questi esempi vengono usate le espressioni lambda per definire i callback. È anche possibile usare oggetti funzione (funtori), puntatori a funzione o oggetti [std:: Function](../../standard-library/function-class.md) . Per ulteriori informazioni sulle espressioni lambda C++, vedere [espressioni lambda](../../cpp/lambda-expressions-in-cpp.md).

## <a name="example-working-with-a-timer"></a>Esempio: utilizzo di un timer

I passaggi seguenti avviano un timer asincrono e attendono la scadenza del timer. L'esempio completo segue.

> [!WARNING]
> Anche se in genere si usa la libreria di modelli Windows Runtime C++ in un'app piattaforma UWP (Universal Windows Platform) (UWP), questo esempio usa un'app console per l'illustrazione. Funzioni come `wprintf_s` non sono disponibili da un'app UWP. Per altre informazioni sui tipi e sulle funzioni che è possibile usare in un'app UWP, vedere [funzioni CRT non supportate nelle app piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md) e [Win32 e com per app UWP](/uwp/win32-and-com/win32-and-com-for-uwp-apps).

1. Includere ( `#include` ) qualsiasi Windows Runtime necessario, Windows Runtime libreria di modelli c++ o intestazioni della libreria standard c++.

   [!code-cpp[wrl-consume-async#2](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_1.cpp)]

   `Windows.System.Threading.h` dichiara i tipi necessari per l'utilizzo di un timer asincrono.

   Si consiglia di utilizzare la direttiva `using namespace` nel file con estensione cpp per rendere il codice più leggibile.

2. Inizializzare il Windows Runtime.

   [!code-cpp[wrl-consume-async#3](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_2.cpp)]

3. Creare una factory di attivazione per l' `ABI::Windows::System::Threading::IThreadPoolTimer` interfaccia.

   [!code-cpp[wrl-consume-async#4](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_3.cpp)]

   Il Windows Runtime utilizza nomi completi per identificare i tipi. Il `RuntimeClass_Windows_System_Threading_ThreadPoolTimer` parametro è una stringa fornita dal Windows Runtime e contiene il nome della classe runtime richiesta.

4. Creare un oggetto [evento](event-class-wrl.md) che sincronizza il callback del timer all'app principale.

   [!code-cpp[wrl-consume-async#5](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_4.cpp)]

   > [!NOTE]
   > Questo evento è a scopo dimostrativo solo come parte di un'app console. Questo esempio usa l'evento per garantire il completamento di un'operazione asincrona prima che l'app venga chiusa. Nella maggior parte delle app, in genere non è necessario attendere il completamento delle operazioni asincrone.

5. Creare un `IThreadPoolTimer` oggetto che scada dopo due secondi. Usare la `Callback` funzione per creare il gestore eventi (un `ABI::Windows::System::Threading::ITimerElapsedHandler` oggetto).

   [!code-cpp[wrl-consume-async#6](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_5.cpp)]

6. Stampare un messaggio nella console e attendere il completamento del callback del timer. Tutti gli oggetti `ComPtr` e RAII lasciano l'ambito e vengono rilasciati automaticamente.

   [!code-cpp[wrl-consume-async#7](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_6.cpp)]

Di seguito è riportato l'esempio completo:

[!code-cpp[wrl-consume-async#1](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_7.cpp)]

### <a name="compiling-the-code"></a>Compilazione del codice

Per compilare il codice, copiarlo e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato, `wrl-consume-async.cpp` quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

`cl.exe wrl-consume-async.cpp runtimeobject.lib`

## <a name="example-working-with-a-background-thread"></a>Esempio: utilizzo di un thread in background

I passaggi seguenti avviano un thread di lavoro e definiscono l'azione eseguita da tale thread. L'esempio completo segue.

> [!TIP]
> Questo esempio illustra come usare l' `ABI::Windows::Foundation::IAsyncAction` interfaccia. È possibile applicare questo modello a qualsiasi interfaccia che implementi `IAsyncInfo` : `IAsyncAction` ,, `IAsyncActionWithProgress` `IAsyncOperation` e `IAsyncOperationWithProgress` .

1. Includere ( `#include` ) qualsiasi Windows Runtime necessario, Windows Runtime libreria di modelli c++ o intestazioni della libreria standard c++.

   [!code-cpp[wrl-consume-asyncOp#2](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_8.cpp)]

   Windows.System. Threading. h dichiara i tipi necessari per usare un thread di lavoro.

   È consigliabile usare la `using namespace` direttiva nel file con estensione cpp per rendere il codice più leggibile.

2. Inizializzare il Windows Runtime.

   [!code-cpp[wrl-consume-asyncOp#3](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_9.cpp)]

3. Creare una factory di attivazione per l' `ABI::Windows::System::Threading::IThreadPoolStatics` interfaccia.

   [!code-cpp[wrl-consume-asyncOp#4](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_10.cpp)]

4. Creare un oggetto [evento](event-class-wrl.md) che sincronizza il completamento del thread di lavoro con l'app principale.

   [!code-cpp[wrl-consume-asyncOp#5](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_11.cpp)]

   > [!NOTE]
   > Questo evento è a scopo dimostrativo solo come parte di un'app console. Questo esempio usa l'evento per garantire il completamento di un'operazione asincrona prima che l'app venga chiusa. Nella maggior parte delle app, in genere non è necessario attendere il completamento delle operazioni asincrone.

5. Chiamare il `IThreadPoolStatics::RunAsync` metodo per creare un thread di lavoro. Utilizzare la `Callback` funzione per definire l'azione.

   [!code-cpp[wrl-consume-asyncOp#6](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_12.cpp)]

   La `IsPrime` funzione è definita nell'esempio completo riportato di seguito.

6. Stampare un messaggio nella console e attendere il completamento del thread. Tutti gli oggetti `ComPtr` e RAII lasciano l'ambito e vengono rilasciati automaticamente.

   [!code-cpp[wrl-consume-asyncOp#7](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_13.cpp)]

Di seguito è riportato l'esempio completo:

[!code-cpp[wrl-consume-asyncOp#1](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_14.cpp)]

### <a name="compiling-the-code"></a>Compilazione del codice

Per compilare il codice, copiarlo e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato, `wrl-consume-asyncOp.cpp` quindi eseguire il comando seguente in una finestra del **prompt dei comandi di Visual Studio** .

`cl.exe wrl-consume-asyncOp.cpp runtimeobject.lib`

## <a name="see-also"></a>Vedi anche

[Libreria di modelli di Windows Runtime C++ (WRL)](windows-runtime-cpp-template-library-wrl.md)
