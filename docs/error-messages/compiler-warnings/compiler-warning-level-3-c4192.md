---
description: 'Altre informazioni su: avviso del compilatore (livello 3) C4192'
title: Avviso del compilatore (livello 3) C4192
ms.date: 11/04/2016
f1_keywords:
- C4192
helpviewer_keywords:
- C4192
ms.assetid: ea5f91fa-8c96-4f3f-ac42-0c8a86d4e5df
ms.openlocfilehash: 8cfebf1845c578723bab5622e18699c0282d4c4b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97344224"
---
# <a name="compiler-warning-level-3-c4192"></a>Avviso del compilatore (livello 3) C4192

esclusione automatica di ' name ' durante l'importazione della libreria dei tipi ' Library '

Una `#import` raccolta contiene un elemento, *Name*, definito anche nelle intestazioni di sistema Win32. A causa delle limitazioni delle librerie dei tipi, i nomi come **IUnknown** o GUID sono spesso definiti in una libreria dei tipi, duplicando la definizione dalle intestazioni di sistema. `#import` rileverà questi elementi e rifiuterà di incorporarli nei file di intestazione con estensione tlh e TLI.

Per eseguire l'override di questo comportamento, usare `#import` gli attributi [no_auto_exclude](../../preprocessor/no-auto-exclude.md) e [includere ()](../../preprocessor/include-parens.md).
