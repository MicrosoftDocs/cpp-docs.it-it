---
title: Aggregazione
ms.date: 11/04/2016
helpviewer_keywords:
- aggregation [C++]
- aggregate objects [C++]
ms.assetid: 7125bb8e-b269-4b50-9bba-295b467a54cc
ms.openlocfilehash: 288af427bd6a8d9baf572dfad8e4a25452694ad9
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69491976"
---
# <a name="aggregation"></a>Aggregazione

In alcuni casi l'implementatore di un oggetto vuole sfruttare i servizi offerti da un altro oggetto predefinito. Inoltre, questo secondo oggetto verrà visualizzato come parte naturale della prima. COM raggiunge entrambi gli obiettivi tramite contenimento e aggregazione.

L'aggregazione significa che l'oggetto contenitore (esterno) crea l'oggetto (interno) contenuto come parte del processo di creazione e le interfacce dell'oggetto interno sono esposte dall'esterno. Un oggetto consente di eseguire l'aggregazione o meno. In tal caso, è necessario seguire determinate regole per il corretto funzionamento dell'aggregazione.

Principalmente, tutte `IUnknown` le chiamate al metodo sull'oggetto contenuto devono delegare all'oggetto contenitore.

## <a name="see-also"></a>Vedere anche

[Introduzione a COM](../atl/introduction-to-com.md)<br/>
[Riutilizzo di oggetti](/windows/win32/com/reusing-objects)
