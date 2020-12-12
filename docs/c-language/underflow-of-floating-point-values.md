---
description: 'Altre informazioni su: underflow dei valori di Floating-Point'
title: Underflow dei valori a virgola mobile
ms.date: 11/04/2016
ms.assetid: 78af8016-643c-47db-b4f1-7f06cb4b243e
ms.openlocfilehash: 3d8ddd665aa33e1c47f9f187f759058501bc5484
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97321297"
---
# <a name="underflow-of-floating-point-values"></a>Underflow dei valori a virgola mobile

**ANSI 4.5.1** Indica se le funzioni matematiche impostano l'espressione Integer `errno` sul valore della macro `ERANGE` per gli errori relativi all'intervallo di underflow

Un underflow a virgola mobile non imposta l'espressione `errno` su `ERANGE`. Quando un valore si avvicina allo zero e restituisce infine un underflow, tale valore viene impostato su zero.

## <a name="see-also"></a>Vedi anche

[Funzioni della libreria](../c-language/library-functions.md)
