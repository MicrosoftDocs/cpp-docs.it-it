---
title: Test di proprietà ed eventi con Test Container | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- testing, test containers
- tstcon32.exe
- debugging ActiveX controls
- test container
- ActiveX Control Test Container
- ActiveX controls [MFC], testing
- properties [MFC], testing
ms.assetid: 626867cf-fe53-4c30-8973-55bb93ef3917
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: fbf2b7c26b7fc44a526381f4fb3e4dee5c94ba8d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33381036"
---
# <a name="testing-properties-and-events-with-test-container"></a>Test di proprietà ed eventi con Test Container
L'applicazione contenitore di Test, fornito con Visual C++, è un contenitore di controlli ActiveX per i test e debug dei controlli ActiveX. Test Container consente allo sviluppatore di controllo di testare la funzionalità del controllo modificandone le proprietà, richiamare i metodi e generazione di eventi. Test Container consente di visualizzare i registri delle notifiche di associazione di dati e fornisce anche funzionalità per il test della funzionalità di persistenza di un controllo ActiveX: è possibile salvare le proprietà in un flusso o in un sottoarchivio, ricaricarle e analizzare i dati del flusso archiviato. In questa sezione viene descritto come utilizzare le funzionalità di base del contenitore di Test. Per ulteriori informazioni, selezionare il **Guida** menu durante l'esecuzione di Test Container.  
  
### <a name="to-access-the-activex-control-test-container"></a>Per accedere al contenitore di Test di controllo ActiveX  
  
1.  Compilare il [esempio TSTCON: ActiveX Control Test Container](../visual-cpp-samples.md).  
  
### <a name="to-test-your-activex-control"></a>Per testare il controllo ActiveX  
  
1.  Nel **modifica** menu del contenitore di Test, fare clic su **Inserisci nuovo controllo**.  
  
2.  Nel **Inserisci controllo** , selezionare il controllo desiderato e fare clic su **OK**. Il controllo verrà visualizzati nel contenitore del controllo.  
  
    > [!NOTE]
    >  Se il controllo non è elencato nel **Inserisci controllo** finestra di dialogo, accertarsi di aver registrato con il **Registra controlli** comando il **File** dal menu del Test Contenitore.  
  
 A questo punto è possibile testare il controllo proprietà o eventi.  
  
#### <a name="to-test-properties"></a>Per verificare le proprietà  
  
1.  Nel **controllo** menu, fare clic su **richiama metodi**.  
  
2.  Nel **nome del metodo** elenco a discesa selezionare il metodo PropPut per la proprietà a cui si desidera testare.  
  
3.  Modificare il **valore del parametro** o **tipo di parametro** e fare clic su di **Imposta valore** pulsante.  
  
4.  Fare clic su **Invoke** per applicare il nuovo valore all'oggetto.  
  
     La proprietà contiene ora il nuovo valore.  
  
#### <a name="to-test-events-and-specify-the-destination-of-event-information"></a>Per verificare gli eventi e specificare la destinazione delle informazioni sull'evento.  
  
1.  Nel **opzioni** menu, fare clic su **registrazione**.  
  
2.  Specificare la destinazione delle informazioni sull'evento.  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Procedura: Eseguire il debug di un controllo ActiveX](/visualstudio/debugger/how-to-debug-an-activex-control)

