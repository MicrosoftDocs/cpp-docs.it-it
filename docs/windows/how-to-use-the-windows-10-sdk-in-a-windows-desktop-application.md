---
title: "Procedura: Usare Windows 10 SDK in un'applicazione Desktop di Windows"
ms.custom: get-started-article
ms.date: 07/12/2018
ms.assetid: eed6421e-9355-44a6-9582-3f1d453a6d44
ms.openlocfilehash: 25ef3674a7ab741f20a07d6e65d1b5524fb88d5f
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57809925"
---
# <a name="how-to-use-the-windows-10-sdk-in-a-windows-desktop-application"></a>Procedura: Usare Windows 10 SDK in un'applicazione Desktop di Windows

Quando si crea un progetto desktop di Windows classico in Visual Studio 2017, si è configurare per impostazione predefinita per compilare con la versione di Windows 10 SDK che è stato installato quando il carico di lavoro di applicazioni Desktop C++ è stato installato o aggiornato. Questa versione di Windows SDK è compatibile con Windows 7 e versioni successive. Visualizzare [uso delle intestazioni di Windows](/windows/desktop/WinProg/using-the-windows-headers) per ulteriori informazioni sulla destinazione specifiche versioni di Windows.

Se si desidera come destinazione una versione precedente del SDK, è possibile aprire **progetto | Proprietà** e scegliere tra le altre versioni del SDK disponibili nell'elenco a discesa versione del SDK Windows.

A partire da Visual Studio 2015 e Windows 10 SDK, la libreria CRT è stata separata in due parti, una (ucrtbase) che contiene le funzioni che sono accettabili per essere usate nelle App Windows universali e quella che contiene tutto il resto (vcruntime140). Dal momento che Windows SDK per Windows 10 contiene nuove funzioni, come la maggior parte delle funzioni C99, è necessario eseguire questi passaggi per usare queste funzioni. Vedere [CRT Library Features](../c-runtime-library/crt-library-features.md).

### <a name="to-target-the-windows-10-sdk"></a>Per impostare Windows SDK per Windows 10 come destinazione

1. Assicurarsi che sia installato Windows SDK per Windows 10. Windows 10 SDK viene installato come parte del **sviluppo di applicazioni Desktop con C++** carico di lavoro. È disponibile in una versione autonoma [download e strumenti per Windows 10](https://developer.microsoft.com/windows/downloads).

2. Aprire il menu di scelta rapida per il nodo del progetto e scegliere **Ridestina versione SDK**.

   ![Retarget SDK Version](../windows/media/retargetingwindowssdk1.PNG "RetargetingWindowsSDK1")

   Viene visualizzata la finestra di dialogo **Esamina azioni della soluzione** .

   ![Review Solution Actions](../windows/media/retargetingwindowssdk2.PNG "RetargetingWindowsSDK2")

3. Nel **versione piattaforma di destinazione** elenco a discesa scegliere la versione di Windows 10 SDK di destinazione. Scegliere il pulsante OK per applicare la modifica.

   Si noti che 8.1 in questo contesto si riferisce alla versione di Windows SDK, che è anche compatibile con le versioni precedenti, cioè Windows 8, Windows Server 2012, Windows 7, Windows Server 2008 e Windows Vista.

   Se questo passaggio ha esito positivo, nella finestra di output viene visualizzato il testo seguente:

   `Retargeting End: 1 completed, 0 failed, 0 skipped`

4. Aprire le proprietà del progetto e nella sezione **Proprietà di configurazione, Generale** , tenere presenti i valori della **versione della piattaforma di destinazione di Windows**. La modifica del valore in questa situazione ha lo stesso effetto che seguendo questa procedura. Vedere [General Property Page (Project)](../build/reference/general-property-page-project.md).

   ![Versione piattaforma di destinazione](../windows/media/retargetingwindowssdk3.PNG "RetargetingWindowsSDK3")

   Questa azione modifica i valori delle macro del progetto che includono i percorsi ai file di intestazione e ai file delle librerie. Per visualizzare le modifiche apportate nel **directory di Visual C++** sezione del **le proprietà del progetto** finestra di dialogo scegliere una delle proprietà, ad esempio il **directory di inclusione**, scegliere di Aprire l'elenco a discesa e scegliere \<Modifica >. Viene visualizzata la finestra di dialogo **Directory di inclusione** .

   ![Includere la finestra di dialogo Directory](../windows/media/retargetingwindowssdk4.PNG "RetargetingWindowsSDK4")

   Scegliere il **macro >>** pulsante e scorrere verso il basso l'elenco delle macro per le macro di Windows SDK per visualizzare tutti i nuovi valori.

   ![Windows SDK Macros](../windows/media/retargetingwindowssdk5.PNG "RetargetingWindowsSDK5")

5. Ripetere l'operazione per altri progetti, in base alle necessità, e ricompilare la soluzione.

### <a name="to-target-the-windows-81-sdk"></a>Per impostare Windows SDK per Windows 8.1 come destinazione

1. Aprire il menu di scelta rapida per il nodo del progetto e scegliere **Ridestina versione SDK**.

2. Nel **versione piattaforma di destinazione** elenco a discesa scegliere **8.1**.

## <a name="see-also"></a>Vedere anche

[Applicazioni Desktop di Windows (Visual C++)](../windows/how-to-use-the-windows-10-sdk-in-a-windows-desktop-application.md)