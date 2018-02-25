---
title: Miglioramento di un Provider semplice in sola lettura | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- read-only poviders [C++]
- IRowsetLocate class
- IRowsetLocate class, adding to OLE DB template providers
- simple read-only poviders [C++]
ms.assetid: cba0e09f-44c1-41c1-9456-332aa13dc158
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 6eb3c583d217e421909236c09ccac6c406cf6a7c
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="enhancing-the-simple-read-only-provider"></a>Miglioramento di un provider semplice in sola lettura
In questa sezione viene illustrato come migliorare la [provider semplice in sola lettura](../../data/oledb/implementing-the-simple-read-only-provider.md) creato nella sezione precedente. `IRowsetLocateImpl` Crea un'implementazione per il `IRowsetLocate` l'interfaccia e aggiunge il supporto dei segnalibri.  
  
 Quando si dispone di un provider di lavoro, si potrebbe voler migliorare in modo che l'aggiornamento del provider, gestire le transazioni o migliorare le prestazioni dell'algoritmo di recupero delle righe. La maggior parte dei miglioramenti apportati ai provider implicano l'aggiunta di un'interfaccia a un oggetto COM esistente.  
  
 Nell'esempio negli argomenti seguenti migliora il meccanismo di recupero delle righe tramite l'aggiunta di `IRowsetLocate` interfaccia `CAgentRowset`. Gli argomenti illustrano come fare per:  
  
-   [Assicurarsi che erediti da IRowsetLocate RMyProviderRowset](../../data/oledb/modifying-the-inheritance-of-rmyproviderrowset.md).  
  
-   [Determinare in modo dinamico le colonne restituite al consumer](../../data/oledb/dynamically-determining-columns-returned-to-the-consumer.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione di un provider semplice in sola lettura](../../data/oledb/creating-a-simple-read-only-provider.md)