---
title: Può contenere più di un controllo in una singola finestra? | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- controls [ATL], hosting multiple
- windows [C++], hosting multiple controls
ms.assetid: 3a967a1a-7e7e-42e3-8eed-f7bde912363f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ceb9444b6371e261115bbf52ef5a249100772d1f
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32356424"
---
# <a name="can-i-host-more-than-one-control-in-a-single-window"></a>Può contenere più di un controllo in una singola finestra?
Non è possibile ospitare più di un controllo in una singola finestra host ATL. Ogni finestra host è progettato per contenere solo un controllo alla volta (in questo modo un semplice meccanismo per la gestione di messaggi a livello di controllo e di reflection le proprietà di ambiente). Tuttavia, se è necessario all'utente di visualizzare più controlli in una singola finestra, è sufficiente per creare più host di windows come elementi figlio di tale finestra.  
  
## <a name="see-also"></a>Vedere anche  
 [Domande frequenti sul contenimento di controllo](../atl/atl-control-containment-faq.md)

