---
title: Underflow dei valori a virgola mobile
ms.date: 11/04/2016
ms.assetid: 78af8016-643c-47db-b4f1-7f06cb4b243e
ms.openlocfilehash: 93230b50b81ede44a9c55406db1566df2660c1ba
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56149928"
---
# <a name="underflow-of-floating-point-values"></a>Underflow dei valori a virgola mobile

**ANSI 4.5.1** Indica se le funzioni matematiche impostano l'espressione Integer `errno` sul valore della macro `ERANGE` per gli errori relativi all'intervallo di underflow

Un underflow a virgola mobile non imposta l'espressione `errno` su `ERANGE`. Quando un valore si avvicina allo zero e restituisce infine un underflow, tale valore viene impostato su zero.

## <a name="see-also"></a>Vedere anche

[Funzioni della libreria](../c-language/library-functions.md)
