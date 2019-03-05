---
title: 'Eccezioni: Eccezioni nei costruttori'
ms.date: 11/04/2016
helpviewer_keywords:
- constructors [MFC], exceptions
- throwing exceptions [MFC], in constructors
- exceptions [MFC], in constructors
ms.assetid: a78eae5a-5821-4b27-9478-1436320ed1e1
ms.openlocfilehash: 0b11f5be18879d5ad4b9e204bb02e18b4617c6b7
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57271009"
---
# <a name="exceptions-exceptions-in-constructors"></a>Eccezioni: Eccezioni nei costruttori

Quando si genera un'eccezione in un costruttore, pulire tutti gli oggetti e le allocazioni di memoria sono state apportate prima della generazione dell'eccezione, come spiegato in [alle eccezioni: Generazione di eccezioni da funzioni personalizzate](../mfc/exceptions-throwing-exceptions-from-your-own-functions.md).

Quando si genera un'eccezione in un costruttore, la memoria per l'oggetto stesso è già stata allocata entro l'ora che viene chiamato il costruttore. Pertanto, il compilatore deallocherà automaticamente la memoria occupata dall'oggetto dopo la generazione dell'eccezione.

Per altre informazioni, vedere [alle eccezioni: Rilascio di oggetti nelle eccezioni](../mfc/exceptions-freeing-objects-in-exceptions.md).

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)
