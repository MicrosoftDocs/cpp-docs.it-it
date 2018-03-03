---
title: Creazione di oggetti dinamici | Documenti Microsoft
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
- object creation [MFC], dynamically at run time
- CObject class [MFC], dynamic object creation
- objects [MFC], creating dynamically at run time
- dynamic object creation [MFC]
ms.assetid: 3e0f51cb-3e24-4231-817f-1c0ce9f2d5df
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 755cbf614966ad6faedbe8db9bbf11ac88c63328
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="dynamic-object-creation"></a>Creazione di oggetti dinamici
In questo articolo viene illustrato come creare un oggetto in modo dinamico in fase di esecuzione. La routine utilizza informazioni di classe in fase di esecuzione, come descritto nell'articolo [l'accesso a informazioni sulle classi di Run-Time](../mfc/accessing-run-time-class-information.md).  
  
#### <a name="to-dynamically-create-an-object-given-its-run-time-class"></a>Per creare dinamicamente un oggetto che specificato la classe in fase di esecuzione  
  
1.  Utilizzare il codice seguente per creare dinamicamente un oggetto utilizzando il `CreateObject` funzione il `CRuntimeClass`. Si noti che in caso di errore, `CreateObject` restituisce **NULL** anziché generare un'eccezione:  
  
     [!code-cpp[NVC_MFCCObjectSample#6](../mfc/codesnippet/cpp/dynamic-object-creation_1.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di CObject](../mfc/using-cobject.md)

