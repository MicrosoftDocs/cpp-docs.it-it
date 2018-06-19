---
title: Quando necessario chiamare AtlAxWinTerm? | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
f1_keywords:
- AtlAxWinTerm
dev_langs:
- C++
helpviewer_keywords:
- AtlAxWinTerm method
ms.assetid: 0088d494-2d8d-45b4-b582-2af726bd6cbd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 61830023d3fb67d331784769f32cda4eee8355b5
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32360162"
---
# <a name="when-do-i-need-to-call-atlaxwinterm"></a>Quando necessario chiamare AtlAxWinTerm?
[AtlAxWinTerm](reference/composite-control-global-functions.md#atlaxwinterm) Annulla la registrazione di **"Atlaxwinlic80"** classe della finestra. È necessario chiamare questa funzione (se è non necessario non è più possibile creare finestre host), dopo tutte le finestre host esistenti sono state eliminate. Se non si chiama questa funzione, la classe della finestra verrà annullata automaticamente al termine del processo.  
  
## <a name="see-also"></a>Vedere anche  
 Quando è necessario chiamare AtlAxWinInit  
[Domande frequenti sul contenimento di controllo](../atl/atl-control-containment-faq.md)

