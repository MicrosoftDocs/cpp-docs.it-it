---
title: Utilizzo della funzione abort
ms.date: 11/04/2016
helpviewer_keywords:
- abort function
ms.assetid: 3ba39b78-ef74-4a8d-8dee-2d62442de174
ms.openlocfilehash: e8cc7bce552acf67c0f9bf2025e0040dc051cff6
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79446408"
---
# <a name="using-abort"></a>Utilizzo della funzione abort

La chiamata alla funzione [Abort](../c-runtime-library/reference/abort.md) causa la chiusura immediata. Ignora il normale processo di eliminazione degli oggetti statici globali inizializzati. Ignora inoltre qualsiasi elaborazione speciale specificata utilizzando la funzione `atexit`.

## <a name="see-also"></a>Vedere anche

[Altre considerazioni di terminazione](../cpp/additional-termination-considerations.md)