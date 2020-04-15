---
title: 'Appunti: copiare e incollare dati'
ms.date: 11/04/2016
helpviewer_keywords:
- Clipboard, copying data to
- Clipboard, pasting
ms.assetid: 580e10be-241f-4f9f-94cf-8302edc5beef
ms.openlocfilehash: 74348dd3e790cceada9aafd718464694997316ed
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374563"
---
# <a name="clipboard-copying-and-pasting-data"></a>Appunti: copiare e incollare dati

In questo argomento viene descritto il lavoro minimo necessario per implementare la copia e incolla dagli Appunti nell'applicazione OLE. Si consiglia di leggere gli argomenti relativi agli oggetti dati e alle [origini dati (OLE)](../mfc/data-objects-and-data-sources-ole.md) prima di procedere.

Prima di implementare la copia o incolla, è necessario fornire le funzioni per gestire le opzioni Copia, Taglia e Incolla del menu Modifica.

## <a name="copying-or-cutting-data"></a><a name="_core_copying_or_cutting_data"></a>Copia o taglio dei dati

#### <a name="to-copy-data-to-the-clipboard"></a>Per copiare i dati negli Appunti

1. Determinare se i dati da copiare sono dati nativi o un elemento incorporato o collegato.

   - Se i dati sono incorporati o collegati, ottenere un puntatore all'oggetto `COleClientItem` selezionato.

   - Se i dati sono nativi e l'applicazione è `COleServerItem` un server, creare un nuovo oggetto derivato da contenente i dati selezionati. In caso `COleDataSource` contrario, creare un oggetto per i dati.

1. Chiamare la funzione `CopyToClipboard` membro dell'elemento selezionato.

1. Se l'utente ha scelto un'operazione Taglia anziché un'operazione di copia, eliminare i dati selezionati dall'applicazione.

Per un esempio di questa `OnEditCut` sequenza, vedere le funzioni e `OnEditCopy` nei programmi di esempio OLE MFC [OCLIENT](../overview/visual-cpp-samples.md) e [HIERSVR](../overview/visual-cpp-samples.md). Si noti che questi esempi mantengono un puntatore ai dati attualmente selezionati, pertanto il passaggio 1 è già completo.

## <a name="pasting-data"></a><a name="_core_pasting_data"></a>Incollare dati

Incollare i dati è più complicato rispetto alla copia perché è necessario scegliere il formato da utilizzare per incollare i dati nell'applicazione.

#### <a name="to-paste-data-from-the-clipboard"></a>Per incollare dati dagli Appunti

1. Nella classe di `OnEditPaste` visualizzazione, implementare per gestire gli utenti che scelgono l'opzione Incolla dal menu Modifica .

1. Nella `OnEditPaste` funzione, creare `COleDataObject` un oggetto `AttachClipboard` e chiamare la relativa funzione membro per collegare questo oggetto ai dati negli Appunti.

1. Chiamare `COleDataObject::IsDataAvailable` per verificare se un particolare formato è disponibile.

   In alternativa, è `COleDataObject::BeginEnumFormats` possibile utilizzare per cercare altri formati fino a trovare quello più adatto per l'applicazione.

1. Eseguire l'operazione Incolla del formato.

Per un esempio di funzionamento, vedere `OnEditPaste` l'implementazione delle funzioni membro nelle classi di visualizzazione definite nei programmi di esempio OLE MFC [OCLIENT](../overview/visual-cpp-samples.md) e [HIERSVR](../overview/visual-cpp-samples.md).

> [!TIP]
> Il vantaggio principale di separare l'operazione Incolla nella propria funzione è che lo stesso codice Incolla può essere utilizzato quando i dati vengono rilasciati nell'applicazione durante un'operazione di trascinamento della selezione. Come in OCLIENT e HIERSVR, `OnDrop` `DoPasteItem`la funzione può anche chiamare , riutilizzando il codice scritto per implementare le operazioni Incolla.

Per gestire l'opzione Incolla speciale del menu Modifica , vedere l'argomento [Finestre di dialogo in OLE](../mfc/dialog-boxes-in-ole.md).

### <a name="what-do-you-want-to-know-more-about"></a>Cosa vuoi sapere di più su

- [Aggiunta di altri formati](../mfc/clipboard-adding-other-formats.md)

- [Oggetti dati OLE, origini dati OLE e Uniform Data Transfer](../mfc/data-objects-and-data-sources-ole.md)

- [Trascinamento della selezione OLE](../mfc/drag-and-drop-ole.md)

- [OLE](../mfc/ole-background.md)

## <a name="see-also"></a>Vedere anche

[Appunti: uso del meccanismo degli Appunti OLE](../mfc/clipboard-using-the-ole-clipboard-mechanism.md)
