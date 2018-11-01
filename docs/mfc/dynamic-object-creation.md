---
title: Creazione di oggetti dinamici
ms.date: 11/04/2016
helpviewer_keywords:
- object creation [MFC], dynamically at run time
- CObject class [MFC], dynamic object creation
- objects [MFC], creating dynamically at run time
- dynamic object creation [MFC]
ms.assetid: 3e0f51cb-3e24-4231-817f-1c0ce9f2d5df
ms.openlocfilehash: 75d4a055f047abfcac4451c04bcd1cc75650c89a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50563723"
---
# <a name="dynamic-object-creation"></a>Creazione di oggetti dinamici

Questo articolo illustra come creare un oggetto in modo dinamico in fase di esecuzione. La procedura Usa le informazioni sulla classe di runtime, come descritto nell'articolo [l'accesso a informazioni sulle classi di Run-Time](../mfc/accessing-run-time-class-information.md).

#### <a name="to-dynamically-create-an-object-given-its-run-time-class"></a>Per creare dinamicamente un oggetto dato relativa classe di runtime

1. Usare il codice seguente per creare dinamicamente un oggetto utilizzando il `CreateObject` funzione del `CRuntimeClass`. Si noti che in caso di errore `CreateObject` restituisce **NULL** anziché generare un'eccezione:

   [!code-cpp[NVC_MFCCObjectSample#6](../mfc/codesnippet/cpp/dynamic-object-creation_1.cpp)]

## <a name="see-also"></a>Vedere anche

[Uso di CObject](../mfc/using-cobject.md)

