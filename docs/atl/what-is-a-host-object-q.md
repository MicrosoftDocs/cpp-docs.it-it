---
title: Che cos'è un oggetto Host? (ATL) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- host objects
ms.assetid: 4f8da992-b27e-45e8-b5e0-c8b1dcae4fac
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8d197f02949f6eaaeee50b428338684135d1db27
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="what-is-a-host-object"></a>Che cos'è un oggetto Host?
Un oggetto host è un oggetto COM che rappresenta il contenitore di controlli ActiveX fornito da ATL per una particolare finestra. L'oggetto host sottoclassi della finestra del contenitore in modo che i messaggi per il controllo può riflettere, fornisce le interfacce necessarie contenitore da usare per il controllo e ne espone il [IAxWinHostWindow](../atl/reference/iaxwinhostwindow-interface.md) e [ IAxWinAmbientDispatch](../atl/reference/iaxwinambientdispatch-interface.md) interfacce che consentono di configurare l'ambiente del controllo.  
  
 È possibile utilizzare l'oggetto host per impostare le proprietà di ambiente del contenitore.  
  
## <a name="see-also"></a>Vedere anche  
 [Domande frequenti sul contenimento di controllo](../atl/atl-control-containment-faq.md)

