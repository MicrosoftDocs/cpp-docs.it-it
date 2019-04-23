---
title: Miglioramento di un provider semplice in sola lettura
ms.date: 10/26/2018
helpviewer_keywords:
- read-only poviders [C++]
- IRowsetLocate class
- IRowsetLocate class, adding to OLE DB template providers
- simple read-only poviders [C++]
ms.assetid: cba0e09f-44c1-41c1-9456-332aa13dc158
ms.openlocfilehash: d61f24a9a9abffe836a7f11bd5d1517fddf97fe7
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59034076"
---
# <a name="enhancing-the-simple-read-only-provider"></a>Miglioramento di un provider semplice in sola lettura

In questa sezione viene illustrato come migliorare il [provider semplice in sola lettura](../../data/oledb/implementing-the-simple-read-only-provider.md) creato nella sezione precedente. `IRowsetLocateImpl` Crea un'implementazione per il `IRowsetLocate` interfaccia e aggiunge il supporto dei segnalibri.

Quando si dispone di un provider di lavoro, è possibile migliorare in modo da rendere l'aggiornamento del provider, gestire le transazioni o migliorare le prestazioni dell'algoritmo di recupero di righe. La maggior parte dei miglioramenti apportati ai provider implicare l'aggiunta di un'interfaccia a un oggetto COM esistente.

L'esempio negli argomenti seguenti migliora il meccanismo di recupero di righe mediante l'aggiunta di `IRowsetLocate` interfacciarsi per `CAgentRowset`. Gli argomenti illustrano come a:

- [Rendere RCustomRowset ereditare IRowsetLocate](../../data/oledb/modifying-the-inheritance-of-rmyproviderrowset.md).

- [Determinazione dinamica delle colonne restituite al consumer](../../data/oledb/dynamically-determining-columns-returned-to-the-consumer.md).

## <a name="see-also"></a>Vedere anche

[Creazione di un provider semplice in sola lettura](../../data/oledb/creating-a-simple-read-only-provider.md)<br/>
