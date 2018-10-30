---
title: Miglioramento di Provider semplice in sola lettura | Microsoft Docs
ms.custom: ''
ms.date: 10/26/2018
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
ms.openlocfilehash: f798eb6219fdbc6c54e4c80474491f84f25a8060
ms.sourcegitcommit: 840033ddcfab51543072604ccd5656fc6d4a5d3a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2018
ms.locfileid: "50216474"
---
# <a name="enhancing-the-simple-read-only-provider"></a>Miglioramento di un provider semplice in sola lettura

In questa sezione viene illustrato come migliorare il [provider semplice in sola lettura](../../data/oledb/implementing-the-simple-read-only-provider.md) creato nella sezione precedente. `IRowsetLocateImpl` Crea un'implementazione per il `IRowsetLocate` interfaccia e aggiunge il supporto dei segnalibri.

Quando si dispone di un provider di lavoro, è possibile migliorare in modo da rendere l'aggiornamento del provider, gestire le transazioni o migliorare le prestazioni dell'algoritmo di recupero di righe. La maggior parte dei miglioramenti apportati ai provider implicare l'aggiunta di un'interfaccia a un oggetto COM esistente.

L'esempio negli argomenti seguenti migliora il meccanismo di recupero di righe mediante l'aggiunta di `IRowsetLocate` interfacciarsi per `CAgentRowset`. Gli argomenti illustrano come a:

- [Rendere RCustomRowset ereditare IRowsetLocate](../../data/oledb/modifying-the-inheritance-of-rmyproviderrowset.md).

- [Determinazione dinamica delle colonne restituite al consumer](../../data/oledb/dynamically-determining-columns-returned-to-the-consumer.md).

## <a name="see-also"></a>Vedere anche

[Creazione di un provider semplice in sola lettura](../../data/oledb/creating-a-simple-read-only-provider.md)<br/>
