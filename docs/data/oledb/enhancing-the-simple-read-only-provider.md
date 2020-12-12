---
description: 'Altre informazioni su: miglioramento del provider di Read-Only semplice'
title: Miglioramento di un provider semplice in sola lettura
ms.date: 10/26/2018
helpviewer_keywords:
- read-only poviders [C++]
- IRowsetLocate class
- IRowsetLocate class, adding to OLE DB template providers
- simple read-only poviders [C++]
ms.assetid: cba0e09f-44c1-41c1-9456-332aa13dc158
ms.openlocfilehash: 00a0ea4fb9b759447026353ba0d78c7c856b15ae
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97317636"
---
# <a name="enhancing-the-simple-read-only-provider"></a>Miglioramento di un provider semplice in sola lettura

Questa sezione illustra come migliorare il provider di sola [lettura semplice](../../data/oledb/implementing-the-simple-read-only-provider.md) creato nella sezione precedente. `IRowsetLocateImpl` Crea un'implementazione per l' `IRowsetLocate` interfaccia e aggiunge il supporto dei segnalibri.

Quando si dispone di un provider funzionante, potrebbe essere necessario ottimizzarlo per rendere l'aggiornamento del provider, gestire le transazioni o migliorare le prestazioni dell'algoritmo di recupero delle righe. La maggior parte dei miglioramenti del provider implica l'aggiunta di un'interfaccia a un oggetto COM esistente.

Nell'esempio negli argomenti seguenti viene migliorato il meccanismo di recupero delle righe aggiungendo l' `IRowsetLocate` interfaccia a `CAgentRowset` . Gli argomenti illustrano come:

- [Rendere RCustomRowset ereditare da IRowsetLocate](../../data/oledb/modifying-the-inheritance-of-rmyproviderrowset.md).

- [Determinare in modo dinamico le colonne restituite al consumer](../../data/oledb/dynamically-determining-columns-returned-to-the-consumer.md).

## <a name="see-also"></a>Vedi anche

[Creazione di un provider di Read-Only semplice](../../data/oledb/creating-a-simple-read-only-provider.md)<br/>
