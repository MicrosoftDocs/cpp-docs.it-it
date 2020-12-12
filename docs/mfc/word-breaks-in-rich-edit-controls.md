---
description: 'Altre informazioni su: interruzioni di parola in controlli Rich Edit'
title: Interruzioni di parola in controlli Rich Edit
ms.date: 11/04/2016
helpviewer_keywords:
- CRichEditCtrl class [MFC], word breaks in
- word breaks
- breaking words in CRichEditCtrl
- rich edit controls [MFC], word breaks in
ms.assetid: 641dcf9e-7b40-4dc0-85f7-575a8c142f73
ms.openlocfilehash: 662a6b8441c4a9041a539acdabcab74f12d52782
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97172713"
---
# <a name="word-breaks-in-rich-edit-controls"></a>Interruzioni di parola in controlli Rich Edit

Un controllo Rich Edit ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) chiama una funzione denominata "Word break procedure" per trovare le interruzioni tra le parole e per determinare la posizione in cui è possibile interrompere le righe. Il controllo utilizza queste informazioni quando si eseguono operazioni di ritorno a capo automatico e quando si elaborano le combinazioni di tasti CTRL + LEFT e CTRL + RIGHT. Un'applicazione può inviare messaggi a un controllo Rich Edit per sostituire la routine di Word break predefinita, per recuperare le informazioni sull'interruzioni di parola e per determinare la riga in cui si trova un determinato carattere.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CRichEditCtrl](../mfc/using-cricheditctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
