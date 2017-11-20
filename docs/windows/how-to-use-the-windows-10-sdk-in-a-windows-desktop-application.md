---
title: 'Procedura: usare Windows 10 SDK in un''applicazione Desktop di Windows | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: get-started-article
dev_langs: C++
ms.assetid: eed6421e-9355-44a6-9582-3f1d453a6d44
caps.latest.revision: "4"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 7d8aea199ff45da06d434150bb8346f24131136f
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="how-to-use-the-windows-10-sdk-in-a-windows-desktop-application"></a>Procedura: Usare Windows 10 SDK in un'applicazione di Windows Desktop
Quando si crea un progetto desktop Windows classico in Visual Studio 2017, si viene configurato per impostazione predefinita per compilare con la versione di Windows 10 SDK installata quando il carico di lavoro di C++ Desktop è stato installato o dell'ultimo aggiornamento. Questa versione di Windows SDK è compatibile con tutte le versioni Windows recenti. Se si desidera una versione precedente del SDK di destinazione, è possibile aprire un progetto | Le proprietà e scegliere tra le altre versioni del SDK disponibile nell'elenco a discesa versione di Windows SDK.  
  
 A partire da Visual Studio 2015 e Windows 10 SDK, la libreria CRT è stata separata in due parti, una (ucrtbase) che contiene le funzioni che sono accettabili per essere usate in App universali di Windows e quella che contiene tutto il resto (vcruntime140). Dal momento che Windows SDK per Windows 10 contiene nuove funzioni, come la maggior parte delle funzioni C99, è necessario eseguire questi passaggi per usare queste funzioni. Vedere [CRT Library Features](../c-runtime-library/crt-library-features.md).  
  
### <a name="to-target-the-windows-10-sdk"></a>Per impostare Windows SDK per Windows 10 come destinazione  
  
1.  Assicurarsi che sia installato Windows SDK per Windows 10. Windows 10 SDK è installato come parte degli [Strumenti per Windows 10](http://go.microsoft.com/fwlink/?LinkID=617631).  
  
2.  Aprire il menu di scelta rapida per il nodo del progetto e scegliere **Ridestina versione SDK**.  
  
     ![Ridestina versione SDK](../windows/media/retargetingwindowssdk1.PNG "RetargetingWindowsSDK1")  
  
     Viene visualizzata la finestra di dialogo **Esamina azioni della soluzione** .  
  
     ![Verificare le azioni di soluzione](../windows/media/retargetingwindowssdk2.PNG "RetargetingWindowsSDK2")  
  
3.  Nel **versione piattaforma di destinazione** elenco a discesa selezionare la versione di SDK per Windows 10 da impostare come destinazione. Scegliere il pulsante OK per applicare la modifica.  
  
     Si noti che 8.1 in questo contesto si riferisce alla versione di Windows SDK, che è anche compatibile con le versioni precedenti, cioè Windows 8, Windows Server 2012, Windows 7, Windows Server 2008 e Windows Vista.  
  
     Se questo passaggio ha esito positivo, nella finestra di output viene visualizzato il testo seguente:  
  
     `Retargeting End: 1 completed, 0 failed, 0 skipped`  
  
4.  Aprire le proprietà del progetto e nella sezione **Proprietà di configurazione, Generale** , tenere presenti i valori della **versione della piattaforma di destinazione di Windows**. La modifica del valore in questa situazione ha lo stesso effetto che seguendo questa procedura. Vedere [General Property Page (Project)](../ide/general-property-page-project.md).  
  
     ![Versione della piattaforma di destinazione](../windows/media/retargetingwindowssdk3.PNG "RetargetingWindowsSDK3")  
  
     Questa azione modifica i valori delle macro del progetto che includono i percorsi ai file di intestazione e ai file delle librerie. Per visualizzare le modifiche apportate, nella sezione directory di Visual C++ della finestra di dialogo proprietà del progetto, scegliere una delle proprietà come directory di inclusione, scegliere di aprire l'elenco a discesa e scegliere \<Modifica >. Viene visualizzata la finestra di dialogo **Directory di inclusione** .  
  
     ![Includere la finestra di dialogo Directory](../windows/media/retargetingwindowssdk4.PNG "RetargetingWindowsSDK4")  
  
     Scegliere il **macro >>** pulsante e scorrere verso il basso l'elenco di macro fino al Windows SDK per visualizzare tutti i nuovi valori.  
  
     ![Windows SDK macro](../windows/media/retargetingwindowssdk5.PNG "RetargetingWindowsSDK5")  
  
5.  Ripetere l'operazione per altri progetti, in base alle necessità, e ricompilare la soluzione.  
  
### <a name="to-target-the-windows-81-sdk"></a>Per impostare Windows SDK per Windows 8.1 come destinazione  
  
1.  Aprire il menu di scelta rapida per il nodo del progetto e scegliere **Ridestina versione SDK**.  
  
2.  Nell'elenco a discesa della versione della piattaforma di destinazione, scegliere 8.1.  
  
## <a name="see-also"></a>Vedere anche  
 [Applicazioni Desktop di Windows (Visual C++)](../windows/how-to-use-the-windows-10-sdk-in-a-windows-desktop-application.md)
