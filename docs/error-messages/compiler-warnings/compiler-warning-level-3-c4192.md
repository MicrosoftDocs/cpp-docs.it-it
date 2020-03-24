---
title: Avviso del compilatore (livello 3) C4192
ms.date: 11/04/2016
f1_keywords:
- C4192
helpviewer_keywords:
- C4192
ms.assetid: ea5f91fa-8c96-4f3f-ac42-0c8a86d4e5df
ms.openlocfilehash: 38b346e0a90729bda431b9cb578a03806be1ea4c
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80198978"
---
# <a name="compiler-warning-level-3-c4192"></a>Avviso del compilatore (livello 3) C4192

esclusione automatica di ' name ' durante l'importazione della libreria dei tipi ' Library '

Una libreria di `#import` contiene un elemento, *Name*, definito anche nelle intestazioni di sistema Win32. A causa delle limitazioni delle librerie dei tipi, i nomi come **IUnknown** o GUID sono spesso definiti in una libreria dei tipi, duplicando la definizione dalle intestazioni di sistema. `#import` rileverà questi elementi e rifiuterà di incorporarli nei file di intestazione con estensione tlh e TLI.

Per eseguire l'override di questo comportamento, usare `#import` attributi [no_auto_exclude](../../preprocessor/no-auto-exclude.md) e [includere ()](../../preprocessor/include-parens.md).
