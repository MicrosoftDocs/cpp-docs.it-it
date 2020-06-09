---
title: 'Eccezioni: eccezioni nei costruttori'
ms.date: 11/04/2016
helpviewer_keywords:
- constructors [MFC], exceptions
- throwing exceptions [MFC], in constructors
- exceptions [MFC], in constructors
ms.assetid: a78eae5a-5821-4b27-9478-1436320ed1e1
ms.openlocfilehash: 4089f4d44f03c7de3432f137b5d28f74189e1cb9
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84624621"
---
# <a name="exceptions-exceptions-in-constructors"></a>Eccezioni: eccezioni nei costruttori

Quando si genera un'eccezione in un costruttore, pulire tutti gli oggetti e le allocazioni di memoria creati prima di generare l'eccezione, come illustrato in [eccezioni: generazione di eccezioni dalle funzioni personalizzate](exceptions-throwing-exceptions-from-your-own-functions.md).

Quando viene generata un'eccezione in un costruttore, la memoria per l'oggetto stesso è già stata allocata nel momento in cui viene chiamato il costruttore. Quindi, il compilatore dealloca automaticamente la memoria occupata dall'oggetto dopo che l'eccezione viene generata.

Per altre informazioni, vedere [Exceptions: Freeing Objects in Exceptions](exceptions-freeing-objects-in-exceptions.md).

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](exception-handling-in-mfc.md)
