---
description: 'Altre informazioni su: creazione di oggetti dinamici'
title: Creazione di oggetti dinamici
ms.date: 03/27/2020
helpviewer_keywords:
- object creation [MFC], dynamically at run time
- CObject class [MFC], dynamic object creation
- objects [MFC], creating dynamically at run time
- dynamic object creation [MFC]
ms.assetid: 3e0f51cb-3e24-4231-817f-1c0ce9f2d5df
ms.openlocfilehash: b39c0561a98807030c471b3de4cd5921883f9f0e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97290973"
---
# <a name="dynamic-object-creation"></a>Creazione di oggetti dinamici

Questo articolo illustra come creare un oggetto in modo dinamico in fase di esecuzione. La procedura usa le informazioni sulle classi di runtime, come illustrato nell'articolo [accesso alle informazioni sulla classe di Run-Time](accessing-run-time-class-information.md).

#### <a name="dynamically-create-an-object-given-its-run-time-class"></a>Crea dinamicamente un oggetto in base alla relativa classe di runtime

1. Usare il codice seguente per creare dinamicamente un oggetto usando la `CreateObject` funzione di `CRuntimeClass` . In caso di errore, `CreateObject` restituisce **null** anziché generare un'eccezione:

   [!code-cpp[NVC_MFCCObjectSample#6](codesnippet/cpp/dynamic-object-creation_1.cpp)]

## <a name="see-also"></a>Vedi anche

[Eliminazione definitiva di oggetti finestra](tn017-destroying-window-objects.md) 
 [Uso di CObject](using-cobject.md)
