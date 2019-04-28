---
title: Stampa in controlli Rich Edit
ms.date: 11/04/2016
helpviewer_keywords:
- printing [MFC], CRichEditCtrl
- rich edit controls [MFC], printing
- CRichEditCtrl class [MFC], printing
ms.assetid: dbda0e40-018f-424e-b5d8-7b489aaf27af
ms.openlocfilehash: 2ddc52e43da2e409117ccc5169442002ac27a315
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62238395"
---
# <a name="printing-in-rich-edit-controls"></a>Stampa in controlli Rich Edit

È possibile indicare a un controllo rich edit ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) per eseguire il rendering dell'output per un dispositivo specifico, ad esempio una stampante. È anche possibile specificare il dispositivo di output per il quale un controllo rich edit formatta il testo.

Per formattare una parte del contenuto di un controllo rich edit per un dispositivo specifico, è possibile usare la [FormatRange](../mfc/reference/cricheditctrl-class.md#formatrange) funzione membro. Il [FORMATRANGE](/windows/desktop/api/richedit/ns-richedit-_formatrange) struttura utilizzata con questa funzione consente di specificare l'intervallo di testo da formattare, nonché il contesto di periferica (DC) per il dispositivo di destinazione.

Dopo la formattazione del testo per un dispositivo di output, è possibile inviare l'output al dispositivo tramite il [DisplayBand](../mfc/reference/cricheditctrl-class.md#displayband) funzione membro. Usando ripetutamente `FormatRange` e `DisplayBand`, può implementare un'applicazione che consente di stampare il contenuto di un controllo rich edit rappresentazione per bande. (Rappresentazione per bande è la divisione dell'output in parti più piccole a scopo di stampa).

È possibile usare la [funzione membro SetTargetDevice](../mfc/reference/cricheditctrl-class.md#settargetdevice) funzione membro per specificare il dispositivo di destinazione per il quale un controllo rich edit formatta il testo. Questa funzione è utile per WYSIWYG (come si vede è ciò che si ottiene) la formattazione, in cui un'applicazione posiziona il testo utilizzando le metriche del tipo di carattere della stampante predefinita anziché della schermata.

## <a name="see-also"></a>Vedere anche

[Uso di CRichEditCtrl](../mfc/using-cricheditctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
