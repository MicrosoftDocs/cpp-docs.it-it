---
title: Classi di base
ms.date: 11/19/2018
helpviewer_keywords:
- inheritance, multiple
- base classes [C++], virtual
- derived classes [C++], multiple bases
- multiple inheritance, base classes
- virtual base classes [C++]
- base classes [C++]
ms.assetid: 6e6d54d0-6f21-4a16-9103-22935d98f596
ms.openlocfilehash: 50bddef3ea1ee1462d8cf115c0980270c8deab25
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80181473"
---
# <a name="base-classes"></a>Classi di base

Il processo di ereditarietà crea una nuova classe derivata, composta dai membri delle classi base e da eventuali nuovi membri da essa aggiunti. In una ereditarietà multipla è possibile creare un grafico di ereditarietà in cui la stessa classe base fa parte di più classi derivate. Nella figura seguente è mostrato questo tipo di grafico.

![Più istanze di una classe di base](../cpp/media/vc38xn1.gif "Più istanze di una classe di base") <br/>
Più istanze di una singola classe di base

Nella figura sono riportate le rappresentazioni grafiche dei componenti di `CollectibleString` e di `CollectibleSortable`. Tuttavia, la classe base, ossia `Collectible`, si trova in `CollectibleSortableString` mediante il percorso `CollectibleString` e il percorso `CollectibleSortable`. Per eliminare questa ridondanza, tali classi possono essere dichiarate come classi base virtuali nel momento in cui vengono ereditate.
