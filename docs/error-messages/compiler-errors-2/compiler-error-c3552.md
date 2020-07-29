---
title: Errore del compilatore C3552
ms.date: 11/04/2016
f1_keywords:
- C3552
helpviewer_keywords:
- C3552
ms.assetid: 83401524-1bf1-44c0-8aca-a6eb35c4224c
ms.openlocfilehash: d2d3a60fcd4a26238cd6cf330f47b48c5b3198ad
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87230831"
---
# <a name="compiler-error-c3552"></a>Errore del compilatore C3552

'typename': un tipo restituito specificato in ritardo non può contenere 'auto'

Se si utilizza la **`auto`** parola chiave come segnaposto per il tipo restituito di una funzione, è necessario fornire un tipo restituito specificato in ritardo. Tuttavia, non è possibile usare un'altra **`auto`** parola chiave per specificare il tipo restituito specificato in ritardo. Ad esempio, il frammento di codice seguente genera l'errore C3552.

`auto myFunction->auto; // C3552`
