---
title: Aggregazione
ms.date: 11/04/2016
helpviewer_keywords:
- aggregation [C++]
- aggregate objects [C++]
ms.assetid: 7125bb8e-b269-4b50-9bba-295b467a54cc
ms.openlocfilehash: 2eec7a801f9fe16bc48fc888d10ce413ec7e79db
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62223506"
---
# <a name="aggregation"></a>Aggregazione

Esistono situazioni in cui implementatore di un oggetto desidera sfruttare i servizi offerti da un altro oggetto predefinito. Inoltre, sarebbe, ad esempio il secondo oggetto da visualizzare come parte integrante del primo. COM consente di ottenere entrambi questi obiettivi tramite aggregazione e contenimento.

Aggregazione significa che l'oggetto contenitore (esterno) crea l'oggetto (interno) indipendente come parte del relativo processo di creazione e le interfacce dell'oggetto interno esposte dall'esterno. Un oggetto consente in modo da essere aggregabili o meno. Se si tratta, quindi deve seguire regole precise per l'aggregazione per il corretto funzionamento.

In primo luogo tutti `IUnknown` chiamate al metodo sull'oggetto contenuto devono delegare dell'oggetto contenitore.

## <a name="see-also"></a>Vedere anche

[Introduzione a COM](../atl/introduction-to-com.md)<br/>
[Riutilizzo di oggetti](/windows/desktop/com/reusing-objects)
