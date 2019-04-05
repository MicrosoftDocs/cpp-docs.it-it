---
title: 'Procedura: Completare operazioni asincrone mediante WRL'
ms.date: 11/04/2016
ms.topic: reference
ms.assetid: 02173eae-731b-49bc-b412-f1f69388b99d
ms.openlocfilehash: 09c341e5e3d4f6007d5d5f66b7c06e1f0af5a65c
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59040225"
---
# <a name="how-to-complete-asynchronous-operations-using-wrl"></a>Procedura: Completare operazioni asincrone mediante WRL

Questo documento illustra come usare la libreria di modelli C++ (WRL) di Windows Runtime per avviare le operazioni asincrone ed eseguirle quando le operazioni completate.

Questo documento illustra due esempi. Nel primo esempio viene avviato un timer asincrono e attende che scada il timer. In questo esempio si specifica l'azione asincrona quando si crea l'oggetto timer. Nel secondo esempio viene eseguito un thread di lavoro in background. Questo esempio illustra come usare un metodo di Windows Runtime che restituisce un `IAsyncInfo` interfaccia. Il [Callback](callback-function-wrl.md) funzione è una parte importante di entrambi gli esempi in quanto consente di specificare un gestore eventi per elaborare i risultati delle operazioni asincrone.

Per un esempio più semplice che crea un'istanza di un componente e recupera un valore della proprietà, vedere [come: Attivare e utilizzare un componente di Runtime Windows](how-to-activate-and-use-a-windows-runtime-component-using-wrl.md).

> [!TIP]
> Questi esempi utilizzano le espressioni lambda per definire i metodi di callback. È anche possibile usare gli oggetti funzione (funtori), i puntatori a funzione, o [std:: Function](../../standard-library/function-class.md) oggetti. Per altre informazioni sulle espressioni lambda C++, vedere [espressioni Lambda](../../cpp/lambda-expressions-in-cpp.md).

## <a name="example-working-with-a-timer"></a>Esempio: Utilizzo di un Timer

La procedura seguente avvia un timer asincrono e attesa che scada il timer. Segue un esempio completo.

> [!WARNING]
> Sebbene in genere si usa la libreria di modelli C++ di Windows Runtime in un'app Universal Windows Platform (UWP), questo esempio Usa un'app console a scopo illustrativo. Le funzioni come `wprintf_s` non sono disponibili in un'app UWP. Per altre informazioni sui tipi e funzioni che è possibile usare in un'app UWP, vedere [funzioni CRT non supportate nelle App della piattaforma Windows Universal](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md) e [Win32 e COM per App UWP](/uwp/win32-and-com/win32-and-com-for-uwp-apps).

