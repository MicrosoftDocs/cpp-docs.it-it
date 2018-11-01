---
title: 'Eccezioni: eccezioni nei costruttori'
ms.date: 11/04/2016
helpviewer_keywords:
- constructors [MFC], exceptions
- throwing exceptions [MFC], in constructors
- exceptions [MFC], in constructors
ms.assetid: a78eae5a-5821-4b27-9478-1436320ed1e1
ms.openlocfilehash: 23d1f6a9a3c76cc9c0c1d4aebd5c0b0ea45c3154
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50472269"
---
# <a name="exceptions-exceptions-in-constructors"></a>Eccezioni: eccezioni nei costruttori

Quando si genera un'eccezione in un costruttore, pulire tutti gli oggetti e le allocazioni di memoria sono state apportate prima della generazione dell'eccezione, come illustrato in [eccezioni: generazione di eccezioni da funzioni personalizzate](../mfc/exceptions-throwing-exceptions-from-your-own-functions.md).

Quando si genera un'eccezione in un costruttore, la memoria per l'oggetto stesso è già stata allocata entro l'ora che viene chiamato il costruttore. Pertanto, il compilatore deallocherà automaticamente la memoria occupata dall'oggetto dopo la generazione dell'eccezione.

Per altre informazioni, vedere [eccezioni: rilascio di oggetti nelle eccezioni](../mfc/exceptions-freeing-objects-in-exceptions.md).

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)

