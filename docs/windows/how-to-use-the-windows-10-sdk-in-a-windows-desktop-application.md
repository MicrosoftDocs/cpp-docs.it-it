---
title: "Procedura: Usare Windows 10 SDK in un'applicazione desktop di Windows"
ms.custom: get-started-article
ms.date: 07/12/2018
ms.assetid: eed6421e-9355-44a6-9582-3f1d453a6d44
ms.openlocfilehash: 8dbf18d24c0369507743c3c1da624838f9ab4703
ms.sourcegitcommit: 389c559918d9bfaf303d262ee5430d787a662e92
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/25/2019
ms.locfileid: "69513829"
---
# <a name="how-to-use-the-windows-10-sdk-in-a-windows-desktop-application"></a>Procedura: Usare Windows 10 SDK in un'applicazione desktop di Windows

Quando si crea un progetto desktop di Windows classico in Visual Studio 2017, questo viene configurato per impostazione predefinita per la compilazione con la versione di Windows 10 SDK installata al momento dell' C++ installazione o dell'ultimo aggiornamento del carico di lavoro del desktop. Questa versione del Windows SDK è compatibile con Windows 7 e versioni successive. Per ulteriori informazioni sulla destinazione di versioni specifiche di Windows, vedere [utilizzo delle intestazioni di Windows](/windows/win32/WinProg/using-the-windows-headers) .

Se si desidera destinare una versione precedente dell'SDK, è possibile aprire il **progetto | Le proprietà** e scelgono tra le altre versioni dell'SDK disponibili nell'elenco a discesa Windows SDK versione.

A partire da Visual Studio 2015 e Windows 10 SDK, la libreria CRT è stata suddivisa in due parti, una (ucrtbase) che contiene le funzioni che sono accettabili per essere usate in app universali di Windows e una che contiene tutto il resto (vcruntime140). Dal momento che Windows SDK per Windows 10 contiene nuove funzioni, come la maggior parte delle funzioni C99, è necessario eseguire questi passaggi per usare queste funzioni. Vedere [CRT Library Features](../c-runtime-library/crt-library-features.md).

### <a name="to-target-the-windows-10-sdk"></a>Per impostare Windows SDK per Windows 10 come destinazione

1. Assicurarsi che sia installato Windows SDK per Windows 10. Windows 10 SDK è installato come parte dello sviluppo di applicazioni **desktop con C++**  carico di lavoro. Una versione autonoma è disponibile in [download e strumenti per Windows 10](https://developer.microsoft.com/windows/downloads).

2. Aprire il menu di scelta rapida per il nodo del progetto e scegliere **Ridestina versione SDK**.

   ![Ridestina versione SDK](../windows/media/retargetingwindowssdk1.PNG "RetargetingWindowsSDK1")

   Viene visualizzata la finestra di dialogo **Esamina azioni della soluzione** .

   ![Esaminare le azioni della soluzione](../windows/media/retargetingwindowssdk2.PNG "RetargetingWindowsSDK2")

3. Nell'elenco a discesa **versione piattaforma di destinazione** scegliere la versione di Windows 10 SDK a cui si vuole fare riferimento. Scegliere il pulsante OK per applicare la modifica.

   Si noti che 8.1 in questo contesto si riferisce alla versione di Windows SDK, che è anche compatibile con le versioni precedenti, cioè Windows 8, Windows Server 2012, Windows 7, Windows Server 2008 e Windows Vista.

   Se questo passaggio ha esito positivo, nella finestra di output viene visualizzato il testo seguente:

   `Retargeting End: 1 completed, 0 failed, 0 skipped`

4. Aprire le proprietà del progetto e nella sezione **Proprietà di configurazione, Generale** , tenere presenti i valori della **versione della piattaforma di destinazione di Windows**. La modifica del valore in questa situazione ha lo stesso effetto che seguendo questa procedura. Vedere [General Property Page (Project)](../build/reference/general-property-page-project.md).

   ![Versione piattaforma di destinazione](../windows/media/retargetingwindowssdk3.PNG "RetargetingWindowsSDK3")

   Questa azione modifica i valori delle macro del progetto che includono i percorsi ai file di intestazione e ai file delle librerie. Per visualizzare le modifiche apportate, nella sezione **directory visive C++**  della finestra di dialogo delle **proprietà del progetto** scegliere una delle proprietà, ad esempio directory di **inclusione**, scegliere di aprire \<l'elenco a discesa e scegliere Modifica >. Viene visualizzata la finestra di dialogo **Directory di inclusione** .

   Finestra di ![dialogo Directory di inclusione](../windows/media/retargetingwindowssdk4.PNG "RetargetingWindowsSDK4")

   Scegliere le **macro > pulsante >** e scorrere verso Windows SDK il basso l'elenco di macro per visualizzare tutti i nuovi valori.

   ![Windows SDK Macros](../windows/media/retargetingwindowssdk5.PNG "RetargetingWindowsSDK5")

5. Ripetere l'operazione per altri progetti, in base alle necessità, e ricompilare la soluzione.

### <a name="to-target-the-windows-81-sdk"></a>Per impostare Windows SDK per Windows 8.1 come destinazione

1. Aprire il menu di scelta rapida per il nodo del progetto e scegliere **Ridestina versione SDK**.

2. Nell'elenco a discesa **versione piattaforma di destinazione** scegliere **8,1**.

## <a name="see-also"></a>Vedere anche

[Applicazioni desktop di Windows ( C++Visual)](../windows/how-to-use-the-windows-10-sdk-in-a-windows-desktop-application.md)