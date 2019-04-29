---
title: Compilatore avviso (livello 3) C4192
ms.date: 11/04/2016
f1_keywords:
- C4192
helpviewer_keywords:
- C4192
ms.assetid: ea5f91fa-8c96-4f3f-ac42-0c8a86d4e5df
ms.openlocfilehash: 56b27596296b87edcc6de406e7b6621d5723815d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62402229"
---
# <a name="compiler-warning-level-3-c4192"></a>Compilatore avviso (livello 3) C4192

esclusione automatica 'name' durante l'importazione libreria dei tipi 'library'

Oggetto `#import` libreria contiene un elemento *nome*, vale a dire anche definita nelle intestazioni di sistema di Win32. A causa delle limitazioni delle librerie dei tipi, i nomi, ad esempio **IUnknown** o GUID sono spesso definite in una libreria dei tipi, duplicare la definizione delle intestazioni di sistema. `#import` rileva questi elementi e rifiutare di incorporarli nei file di intestazione con estensione tlh e con estensione tli.

Per modificare questo comportamento, usare `#import` attributi [no_auto_exclude](../../preprocessor/no-auto-exclude.md) e [include ()](../../preprocessor/include-parens.md).