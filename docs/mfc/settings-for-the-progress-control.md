---
title: Le impostazioni per il controllo Progress | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- CProgressCtrl class [MFC], settings
- progress controls [MFC], settings
ms.assetid: f4616e91-74fa-4000-ba0d-d3ddc0ee075b
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 1ad62f3a60c8fe4fcd7efdde7f69f5c5e9450d14
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="settings-for-the-progress-control"></a>Impostazioni per il controllo Progress
Le impostazioni di base per il controllo progress ([CProgressCtrl](../mfc/reference/cprogressctrl-class.md)) sono l'intervallo e la posizione corrente. L'intervallo rappresenta l'intera durata dell'operazione. La posizione corrente rappresenta la percentuale di completamento dell'operazione da parte dell'applicazione. Tutte le modifiche all'intervallo o alla posizione che il controllo di stato di avanzamento ridisegni.  
  
 Per impostazione predefinita, l'intervallo viene impostato su 0 - 100 e la posizione iniziale è impostato su 0. Per recuperare le impostazioni correnti di intervallo per il controllo dello stato, utilizzare il [GetRange](../mfc/reference/cprogressctrl-class.md#getrange) funzione membro. Per modificare l'intervallo, utilizzare il [SetRange](../mfc/reference/cprogressctrl-class.md#setrange) funzione membro.  
  
 Per impostare la posizione, utilizzare [funzione membro SetPos](../mfc/reference/cprogressctrl-class.md#setpos). Per recuperare la posizione corrente senza specificare un nuovo valore, utilizzare [GetPos](../mfc/reference/cprogressctrl-class.md#getpos). Potrebbe ad esempio, si desidera semplicemente una query sullo stato dell'operazione corrente.  
  
 Per avanzare la posizione corrente del controllo di stato, utilizzare [StepIt](../mfc/reference/cprogressctrl-class.md#stepit). Per impostare la quantità di ogni passaggio, utilizzare [SetStep](../mfc/reference/cprogressctrl-class.md#setstep)  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CProgressCtrl](../mfc/using-cprogressctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

