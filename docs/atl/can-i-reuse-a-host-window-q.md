---
title: È possibile riutilizzare una finestra Host? | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- host windows
ms.assetid: bcd08ab1-cfcf-49e3-b4e8-ac134d141005
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e8a108c8c4e9b515a75399f82e333b00a5210e8d
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32353705"
---
# <a name="can-i-reuse-a-host-window"></a>È possibile riutilizzare una finestra Host?
Non è consigliabile riutilizzare host di windows. Per garantire l'affidabilità del codice, è necessario collegare la durata della finestra host per la durata di un singolo controllo.  
  
## <a name="see-also"></a>Vedere anche  
 [Domande frequenti sul contenimento di controllo](../atl/atl-control-containment-faq.md)

