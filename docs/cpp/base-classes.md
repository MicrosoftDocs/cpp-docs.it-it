---
title: "Classi base | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classi base"
  - "classi base, virtuale"
  - "classi derivate, classi base multiple"
  - "ereditarietà, multipli"
  - "ereditarietà multipla, classi base"
  - "classi base virtuali"
ms.assetid: 6e6d54d0-6f21-4a16-9103-22935d98f596
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classi base
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il processo di ereditarietà crea una nuova classe derivata, composta dai membri delle classi base e da eventuali nuovi membri da essa aggiunti.  In una ereditarietà multipla è possibile creare un grafico di ereditarietà in cui la stessa classe base fa parte di più classi derivate.  Nella figura seguente è mostrato questo tipo di grafico.  
  
 ![Più istanze di una classe di base](../cpp/media/vc38xn1.png "vc38XN1")  
Più istanze di una classe base singola  
  
 Nella figura sono riportate le rappresentazioni grafiche dei componenti di `CollectibleString` e di `CollectibleSortable`.  Tuttavia, la classe base, ossia `Collectible`, si trova in `CollectibleSortableString` mediante il percorso `CollectibleString` e il percorso `CollectibleSortable`.  Per eliminare questa ridondanza, tali classi possono essere dichiarate come classi base virtuali nel momento in cui vengono ereditate.  
  
 Per informazioni sulla dichiarazione delle classi base virtuali e su come vengono composti gli oggetti con tali classi, vedere [Classi base virtuali](../misc/virtual-base-classes.md).  
  
## Vedere anche  
 [Cenni preliminari sulle classi derivate](../misc/overview-of-derived-classes.md)