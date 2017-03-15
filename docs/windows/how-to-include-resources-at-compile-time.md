---
title: "How to: Include Resources at Compile Time | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.resvw.resource.including"
  - "vc.resvw.resource.including"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "compiling source code, including resources"
  - "comments [C++], compiled files"
  - "resources [Visual Studio], including at compile time"
  - "projects [C++], including resources"
  - "#include directive"
  - "include directive (#include)"
ms.assetid: 357e93c2-0a29-42f9-806f-882f688b8924
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# How to: Include Resources at Compile Time
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In genere è facile e comodo usare la disposizione predefinita di tutte le risorse in un file di script \(RC\) delle risorse.  Tuttavia, è possibile aggiungere risorse di altri file al progetto corrente in fase di compilazione elencandoli nella casella **Direttive in fase di compilazione** nella [finestra di dialogo Inclusioni risorsa](../windows/resource-includes-dialog-box.md).  
  
 Vi sono vari motivi per inserire le risorse in un file diverso dal file RC principale:  
  
-   Per aggiungere commenti alle istruzioni di risorse che non verranno eliminate quando si salva il file RC.  
  
     Gli editor di risorse non leggono direttamente i file RC o resource.h.  Questi file vengono compilati dal compilatore di risorse in file APS, che vengono usati dagli editor di risorse.  Questo file è presente in una fase di compilazione e archivia solo dati simbolici.  Come con un normale processo di compilazione, le informazioni che non sono simboliche \(ad esempio, i commenti\) vengono eliminate durante il processo di compilazione.  Ogni volta che il file APS non risulta sincronizzato con il file RC, il file RC viene rigenerato \(ad esempio, quando si salva, l'editor di risorse sovrascrive il file RC e il file resource.h\).  Eventuali modifiche alle risorse resteranno incorporate nel file RC, ma i commenti andranno sempre persi quando il file RC viene sovrascritto.  
  
-   Per includere risorse già sviluppate e testate e che non richiedono altre modifiche.  Eventuali file inclusi, ma che non hanno estensione RC non saranno modificati dagli editor di risorse.  
  
-   Per includere risorse usate da progetti diversi o che fanno parte di un sistema di controllo della versione del codice sorgente e pertanto devono essere in una posizione centrale in cui le modifiche influiranno su tutti i progetti.  
  
-   Per includere risorse \(ad esempio, risorse RCDATA\) che sono in un formato personalizzato.  Le risorse RCDATA possono avere requisiti speciali.  Ad esempio, è possibile usare un'espressione come valore per il campo nameID.  Per altre informazioni, vedere la documentazione di [!INCLUDE[winsdkshort](../atl/reference/includes/winsdkshort_md.md)].  
  
 Se si dispone di sezioni nei file RC esistenti che soddisfano tali condizioni, è necessario inserire le sezioni in uno o più file RC separati e includerli nel progetto usando la [finestra di dialogo Inclusioni risorsa](../windows/resource-includes-dialog-box.md).  Il file *NomeProgetto*.rc2 creato nella sottodirectory \\res di un nuovo progetto viene usato a questo scopo.  
  
### Per includere risorse nel progetto in fase di compilazione  
  
1.  Inserire le risorse in un file script di risorsa con un nome file univoco.  Non usare *NomeProgetto*.rc, poiché si tratta del nome file usato per il file di script di risorsa principale.  
  
2.  Fare clic con il pulsante destro del mouse sul file RC nel riquadro [Visualizzazione risorse](../windows/resource-view-window.md) e quindi scegliere **Inclusioni risorsa** dal menu di scelta rapida.  
  
3.  Nella casella **Direttive in fase di compilazione** aggiungere la direttiva del compilatore [\#include](../preprocessor/hash-include-directive-c-cpp.md) per includere il nuovo file di risorse nel file di risorse principale dell'ambiente di sviluppo.  
  
     Le risorse nei file incluse in questo modo diventano parte del file eseguibile in fase di compilazione.  Non sono direttamente disponibili per la modifica quando si lavora sul file RC principale del progetto.  È necessario aprire i file RC inclusi separatamente.  Eventuali file inclusi, ma che non hanno estensione RC non saranno modificabili da parte degli editor di risorse.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Requisiti  
  
 Win32  
  
## Vedere anche  
 [Resource Files](../mfc/resource-files-visual-studio.md)   
 [Resource Editors](../mfc/resource-editors.md)