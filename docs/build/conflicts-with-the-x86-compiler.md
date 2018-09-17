---
title: JE v konfliktu x86 compilatore | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 8e47f0d3-afe0-42d9-9efa-de239ddd3a05
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7f01e65adfb42a5fb3361e75ce34060f7dc1b9f9
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45709671"
---
# <a name="conflicts-with-the-x86-compiler"></a>Conflitti con il compilatore x86

Tipi di dati che sono maggiori di 4 byte non vengono automaticamente allineate su stack quando si usa x86 compilatore di compilare un'applicazione. Poiché l'architettura di x86 compilatore è uno stack allineata a 4 byte, qualsiasi valore superiore a 4 byte, ad esempio, un valore integer a 64 bit, non può essere allineato automaticamente a un indirizzo di 8 byte.

Utilizzo dei dati non allineati con due implicazioni.

- Potrebbe richiedere più tempo per accedere a percorsi non allineata non superiore a quello necessario per accedere ai percorsi allineati.

- Percorsi non allineate non sono utilizzabile in operazioni con interlock.

Se si richiede un allineamento più rigido, utilizzare `__declspec(align(N)) on your variable declarations`. Ciò indica al compilatore di allineare in modo dinamico lo stack per soddisfare le specifiche. Tuttavia, in modo dinamico la regolazione dello stack in fase di esecuzione potrebbe rallentare l'esecuzione dell'applicazione.

## <a name="see-also"></a>Vedere anche

[Tipi e archiviazione](../build/types-and-storage.md)<br/>
[align](../cpp/align-cpp.md)