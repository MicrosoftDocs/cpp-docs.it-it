---
title: 'Appunti: Copiare e incollare dati | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Clipboard, copying data to
- Clipboard, pasting
ms.assetid: 580e10be-241f-4f9f-94cf-8302edc5beef
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bdfd43933453e44c49d713a1565ac3f71e019de4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="clipboard-copying-and-pasting-data"></a>Appunti: copiare e incollare dati
Questo argomento descrive le operazioni minime necessarie per implementare copia e Incolla dagli Appunti in un'applicazione OLE. È consigliabile leggere la [oggetti dati e origini dati (OLE)](../mfc/data-objects-and-data-sources-ole.md) argomenti prima di procedere.  
  
 Prima di poter implementare di copia o Incolla, è innanzitutto necessario fornire le funzioni per gestire le opzioni di copia, Taglia e Incolla del menu Modifica.  
  
##  <a name="_core_copying_or_cutting_data"></a> Copiare o tagliare dati  
  
#### <a name="to-copy-data-to-the-clipboard"></a>Per copiare dati negli Appunti  
  
1.  Determinare se i dati da copiare sono dati nativi o un elemento incorporato o collegato.  
  
    -   Se il tipo di dati incorporato o collegato, ottenere un puntatore per il `COleClientItem` oggetto che è stata selezionata.  
  
    -   Se i dati sono nativi e l'applicazione è un server, creare un nuovo oggetto derivato da `COleServerItem` contenente i dati selezionati. In caso contrario, creare un `COleDataSource` oggetto per i dati.  
  
2.  Chiamare l'elemento selezionato `CopyToClipboard` funzione membro.  
  
3.  Se l'utente sceglie un'operazione di Taglia anziché un'operazione di copia, eliminare i dati selezionati dall'applicazione.  
  
 Per un esempio di questa sequenza, vedere il **OnEditCut** e **OnEditCopy all'interno dei** i programmi di esempio di funzioni in OLE MFC [OCLIENT](../visual-cpp-samples.md) e [HIERSVR](../visual-cpp-samples.md). Si noti che questi esempi gestiscono un puntatore a dati attualmente selezionata, pertanto il passaggio 1 è già completato.  
  
##  <a name="_core_pasting_data"></a> Incollare dati  
 Incollare i dati è più complicato copiarlo, in quanto è necessario scegliere il formato da utilizzare per incollare i dati nell'applicazione.  
  
#### <a name="to-paste-data-from-the-clipboard"></a>Per incollare dati dagli Appunti  
  
1.  Nella classe di visualizzazione, implementare **OnEditPaste** per supportare gli utenti di scegliere l'opzione Incolla del menu Modifica.  
  
2.  Nel **OnEditPaste** funzionamento, creare un `COleDataObject` oggetto e chiamare il relativo `AttachClipboard` funzione membro per collegare l'oggetto per i dati negli Appunti.  
  
3.  Chiamare `COleDataObject::IsDataAvailable` per controllare se è disponibile un formato specifico.  
  
     In alternativa, è possibile utilizzare `COleDataObject::BeginEnumFormats` per cercare altri formati fino a individuare quello più adatto all'applicazione.  
  
4.  Operazione Incolla del formato.  
  
 Per un esempio del funzionamento, vedere l'implementazione del **OnEditPaste** funzioni membro in classi di visualizzazione definita nei programmi di esempio OLE MFC [OCLIENT](../visual-cpp-samples.md) e [HIERSVR](../visual-cpp-samples.md).  
  
> [!TIP]
>  Il vantaggio principale di separare l'operazione Incolla nella propria funzione è può essere utilizzato lo stesso codice incollare dati in cui vengono rilasciati dell'applicazione durante un'operazione di trascinamento e rilascio. Come OCLIENT e HIERSVR, il `OnDrop` funzione può anche chiamare **DoPasteItem**, riutilizzare il codice scritto per implementare le operazioni Incolla.  
  
 Per gestire l'opzione Incolla speciale dal menu Modifica, vedere l'argomento [finestre di dialogo in OLE](../mfc/dialog-boxes-in-ole.md).  
  
### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Aggiunta di altri formati](../mfc/clipboard-adding-other-formats.md)  
  
-   [Origini dati e oggetti di dati OLE e uniform data transfer](../mfc/data-objects-and-data-sources-ole.md)  
  
-   [Trascinamento della selezione OLE](../mfc/drag-and-drop-ole.md)  
  
-   [OLE](../mfc/ole-background.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Appunti: uso del meccanismo degli Appunti OLE](../mfc/clipboard-using-the-ole-clipboard-mechanism.md)

