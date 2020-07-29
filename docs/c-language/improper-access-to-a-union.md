---
title: Accesso non corretto a un'unione
ms.date: 11/04/2016
ms.assetid: b273d984-62a8-4003-9a87-bf0149d3f2dd
ms.openlocfilehash: 5a804ed80c8f1ac2f5dd9a24f12c67e96e199b6b
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227829"
---
# <a name="improper-access-to-a-union"></a>Accesso non corretto a un'unione

**ANSI 3.3.2.3** L'accesso a un membro di un oggetto unione viene eseguito usando un membro di un tipo diverso

Se viene dichiarata un'unione di due tipi e viene archiviato un valore, ma l'accesso all'unione viene eseguito con l'altro tipo, i risultati sono inaffidabili.

Ad esempio, **`float`** **`int`** viene dichiarata un'Unione di e. **`float`** Viene archiviato un valore, ma in seguito il programma accede al valore come **`int`** . In una situazione di questo tipo, il valore dipende dall'archiviazione interna dei **`float`** valori. L'Integer non sarebbe affidabile.

## <a name="see-also"></a>Vedere anche

[Strutture, unioni, enumerazioni e campi di bit](../c-language/structures-unions-enumerations-and-bit-fields.md)
