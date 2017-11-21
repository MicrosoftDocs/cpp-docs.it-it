---
title: "Può contenere più di un controllo in una singola finestra? | Microsoft Docs"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- controls [ATL], hosting multiple
- windows [C++], hosting multiple controls
ms.assetid: 3a967a1a-7e7e-42e3-8eed-f7bde912363f
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 5fa1a1b914d7d9725e8f2d9858f0481bb7aa24a4
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="can-i-host-more-than-one-control-in-a-single-window"></a>Può contenere più di un controllo in una singola finestra?
Non è possibile ospitare più di un controllo in una singola finestra host ATL. Ogni finestra host è progettato per contenere solo un controllo alla volta (in questo modo un semplice meccanismo per la gestione di messaggi a livello di controllo e di reflection le proprietà di ambiente). Tuttavia, se è necessario all'utente di visualizzare più controlli in una singola finestra, è sufficiente per creare più host di windows come elementi figlio di tale finestra.  
  
## <a name="see-also"></a>Vedere anche  
 [Domande frequenti sul contenimento di controllo](../atl/atl-control-containment-faq.md)

