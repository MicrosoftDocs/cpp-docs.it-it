---
title: Utilizzo della funzione abort | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- Abort
dev_langs:
- C++
helpviewer_keywords:
- abort function
ms.assetid: 3ba39b78-ef74-4a8d-8dee-2d62442de174
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3edc24b2b8dc869022039d4aaaea73af06eac16b
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46092538"
---
# <a name="using-abort"></a>Utilizzo della funzione abort

Chiama il [abort](../c-runtime-library/reference/abort.md) funzione causando l'interruzione immediata. Ignora il normale processo di eliminazione degli oggetti statici globali inizializzati. Ignora inoltre qualsiasi elaborazione speciale specificata utilizzando la funzione `atexit`.

## <a name="see-also"></a>Vedere anche

[Altre considerazioni di terminazione](../cpp/additional-termination-considerations.md)