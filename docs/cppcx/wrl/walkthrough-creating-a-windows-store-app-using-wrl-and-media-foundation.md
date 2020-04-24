---
title: "Procedura dettagliata: creazione di un'app UWP tramite WRL e Media Foundation"
ms.date: 04/23/2019
ms.topic: reference
ms.assetid: 0336c550-fbeb-4dc4-aa9b-660f9fc45382
ms.openlocfilehash: 272092982c5e9cc57f52043e08c8bd384c43ea96
ms.sourcegitcommit: 89d9e1cb08fa872483d1cde98bc2a7c870e505e9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "82031511"
---
# <a name="walkthrough-creating-a-uwp-app-using-wrl-and-media-foundation"></a>Procedura dettagliata: creazione di un'app UWP tramite WRL e Media Foundation

> [!NOTE]
> Per le nuove app e i nuovi componenti UWP, ti consigliamo di usare la proiezione di linguaggio [c'è/WinRT,](/windows/uwp/cpp-and-winrt-apis/)standard per le API di Windows Runtime. Il linguaggio C/WinRT è disponibile in Windows 10 SDK a partire dalla versione 1803 successive. Il linguaggio C, WinRT, è implementato interamente nei file di intestazione ed è progettato per fornire l'accesso di prima classe alla moderna API di Windows.

In questa esercitazione imparerai a usare la libreria di modelli (WRL, Windows Runtime C, Windows Runtime C, Windows Runtime Template Library) per creare un'app UWP (Universal Windows Platform) che usa [Microsoft Media Foundation.](/windows/win32/medfound/microsoft-media-foundation-sdk)

Questo esempio illustra come creare una trasformazione personalizzata di Media Foundation che applica un effetto scala di grigi alle immagini acquisite da una webcam. L'app usa C++ per definire la trasformazione personalizzata e C# per usare il componente per trasformare le immagini acquisite. 

> [!NOTE]
> Oltre a C#, per il componente personalizzato di trasformazione è possibile usare JavaScript, Visual Basic o C++.

Nella maggior parte dei casi, è possibile utilizzare C . Tuttavia, a volte è necessario utilizzare il WRL. Ad esempio, quando si crea un'estensione multimediale per Microsoft Media Foundation, è necessario creare un componente che implementa le interfacce COM e Windows Runtime. Dal punto di vista è possibile creare solo oggetti di Windows Runtime, per creare un'estensione multimediale è necessario usare WRL perché consente l'implementazione di entrambe le interfacce COM e Windows Runtime.

> [!NOTE]
> Anche se questo esempio di codice è lungo, mostra i requisiti minimi per poter creare una trasformazione utile di Media Foundation. È possibile usare l'esempio come punto di partenza per una trasformazione personalizzata. Questo esempio è tratto [dall'esempio Di estensioni multimediali](https://code.msdn.microsoft.com/windowsapps/Media-extensions-sample-7b466096), che utilizza le estensioni multimediali per applicare effetti ai video, decodificare video e creare gestori di schema che producono flussi multimediali.

## <a name="prerequisites"></a>Prerequisiti

- In Visual Studio 2017 e versioni successive, il supporto UWP è un componente facoltativo. Per installarlo, aprire il programma di installazione di Visual Studio dal menu Start di Windows e trovare la versione di Visual Studio. Scegliere **Modifica** e quindi assicurarsi che il riquadro Sviluppo piattaforma **Windows universale** sia selezionato. In **Componenti facoltativi** controllare gli strumenti di C, per la **piattaforma UWP (v141)** per Visual Studio 2017 o gli strumenti di **C, per la piattaforma UWP (v142)** per Visual Studio 2019. Controllare quindi la versione di Windows SDK che si desidera utilizzare.

- Esperienza con [Windows Runtime](/uwp/api/).

- Esperienza con COM.

- Una webcam.

## <a name="key-points"></a>Punti chiave

- Per creare un componente personalizzato di Media Foundation, usare un file del linguaggio di definizione dell'interfaccia (Microsoft Interface Definition Language, MIDL) per definire un'interfaccia, implementare l'interfaccia e quindi renderla attivabile dagli altri componenti.

- Gli `namespace` `runtimeclass` attributi e `NTDDI_WIN8`e il valore dell'attributo [version](/windows/win32/Midl/version) sono parti importanti della definizione MIDL per un componente di Media Foundation che utilizza WRL.

- [Microsoft::WRL::RuntimeClass](runtimeclass-class.md) è la classe di base per il componente Media Foundation personalizzato. Il valore di enumerazione [Microsoft::WRL::RuntimeClassType::WinRtClassicComMix,](runtimeclasstype-enumeration.md) fornito come argomento di modello, contrassegna la classe per l'utilizzo sia come classe Windows Runtime che come classe di runtime COM classica.

- La macro [InspectableClass](inspectableclass-macro.md) implementa la funzionalità COM `QueryInterface` di base, ad esempio il conteggio dei riferimenti e il metodo, e imposta il nome della classe runtime e il livello di attendibilità.

- Utilizzare la classe Microsoft::WRL::[Module](module-class.md) per implementare funzioni di punto di ingresso DLL quali [DllGetActivationFactory](/windows/win32/winrt/functions), [DllCanUnloadNow](/windows/win32/api/combaseapi/nf-combaseapi-dllcanunloadnow)e [DllGetClassObject](/windows/win32/api/combaseapi/nf-combaseapi-dllgetclassobject).

- Collegare la DLL del componente a runtimeobject.lib. Specificare anche [/WINMD](../../cppcx/compiler-and-linker-options-c-cx.md) nella riga del linker per generare metadati di Windows.

- Usare i riferimenti al progetto per rendere i componenti WRL accessibili alle app UWP.

### <a name="to-use-the-wrl-to-create-the-media-foundation-grayscale-transform-component"></a>Per utilizzare WRL per creare il componente di trasformazione in scala di grigi di Media Foundation

1. In Visual Studio creare un progetto **Soluzione vuota.** Assegnare al progetto il nome *MediaCapture*.

1. Aggiungere un progetto **DLL (Windows universale)** alla soluzione. Assegnare al progetto il nome, ad esempio *GrayscaleTransform*.

1. Aggiungere un file **Midl File (.idl)** al progetto. Assegnare al file il nome, ad esempio *GrayscaleTransform.idl*.

1. Aggiungere questo codice a GrayscaleTransform.idl:Add this code to GrayscaleTransform.idl:

   [!code-cpp[wrl-media-capture#1](../codesnippet/CPP/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_1.idl)]

1. Utilizzare il codice seguente per `pch.h`sostituire il contenuto di :

   [!code-cpp[wrl-media-capture#2](../codesnippet/CPP/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_2.h)]

1. Aggiungere un nuovo file di intestazione al progetto, denominarlo `BufferLock.h`e quindi sostituire il contenuto con il codice seguente:

   [!code-cpp[wrl-media-capture#3](../codesnippet/CPP/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_3.h)]

1. `GrayscaleTransform.h`non viene utilizzato in questo esempio. Volendo, è possibile rimuoverlo dal progetto.

1. Utilizzare il codice seguente per `GrayscaleTransform.cpp`sostituire il contenuto di :

   [!code-cpp[wrl-media-capture#4](../codesnippet/CPP/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_4.cpp)]

1. Aggiungere un nuovo file di definizione `GrayscaleTransform.def`moduli al progetto, denominarlo e quindi aggiungere il seguente codice:

   ```
   EXPORTS
       DllCanUnloadNow                     PRIVATE
       DllGetActivationFactory             PRIVATE
       DllGetClassObject                   PRIVATE
   ```

1. Utilizzare il codice seguente per `dllmain.cpp`sostituire il contenuto di :

   [!code-cpp[wrl-media-capture#6](../codesnippet/CPP/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_6.cpp)]

1. Nella finestra di dialogo **Pagine delle proprietà** del progetto, impostare le seguenti proprietà del **linker.**

   1. In **Input**, per il `GrayScaleTransform.def`file di **definizione**del modulo , specificare .

   1. Sempre **Input**in Input `runtimeobject.lib` `mfuuid.lib`, `mfplat.lib` aggiungere , e alla proprietà **Dipendenze aggiuntive** .

   1. In **Metadati di Windows**, impostare Genera **metadati di Windows** su Sì **(/WINMD)**.

### <a name="to-use-the-wrl-the-custom-media-foundation-component-from-a-c-app"></a>Per usare WRL il componente di Media Foundation personalizzato da un'app in C

1. Aggiungere alla `MediaCapture` soluzione un nuovo progetto di applicazione vuota di **C.** Assegnare al progetto il nome *MediaCapture*.

1. Nel progetto **MediaCapture** aggiungere un `GrayscaleTransform` riferimento al progetto. Per ulteriori informazioni, vedere [Procedura: aggiungere o rimuovere riferimenti utilizzando Gestione riferimenti](/visualstudio/ide/how-to-add-or-remove-references-by-using-the-reference-manager).

1. In `Package.appxmanifest`, nella scheda **Funzionalità** selezionare **Microfono** e **webcam**. Per poter acquisire foto da webcam sono necessarie entrambe le funzionalità.

1. In `MainPage.xaml`, aggiungere questo codice all'elemento [Grid](/uwp/api/windows.ui.xaml.controls.grid) radice:

   [!code-xml[wrl-media-capture#7](../codesnippet/Xaml/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_7.xaml)]

1. Utilizzare il codice seguente per `MainPage.xaml.cs`sostituire il contenuto di :

   [!code-cs[wrl-media-capture#8](../codesnippet/CSharp/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_8.cs)]

Nella figura seguente `MediaCapture app`viene illustrato il .

![Applicazione MediaCapture durante l'acquisizione di una foto](../media/wrl_media_capture.png "WRL_Media_Capture")

## <a name="next-steps"></a>Passaggi successivi

L'esempio mostra come acquisire foto, una alla volta, dalla webcam predefinita. [L'esempio di estensioni multimediali](https://code.msdn.microsoft.com/windowsapps/Media-extensions-sample-7b466096) esegue altre informazioni. Illustra come enumerare i dispositivi webcam e come usare i gestori di schema locali. Illustra inoltre altri effetti multimediali che lavorano sia sulle singole foto che sui flussi di video.

## <a name="see-also"></a>Vedere anche

[Libreria di modelli di Windows Runtime C++ (WRL)](windows-runtime-cpp-template-library-wrl.md)<br/>
[Microsoft Media Foundation](/windows/win32/medfound/microsoft-media-foundation-sdk)<br/>
[Esempio di estensioni multimediali](https://code.msdn.microsoft.com/windowsapps/Media-extensions-sample-7b466096)
