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
ms.openlocfilehash: 1f7564d750b476ac3f57656f3392e0801652e5d5
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84615522"
---
# <a name="mfc-activex-controls-returning-error-codes-from-a-method"></a>Controlli ActiveX MFC: restituzione di codici di errore da un metodo

Questo articolo descrive come restituire i codici di errore da un metodo di controllo ActiveX.

Per indicare che si è verificato un errore all'interno di un metodo, è necessario usare la funzione membro [COleControl:: ThrowError](reference/colecontrol-class.md#throwerror) , che accetta un valore SCODE (codice di stato) come parametro. È possibile usare un SCODE predefinito o definire uno dei propri.

> [!NOTE]
> `ThrowError`deve essere usato solo come mezzo per restituire un errore all'interno di una funzione Get o set di una proprietà o di un metodo di automazione. Queste sono le uniche volte in cui il gestore di eccezioni appropriato sarà presente nello stack.

Sono disponibili funzioni di supporto per i SCODE predefiniti più comuni, ad esempio [COleControl:: SetNotSupported](reference/colecontrol-class.md#setnotsupported), [COleControl:: GetNotSupported](reference/colecontrol-class.md#getnotsupported)e [COleControl:: SetNotPermitted](reference/colecontrol-class.md#setnotpermitted).

Per un elenco di SCODE predefinite e istruzioni sulla definizione di SCODE personalizzati, vedere la sezione [gestione degli errori nel controllo ActiveX](mfc-activex-controls-advanced-topics.md) in controlli ActiveX: argomenti avanzati.

Per ulteriori informazioni sulla creazione di report sulle eccezioni in altre aree del codice, vedere [COleControl:: FireError (](reference/colecontrol-class.md#fireerror) e la sezione [gestione degli errori nel controllo ActiveX](mfc-activex-controls-advanced-topics.md) in controlli ActiveX: argomenti avanzati.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](mfc-activex-controls.md)
