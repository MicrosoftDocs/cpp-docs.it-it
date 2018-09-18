---
title: Aggregazione | Microsoft Docs
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
ms.openlocfilehash: ce2fbe4a2dd566541a637459510ec8422b318c47
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46070918"
---
# <a name="aggregation"></a>Aggregazione

Esistono situazioni in cui implementatore di un oggetto desidera sfruttare i servizi offerti da un altro oggetto predefinito. Inoltre, sarebbe, ad esempio il secondo oggetto da visualizzare come parte integrante del primo. COM consente di ottenere entrambi questi obiettivi tramite aggregazione e contenimento.

Aggregazione significa che l'oggetto contenitore (esterno) crea l'oggetto (interno) indipendente come parte del relativo processo di creazione e le interfacce dell'oggetto interno esposte dall'esterno. Un oggetto consente in modo da essere aggregabili o meno. Se si tratta, quindi deve seguire regole precise per l'aggregazione per il corretto funzionamento.

In primo luogo tutti `IUnknown` chiamate al metodo sull'oggetto contenuto devono delegare dell'oggetto contenitore.

## <a name="see-also"></a>Vedere anche

[Introduzione a COM](../atl/introduction-to-com.md)<br/>
[Riutilizzo di oggetti](/windows/desktop/com/reusing-objects)