1. Includere (`#include`) le richieste di Windows Runtime, libreria modelli C++ per Windows Runtime o delle intestazioni della libreria Standard C++.

   [!code-cpp[wrl-consume-async#2](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_1.cpp)]

   `Windows.System.Threading.h` dichiara i tipi necessari per usare un timer asincrono.

   Si consiglia di utilizzare la direttiva `using namespace` nel file con estensione cpp per rendere il codice più leggibile.

2. Inizializzare il Runtime di Windows.

   [!code-cpp[wrl-consume-async#3](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_2.cpp)]

3. Creare una factory di attivazione per il `ABI::Windows::System::Threading::IThreadPoolTimer` interfaccia.

   [!code-cpp[wrl-consume-async#4](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_3.cpp)]

   Il Runtime di Windows utilizza nomi completi per identificare i tipi. Il `RuntimeClass_Windows_System_Threading_ThreadPoolTimer` parametro è una stringa che viene fornita dal Runtime di Windows e che contiene il nome di classe di runtime necessari.

4. Creare un [evento](event-class-wrl.md) oggetto che consente di sincronizzare il callback di timer per l'app principale.

   [!code-cpp[wrl-consume-async#5](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_4.cpp)]

   > [!NOTE]
   > Questo evento è a scopo dimostrativo solo come parte di un'app console. Questo esempio Usa l'evento per garantire che un'operazione asincrona venga completata prima l'app si chiude. Nella maggior parte delle App, in genere non rischiare che completamento delle operazioni asincrone.

5. Creare un `IThreadPoolTimer` che scade dopo due secondi. Usare la `Callback` funzione per creare il gestore dell'evento (un `ABI::Windows::System::Threading::ITimerElapsedHandler` oggetto).

   [!code-cpp[wrl-consume-async#6](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_5.cpp)]

6. Stampa un messaggio nella console e attende il callback di timer per il completamento. Tutti gli oggetti `ComPtr` e RAII lasciano l'ambito e vengono rilasciati automaticamente.

   [!code-cpp[wrl-consume-async#7](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_6.cpp)]

Ecco un esempio completo:

[!code-cpp[wrl-consume-async#1](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_7.cpp)]

### <a name="compiling-the-code"></a>Compilazione del codice

Per compilare il codice, copiarlo e quindi incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `wrl-consume-async.cpp` e quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.

`cl.exe wrl-consume-async.cpp runtimeobject.lib`

## <a name="example-working-with-a-background-thread"></a>Esempio: Utilizzo di un Thread in Background

La procedura seguente avvia un thread di lavoro e definisce l'azione eseguita da tale thread. Segue un esempio completo.

> [!TIP]
> In questo esempio viene illustrato come lavorare con i `ABI::Windows::Foundation::IAsyncAction` interfaccia. È possibile applicare questo modello a qualsiasi interfaccia che implementa `IAsyncInfo`: `IAsyncAction`, `IAsyncActionWithProgress`, `IAsyncOperation`, e `IAsyncOperationWithProgress`.

1. Includere (`#include`) le richieste di Windows Runtime, libreria modelli C++ per Windows Runtime o delle intestazioni della libreria Standard C++.

   [!code-cpp[wrl-consume-asyncOp#2](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_8.cpp)]

   Windows.System.Threading.h dichiara i tipi necessari per usare un thread di lavoro.

   È consigliabile usare il `using namespace` direttiva nel file con estensione cpp per rendere il codice più leggibile.

2. Inizializzare il Runtime di Windows.

   [!code-cpp[wrl-consume-asyncOp#3](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_9.cpp)]

3. Creare una factory di attivazione per il `ABI::Windows::System::Threading::IThreadPoolStatics` interfaccia.

   [!code-cpp[wrl-consume-asyncOp#4](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_10.cpp)]

4. Creare un [evento](event-class-wrl.md) oggetto che consente di sincronizzare il completamento del thread di lavoro per l'app principale.

   [!code-cpp[wrl-consume-asyncOp#5](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_11.cpp)]

   > [!NOTE]
   > Questo evento è a scopo dimostrativo solo come parte di un'app console. Questo esempio Usa l'evento per garantire che un'operazione asincrona venga completata prima l'app si chiude. Nella maggior parte delle App, in genere non rischiare che completamento delle operazioni asincrone.

5. Chiamare il `IThreadPoolStatics::RunAsync` metodo per creare un thread di lavoro. Usare il `Callback` (funzione) per definire l'azione.

   [!code-cpp[wrl-consume-asyncOp#6](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_12.cpp)]

   Il `IsPrime` funzione è definita nell'esempio completo che segue.

6. Stampa un messaggio nella console e attendere che il thread per il completamento. Tutti gli oggetti `ComPtr` e RAII lasciano l'ambito e vengono rilasciati automaticamente.

   [!code-cpp[wrl-consume-asyncOp#7](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_13.cpp)]

Ecco un esempio completo:

[!code-cpp[wrl-consume-asyncOp#1](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_14.cpp)]

### <a name="compiling-the-code"></a>Compilazione del codice

Per compilare il codice, copiarlo e quindi incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `wrl-consume-asyncOp.cpp` e quindi eseguire il comando seguente in un **Prompt dei comandi di Visual Studio** finestra.

`cl.exe wrl-consume-asyncOp.cpp runtimeobject.lib`

## <a name="see-also"></a>Vedere anche

[Libreria di modelli di Windows Runtime C++ (WRL)](windows-runtime-cpp-template-library-wrl.md)