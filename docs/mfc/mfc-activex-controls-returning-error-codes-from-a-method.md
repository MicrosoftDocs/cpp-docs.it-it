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
ms.openlocfilehash: 5314545a3a903158362dbfa65c4a9a1b2143e86b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364553"
---
# <a name="mfc-activex-controls-returning-error-codes-from-a-method"></a>Controlli ActiveX MFC: restituzione di codici di errore da un metodo

In questo articolo viene descritto come restituire i codici di errore da un metodo di controllo ActiveX.

Per indicare che si è verificato un errore all'interno di un metodo, è necessario utilizzare la funzione membro [COleControl::ThrowError](../mfc/reference/colecontrol-class.md#throwerror) , che accetta un SCODE (codice di stato) come parametro. È possibile utilizzare uno SCODE predefinito o definirne uno personalizzato.

> [!NOTE]
> `ThrowError`è progettato per essere utilizzato solo come mezzo per restituire un errore dall'interno della funzione Get o Set di una proprietà o un metodo di automazione. Queste sono le uniche volte in cui il gestore di eccezioni appropriato sarà presente nello stack.

Le funzioni di supporto esistono per i SCOD più comuni, ad esempio [COleControl::SetNotSupported](../mfc/reference/colecontrol-class.md#setnotsupported), [COleControl::GetNotSupported](../mfc/reference/colecontrol-class.md#getnotsupported)e [COleControl::SetNotPermitted](../mfc/reference/colecontrol-class.md#setnotpermitted).

Per un elenco di SCOD E predefiniti e istruzioni sulla definizione di SCODE personalizzati, vedere la sezione [Gestione degli errori nel controllo ActiveX](../mfc/mfc-activex-controls-advanced-topics.md) nei controlli ActiveX: argomenti avanzati.

Per altre informazioni sulla segnalazione di eccezioni in altre aree del codice, vedere [COleControl::FireError](../mfc/reference/colecontrol-class.md#fireerror) e la sezione [Gestione degli errori nel controllo ActiveX](../mfc/mfc-activex-controls-advanced-topics.md) nei controlli ActiveX: argomenti avanzati.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)
