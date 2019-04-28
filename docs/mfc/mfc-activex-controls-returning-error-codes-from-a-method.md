---
title: 'Controlli ActiveX MFC: Restituzione di codici di errore da un metodo'
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
ms.openlocfilehash: 0800c1827c636dd81e2928e33c0ee2afde4c94ac
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62324272"
---
# <a name="mfc-activex-controls-returning-error-codes-from-a-method"></a>Controlli ActiveX MFC: Restituzione di codici di errore da un metodo

Questo articolo viene descritto come restituire i codici di errore da un metodo di controllo ActiveX.

Per indicare che si è verificato un errore interno di un metodo, è consigliabile usare la [COleControl:: ThrowError](../mfc/reference/colecontrol-class.md#throwerror) funzione membro, che utilizza un SCODE (codice di stato) come parametro. È possibile usare un SCODE predefinito o definirne uno proprio.

> [!NOTE]
>  `ThrowError` deve essere usata solo come mezzo per la restituzione di un errore da all'interno Get della proprietà o Set di funzione o un metodo di automazione. Questi sono gli unici volte in cui il gestore di eccezioni appropriato saranno presentano nello stack.

Esistono funzioni di supporto per i più comuni predefinite, ad esempio, SCODEs [COleControl:: SetNotSupported](../mfc/reference/colecontrol-class.md#setnotsupported), [COleControl::GetNotSupported](../mfc/reference/colecontrol-class.md#getnotsupported), e [COleControl::SetNotPermitted](../mfc/reference/colecontrol-class.md#setnotpermitted).

Per un elenco di predefinite SCODEs e istruzioni sulla definizione SCODEs personalizzati, vedere la sezione [gestione degli errori nel controllo ActiveX](../mfc/mfc-activex-controls-advanced-topics.md) nei controlli ActiveX: Argomenti avanzati.

Per altre informazioni sulla segnalazione di eccezioni in altre aree del codice, vedere [COleControl:: FireError](../mfc/reference/colecontrol-class.md#fireerror) e nella sezione [gestione degli errori nel controllo ActiveX](../mfc/mfc-activex-controls-advanced-topics.md) nei controlli ActiveX: Argomenti avanzati.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)
