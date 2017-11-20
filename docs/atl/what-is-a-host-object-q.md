---
title: "Che cos'è un oggetto Host? (ATL) | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: host objects
ms.assetid: 4f8da992-b27e-45e8-b5e0-c8b1dcae4fac
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: ab37e9a9d3a19f250f52d5f5c60de41968012625
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="what-is-a-host-object"></a>Che cos'è un oggetto Host?
Un oggetto host è un oggetto COM che rappresenta il contenitore di controlli ActiveX fornito da ATL per una particolare finestra. L'oggetto host sottoclassi della finestra del contenitore in modo che i messaggi per il controllo può riflettere, fornisce le interfacce necessarie contenitore da usare per il controllo e ne espone il [IAxWinHostWindow](../atl/reference/iaxwinhostwindow-interface.md) e [ IAxWinAmbientDispatch](../atl/reference/iaxwinambientdispatch-interface.md) interfacce che consentono di configurare l'ambiente del controllo.  
  
 È possibile utilizzare l'oggetto host per impostare le proprietà di ambiente del contenitore.  
  
## <a name="see-also"></a>Vedere anche  
 [Domande frequenti sul contenimento di controllo](../atl/atl-control-containment-faq.md)

