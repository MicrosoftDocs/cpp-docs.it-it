---
title: Miglioramento di Provider semplice in sola lettura | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- read-only poviders [C++]
- IRowsetLocate class
- IRowsetLocate class, adding to OLE DB template providers
- simple read-only poviders [C++]
ms.assetid: cba0e09f-44c1-41c1-9456-332aa13dc158
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 28a92f6193053baca80ca078bddc0de862f50279
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46036449"
---
# <a name="enhancing-the-simple-read-only-provider"></a>Miglioramento di un provider semplice in sola lettura

In questa sezione viene illustrato come migliorare il [provider semplice in sola lettura](../../data/oledb/implementing-the-simple-read-only-provider.md) creato nella sezione precedente. `IRowsetLocateImpl` Crea un'implementazione per il `IRowsetLocate` interfaccia e aggiunge il supporto dei segnalibri.  
  
Quando si dispone di un provider di lavoro, è possibile migliorare in modo da rendere l'aggiornamento del provider, gestire le transazioni o migliorare le prestazioni dell'algoritmo di recupero di righe. La maggior parte dei miglioramenti apportati ai provider implicare l'aggiunta di un'interfaccia a un oggetto COM esistente.  
  
L'esempio negli argomenti seguenti migliora il meccanismo di recupero di righe mediante l'aggiunta di `IRowsetLocate` interfacciarsi per `CAgentRowset`. Gli argomenti illustrano come a:  
  
- [Rendere RMyProviderRowset ereditare IRowsetLocate](../../data/oledb/modifying-the-inheritance-of-rmyproviderrowset.md).  
  
- [Determinazione dinamica delle colonne restituite al consumer](../../data/oledb/dynamically-determining-columns-returned-to-the-consumer.md).  
  
## <a name="see-also"></a>Vedere anche  

[Creazione di un provider semplice in sola lettura](../../data/oledb/creating-a-simple-read-only-provider.md)