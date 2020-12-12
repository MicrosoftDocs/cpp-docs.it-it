---
description: 'Altre informazioni su: eccezioni: eccezioni nei costruttori'
title: 'Eccezioni: eccezioni nei costruttori'
ms.date: 11/04/2016
helpviewer_keywords:
- constructors [MFC], exceptions
- throwing exceptions [MFC], in constructors
- exceptions [MFC], in constructors
ms.assetid: a78eae5a-5821-4b27-9478-1436320ed1e1
ms.openlocfilehash: 69393cc6a5cf709d359ccbdb572406e91c6788ec
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97290596"
---
# <a name="exceptions-exceptions-in-constructors"></a>Eccezioni: eccezioni nei costruttori

Quando si genera un'eccezione in un costruttore, pulire tutti gli oggetti e le allocazioni di memoria creati prima di generare l'eccezione, come illustrato in [eccezioni: generazione di eccezioni dalle funzioni personalizzate](exceptions-throwing-exceptions-from-your-own-functions.md).

Quando viene generata un'eccezione in un costruttore, la memoria per l'oggetto stesso è già stata allocata nel momento in cui viene chiamato il costruttore. Quindi, il compilatore dealloca automaticamente la memoria occupata dall'oggetto dopo che l'eccezione viene generata.

Per altre informazioni, vedere [Exceptions: Freeing Objects in Exceptions](exceptions-freeing-objects-in-exceptions.md).

## <a name="see-also"></a>Vedi anche

[Gestione delle eccezioni](exception-handling-in-mfc.md)
