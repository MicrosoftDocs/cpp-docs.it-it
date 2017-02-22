---
title: "Procedura dettagliata: creazione di un&#39;applicazione Windows Store mediante WRL e Media Foundation | Microsoft Docs"
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
ms.assetid: 0336c550-fbeb-4dc4-aa9b-660f9fc45382
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Procedura dettagliata: creazione di un&#39;applicazione Windows Store mediante WRL e Media Foundation
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Informazioni su come usare il [!INCLUDE[cppwrl](../windows/includes/cppwrl_md.md)] ([!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)]) per creare un [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] applicazione che utilizza [Microsoft Media Foundation](http://msdn.microsoft.com/library/windows/apps/ms694197).  
  
 Questo esempio illustra come creare una trasformazione personalizzata di Media Foundation che applica un effetto scala di grigi alle immagini acquisite da una webcam. L'app usa C++ per definire la trasformazione personalizzata e C# per usare il componente per trasformare le immagini acquisite.   
  
> [!NOTE]
>  Oltre a C#, per il componente personalizzato di trasformazione è possibile usare JavaScript, Visual Basic o C++.  
  
 Nella maggior parte dei casi, è possibile usare [!INCLUDE[cppwrt](../build/reference/includes/cppwrt_md.md)] ([!INCLUDE[cppwrt_short](../build/reference/includes/cppwrt_short_md.md)]) per creare componenti [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]. (Per ulteriori informazioni, vedere [Riferimenti al linguaggio Visual C++](../Topic/Visual%20C++%20Language%20Reference%20\(C++-CX\).md).) A volte, tuttavia, è necessario usare [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)]. Ad esempio, quando si crea un'estensione multimediale per Microsoft Media Foundation, è necessario creare un componente che implementa sia le interfacce COM che le interfacce di [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]. Poiché [!INCLUDE[cppwrt_short](../build/reference/includes/cppwrt_short_md.md)] può creare solo oggetti [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)], per creare un'estensione multimediale è necessario usare [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] in quanto consente l'implementazione sia delle interfacce COM che delle interfacce di [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)].  
  
> [!NOTE]
>  Anche se questo esempio di codice è lungo, mostra i requisiti minimi per poter creare una trasformazione utile di Media Foundation. È possibile usare l'esempio come punto di partenza per una trasformazione personalizzata. In questo esempio è stato adattato di [esempio estensioni multimediali](http://code.msdn.microsoft.com/windowsapps/Media-extensions-sample-7b466096), le estensioni di supporto utilizzato per applicare effetti al video, decodifica video e creare gestori di schema che producono flussi multimediali.  
  
## <a name="prerequisites"></a>Prerequisiti  
  
