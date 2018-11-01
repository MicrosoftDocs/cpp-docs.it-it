---
title: Miglioramento di un provider semplice in sola lettura
ms.date: 10/26/2018
helpviewer_keywords:
- read-only poviders [C++]
- IRowsetLocate class
- IRowsetLocate class, adding to OLE DB template providers
- simple read-only poviders [C++]
ms.assetid: cba0e09f-44c1-41c1-9456-332aa13dc158
ms.openlocfilehash: 4b06eb77851df0bf0bd0d3ef91a3ea960835ccba
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50462920"
---
# <a name="enhancing-the-simple-read-only-provider"></a>Miglioramento di un provider semplice in sola lettura

In questa sezione viene illustrato come migliorare il [provider semplice in sola lettura](../../data/oledb/implementing-the-simple-read-only-provider.md) creato nella sezione precedente. `IRowsetLocateImpl` Crea un'implementazione per il `IRowsetLocate` interfaccia e aggiunge il supporto dei segnalibri.

Quando si dispone di un provider di lavoro, è possibile migliorare in modo da rendere l'aggiornamento del provider, gestire le transazioni o migliorare le prestazioni dell'algoritmo di recupero di righe. La maggior parte dei miglioramenti apportati ai provider implicare l'aggiunta di un'interfaccia a un oggetto COM esistente.

L'esempio negli argomenti seguenti migliora il meccanismo di recupero di righe mediante l'aggiunta di `IRowsetLocate` interfacciarsi per `CAgentRowset`. Gli argomenti illustrano come a:

- [Rendere RCustomRowset ereditare IRowsetLocate](../../data/oledb/modifying-the-inheritance-of-rmyproviderrowset.md).

- [Determinazione dinamica delle colonne restituite al consumer](../../data/oledb/dynamically-determining-columns-returned-to-the-consumer.md).

## <a name="see-also"></a>Vedere anche

[Creazione di un provider semplice in sola lettura](../../data/oledb/creating-a-simple-read-only-provider.md)<br/>
