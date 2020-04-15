---
title: Creazione di oggetti dinamici
ms.date: 03/27/2020
helpviewer_keywords:
- object creation [MFC], dynamically at run time
- CObject class [MFC], dynamic object creation
- objects [MFC], creating dynamically at run time
- dynamic object creation [MFC]
ms.assetid: 3e0f51cb-3e24-4231-817f-1c0ce9f2d5df
ms.openlocfilehash: 40a17d3ed458d0634fd5bf27b54d0a36a65e35b9
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364799"
---
# <a name="dynamic-object-creation"></a>Creazione di oggetti dinamici

In questo articolo viene illustrato come creare un oggetto in modo dinamico in fase di esecuzione. La routine utilizza le informazioni sulle classi in fase di esecuzione, come descritto nell'articolo [Accesso alle informazioni](../mfc/accessing-run-time-class-information.md)sulle classi in fase di esecuzione .

#### <a name="dynamically-create-an-object-given-its-run-time-class"></a>Creare dinamicamente un oggetto data la relativa classe in fase di esecuzioneDynamically create an object given its run-time class

1. Utilizzare il codice riportato di `CreateObject` seguito per `CRuntimeClass`creare dinamicamente un oggetto utilizzando la funzione dell'oggetto . In caso `CreateObject` di errore, restituisce NULL anziché generare un'eccezione:On failure, returns **NULL** instead of raising an exception:

   [!code-cpp[NVC_MFCCObjectSample#6](../mfc/codesnippet/cpp/dynamic-object-creation_1.cpp)]

## <a name="see-also"></a>Vedere anche

[Eliminazione di oggetti](tn017-destroying-window-objects.md)
finestra[mediante CObject](using-cobject.md)
