---
title: Errore del compilatore C2708 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2708
dev_langs:
- C++
helpviewer_keywords:
- C2708
ms.assetid: d52d3088-1141-42f4-829c-74755a7fcc3a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c0accd68881cccad5e34530a6c157a4e8179b283
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46111095"
---
# <a name="compiler-error-c2708"></a>Errore del compilatore C2708

'identifier': lunghezza in byte dei parametri effettivi differisce dalla precedente chiamata o di riferimento

Oggetto [stdcall](../../cpp/stdcall.md) funzione deve essere preceduta da un prototipo. In caso contrario, il compilatore interpreta la prima chiamata alla funzione come prototipo e questo errore si verifica quando il compilatore rileva una chiamata che non corrisponde.

Per risolvere questo errore, aggiungere un prototipo di funzione.