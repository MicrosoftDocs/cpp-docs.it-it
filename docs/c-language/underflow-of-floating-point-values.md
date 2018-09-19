---
title: Underflow dei valori a virgola mobile | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: 78af8016-643c-47db-b4f1-7f06cb4b243e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 980000932c8cc4a6be3798976d273dae8608324f
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46089164"
---
# <a name="underflow-of-floating-point-values"></a>Underflow dei valori a virgola mobile

**ANSI 4.5.1** Indica se le funzioni matematiche impostano l'espressione Integer `errno` sul valore della macro `ERANGE` per gli errori relativi all'intervallo di underflow

Un underflow a virgola mobile non imposta l'espressione `errno` su `ERANGE`. Quando un valore si avvicina allo zero e restituisce infine un underflow, tale valore viene impostato su zero.

## <a name="see-also"></a>Vedere anche

[Funzioni della libreria](../c-language/library-functions.md)