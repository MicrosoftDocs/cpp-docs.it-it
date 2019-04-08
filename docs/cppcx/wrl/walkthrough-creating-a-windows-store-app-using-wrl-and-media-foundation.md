---
title: "Procedura dettagliata: Creazione di un'app UWP tramite WRL e Media Foundation"
ms.date: 09/17/2018
ms.topic: reference
ms.assetid: 0336c550-fbeb-4dc4-aa9b-660f9fc45382
ms.openlocfilehash: e0254be8c6fa185f75c46898d4da51742195550a
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59036036"
---
# <a name="walkthrough-creating-a-uwp-app-using-wrl-and-media-foundation"></a>Procedura dettagliata: Creazione di un'app UWP tramite WRL e Media Foundation

Informazioni su come usare la libreria di modelli C++ (WRL) di Windows Runtime per creare un'app Universal Windows Platform (UWP) che usa [Microsoft Media Foundation](/windows/desktop/medfound/microsoft-media-foundation-sdk).

Questo esempio illustra come creare una trasformazione personalizzata di Media Foundation che applica un effetto scala di grigi alle immagini acquisite da una webcam. L'app usa C++ per definire la trasformazione personalizzata e C# per usare il componente per trasformare le immagini acquisite. 

> [!NOTE]
> Oltre a C#, per il componente personalizzato di trasformazione è possibile usare JavaScript, Visual Basic o C++.

Nella maggior parte dei casi, è possibile usare c++ /CX per creare un Runtime di Windows. Tuttavia, in alcuni casi è necessario usare il WRL. Ad esempio, quando si crea un'estensione multimediale per Microsoft Media Foundation, è necessario creare un componente che implementa le interfacce COM e Windows Runtime. Poiché C++ c++ /CX è possibile creare solo gli oggetti di Windows Runtime, per creare un'estensione multimediale è necessario usare il WRL perché consente l'implementazione di interfacce COM e Windows Runtime.

> [!NOTE]
> Anche se questo esempio di codice è lungo, mostra i requisiti minimi per poter creare una trasformazione utile di Media Foundation. È possibile usare l'esempio come punto di partenza per una trasformazione personalizzata. In questo esempio è stato adattato dal [esempio di estensioni multimediali](http://code.msdn.microsoft.com/windowsapps/Media-extensions-sample-7b466096), che usa le estensioni multimediali per applicare effetti ai video, decodificare i video e creare gestori di schema che generano flussi multimediali.

## <a name="prerequisites"></a>Prerequisiti

