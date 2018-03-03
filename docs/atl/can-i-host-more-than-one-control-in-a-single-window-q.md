---
title: "Può contenere più di un controllo in una singola finestra? | Microsoft Docs"
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
- controls [ATL], hosting multiple
- windows [C++], hosting multiple controls
ms.assetid: 3a967a1a-7e7e-42e3-8eed-f7bde912363f
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: be87c0bad9ab250593847cc24d16158030040054
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="can-i-host-more-than-one-control-in-a-single-window"></a>Può contenere più di un controllo in una singola finestra?
Non è possibile ospitare più di un controllo in una singola finestra host ATL. Ogni finestra host è progettato per contenere solo un controllo alla volta (in questo modo un semplice meccanismo per la gestione di messaggi a livello di controllo e di reflection le proprietà di ambiente). Tuttavia, se è necessario all'utente di visualizzare più controlli in una singola finestra, è sufficiente per creare più host di windows come elementi figlio di tale finestra.  
  
## <a name="see-also"></a>Vedere anche  
 [Domande frequenti sul contenimento di controllo](../atl/atl-control-containment-faq.md)

