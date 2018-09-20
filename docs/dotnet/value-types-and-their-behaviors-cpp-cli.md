---
title: Tipi di valore e relativi comportamenti (C + + CLI) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- value types
ms.assetid: 5cb872a6-1e0a-429d-853d-df4ab47e8f2a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 4d2d980e48a6f948c35faf0c4e42969795ef8dc7
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46404657"
---
# <a name="value-types-and-their-behaviors-ccli"></a>Tipi di valore e relativi comportamenti (C++/CLI)

I tipi di valore sono stati modificati in diversi modi dalle estensioni gestite per C++ in Visual C++. In questa sezione è esaminiamo il tipo enum CLR e il tipo di classe di valore, insieme a un'occhiata a conversione boxing e l'accesso per l'istanza nell'heap CLR boxed, nonché un'occhiata ai puntatori interni e di blocco. Sono state apportate modifiche significative al linguaggio in questa area.

## <a name="in-this-section"></a>In questa sezione

[Tipo enum di CLR](../dotnet/value-types-and-their-behaviors-cpp-cli.md)<br/>
Vengono illustrate le modifiche nella dichiarazione e il comportamento delle enumerazioni.

[Boxing implicito di tipi di valore](../dotnet/implicit-boxing-of-value-types.md)<br/>
Descrive la motivazione per la conversione boxing implicita dei tipi di valore e le modifiche conseguente nel comportamento.

[Handle di rilevamento a un valore boxed](../dotnet/a-tracking-handle-to-a-boxed-value.md)<br/>
Illustra la conversione boxing modalità implicita del valore di tipi viene convertito in un handle di rilevamento per l'oggetto di valore boxed.

[Semantica dei tipi di valore](../dotnet/value-type-semantics.md)<br/>
Vengono illustrate le modifiche alla semantica dei tipi valore, inclusi i metodi virtuali ereditati, costruttori predefiniti, i puntatori interni e puntatori di blocco.

## <a name="see-also"></a>Vedere anche

[Nozioni di base della migrazione in C++/CLI](../dotnet/cpp-cli-migration-primer.md)<br/>
[Classi e struct](../windows/classes-and-structs-cpp-component-extensions.md)