---
title: Errore del compilatore C3251
ms.date: 11/04/2016
f1_keywords:
- C3251
helpviewer_keywords:
- C3251
ms.assetid: 541c163e-5ee9-457c-a1e5-da860788b10d
ms.openlocfilehash: 52f7766601a06385577a0093883b85d9432d1a89
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80201474"
---
# <a name="compiler-error-c3251"></a>Errore del compilatore C3251

impossibile chiamare un metodo di una classe base su un'istanza di tipo valore

L'errore seguente si verifica perché `GetClass` è un membro di `Microsoft.Runtime.Object`, non di `Microsoft.Runtime.Integer4`.
