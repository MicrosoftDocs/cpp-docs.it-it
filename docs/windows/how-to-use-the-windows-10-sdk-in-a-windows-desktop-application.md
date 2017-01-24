---
title: "Procedura: Usare Windows 10 SDK in un&#39;applicazione di Windows Desktop | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
ms.assetid: eed6421e-9355-44a6-9582-3f1d453a6d44
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: Usare Windows 10 SDK in un&#39;applicazione di Windows Desktop
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si crea un progetto desktop di Windows classico in [!INCLUDE[vs_dev14](../ide/includes/vs_dev14_md.md)], per impostazione predefinita viene configurato in modo da essere compilato con Windows 8.1 SDK. Questa versione di Windows SDK è compatibile con tutte le versioni Windows recenti, incluso Windows 10, ma non contiene le API e le funzioni CRT di Windows 10 più recenti che si trovano in Windows SDK per Windows 10. Se si vogliono usare le nuove API, è possibile ridestinare il progetto al riferimento a Windows SDK per Windows 10.  
  
 A partire da [!INCLUDE[vs_dev14](../ide/includes/vs_dev14_md.md)] e da Windows SDK per Windows 10, la libreria CRT è stata separata in due parti, una \(ucrtbase\) che contiene le funzioni che sono accettabili per essere usate in app universali di Windows e una che contiene tutto il resto \(vcruntime140\). Dal momento che Windows SDK per Windows 10 contiene nuove funzioni, come la maggior parte delle funzioni C99, è necessario eseguire questi passaggi per usare queste funzioni. Vedere [Funzionalità libreria CRT](../c-runtime-library/crt-library-features.md).  
  
### Per impostare Windows SDK per Windows 10 come destinazione  
  
1.  Assicurarsi che sia installato Windows SDK per Windows 10. Windows 10 SDK è installato come parte degli [Strumenti per Windows 10](http://go.microsoft.com/fwlink/?LinkID=617631).  
  
2.  Aprire il menu di scelta rapida per il nodo del progetto e scegliere **Ridestina versione SDK**.  
  
     ![Ridestina versione SDK](../windows/media/retargetingwindowssdk1.png "RetargetingWindowsSDK1")  
  
     Viene visualizzata la finestra di dialogo **Esamina azioni della soluzione**.  
  
     ![Esamina azioni della soluzione](../windows/media/retargetingwindowssdk2.png "RetargetingWindowsSDK2")  
  
3.  Nell'elenco a discesa **Versione piattaforma di destinazione** scegliere la versione di Windows SDK per Windows 10 da impostare come destinazione o scegliere 8.1 se non si vuole apportare alcuna modifica. Scegliere il pulsante OK per applicare la modifica.  
  
     Si noti che 8.1 in questo contesto si riferisce alla versione di Windows SDK, che è anche compatibile con le versioni precedenti, cioè Windows 8, Windows Server 2012, Windows 7, Windows Server 2008 e Windows Vista.  
  
     Se questo passaggio ha esito positivo, nella finestra di output viene visualizzato il testo seguente:  
  
     `Fine ridestinazione: 1 completato/i, 0 non riuscito/i, 0 ignorato/i`  
  
4.  Aprire le proprietà del progetto e nella sezione **Proprietà di configurazione, Generale**, tenere presenti i valori della **versione della piattaforma di destinazione di Windows**. La modifica del valore in questa situazione ha lo stesso effetto che seguendo questa procedura. Vedere [Pagina delle proprietà Generale \(Progetto\)](../ide/general-property-page-project.md).  
  
     ![Versione piattaforma di destinazione](../windows/media/retargetingwindowssdk3.png "RetargetingWindowsSDK3")  
  
     Questa azione modifica i valori delle macro del progetto che includono i percorsi ai file di intestazione e ai file delle librerie. Per visualizzare le modifiche apportate, nella sezione Directory di Visual C\+\+ della finestra di dialogo Proprietà progetto, scegliere una delle proprietà come Directory di inclusione, scegliere di aprire l'elenco a discesa e scegliere \<Modifica\>. Viene visualizzata la finestra di dialogo **Directory di inclusione**.  
  
     ![Finestra di dialogo Directory di inclusione](../windows/media/retargetingwindowssdk4.png "RetargetingWindowsSDK4")  
  
     Scegliere il pulsante **Macro \>\>** e scorrere l'elenco di macro fino a quelle di Windows SDK per visualizzare tutti i nuovi valori.  
  
     ![Macro di Windows SDK](../windows/media/retargetingwindowssdk5.png "RetargetingWindowsSDK5")  
  
5.  Ripetere l'operazione per altri progetti, in base alle necessità, e ricompilare la soluzione.  
  
### Per impostare Windows SDK per Windows 8.1 come destinazione  
  
1.  Aprire il menu di scelta rapida per il nodo del progetto e scegliere **Ridestina versione SDK**.  
  
2.  Nell'elenco a discesa della versione della piattaforma di destinazione, scegliere 8.1.  
  
## Vedere anche  
 [Windows Desktop Applications \(Visual C\+\+\)](../windows/how-to-use-the-windows-10-sdk-in-a-windows-desktop-application.md)