---
title: Interruzioni di parola in controlli Rich Edit
ms.date: 11/04/2016
helpviewer_keywords:
- CRichEditCtrl class [MFC], word breaks in
- word breaks
- breaking words in CRichEditCtrl
- rich edit controls [MFC], word breaks in
ms.assetid: 641dcf9e-7b40-4dc0-85f7-575a8c142f73
ms.openlocfilehash: efe4a0a2c06c14d913d43c51d1f0100f27c6a537
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50632596"
---
# <a name="word-breaks-in-rich-edit-controls"></a>Interruzioni di parola in controlli Rich Edit

Un controllo rich edit ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) chiama una funzione routine di tipo "parola break" per trovare le interruzioni tra le parole e determinare dove è possibile interrompere le righe. Il controllo utilizza queste informazioni quando si eseguono operazioni di ritorno a capo automatico e quando si elaborano le combinazioni di tasti CTRL + freccia sinistra e CTRL + freccia destra. Un'applicazione può inviare messaggi a un controllo rich edit per sostituire la routine di interruzione di parola predefinita, per recuperare informazioni relative alle interruzioni di parola e per determinare in quale riga di un carattere specificato cade.

## <a name="see-also"></a>Vedere anche

[Uso di CRichEditCtrl](../mfc/using-cricheditctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

