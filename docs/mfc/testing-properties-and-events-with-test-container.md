---
title: Test di proprietà ed eventi con Test Container
ms.date: 11/04/2016
helpviewer_keywords:
- testing, test containers
- tstcon32.exe
- debugging ActiveX controls
- test container
- ActiveX Control Test Container
- ActiveX controls [MFC], testing
- properties [MFC], testing
ms.assetid: 626867cf-fe53-4c30-8973-55bb93ef3917
ms.openlocfilehash: 977ef29095e652ab40028a2e8ba7feffabf56418
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58781068"
---
# <a name="testing-properties-and-events-with-test-container"></a>Test di proprietà ed eventi con Test Container

L'applicazione contenitore di Test, fornito in Visual C++, è un contenitore di controlli ActiveX per il test e debug di controlli ActiveX. Contenitore di test consente allo sviluppatore controllo testare la funzionalità del controllo modificandone le proprietà, richiamare i metodi e gli eventi di attivazione. Contenitore di test consente di visualizzare i registri delle notifiche di associazione dati e fornisce anche funzionalità per i test di funzionalità di persistenza di un controllo ActiveX: è possibile salvare le proprietà in un flusso o sottoarchivio, ricaricarli ed esaminare i dati di flusso archiviato. Questa sezione descrive come usare le funzionalità di base del contenitore di Test. Per altre informazioni, selezionare la **aiutare** menu durante l'esecuzione di Test Container.

### <a name="to-access-the-activex-control-test-container"></a>Per accedere al contenitore di Test di controllo ActiveX

1. Compilare il [esempio TSTCON: Controllo ActiveX Test Container](../overview/visual-cpp-samples.md).

### <a name="to-test-your-activex-control"></a>Per testare il controllo ActiveX

1. Nel **Edit** dal menu del contenitore di Test, fare clic su **Inserisci nuovo controllo**.

1. Nel **Inserisci controllo** , selezionare il controllo desiderato e scegliere **OK**. Il controllo verrà visualizzato nel contenitore del controllo.

    > [!NOTE]
    >  Se il controllo non è elencato nel **Inserisci controllo** finestra di dialogo verificare che sia stato registrato con il **Registra controlli** dal **File** dal menu del Test Contenitore.

A questo punto è possibile testare le proprietà del controllo o eventi.

#### <a name="to-test-properties"></a>Per testare le proprietà

1. Nel **controllo** menu, fare clic su **richiama metodi**.

1. Nel **nome del metodo** elenco a discesa selezionare il metodo PropPut per la proprietà da testare.

1. Modificare il **valore del parametro** oppure **tipo di parametro** e fare clic sui **Imposta valore** pulsante.

1. Fare clic su **Invoke** per applicare il nuovo valore all'oggetto.

   La proprietà contiene ora il nuovo valore.

#### <a name="to-test-events-and-specify-the-destination-of-event-information"></a>Per verificare gli eventi e specificare la destinazione di informazioni sull'evento.

1. Nel **opzioni** menu, fare clic su **Logging**.

1. Specificare la destinazione di informazioni sull'evento.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)<br/>
[Procedura: Eseguire il debug di un controllo ActiveX](/visualstudio/debugger/how-to-debug-an-activex-control)
