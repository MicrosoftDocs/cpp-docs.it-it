---
description: 'Altre informazioni su: creazione della risorsa finestra di dialogo'
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
ms.openlocfilehash: 999a63d11981b8d21be85096ff49813c92b15810
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97309719"
---
# <a name="creating-the-dialog-resource"></a>Creazione della risorsa finestra di dialogo

Per progettare la finestra di [dialogo](dialog-boxes.md) e creare la risorsa finestra di dialogo, utilizzare l' [editor finestre](../windows/dialog-editor.md)di dialogo. Nell'editor finestre è possibile effettuare le seguenti operazioni:

- Impostare le dimensioni e la posizione della finestra di dialogo quando verrà visualizzata.

- Trascinare vari tipi di controlli da una tavolozza dei controlli e rilasciarli nelle posizioni desiderate all'interno della finestra di dialogo.

- Posizionare i controlli con i pulsanti di allineamento nella barra degli strumenti.

- Eseguire i test sulla finestra di dialogo simulando l'aspetto e il comportamento che avrà nel programma. Nella modalità test, è possibile modificare i controlli della finestra di dialogo digitando del testo nelle caselle di testo, facendo clic sui pulsanti e così via.

Al termine, la risorsa modello di finestra di dialogo viene archiviata nel file di script di risorsa dell'applicazione. In seguito sarà possibile modificarla, se necessario. Per una descrizione completa di come creare e modificare le risorse della finestra di dialogo, vedere gli argomenti dell' [editor finestre](../windows/dialog-editor.md) . Questa tecnica viene usata anche per creare le risorse del modello di finestra di dialogo per le classi [CFormView](reference/cformview-class.md) e [CRecordView](reference/crecordview-class.md) .

Quando l'aspetto della finestra di dialogo si adatta, creare una classe di finestre di dialogo ed eseguire il mapping dei relativi messaggi, come descritto in [creazione di una classe di finestre di dialogo con creazioni guidate codice](creating-a-dialog-class-with-code-wizards.md).

## <a name="see-also"></a>Vedi anche

[Finestre di dialogo](dialog-boxes.md)<br/>
[Utilizzo delle finestre di dialogo in MFC](life-cycle-of-a-dialog-box.md)
