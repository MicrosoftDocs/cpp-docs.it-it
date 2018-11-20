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
ms.openlocfilehash: 59c474f54ea439acf83cf6923eba6e167901dd37
ms.sourcegitcommit: 9e891eb17b73d98f9086d9d4bfe9ca50415d9a37
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/20/2018
ms.locfileid: "52175614"
---
# <a name="base-classes"></a>Classi di base

Il processo di ereditarietà crea una nuova classe derivata, composta dai membri delle classi base e da eventuali nuovi membri da essa aggiunti. In una ereditarietà multipla è possibile creare un grafico di ereditarietà in cui la stessa classe base fa parte di più classi derivate. Nella figura seguente è mostrato questo tipo di grafico.

![Più istanze di una classe di base](../cpp/media/vc38xn1.gif "più istanze di una classe di base") <br/>
Più istanze di una classe base singola

Nella figura sono riportate le rappresentazioni grafiche dei componenti di `CollectibleString` e di `CollectibleSortable`. Tuttavia, la classe base, ossia `Collectible`, si trova in `CollectibleSortableString` mediante il percorso `CollectibleString` e il percorso `CollectibleSortable`. Per eliminare questa ridondanza, tali classi possono essere dichiarate come classi base virtuali nel momento in cui vengono ereditate.