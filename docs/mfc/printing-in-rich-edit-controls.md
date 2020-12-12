---
description: 'Altre informazioni su: stampa nei controlli Rich Edit'
title: Stampa in controlli Rich Edit
ms.date: 11/04/2016
helpviewer_keywords:
- printing [MFC], CRichEditCtrl
- rich edit controls [MFC], printing
- CRichEditCtrl class [MFC], printing
ms.assetid: dbda0e40-018f-424e-b5d8-7b489aaf27af
ms.openlocfilehash: 9b5c272df36c6a4472c82cc4b0655b1d9626c2ee
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97205733"
---
# <a name="printing-in-rich-edit-controls"></a>Stampa in controlli Rich Edit

È possibile specificare un controllo Rich Edit ([CRichEditCtrl](reference/cricheditctrl-class.md)) per eseguire il rendering dell'output per un dispositivo specifico, ad esempio una stampante. È anche possibile specificare il dispositivo di output per il quale un controllo Rich Edit formatta il testo.

Per formattare parte del contenuto di un controllo Rich Edit per un dispositivo specifico, è possibile usare la funzione membro [FormatRange](reference/cricheditctrl-class.md#formatrange) . La struttura [FormatRange](/windows/win32/api/richedit/ns-richedit-formatrange) usata con questa funzione specifica l'intervallo di testo da formattare e il contesto di dispositivo (DC) per il dispositivo di destinazione.

Dopo aver formattato il testo per un dispositivo di output, è possibile inviare l'output al dispositivo usando la funzione membro [DisplayBand](reference/cricheditctrl-class.md#displayband) . Utilizzando ripetutamente `FormatRange` e `DisplayBand` , un'applicazione che stampa il contenuto di un controllo Rich Edit può implementare il bendaggio. (Il banding è la divisione dell'output in parti più piccole per scopi di stampa).

È possibile usare la funzione membro [SetTargetDevice](reference/cricheditctrl-class.md#settargetdevice) per specificare il dispositivo di destinazione per il quale un controllo Rich Edit formatta il testo. Questa funzione è utile per la formattazione di WYSIWYG (ciò che viene visualizzato), in cui un'applicazione posiziona il testo utilizzando le metriche dei tipi di carattere della stampante predefinita anziché la schermata.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CRichEditCtrl](using-cricheditctrl.md)<br/>
[Controlli](controls-mfc.md)
