---
title: "Procedura: usare Windows 10 SDK in un'applicazione desktop di Windows"
description: Come impostare la versione dell'SDK di destinazione in un progetto di applicazione desktop di Windows per usare Windows 10 SDK.
ms.custom: get-started-article
ms.date: 01/22/2020
ms.assetid: eed6421e-9355-44a6-9582-3f1d453a6d44
ms.openlocfilehash: c1d71b591398453f7cee02aa22cd2e377991588f
ms.sourcegitcommit: b67b08472b6f1ee8f1c5684bba7056d3e0fc745f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/24/2020
ms.locfileid: "76725734"
---
# <a name="how-to-use-the-windows-10-sdk-in-a-windows-desktop-application"></a>Procedura: usare Windows 10 SDK in un'applicazione desktop di Windows

Quando si crea un nuovo progetto desktop di Windows classico in Visual Studio, è destinato a Windows 10 SDK per impostazione predefinita. Visual Studio installa una versione di questo SDK quando si installa il C++ carico di lavoro desktop. Windows 10 SDK supporta la scrittura di codice per Windows 7 SP1 e versioni successive. Per ulteriori informazioni sulla destinazione di versioni specifiche di Windows, vedere [utilizzo delle intestazioni di Windows](/windows/win32/WinProg/using-the-windows-headers) e [aggiornamento WINVER e _WIN32_WINNT](../porting/modifying-winver-and-win32-winnt.md).

Quando si aggiorna un progetto esistente, è possibile scegliere di usare la Windows SDK di destinazione specificata nel progetto. In alternativa, è possibile ridestinare il progetto per l'uso di Windows 10 SDK. Con Windows 10 SDK, si ottengono i vantaggi del supporto per i sistemi operativi e gli standard del linguaggio più recenti.

## <a name="use-the-right-windows-sdk-for-your-project"></a>Usare il Windows SDK corretto per il progetto

A partire da Visual Studio 2015, la libreria di runtime C (CRT) è stata suddivisa in due parti: una parte, ucrtbase, contiene le funzioni standard C e CRT specifiche di Microsoft che è possibile usare nelle app di Windows universale. Questa libreria è ora nota come Universal CRT, o UCRT, ed è stata spostata in Windows 10 SDK. Il UCRT contiene molte nuove funzioni, ad esempio le funzioni C99, necessarie per supportare gli C++ standard del linguaggio più recenti. L'altra parte della libreria CRT originale è vcruntime. Contiene il codice di runtime, l'avvio e il codice di terminazione di C, oltre a tutti gli altri elementi che non sono stati inseriti in UCRT. La libreria vcruntime viene installata insieme al C++ compilatore e al set di strumenti in Visual Studio. Per ulteriori informazioni, vedere la pagina relativa alle [funzionalità della libreria CRT](../c-runtime-library/crt-library-features.md).

UCRT è ora un componente di sistema installato in tutte le versioni di Windows 10. È disponibile anche come componente installabile per tutte le versioni precedenti di Windows supportate. È possibile usare Windows 10 SDK per tutte le versioni supportate di Windows. Per un elenco completo dei sistemi operativi supportati, vedere [Windows 10 SDK](https://developer.microsoft.com/windows/downloads/windows-10-sdk).

Per ridestinare i progetti all'uso di Windows 10 SDK quando si esegue l'aggiornamento da una versione del progetto precedente a Visual Studio 2015, attenersi alla procedura seguente:

### <a name="to-target-the-windows-10-sdk"></a>Per impostare Windows SDK per Windows 10 come destinazione

1. Assicurarsi che sia installato Windows SDK per Windows 10. Windows 10 SDK è installato come parte dello sviluppo di applicazioni **desktop con C++**  carico di lavoro. Una versione autonoma è disponibile in [download e strumenti per Windows 10](https://developer.microsoft.com/windows/downloads).

1. Aprire il menu di scelta rapida per il nodo del progetto e scegliere **ridestinare i progetti**. Nelle versioni precedenti di Visual Studio scegliere **Ridestina versione SDK**. Verrà visualizzata la finestra di dialogo **Verifica azioni soluzione** .

   ![Esaminare le azioni della soluzione](../windows/media/retargetingwindowssdk2.PNG "RetargetingWindowsSDK2")

1. Nell'elenco a discesa **versione piattaforma di destinazione** scegliere la versione di Windows 10 SDK a cui si vuole fare riferimento. In generale, è consigliabile scegliere la versione installata più recente. Scegliere il pulsante **OK** per applicare la modifica.

   8,1 in questo contesto si riferisce a Windows 8.1 SDK.

   Se questo passaggio ha esito positivo, nella finestra di output viene visualizzato il testo seguente:

   `Retargeting End: 1 completed, 0 failed, 0 skipped`

1. Aprire la finestra di dialogo delle proprietà del progetto. Nella sezione **proprietà di configurazione** > **generale** si notino i valori della versione della piattaforma di **destinazione di Windows**. La modifica del valore in questa situazione ha lo stesso effetto che seguendo questa procedura. Per altre informazioni, vedere [Pagina delle proprietà Generale (Progetto)](../build/reference/general-property-page-project.md).

   ![Versione piattaforma di destinazione](../windows/media/retargetingwindowssdk3.PNG "RetargetingWindowsSDK3")

   Questa azione modifica i valori delle macro del progetto che includono i percorsi ai file di intestazione e ai file delle librerie. Per visualizzare le modifiche apportate, aprire la sezione **directory visive C++**  della finestra di dialogo delle **proprietà del progetto** . Selezionare una delle proprietà, ad esempio **directory di inclusione**. Quindi, aprire l'elenco a discesa del valore della proprietà e scegliere **\<modifica >** . Viene visualizzata la finestra di dialogo **Directory di inclusione** .

   ![Finestra di dialogo Directory di inclusione](../windows/media/retargetingwindowssdk4.PNG "RetargetingWindowsSDK4")

   Scegliere le **macro > pulsante >** e scorrere verso Windows SDK il basso l'elenco di macro per visualizzare tutti i nuovi valori.

   ![Macro Windows SDK](../windows/media/retargetingwindowssdk5.PNG "RetargetingWindowsSDK5")

1. Ripetere la procedura di reindirizzamento per altri progetti di soluzione, se necessario, e ricompilare la soluzione.

### <a name="to-target-the-windows-81-sdk"></a>Per impostare Windows SDK per Windows 8.1 come destinazione

1. Aprire il menu di scelta rapida per il nodo del progetto in Esplora soluzioni e scegliere **ridestinare i progetti**. Nelle versioni precedenti di Visual Studio scegliere **Ridestina versione SDK**.

2. Nell'elenco a discesa **versione piattaforma di destinazione** scegliere **8,1**.

## <a name="see-also"></a>Vedere anche

[Procedura dettagliata: creare un'applicazione desktop di WindowsC++tradizionale ()](../windows/walkthrough-creating-windows-desktop-applications-cpp.md)
