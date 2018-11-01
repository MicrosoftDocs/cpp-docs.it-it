---
title: 'Controlli ActiveX MFC: restituzione di codici di errore da un metodo'
ms.date: 11/04/2016
helpviewer_keywords:
- MFC ActiveX controls [MFC], error codes
- SetNotSupported method, using
- errors [MFC], ActiveX control error codes
- GetNotSupported method [MFC]
- FireError method [MFC]
- SCODE, MFC ActiveX controls
- ThrowError method [MFC]
ms.assetid: 771fb9c9-2413-4dcc-b386-7bc4c4adeafd
ms.openlocfilehash: 8c5fe88cf952337a7d070eae7a5da149a8e905bd
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50676486"
---
# <a name="mfc-activex-controls-returning-error-codes-from-a-method"></a>Controlli ActiveX MFC: restituzione di codici di errore da un metodo

Questo articolo viene descritto come restituire i codici di errore da un metodo di controllo ActiveX.

Per indicare che si è verificato un errore interno di un metodo, è consigliabile usare la [COleControl:: ThrowError](../mfc/reference/colecontrol-class.md#throwerror) funzione membro, che utilizza un SCODE (codice di stato) come parametro. È possibile usare un SCODE predefinito o definirne uno proprio.

> [!NOTE]
>  `ThrowError` deve essere usata solo come mezzo per la restituzione di un errore da all'interno Get della proprietà o Set di funzione o un metodo di automazione. Questi sono gli unici volte in cui il gestore di eccezioni appropriato saranno presentano nello stack.

Esistono funzioni di supporto per i più comuni predefinite, ad esempio, SCODEs [COleControl:: SetNotSupported](../mfc/reference/colecontrol-class.md#setnotsupported), [COleControl::GetNotSupported](../mfc/reference/colecontrol-class.md#getnotsupported), e [COleControl::SetNotPermitted](../mfc/reference/colecontrol-class.md#setnotpermitted).

Per un elenco di predefinite SCODEs e istruzioni sulla definizione SCODEs personalizzati, vedere la sezione [gestione degli errori nel controllo ActiveX](../mfc/mfc-activex-controls-advanced-topics.md) nei controlli ActiveX: argomenti avanzati.

Per altre informazioni sulla segnalazione di eccezioni in altre aree del codice, vedere [COleControl:: FireError](../mfc/reference/colecontrol-class.md#fireerror) e nella sezione [gestione degli errori nel controllo ActiveX](../mfc/mfc-activex-controls-advanced-topics.md) nei controlli ActiveX: argomenti avanzati.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)

