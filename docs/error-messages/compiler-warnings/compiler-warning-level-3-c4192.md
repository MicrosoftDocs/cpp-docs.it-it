---
title: Compilatore avviso (livello 3) C4192 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4192
dev_langs:
- C++
helpviewer_keywords:
- C4192
ms.assetid: ea5f91fa-8c96-4f3f-ac42-0c8a86d4e5df
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 671a8c83dcadcaa89372e53b6c3d677c5810b4a5
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46114410"
---
# <a name="compiler-warning-level-3-c4192"></a>Compilatore avviso (livello 3) C4192

esclusione automatica 'name' durante l'importazione libreria dei tipi 'library'

Oggetto `#import` libreria contiene un elemento *nome*, vale a dire anche definita nelle intestazioni di sistema di Win32. A causa delle limitazioni delle librerie dei tipi, i nomi, ad esempio **IUnknown** o GUID sono spesso definite in una libreria dei tipi, duplicare la definizione delle intestazioni di sistema. `#import` rileva questi elementi e rifiutare di incorporarli nei file di intestazione con estensione tlh e con estensione tli.

Per modificare questo comportamento, usare `#import` attributi [no_auto_exclude](../../preprocessor/no-auto-exclude.md) e [include ()](../../preprocessor/include-parens.md).