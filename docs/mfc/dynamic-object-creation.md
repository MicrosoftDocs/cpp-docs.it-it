---
title: Creazione di oggetti dinamici | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- object creation [MFC], dynamically at run time
- CObject class [MFC], dynamic object creation
- objects [MFC], creating dynamically at run time
- dynamic object creation [MFC]
ms.assetid: 3e0f51cb-3e24-4231-817f-1c0ce9f2d5df
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 3ac2371e6f9e8a4ba351b482b50f347bee164e02
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="dynamic-object-creation"></a>Creazione di oggetti dinamici
In questo articolo viene illustrato come creare un oggetto in modo dinamico in fase di esecuzione. La routine utilizza informazioni di classe in fase di esecuzione, come descritto nell'articolo [l'accesso a informazioni sulle classi di Run-Time](../mfc/accessing-run-time-class-information.md).  
  
#### <a name="to-dynamically-create-an-object-given-its-run-time-class"></a>Per creare dinamicamente un oggetto che specificato la classe in fase di esecuzione  
  
1.  Utilizzare il codice seguente per creare dinamicamente un oggetto utilizzando il `CreateObject` funzione il `CRuntimeClass`. Si noti che in caso di errore, `CreateObject` restituisce **NULL** anziché generare un'eccezione:  
  
     [!code-cpp[NVC_MFCCObjectSample#6](../mfc/codesnippet/cpp/dynamic-object-creation_1.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di CObject](../mfc/using-cobject.md)

