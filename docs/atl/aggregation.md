---
title: Aggregazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- aggregation [C++]
- aggregate objects [C++]
ms.assetid: 7125bb8e-b269-4b50-9bba-295b467a54cc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 760a595274ba7a1901138cc0cceceddf97122725
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32353963"
---
# <a name="aggregation"></a>Aggregazione
Vi sono casi quando si desidera implementatore di un oggetto per sfruttare i servizi offerti da un altro oggetto predefinito. Sarebbe inoltre, il secondo oggetto da visualizzare come parte integrante del primo. Consente di ottenere COM entrambi questi obiettivi tramite il contenimento e aggregazione.  
  
 Aggregazione significa che l'oggetto contiene (esterno) crea l'oggetto contenuto (interno) come parte del processo di creazione ed esposte le interfacce dell'oggetto interno dall'esterno. Consente a un oggetto in modo da essere aggregabile o non. Questo caso, deve seguire determinate regole per l'aggregazione per il corretto funzionamento.  
  
 In primo luogo tutti **IUnknown** devono delegare chiamate al metodo sull'oggetto contenuto nell'oggetto contenitore.  
  
## <a name="see-also"></a>Vedere anche  
 [Introduzione a COM](../atl/introduction-to-com.md)   
 [Riutilizzo di oggetti](http://msdn.microsoft.com/library/windows/desktop/ms678443)

