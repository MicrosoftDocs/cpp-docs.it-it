---
title: Creazione di oggetti dinamici
ms.date: 03/27/2020
helpviewer_keywords:
- object creation [MFC], dynamically at run time
- CObject class [MFC], dynamic object creation
- objects [MFC], creating dynamically at run time
- dynamic object creation [MFC]
ms.assetid: 3e0f51cb-3e24-4231-817f-1c0ce9f2d5df
ms.openlocfilehash: 00e627e6d73e510ca694966291e2ef518fef18b5
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84619541"
---
# <a name="dynamic-object-creation"></a>Creazione di oggetti dinamici

Questo articolo illustra come creare un oggetto in modo dinamico in fase di esecuzione. La procedura usa le informazioni sulle classi di runtime, come descritto nell'articolo [accesso alle informazioni sulle classi](accessing-run-time-class-information.md)in fase di esecuzione.

#### <a name="dynamically-create-an-object-given-its-run-time-class"></a>Crea dinamicamente un oggetto in base alla relativa classe di runtime

1. Usare il codice seguente per creare dinamicamente un oggetto usando la `CreateObject` funzione di `CRuntimeClass` . In caso di errore, `CreateObject` restituisce **null** anziché generare un'eccezione:

   [!code-cpp[NVC_MFCCObjectSample#6](codesnippet/cpp/dynamic-object-creation_1.cpp)]

## <a name="see-also"></a>Vedere anche

[Eliminazione definitiva di oggetti finestra](tn017-destroying-window-objects.md) 
 [Uso di CObject](using-cobject.md)
