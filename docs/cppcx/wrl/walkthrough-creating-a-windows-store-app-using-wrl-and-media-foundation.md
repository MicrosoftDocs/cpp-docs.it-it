---
title: "Procedura dettagliata: Creazione di un'app UWP tramite WRL e Media Foundation"
ms.date: 04/23/2019
ms.topic: reference
ms.assetid: 0336c550-fbeb-4dc4-aa9b-660f9fc45382
ms.openlocfilehash: fecfc83e674c418a920e3dd73149f4d6294090fa
ms.sourcegitcommit: 6b3d793f0ef3bbb7eefaf9f372ba570fdfe61199
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/15/2020
ms.locfileid: "86404925"
---
# <a name="walkthrough-creating-a-uwp-app-using-wrl-and-media-foundation"></a>Procedura dettagliata: Creazione di un'app UWP tramite WRL e Media Foundation

> [!NOTE]
> Per le nuove app e i componenti di UWP, è consigliabile usare [c++/WinRT](/windows/uwp/cpp-and-winrt-apis/), una nuova proiezione del linguaggio c++ 17 standard per le API Windows Runtime. C++/WinRT è disponibile in Windows 10 SDK dalla versione 1803 in poi. C++/WinRT viene implementato interamente nei file di intestazione ed è progettato per fornire l'accesso di prima classe all'API Windows moderna.

In questa esercitazione si apprenderà come usare la libreria di modelli C++ Windows Runtime (WRL) per creare un'app piattaforma UWP (Universal Windows Platform) (UWP) che usa [Microsoft Media Foundation](/windows/win32/medfound/microsoft-media-foundation-sdk).

Questo esempio illustra come creare una trasformazione personalizzata di Media Foundation che applica un effetto scala di grigi alle immagini acquisite da una webcam. L'app usa C++ per definire la trasformazione personalizzata e C# per usare il componente per trasformare le immagini acquisite. 

> [!NOTE]
> Oltre a C#, per il componente personalizzato di trasformazione è possibile usare JavaScript, Visual Basic o C++.

Nella maggior parte dei casi, è possibile usare C++/CX per creare Windows Runtime. Tuttavia, a volte è necessario usare WRL. Ad esempio, quando si crea un'estensione per supporti per Microsoft Media Foundation, è necessario creare un componente che implementi interfacce COM e Windows Runtime. Poiché C++/CX può creare solo oggetti Windows Runtime, per creare un'estensione multimediale è necessario usare WRL perché consente l'implementazione di interfacce COM e Windows Runtime.

