---
title: Underflow dei valori a virgola mobile
ms.date: 11/04/2016
ms.assetid: 78af8016-643c-47db-b4f1-7f06cb4b243e
ms.openlocfilehash: cd4aadc5ab006b79a43e31348fa101d40e8ca03a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50477363"
---
# <a name="underflow-of-floating-point-values"></a>Underflow dei valori a virgola mobile

**ANSI 4.5.1** Indica se le funzioni matematiche impostano l'espressione Integer `errno` sul valore della macro `ERANGE` per gli errori relativi all'intervallo di underflow

Un underflow a virgola mobile non imposta l'espressione `errno` su `ERANGE`. Quando un valore si avvicina allo zero e restituisce infine un underflow, tale valore viene impostato su zero.

## <a name="see-also"></a>Vedere anche

[Funzioni della libreria](../c-language/library-functions.md)