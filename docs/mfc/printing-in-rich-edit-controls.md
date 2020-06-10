---
title: Stampa in controlli Rich Edit
ms.date: 11/04/2016
helpviewer_keywords:
- printing [MFC], CRichEditCtrl
- rich edit controls [MFC], printing
- CRichEditCtrl class [MFC], printing
ms.assetid: dbda0e40-018f-424e-b5d8-7b489aaf27af
ms.openlocfilehash: f275078fbef9026363305bb714da3a2af333c91f
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84619814"
---
# <a name="printing-in-rich-edit-controls"></a>Stampa in controlli Rich Edit

È possibile specificare un controllo Rich Edit ([CRichEditCtrl](reference/cricheditctrl-class.md)) per eseguire il rendering dell'output per un dispositivo specifico, ad esempio una stampante. È anche possibile specificare il dispositivo di output per il quale un controllo Rich Edit formatta il testo.

Per formattare parte del contenuto di un controllo Rich Edit per un dispositivo specifico, è possibile usare la funzione membro [FormatRange](reference/cricheditctrl-class.md#formatrange) . La struttura [FormatRange](/windows/win32/api/richedit/ns-richedit-formatrange) usata con questa funzione specifica l'intervallo di testo da formattare e il contesto di dispositivo (DC) per il dispositivo di destinazione.

Dopo aver formattato il testo per un dispositivo di output, è possibile inviare l'output al dispositivo usando la funzione membro [DisplayBand](reference/cricheditctrl-class.md#displayband) . Utilizzando ripetutamente `FormatRange` e `DisplayBand` , un'applicazione che stampa il contenuto di un controllo Rich Edit può implementare il bendaggio. (Il banding è la divisione dell'output in parti più piccole per scopi di stampa).

È possibile usare la funzione membro [SetTargetDevice](reference/cricheditctrl-class.md#settargetdevice) per specificare il dispositivo di destinazione per il quale un controllo Rich Edit formatta il testo. Questa funzione è utile per la formattazione di WYSIWYG (ciò che viene visualizzato), in cui un'applicazione posiziona il testo utilizzando le metriche dei tipi di carattere della stampante predefinita anziché la schermata.

## <a name="see-also"></a>Vedere anche

[Uso di CRichEditCtrl](using-cricheditctrl.md)<br/>
[Controlli](controls-mfc.md)