> [!NOTE]
> Anche se questo esempio di codice è lungo, mostra i requisiti minimi per poter creare una trasformazione utile di Media Foundation. È possibile usare l'esempio come punto di partenza per una trasformazione personalizzata. Questo esempio è stato adattato dall' [esempio Media Extensions](https://github.com/Microsoft/VCSamples/tree/master/VC2012Samples/Windows%208%20samples/C%2B%2B/Windows%208%20app%20samples), che usa le estensioni multimediali per applicare effetti a video, decodifica video e creare gestori dello schema che producono flussi multimediali.

## <a name="prerequisites"></a>Prerequisiti

- In Visual Studio 2017 e versioni successive il supporto UWP è un componente facoltativo. Per installarlo, aprire il Programma di installazione di Visual Studio dal menu Start di Windows e trovare la versione di Visual Studio. Scegliere **modifica** e quindi assicurarsi che il riquadro **sviluppo piattaforma UWP (Universal Windows Platform)** sia selezionato. In **componenti facoltativi** controllare **gli strumenti c++ per UWP (V141)** per Visual Studio 2017 o **gli strumenti c++ per UWP (v142)** per Visual Studio 2019. Controllare quindi la versione del Windows SDK che si vuole usare.

- Esperienza con la [Windows Runtime](/uwp/api/).

- Esperienza con COM.

- Una webcam.

## <a name="key-points"></a>Punti chiave

- Per creare un componente personalizzato di Media Foundation, usare un file del linguaggio di definizione dell'interfaccia (Microsoft Interface Definition Language, MIDL) per definire un'interfaccia, implementare l'interfaccia e quindi renderla attivabile dagli altri componenti.

- Gli `namespace` `runtimeclass` attributi e e il `NTDDI_WIN8` valore dell'attributo [Version](/windows/win32/Midl/version) sono parti importanti della definizione MIDL per un componente Media Foundation che usa WRL.

- [Microsoft:: WRL:: RuntimeClass](runtimeclass-class.md) è la classe di base per il componente Media Foundation personalizzato. Il valore di enumerazione [Microsoft:: WRL:: RuntimeClassType:: WinRtClassicComMix](runtimeclasstype-enumeration.md) , fornito come argomento di modello, contrassegna la classe per l'utilizzo sia come classe Windows Runtime sia come classe di runtime com classica.

- La macro [InspectableClass](inspectableclass-macro.md) implementa la funzionalità com di base, ad esempio il conteggio dei riferimenti e il `QueryInterface` metodo, e imposta il nome della classe di runtime e il livello di attendibilità.

- Usare la classe Microsoft:: WRL::[Module](module-class.md) per implementare funzioni di punto di ingresso della dll, ad esempio [DllGetActivationFactory](/windows/win32/winrt/functions), [DllCanUnloadNow](/windows/win32/api/combaseapi/nf-combaseapi-dllcanunloadnow)e [DllGetClassObject](/windows/win32/api/combaseapi/nf-combaseapi-dllgetclassobject).

- Collegare la DLL del componente a runtimeobject.lib. Specificare anche [/WinMD](../../cppcx/compiler-and-linker-options-c-cx.md) nella riga del linker per generare i metadati di Windows.

- Usare i riferimenti al progetto per rendere i componenti WRL accessibili alle app UWP.

### <a name="to-use-the-wrl-to-create-the-media-foundation-grayscale-transform-component"></a>Per usare WRL per creare il componente di trasformazione scala di grigi Media Foundation

1. In Visual Studio creare un progetto di **soluzione vuota** . Assegnare un nome al progetto, ad esempio *MediaCapture*.

1. Aggiungere un progetto **dll (Windows universale)** alla soluzione. Assegnare un nome al progetto, ad esempio *GrayscaleTransform*.

1. Aggiungere un file di **file MIDL (IDL)** al progetto. Assegnare un nome al file, ad esempio *GrayscaleTransform. idl*.

1. Aggiungere questo codice a GrayscaleTransform. idl:

   [!code-cpp[wrl-media-capture#1](../codesnippet/CPP/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_1.idl)]

1. Usare il codice seguente per sostituire il contenuto di `pch.h` :

   [!code-cpp[wrl-media-capture#2](../codesnippet/CPP/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_2.h)]

1. Aggiungere un nuovo file di intestazione al progetto, denominarlo `BufferLock.h` e quindi sostituire il contenuto con il codice seguente:

   [!code-cpp[wrl-media-capture#3](../codesnippet/CPP/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_3.h)]

1. `GrayscaleTransform.h`non viene usato in questo esempio. Volendo, è possibile rimuoverlo dal progetto.

1. Usare il codice seguente per sostituire il contenuto di `GrayscaleTransform.cpp` :

   [!code-cpp[wrl-media-capture#4](../codesnippet/CPP/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_4.cpp)]

1. Aggiungere un nuovo file di definizione moduli al progetto, denominarlo `GrayscaleTransform.def` e quindi aggiungere il codice seguente:

   ```
   EXPORTS
       DllCanUnloadNow                     PRIVATE
       DllGetActivationFactory             PRIVATE
       DllGetClassObject                   PRIVATE
   ```

1. Usare il codice seguente per sostituire il contenuto di `dllmain.cpp` :

   [!code-cpp[wrl-media-capture#6](../codesnippet/CPP/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_6.cpp)]

1. Nella finestra di dialogo **pagine delle proprietà** del progetto impostare le seguenti proprietà del **linker** .

   1. In **input**, per il **file di definizione del modulo**, specificare `GrayScaleTransform.def` .

   1. Inoltre, in **input**aggiungere `runtimeobject.lib` , `mfuuid.lib` e `mfplat.lib` alla proprietà **dipendenze aggiuntive** .

   1. In **metadati di Windows**impostare **genera metadati Windows** su **Sì (/WinMD)**.

### <a name="to-use-the-wrl-the-custom-media-foundation-component-from-a-c-app"></a>Per usare WRL il componente Media Foundation personalizzato da un'app C#

1. Aggiungere un nuovo progetto di **app vuota (Windows universale) C#** alla `MediaCapture` soluzione. Assegnare un nome al progetto, ad esempio *MediaCapture*.

1. Nel progetto **MediaCapture** aggiungere un riferimento al `GrayscaleTransform` progetto. Per informazioni, vedere [procedura: aggiungere o rimuovere riferimenti tramite Gestione riferimenti](/visualstudio/ide/how-to-add-or-remove-references-by-using-the-reference-manager).

1. In `Package.appxmanifest` , nella scheda **funzionalità** , selezionare **microfono** e **Webcam**. Per poter acquisire foto da webcam sono necessarie entrambe le funzionalità.

1. In `MainPage.xaml` aggiungere questo codice all'elemento [Grid](/uwp/api/windows.ui.xaml.controls.grid) radice:

   [!code-xml[wrl-media-capture#7](../codesnippet/Xaml/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_7.xaml)]

1. Usare il codice seguente per sostituire il contenuto di `MainPage.xaml.cs` :

   [!code-cs[wrl-media-capture#8](../codesnippet/CSharp/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_8.cs)]

Nella figura seguente viene illustrato il `MediaCapture app` .

![Applicazione MediaCapture durante l'acquisizione di una foto](../media/wrl_media_capture.png "WRL_Media_Capture")

## <a name="next-steps"></a>Passaggi successivi

L'esempio mostra come acquisire foto, una alla volta, dalla webcam predefinita. L' [esempio Media Extensions](https://github.com/Microsoft/VCSamples/tree/master/VC2012Samples/Windows%208%20samples/C%2B%2B/Windows%208%20app%20samples) esegue altre operazione. Illustra come enumerare i dispositivi webcam e come usare i gestori di schema locali. Illustra inoltre altri effetti multimediali che lavorano sia sulle singole foto che sui flussi di video.

## <a name="see-also"></a>Vedere anche

[Libreria di modelli di Windows Runtime C++ (WRL)](windows-runtime-cpp-template-library-wrl.md)<br/>
[Microsoft Media Foundation](/windows/win32/medfound/microsoft-media-foundation-sdk)
