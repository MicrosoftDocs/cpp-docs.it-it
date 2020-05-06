---
title: Accesso non corretto a un'unione
ms.date: 11/04/2016
ms.assetid: b273d984-62a8-4003-9a87-bf0149d3f2dd
ms.openlocfilehash: 9fd7bdc753f6359a8760e58813f9009411c1bf44
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62326131"
---
# <a name="improper-access-to-a-union"></a>Accesso non corretto a un'unione

**ANSI 3.3.2.3** L'accesso a un membro di un oggetto unione viene eseguito usando un membro di un tipo diverso

Se viene dichiarata un'unione di due tipi e viene archiviato un valore, ma l'accesso all'unione viene eseguito con l'altro tipo, i risultati sono inaffidabili.

Ad esempio, viene dichiarata un'unione di **float** e `int`. Un valore **float** viene archiviato, ma in seguito il programma accede al valore come `int`. In una situazione del genere il valore dipende dall'archiviazione interna di valori **float**. L'Integer non sarebbe affidabile.

## <a name="see-also"></a>Vedere anche

[Strutture, unioni, enumerazioni e campi di bit](../c-language/structures-unions-enumerations-and-bit-fields.md)
