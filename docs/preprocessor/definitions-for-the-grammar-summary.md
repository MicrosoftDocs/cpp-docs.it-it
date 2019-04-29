---
title: Definizioni per il riepilogo della grammatica
ms.date: 11/04/2016
helpviewer_keywords:
- preprocessor, definitions
- preprocessor
ms.assetid: cc752dc8-6f4e-4347-a556-e0d9ef4c46bd
ms.openlocfilehash: 6e8671ba0d68b13f68db0f2b08dab4fe98f917e7
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62389281"
---
# <a name="definitions-for-the-grammar-summary"></a>Definizioni per il riepilogo della grammatica

I terminali sono endpoint in una definizione di sintassi. Non è possibile nessun'altra soluzione. I terminali includono il set di parole riservate e di identificatori definiti dall'utente.

I non terminali sono segnaposto nella sintassi. La maggior parte viene definita altrove in questo riepilogo della sintassi. Le definizioni possono essere ricorsive. I non terminal seguenti sono definite nel [convenzioni lessicali](../cpp/lexical-conventions.md) sezione il *riferimenti al linguaggio C++*:

`constant`, *constant-expression*, *identifier*, *keyword*, `operator`, `punctuator`

Un componente facoltativo viene indicato da <sub>opt</sub> con indice. Ad esempio, di seguito viene indicata un'espressione facoltativa racchiusa tra parentesi graffe:

**{** *expression*<sub>opt</sub> **}**

## <a name="see-also"></a>Vedere anche

[Riepilogo grammatica (C/C++)](../preprocessor/grammar-summary-c-cpp.md)