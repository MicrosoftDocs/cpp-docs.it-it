---
description: 'Altre informazioni su: aggregazione'
title: Aggregazione
ms.date: 11/04/2016
helpviewer_keywords:
- aggregation [C++]
- aggregate objects [C++]
ms.assetid: 7125bb8e-b269-4b50-9bba-295b467a54cc
ms.openlocfilehash: fb02dd399020f8768fcdb3cc86687578e51cb3ff
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97166096"
---
# <a name="aggregation"></a>Aggregazione

In alcuni casi l'implementatore di un oggetto vuole sfruttare i servizi offerti da un altro oggetto predefinito. Inoltre, questo secondo oggetto verrà visualizzato come parte naturale della prima. COM raggiunge entrambi gli obiettivi tramite contenimento e aggregazione.

L'aggregazione significa che l'oggetto contenitore (esterno) crea l'oggetto (interno) contenuto come parte del processo di creazione e le interfacce dell'oggetto interno sono esposte dall'esterno. Un oggetto consente di eseguire l'aggregazione o meno. In tal caso, è necessario seguire determinate regole per il corretto funzionamento dell'aggregazione.

Principalmente, tutte le `IUnknown` chiamate al metodo sull'oggetto contenuto devono delegare all'oggetto contenitore.

## <a name="see-also"></a>Vedi anche

[Introduzione a COM](../atl/introduction-to-com.md)<br/>
[Riutilizzo di oggetti](/windows/win32/com/reusing-objects)
