---
title: 'Appunti: Copiare e incollare dati | Microsoft Docs'
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
ms.openlocfilehash: 15a03708f96f881206aa683b31c26c3c5192f8cb
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46389059"
---
# <a name="clipboard-copying-and-pasting-data"></a>Appunti: copiare e incollare dati

Questo argomento descrive le operazioni minime necessarie per implementare copia e Incolla dagli Appunti nell'applicazione OLE. Si consiglia di leggere il [oggetti dati e origini dati (OLE)](../mfc/data-objects-and-data-sources-ole.md) argomenti prima di procedere.

Prima di implementare operazioni di copia o Incolla, è innanzitutto necessario fornire le funzioni per gestire le opzioni di copia, Taglia e Incolla del menu Modifica.

##  <a name="_core_copying_or_cutting_data"></a> Quando si copiano e tagliare i dati

#### <a name="to-copy-data-to-the-clipboard"></a>Per copiare i dati negli Appunti

1. Determinare se i dati da copiare sono dati nativi o sono un elemento incorporato o collegato.

   - Se i dati incorporati o collegati, ottenere un puntatore al `COleClientItem` oggetto che è stato selezionato.

   - Se i dati sono nativi e l'applicazione è un server, creare un nuovo oggetto derivato da `COleServerItem` contenente i dati selezionati. In caso contrario, creare un `COleDataSource` oggetto per i dati.

1. Chiamare l'elemento selezionato `CopyToClipboard` funzione membro.

1. Se l'utente ha scelto di un'operazione di taglio invece di un'operazione di copia, eliminare i dati selezionati dall'applicazione.

Per un esempio di questa sequenza, vedere la `OnEditCut` e `OnEditCopy` programmi di esempio di funzioni in OLE MFC [OCLIENT](../visual-cpp-samples.md) e [HIERSVR](../visual-cpp-samples.md). Si noti che questi esempi di manutenzione di un puntatore ai dati attualmente selezionati, il passaggio 1 è già stato completato.

##  <a name="_core_pasting_data"></a> Operazione Incolla dati

Operazione Incolla dati è più complicato rispetto a copiarlo, in quanto è necessario scegliere il formato da usare per incollare i dati nell'applicazione.

#### <a name="to-paste-data-from-the-clipboard"></a>Per incollare dati dagli Appunti

1. Nella classe view, implementare `OnEditPaste` per supportare gli utenti scegliendo l'opzione Incolla del menu Modifica.

1. Nel `OnEditPaste` funzionamento, creare un `COleDataObject` oggetto e chiamare relativo `AttachClipboard` funzione membro per collegare l'oggetto per i dati negli Appunti.

1. Chiamare `COleDataObject::IsDataAvailable` per verificare se è disponibile un formato particolare.

     In alternativa, è possibile usare `COleDataObject::BeginEnumFormats` cercare altri formati fino a individuare quello più adatto all'applicazione.

1. Operazione Incolla del formato.

Per un esempio del funzionamento, vedere l'implementazione del `OnEditPaste` funzioni membro in classi di visualizzazione definita in programmi di esempio OLE MFC [OCLIENT](../visual-cpp-samples.md) e [HIERSVR](../visual-cpp-samples.md).

> [!TIP]
>  Il vantaggio principale di separare l'operazione Incolla nella propria funzione è può essere utilizzato lo stesso codice incollare quando i dati viene eliminati all'interno dell'applicazione durante un'operazione di trascinamento e rilascio. Come OCLIENT e HIERSVR, il `OnDrop` funzione può anche chiamare `DoPasteItem`, Riutilizza il codice scritto per implementare le operazioni Incolla.

Per gestire l'opzione Incolla speciale dal menu Modifica, vedere l'argomento [finestre di dialogo in OLE](../mfc/dialog-boxes-in-ole.md).

### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Aggiunta di altri formati](../mfc/clipboard-adding-other-formats.md)

- [Origini dati e oggetti dati OLE e uniform data transfer](../mfc/data-objects-and-data-sources-ole.md)

- [Trascinamento della selezione OLE](../mfc/drag-and-drop-ole.md)

- [OLE](../mfc/ole-background.md)

## <a name="see-also"></a>Vedere anche

[Appunti: uso del meccanismo degli Appunti OLE](../mfc/clipboard-using-the-ole-clipboard-mechanism.md)

