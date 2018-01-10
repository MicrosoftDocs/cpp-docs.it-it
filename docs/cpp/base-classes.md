---
title: Classi di base | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs: C++
helpviewer_keywords:
- inheritance, multiple
- base classes [C++], virtual
- derived classes [C++], multiple bases
- multiple inheritance, base classes
- virtual base classes [C++]
- base classes [C++]
ms.assetid: 6e6d54d0-6f21-4a16-9103-22935d98f596
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e0a83507d89c17aab363f986dab3ff4d84c4c916
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="base-classes"></a>Classi di base
Il processo di ereditarietà crea una nuova classe derivata, composta dai membri delle classi base e da eventuali nuovi membri da essa aggiunti. In una ereditarietà multipla è possibile creare un grafico di ereditarietà in cui la stessa classe base fa parte di più classi derivate. Nella figura seguente è mostrato questo tipo di grafico.  
  
 ![Più istanze di una classe base](../cpp/media/vc38xn1.gif "vc38XN1")  
Più istanze di una classe base singola  
  
 Nella figura sono riportate le rappresentazioni grafiche dei componenti di `CollectibleString` e di `CollectibleSortable`. Tuttavia, la classe base, ossia `Collectible`, si trova in `CollectibleSortableString` mediante il percorso `CollectibleString` e il percorso `CollectibleSortable`. Per eliminare questa ridondanza, tali classi possono essere dichiarate come classi base virtuali nel momento in cui vengono ereditate.  
  
