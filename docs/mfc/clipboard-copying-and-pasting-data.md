---
description: 'Altre informazioni su: Appunti: copia e incolla di dati'
title: 'Appunti: copiare e incollare dati'
ms.date: 11/04/2016
helpviewer_keywords:
- Clipboard, copying data to
- Clipboard, pasting
ms.assetid: 580e10be-241f-4f9f-94cf-8302edc5beef
ms.openlocfilehash: fdc102cf7a92bc78df83419269bb5de828dc9d19
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97251232"
---
# <a name="clipboard-copying-and-pasting-data"></a>Appunti: copiare e incollare dati

In questo argomento vengono descritte le operazioni minime necessarie per implementare la copia e incolla dagli Appunti nell'applicazione OLE. Prima di procedere, è consigliabile leggere gli argomenti [relativi a oggetti dati e origini dati (OLE)](data-objects-and-data-sources-ole.md) .

Prima di poter implementare la copia o incolla, è necessario innanzitutto fornire funzioni per gestire le opzioni copia, taglia e incolla nel menu Modifica.

## <a name="copying-or-cutting-data"></a><a name="_core_copying_or_cutting_data"></a> Copia o taglio dei dati

#### <a name="to-copy-data-to-the-clipboard"></a>Per copiare i dati negli Appunti

1. Determinare se i dati da copiare sono dati nativi o sono elementi incorporati o collegati.

   - Se i dati sono incorporati o collegati, ottenere un puntatore all' `COleClientItem` oggetto selezionato.

   - Se i dati sono nativi e l'applicazione è un server, creare un nuovo oggetto derivato da `COleServerItem` contenente i dati selezionati. In caso contrario, creare un `COleDataSource` oggetto per i dati.

1. Chiama la funzione membro dell'elemento selezionato `CopyToClipboard` .

1. Se l'utente sceglie un'operazione Taglia anziché un'operazione di copia, eliminare i dati selezionati dall'applicazione.

Per visualizzare un esempio di questa sequenza, vedere le `OnEditCut` `OnEditCopy` funzioni e nei programmi di esempio OLE MFC [OCLIENT](../overview/visual-cpp-samples.md) e [HIERSVR](../overview/visual-cpp-samples.md). Si noti che questi esempi mantengono un puntatore ai dati attualmente selezionati, quindi il passaggio 1 è già completato.

## <a name="pasting-data"></a><a name="_core_pasting_data"></a> Incollare dati

Incollare i dati è più complicato rispetto alla copia perché è necessario scegliere il formato da usare per incollare i dati nell'applicazione.

#### <a name="to-paste-data-from-the-clipboard"></a>Per incollare dati dagli Appunti

1. Nella classe di visualizzazione implementare `OnEditPaste` per gestire gli utenti scegliendo l'opzione Incolla dal menu Modifica.

1. Nella `OnEditPaste` funzione creare un `COleDataObject` oggetto e chiamare la relativa `AttachClipboard` funzione membro per collegare questo oggetto ai dati negli Appunti.

1. Chiamare `COleDataObject::IsDataAvailable` per verificare se è disponibile un particolare formato.

   In alternativa, è possibile usare `COleDataObject::BeginEnumFormats` per cercare altri formati fino a quando non ne viene individuato uno più adatto all'applicazione.

1. Eseguire l'operazione incolla del formato.

Per un esempio di come funziona, vedere l'implementazione delle `OnEditPaste` funzioni membro nelle classi di visualizzazione definite nei programmi di esempio OLE MFC [OCLIENT](../overview/visual-cpp-samples.md) e [HIERSVR](../overview/visual-cpp-samples.md).

> [!TIP]
> Il vantaggio principale della separazione dell'operazione Incolla nella propria funzione è che è possibile usare lo stesso codice Incolla quando i dati vengono eliminati nell'applicazione durante un'operazione di trascinamento della selezione. Come in OCLIENT e HIERSVR, la `OnDrop` funzione può anche chiamare `DoPasteItem` , riutilizzando il codice scritto per implementare le operazioni Incolla.

Per gestire l'opzione Incolla speciale dal menu modifica, vedere l'argomento [finestre di dialogo in OLE](dialog-boxes-in-ole.md).

### <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Aggiunta di altri formati](clipboard-adding-other-formats.md)

- [Oggetti dati OLE, origini dati OLE e Uniform Data Transfer](data-objects-and-data-sources-ole.md)

- [Trascinamento della selezione OLE](drag-and-drop-ole.md)

- [OLE](ole-background.md)

## <a name="see-also"></a>Vedi anche

[Appunti: utilizzo del meccanismo degli Appunti OLE](clipboard-using-the-ole-clipboard-mechanism.md)
