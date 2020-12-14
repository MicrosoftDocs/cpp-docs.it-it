---
description: 'Altre informazioni su: test di proprietà ed eventi con test container'
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
ms.openlocfilehash: 61cccbda723fb1cfac0ca3fc696639849bde9dd1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97216223"
---
# <a name="testing-properties-and-events-with-test-container"></a>Test di proprietà ed eventi con Test Container

L'applicazione del contenitore di test, fornita in Visual C++, è un contenitore di controlli ActiveX per il test e il debug dei controlli ActiveX. Test Container consente allo sviluppatore del controllo di testare la funzionalità del controllo modificandone le proprietà, richiamando i metodi e generando i relativi eventi. Il contenitore di test può visualizzare i log delle notifiche di data binding e fornisce anche funzionalità per il test della funzionalità di persistenza di un controllo ActiveX: è possibile salvare le proprietà in un flusso o nell'archivio dati, ricaricarle ed esaminare i dati del flusso archiviati. Questa sezione descrive come usare le funzionalità di base di test container. Per ulteriori informazioni, selezionare il menu **Guida** durante l'esecuzione di test container.

### <a name="to-access-the-activex-control-test-container"></a>Per accedere al contenitore di test del controllo ActiveX

1. Compilare l' [esempio TSTCON: contenitore di test del controllo ActiveX](../overview/visual-cpp-samples.md).

### <a name="to-test-your-activex-control"></a>Per testare il controllo ActiveX

1. Nel menu **modifica** di test container fare clic su **Inserisci nuovo controllo**.

1. Nella casella di **controllo Inserisci** selezionare il controllo desiderato e fare clic su **OK**. Il controllo verrà visualizzato nel contenitore del controllo.

    > [!NOTE]
    >  Se il controllo non è elencato nella finestra di dialogo **Inserisci controllo** , verificare che sia stato registrato con il comando **Registra controlli** dal menu **file** di test container.

A questo punto è possibile testare le proprietà o gli eventi del controllo.

#### <a name="to-test-properties"></a>Per testare le proprietà

1. Scegliere **richiama metodi** dal menu **controllo** .

1. Nell'elenco a discesa **nome metodo** selezionare il metodo propput per la proprietà che si desidera testare.

1. Modificare il **valore del parametro** o il **tipo di parametro** e fare clic sul pulsante **Imposta valore** .

1. Fare clic su **richiama** per applicare il nuovo valore all'oggetto.

   La proprietà contiene ora il nuovo valore.

#### <a name="to-test-events-and-specify-the-destination-of-event-information"></a>Per testare gli eventi e specificare la destinazione delle informazioni sull'evento.

1. Scegliere **registrazione** dal menu **Opzioni** .

1. Specificare la destinazione delle informazioni sull'evento.

## <a name="see-also"></a>Vedi anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)<br/>
[Procedura: eseguire il debug di un controllo ActiveX](/visualstudio/debugger/how-to-debug-an-activex-control)
