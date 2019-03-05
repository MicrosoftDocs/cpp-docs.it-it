---
title: Creazione della risorsa finestra di dialogo
ms.date: 11/04/2016
helpviewer_keywords:
- dialog resources
- MFC dialog boxes [MFC], creating
- dialog templates [MFC], creating dialog resource
- templates [MFC], creating
- resources [MFC], creating dialog boxes
- MFC dialog boxes [MFC], dialog resource
ms.assetid: 0b83bd33-14d3-4611-8129-fccdae18053e
ms.openlocfilehash: d0df76c506d4e6f2267e3a7628825e7b47a56c8c
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57303040"
---
# <a name="creating-the-dialog-resource"></a>Creazione della risorsa finestra di dialogo

Per progettare il [finestra di dialogo](../mfc/dialog-boxes.md) e creare la risorsa finestra di dialogo, utilizzare il [editor finestre](../windows/dialog-editor.md). Nell'editor finestre è possibile effettuare le seguenti operazioni:

- Impostare le dimensioni e la posizione della finestra di dialogo quando verrà visualizzata.

- Trascinare vari tipi di controlli da una tavolozza dei controlli e rilasciarli nelle posizioni desiderate all'interno della finestra di dialogo.

- Posizionare i controlli con i pulsanti di allineamento nella barra degli strumenti.

- Eseguire i test sulla finestra di dialogo simulando l'aspetto e il comportamento che avrà nel programma. Nella modalità test, è possibile modificare i controlli della finestra di dialogo digitando del testo nelle caselle di testo, facendo clic sui pulsanti e così via.

Al termine, la risorsa modello di finestra di dialogo viene archiviata nel file di script di risorsa dell'applicazione. In seguito sarà possibile modificarla, se necessario. Per una descrizione completa di come creare e modificare le risorse finestra di dialogo, vedere la [editor finestre](../windows/dialog-editor.md) argomenti. Questa tecnica viene usata anche per creare le risorse del modello di finestra per [CFormView](../mfc/reference/cformview-class.md) e [CRecordView](../mfc/reference/crecordview-class.md) classi.

Quando l'aspetto della finestra di dialogo alle proprie esigenze, creare una classe di finestra di dialogo ed eseguire il mapping dei messaggi, come descritto nella [creazione di una classe di finestra di dialogo con creazioni guidate codice](../mfc/creating-a-dialog-class-with-code-wizards.md).

## <a name="see-also"></a>Vedere anche

[Finestre di dialogo](../mfc/dialog-boxes.md)<br/>
[Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)
