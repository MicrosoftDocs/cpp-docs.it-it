---
title: Quando necessario chiamare AtlAxWinTerm? | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- AtlAxWinTerm
dev_langs:
- C++
helpviewer_keywords:
- AtlAxWinTerm method
ms.assetid: 0088d494-2d8d-45b4-b582-2af726bd6cbd
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c52c5295108ef01dc23ea9f945850e91a9806d6f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="when-do-i-need-to-call-atlaxwinterm"></a>Quando necessario chiamare AtlAxWinTerm?
[AtlAxWinTerm](reference/composite-control-global-functions.md#atlaxwinterm) Annulla la registrazione di **"AtlAxWin80"** classe della finestra. È necessario chiamare questa funzione (se è non necessario non è più possibile creare finestre host), dopo tutte le finestre host esistenti sono state eliminate. Se non si chiama questa funzione, la classe della finestra verrà annullata automaticamente al termine del processo.  
  
## <a name="see-also"></a>Vedere anche  
 Quando è necessario chiamare AtlAxWinInit  
[Domande frequenti sul contenimento di controllo](../atl/atl-control-containment-faq.md)

