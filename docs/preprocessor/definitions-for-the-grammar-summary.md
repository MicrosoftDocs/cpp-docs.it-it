---
title: Le definizioni per il riepilogo della grammatica | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- preprocessor, definitions
- preprocessor
ms.assetid: cc752dc8-6f4e-4347-a556-e0d9ef4c46bd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3c11f2f839ef806d74eae65c9fc8fe3a71cd2e9c
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43760816"
---
# <a name="definitions-for-the-grammar-summary"></a>Definizioni per il riepilogo della grammatica

I terminali sono endpoint in una definizione di sintassi. Non è possibile nessun'altra soluzione. I terminali includono il set di parole riservate e di identificatori definiti dall'utente.

I non terminali sono segnaposto nella sintassi. La maggior parte viene definita altrove in questo riepilogo della sintassi. Le definizioni possono essere ricorsive. I non terminal seguenti sono definite nel [convenzioni lessicali](../cpp/lexical-conventions.md) sezione il *riferimenti al linguaggio C++*:

`constant`, *constant-expression*, *identifier*, *keyword*, `operator`, `punctuator`

Un componente facoltativo viene indicato dal pedice <sub>opt</sub>. Ad esempio, di seguito viene indicata un'espressione facoltativa racchiusa tra parentesi graffe:

**{** *espressione*<sub>opt</sub> **}**

## <a name="see-also"></a>Vedere anche

[Riepilogo grammatica (C/C++)](../preprocessor/grammar-summary-c-cpp.md)