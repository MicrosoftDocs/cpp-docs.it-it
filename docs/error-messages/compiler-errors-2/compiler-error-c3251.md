---
title: Errore del compilatore C3251 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3251
dev_langs:
- C++
helpviewer_keywords:
- C3251
ms.assetid: 541c163e-5ee9-457c-a1e5-da860788b10d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4e58daedc0a2054bbeef885446694165f96bc44d
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46083964"
---
# <a name="compiler-error-c3251"></a>Errore del compilatore C3251

impossibile chiamare un metodo di una classe base su un'istanza di tipo valore

L'errore seguente si verifica perché `GetClass` è un membro di `Microsoft.Runtime.Object`, non di `Microsoft.Runtime.Integer4`.