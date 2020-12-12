---
description: "Altre informazioni su: accesso non corretto a un'Unione"
title: Accesso non corretto a un'unione
ms.date: 11/04/2016
ms.assetid: b273d984-62a8-4003-9a87-bf0149d3f2dd
ms.openlocfilehash: edff4d74e4e31b505e8c6b71555358fcd4b7e070
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97182112"
---
# <a name="improper-access-to-a-union"></a>Accesso non corretto a un'unione

**ANSI 3.3.2.3** L'accesso a un membro di un oggetto unione viene eseguito usando un membro di un tipo diverso

Se viene dichiarata un'unione di due tipi e viene archiviato un valore, ma l'accesso all'unione viene eseguito con l'altro tipo, i risultati sono inaffidabili.

Ad esempio, **`float`** **`int`** viene dichiarata un'Unione di e. **`float`** Viene archiviato un valore, ma in seguito il programma accede al valore come **`int`** . In una situazione di questo tipo, il valore dipende dall'archiviazione interna dei **`float`** valori. L'Integer non sarebbe affidabile.

## <a name="see-also"></a>Vedi anche

[Strutture, unioni, enumerazioni e campi di bit](../c-language/structures-unions-enumerations-and-bit-fields.md)