- Esperienza con la [Windows Runtime](https://msdn.microsoft.com/library/windows/apps/br211377.aspx).

- Esperienza con COM.

- Una webcam.

## <a name="key-points"></a>Punti chiave

- Per creare un componente personalizzato di Media Foundation, usare un file del linguaggio di definizione dell'interfaccia (Microsoft Interface Definition Language, MIDL) per definire un'interfaccia, implementare l'interfaccia e quindi renderla attivabile dagli altri componenti.

- Il `namespace` e `runtimeclass` attributi e il `NTDDI_WIN8` [versione](/windows/desktop/Midl/version) valore dell'attributo sono parti importanti della definizione MIDL per un componente di Media Foundation che usa WRL.

- [Microsoft::WRL::RuntimeClass](runtimeclass-class.md) è la classe base per il componente personalizzato di Media Foundation. Il [Microsoft::WRL::RuntimeClassType::WinRtClassicComMix](runtimeclasstype-enumeration.md) valore di enumerazione, che viene fornito come argomento di modello, contrassegna una classe da utilizzare come classe di Runtime di Windows sia come classe di runtime classica COM.

- Il [InspectableClass](inspectableclass-macro.md) macro implementa funzionalità COM di base, ad esempio il conteggio dei riferimenti e `QueryInterface` (metodo) e imposta il runtime di nome della classe e livello di attendibilità.

- Utilizzare il Microsoft:: wrl::[classe modulo](module-class.md) per implementare le funzioni di punto di ingresso DLL, ad esempio [DllGetActivationFactory](https://msdn.microsoft.com/library/br205771.aspx), [DllCanUnloadNow](/windows/desktop/api/combaseapi/nf-combaseapi-dllcanunloadnow), e [ DllGetClassObject](/windows/desktop/api/combaseapi/nf-combaseapi-dllgetclassobject).

- Collegare la DLL del componente a runtimeobject.lib. Specificare anche [/WINMD](../../cppcx/compiler-and-linker-options-c-cx.md) nella riga del linker per generare i metadati di Windows.

- Usare riferimenti di progetto per rendere accessibile alle App UWP dei componenti WRL.

### <a name="to-use-the-wrl-to-create-the-media-foundation-grayscale-transform-component"></a>Per l'uso di WRL per creare la scala di grigi di Media Foundation componente di trasformazione

1. In Visual Studio, creare un **soluzione vuota** progetto. Nome del progetto, ad esempio *MediaCapture*.

1. Aggiungere un **DLL (Windows universale)** progetto alla soluzione. Nome del progetto, ad esempio *GrayscaleTransform*.

1. Aggiungere un **Midl File (. idl)** file al progetto. Nome file, ad esempio *Grayscaletransform*.

1. Aggiungere questo codice a Grayscaletransform:

   [!code-cpp[wrl-media-capture#1](../codesnippet/CPP/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_1.idl)]

1. Usare il codice seguente sostituire il contenuto di `pch.h`:

   [!code-cpp[wrl-media-capture#2](../codesnippet/CPP/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_2.h)]

1. Aggiungere un nuovo file di intestazione al progetto, denominarlo `BufferLock.h`e quindi sostituire il contenuto con il seguente codice:

   [!code-cpp[wrl-media-capture#3](../codesnippet/CPP/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_3.h)]

1. `GrayscaleTransform.h` non viene usata in questo esempio. Volendo, è possibile rimuoverlo dal progetto.

1. Usare il codice seguente sostituire il contenuto di `GrayscaleTransform.cpp`:

   [!code-cpp[wrl-media-capture#4](../codesnippet/CPP/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_4.cpp)]

1. Aggiungere un nuovo file di definizione moduli al progetto, denominarlo `GrayscaleTransform.def`e quindi aggiungere questo codice:

   ```
   EXPORTS
       DllCanUnloadNow                     PRIVATE
       DllGetActivationFactory             PRIVATE
       DllGetClassObject                   PRIVATE
   ```

1. Usare il codice seguente sostituire il contenuto di `dllmain.cpp`:

   [!code-cpp[wrl-media-capture#6](../codesnippet/CPP/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_6.cpp)]

1. Il progetto **pagine delle proprietà** finestra di dialogo casella, impostare quanto segue **Linker** proprietà.

   1. Sotto **Input**, per il **File di definizione moduli**, specificare `GrayScaleTransform.def`.

   1. Anche in **Input**, aggiungere `runtimeobject.lib`, `mfuuid.lib`, e `mfplat.lib` per i **dipendenze aggiuntive** proprietà.

   1. Sotto **dei metadati di Windows**, impostare **genera metadati Windows** al **Sì (/ WINMD)**.

### <a name="to-use-the-wrl-the-custom-media-foundation-component-from-a-c-app"></a>Usare il componente personalizzato di Media Foundation da un'app C# di WRL

1. Aggiungere un nuovo **C# App vuota (Windows universale)** del progetto per il `MediaCapture` soluzione. Nome del progetto, ad esempio *MediaCapture*.

1. Nel **MediaCapture** del progetto, aggiungere un riferimento al `GrayscaleTransform` progetto. Per altre informazioni, vedere [come: Aggiungere o rimuovere riferimenti tramite Gestione riferimenti](/visualstudio/ide/how-to-add-or-remove-references-by-using-the-reference-manager).

1. Nelle `Package.appxmanifest`via il **funzionalità** , selezionare **microfono** e **Webcam**. Per poter acquisire foto da webcam sono necessarie entrambe le funzionalità.

1. Nelle `MainPage.xaml`, aggiungere questo codice nella directory principale [griglia](https://msdn.microsoft.com/library/windows/apps/xaml/windows.ui.xaml.controls.grid.aspx) elemento:

   [!code-xml[wrl-media-capture#7](../codesnippet/Xaml/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_7.xaml)]

1. Usare il codice seguente sostituire il contenuto di `MainPage.xaml.cs`:

   [!code-cs[wrl-media-capture#8](../codesnippet/CSharp/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_8.cs)]

La figura seguente illustra il `MediaCapture app`.

![Applicazione mediacapture durante l'acquisizione di una foto](../media/wrl_media_capture.png "WRL_Media_Capture")

## <a name="next-steps"></a>Passaggi successivi

L'esempio mostra come acquisire foto, una alla volta, dalla webcam predefinita. Il [esempio di estensioni multimediali](http://code.msdn.microsoft.com/windowsapps/Media-extensions-sample-7b466096) ancora più avanzate. Illustra come enumerare i dispositivi webcam e come usare i gestori di schema locali. Illustra inoltre altri effetti multimediali che lavorano sia sulle singole foto che sui flussi di video.

## <a name="see-also"></a>Vedere anche

[Libreria di modelli di Windows Runtime C++ (WRL)](windows-runtime-cpp-template-library-wrl.md)<br/>
[Microsoft Media Foundation](/windows/desktop/medfound/microsoft-media-foundation-sdk)<br/>
[Esempio di estensioni multimediali](http://code.msdn.microsoft.com/windowsapps/Media-extensions-sample-7b466096)