-   Esperienza con la [Windows Runtime](http://msdn.microsoft.com/library/windows/apps/br211377.aspx).  
  
-   Esperienza con COM.  
  
-   Una webcam.  
  
## <a name="key-points"></a>Punti chiave  
  
-   Per creare un componente personalizzato di Media Foundation, usare un file del linguaggio di definizione dell'interfaccia (Microsoft Interface Definition Language, MIDL) per definire un'interfaccia, implementare l'interfaccia e quindi renderla attivabile dagli altri componenti.  
  
-   Il `namespace` e `runtimeclass` gli attributi e `NTDDI_WIN8`[versione](http://msdn.microsoft.com/it-it/66ac5cf3-2230-44fd-aaf6-8013e4a4ae81) valore dell'attributo sono parti importanti della definizione di MIDL per un componente di Media Foundation che utilizza [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)].  
  
-   [Microsoft::WRL::RuntimeClass](../windows/runtimeclass-class.md) è la classe base per il componente di Media Foundation. Il [Microsoft::WRL::RuntimeClassType::WinRtClassicComMix](../windows/runtimeclasstype-enumeration.md) valore enum, che viene fornito come argomento di modello, contrassegna la classe per l'utilizzo sia come un [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] (classe) e come classe di runtime COM classica.  
  
-   Il [InspectableClass](../windows/inspectableclass-macro.md) macro implementa funzionalità COM, ad esempio il conteggio dei riferimenti e `QueryInterface` (metodo) e imposta il runtime di nome di classe e livello attendibilità.  
  
-   Utilizzare il Microsoft:: wrl::[classe modulo](https://www.microsoftonedoc.com/#/organizations/e6f6a65cf14f462597b64ac058dbe1d0/projects/3fedad16-eaf1-41a6-8f96-0c1949c68f32/containers/a3daf831-1c5f-4bbe-964d-503870caf874/tocpaths/b4acf5de-2f4c-4c8b-b5ff-9140d023ecbe/locales/en-US) per implementare funzioni DLL del punto di ingresso, ad esempio [DllGetActivationFactory](http://msdn.microsoft.com/library/br205771.aspx), [DllCanUnloadNow](http://msdn.microsoft.com/library/windows/desktop/ms690368\(v=vs.85\).aspx), e [DllGetClassObject](http://msdn.microsoft.com/library/windows/desktop/ms680760\(v=vs.85\).aspx).  
  
-   Collegare la DLL del componente a runtimeobject.lib. Specificare inoltre [/WINMD](../Topic/Compiler%20and%20Linker%20options%20\(C++-CX\).md) nella riga del linker per generare metadati di Windows.  
  
-   Usare i riferimenti al progetto per rendere i componenti [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] accessibili alle app di [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)].  
  
### <a name="to-use-the-includecppwrlshorttokencppwrlshortmdmd-to-create-the-media-foundation-grayscale-transform-component"></a>Per usare [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] per creare il componente di trasformazione in scala di grigi di Media Foundation  
  
1.  In Visual Studio, creare un **soluzione vuota** progetto. Denominare il progetto, ad esempio, `MediaCapture`.  
  
2.  Aggiungere un **DLL (applicazioni Windows Store)** progetto alla soluzione. Denominare il progetto, ad esempio, `GrayscaleTransform`.  
  
3.  Aggiungere un **Midl File (IDL)** file al progetto. Nome del file, ad esempio, `GrayscaleTransform.idl`.  
  
4.  Aggiungere questo codice a GrayscaleTransform.idl.  
  
     [!code-cpp[wrl-media-capture#1](../windows/codesnippet/CPP/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_1.idl)]  
  
5.  Sostituire il contenuto di pch.h con il codice riportato di seguito.  
  
     [!code-cpp[wrl-media-capture#2](../windows/codesnippet/CPP/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_2.h)]  
  
6.  Aggiungere un nuovo file di intestazione per il progetto, il nome `BufferLock.h`, e quindi aggiungere il codice seguente:  
  
     [!code-cpp[wrl-media-capture#3](../windows/codesnippet/CPP/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_3.h)]  
  
7.  GrayscaleTransform.h in questo esempio non viene usato. Volendo, è possibile rimuoverlo dal progetto.  
  
8.  Sostituire il contenuto di GrayscaleTransform.cpp con il codice riportato di seguito.  
  
     [!code-cpp[wrl-media-capture#4](../windows/codesnippet/CPP/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_4.cpp)]  
  
9. Aggiungere un nuovo file di definizione moduli per il progetto, il nome `GrayscaleTransform.def`, e quindi aggiungere il codice seguente:  
  
     [!CODE [wrl-media-capture#5](../CodeSnippet/VS_Snippets_Misc/wrl-media-capture#5)]  
  
10. Sostituire il contenuto di dllmain.cpp con il codice riportato di seguito.  
  
     [!code-cpp[wrl-media-capture#6](../windows/codesnippet/CPP/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_6.cpp)]  
  
11. Del progetto **pagine delle proprietà** finestra di dialogo, impostare quanto segue **Linker** proprietà.  
  
    1.  In **Input**, per il **File di definizione del modulo**, specificare `GrayScaleTransform.def`.  
  
    2.  Anche in **Input**, aggiungere `runtimeobject.lib`, `mfuuid.lib`, e `mfplatf.lib` per il **Dipendenze aggiuntive** proprietà.  
  
    3.  In **metadati di Windows**, impostare **Genera metadati Windows** a **Sì (o WINMD)**.  
  
### <a name="to-use-the-includecppwrlshorttokencppwrlshortmdmd-the-custom-media-foundation-component-from-a-c-app"></a>Per usare il componente [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] personalizzato di Media Foundation da un'app C#  
  
1.  Aggiungere un nuovo **c# applicazione vuota (XAML)** progetto per il `MediaCapture` soluzione. Denominare il progetto, ad esempio, `MediaCapture`.  
  
2.  Nel **mediacapture durante il** del progetto, aggiungere un riferimento di `GrayscaleTransform` progetto. Per ulteriori informazioni, vedere [procedura: aggiungere o rimuovere riferimenti mediante Gestione riferimenti](../Topic/How%20to:%20Add%20or%20Remove%20References%20By%20Using%20the%20Reference%20Manager.md).  
  
3.  In package. appxmanifest, nel **funzionalità** selezionare **microfono** e **Webcam**. Per poter acquisire foto da webcam sono necessarie entrambe le funzionalità.  
  
4.  In MainPage. XAML, aggiungere questo codice alla radice [griglia](http://msdn.microsoft.com/library/windows/apps/xaml/windows.ui.xaml.controls.grid.aspx) elemento:  
  
     [!code-xml[wrl-media-capture#7](../windows/codesnippet/Xaml/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_7.xaml)]  
  
5.  Sostituire il contenuto di MainPage.xaml.cs con il codice riportato di seguito.  
  
     [!code-cs[wrl-media-capture#8](../windows/codesnippet/CSharp/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation_8.cs)]  
  
 La figura seguente mostra l'app MediaCapture.  
  
 ![Applicazione MediaCapture durante l'acquisizione di una foto](../windows/media/wrl_media_capture.png "WRL_Media_Capture")  
  
## <a name="next-steps"></a>Passaggi successivi  
 L'esempio mostra come acquisire foto, una alla volta, dalla webcam predefinita. Il [esempio estensioni multimediali](http://code.msdn.microsoft.com/windowsapps/Media-extensions-sample-7b466096) ancora più avanzate. Illustra come enumerare i dispositivi webcam e come usare i gestori di schema locali. Illustra inoltre altri effetti multimediali che lavorano sia sulle singole foto che sui flussi di video.  
  
## <a name="see-also"></a>Vedere anche  
 [Libreria modelli C++ di Windows Runtime (WRL)](../windows/windows-runtime-cpp-template-library-wrl.md)   
 [Microsoft Media Foundation](http://msdn.microsoft.com/library/windows/apps/ms694197)   
 [Esempio di estensioni di supporto](http://code.msdn.microsoft.com/windowsapps/Media-extensions-sample-7b466096)