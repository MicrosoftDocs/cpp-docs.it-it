---
title: Stampa in controlli Rich Edit
ms.date: 11/04/2016
helpviewer_keywords:
- printing [MFC], CRichEditCtrl
- rich edit controls [MFC], printing
- CRichEditCtrl class [MFC], printing
ms.assetid: dbda0e40-018f-424e-b5d8-7b489aaf27af
ms.openlocfilehash: 6ae7212eaa8eed1088a507973c80311f169c7751
ms.sourcegitcommit: 46d24d6e70c03e05484923d9efc6ed5150e96a64
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2019
ms.locfileid: "68916274"
---
# <a name="printing-in-rich-edit-controls"></a>Stampa in controlli Rich Edit

È possibile specificare un controllo Rich Edit ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) per eseguire il rendering dell'output per un dispositivo specifico, ad esempio una stampante. È anche possibile specificare il dispositivo di output per il quale un controllo Rich Edit formatta il testo.

Per formattare parte del contenuto di un controllo Rich Edit per un dispositivo specifico, è possibile usare la funzione membro [FormatRange](../mfc/reference/cricheditctrl-class.md#formatrange) . La struttura [FormatRange](/windows/desktop/api/richedit/ns-richedit-formatrange) usata con questa funzione specifica l'intervallo di testo da formattare e il contesto di dispositivo (DC) per il dispositivo di destinazione.

Dopo aver formattato il testo per un dispositivo di output, è possibile inviare l'output al dispositivo usando la funzione membro [DisplayBand](../mfc/reference/cricheditctrl-class.md#displayband) . Utilizzando `FormatRange` ripetutamente e `DisplayBand`, un'applicazione che stampa il contenuto di un controllo Rich Edit può implementare il bendaggio. (Il banding è la divisione dell'output in parti più piccole per scopi di stampa).

È possibile usare la funzione membro [SetTargetDevice](../mfc/reference/cricheditctrl-class.md#settargetdevice) per specificare il dispositivo di destinazione per il quale un controllo Rich Edit formatta il testo. Questa funzione è utile per la formattazione di WYSIWYG (ciò che viene visualizzato), in cui un'applicazione posiziona il testo utilizzando le metriche dei tipi di carattere della stampante predefinita anziché la schermata.

## <a name="see-also"></a>Vedere anche

[Uso di CRichEditCtrl](../mfc/using-cricheditctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
