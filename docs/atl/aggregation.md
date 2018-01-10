---
title: Aggregazione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- aggregation [C++]
- aggregate objects [C++]
ms.assetid: 7125bb8e-b269-4b50-9bba-295b467a54cc
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 8dbb0332bc7e55464e5b8af9d0b57e236f23dc86
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="aggregation"></a>Aggregazione
Vi sono casi quando si desidera implementatore di un oggetto per sfruttare i servizi offerti da un altro oggetto predefinito. Sarebbe inoltre, il secondo oggetto da visualizzare come parte integrante del primo. Consente di ottenere COM entrambi questi obiettivi tramite il contenimento e aggregazione.  
  
 Aggregazione significa che l'oggetto contiene (esterno) crea l'oggetto contenuto (interno) come parte del processo di creazione ed esposte le interfacce dell'oggetto interno dall'esterno. Consente a un oggetto in modo da essere aggregabile o non. Questo caso, deve seguire determinate regole per l'aggregazione per il corretto funzionamento.  
  
 In primo luogo tutti **IUnknown** devono delegare chiamate al metodo sull'oggetto contenuto nell'oggetto contenitore.  
  
## <a name="see-also"></a>Vedere anche  
 [Introduzione a COM](../atl/introduction-to-com.md)   
 [Riutilizzo di oggetti](http://msdn.microsoft.com/library/windows/desktop/ms678443)

