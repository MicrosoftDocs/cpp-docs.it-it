---
title: "Quando è necessario chiamare AtlAxWinInit? | Microsoft Docs"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- AtlAxWinInit
dev_langs:
- C++
helpviewer_keywords:
- AtlAxWinInit method
ms.assetid: 080b9cfe-d85a-4439-a9e9-ab3966ebaa8e
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 69dfcfbe0c8c05d275a5f3a8f86c30b0e59bd3a5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="when-do-i-need-to-call-atlaxwininit"></a>Quando è necessario chiamare AtlAxWinInit?

[AtlAxWinInit](reference/composite-control-global-functions.md#atlaxwininit) registra il **"AtlAxWin80"** classe di finestra (oltre a una coppia di messaggi di finestra personalizzati) in modo da questa funzione deve essere chiamata prima di provare a creare una finestra host. Tuttavia, non è sempre necessario chiamare questa funzione in modo esplicito, dopo l'hosting API (e le classi che li utilizzano) spesso chiama questa funzione per l'utente. Non è più di una volta chiamata a questa funzione non causa problemi. .  
  
## <a name="see-also"></a>Vedere anche  
 Quando necessario chiamare AtlAxWinTerm     
 [Domande frequenti sul contenimento di controllo](../atl/atl-control-containment-faq.md)
