---
title: Quando è necessario chiamare AtlAxWinInit? | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
f1_keywords:
- AtlAxWinInit
dev_langs:
- C++
helpviewer_keywords:
- AtlAxWinInit method
ms.assetid: 080b9cfe-d85a-4439-a9e9-ab3966ebaa8e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bd9aa1dd14ccae555d4ab9acbbac15e9b66cafe6
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="when-do-i-need-to-call-atlaxwininit"></a>Quando è necessario chiamare AtlAxWinInit?

[AtlAxWinInit](reference/composite-control-global-functions.md#atlaxwininit) registra il **"Atlaxwinlic80"** classe di finestra (oltre a una coppia di messaggi di finestra personalizzati) in modo da questa funzione deve essere chiamata prima di provare a creare una finestra host. Tuttavia, non è sempre necessario chiamare questa funzione in modo esplicito, dopo l'hosting API (e le classi che li utilizzano) spesso chiama questa funzione per l'utente. Non è più di una volta chiamata a questa funzione non causa problemi. .  
  
## <a name="see-also"></a>Vedere anche  
 Quando necessario chiamare AtlAxWinTerm     
 [Domande frequenti sul contenimento di controllo](../atl/atl-control-containment-faq.md)
