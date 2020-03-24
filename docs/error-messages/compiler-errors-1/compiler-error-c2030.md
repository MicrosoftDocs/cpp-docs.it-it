---
title: Errore del compilatore C2030
ms.date: 11/04/2016
f1_keywords:
- C2030
helpviewer_keywords:
- C2030
ms.assetid: 5806cead-64df-4eff-92de-52c9a3f5ee62
ms.openlocfilehash: e3f3936e6fd37da16c923cb482f45cec11833b3c
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80208032"
---
# <a name="compiler-error-c2030"></a>Errore del compilatore C2030

un distruttore con accessibilità 'protected private' non può essere membro di una classe dichiarata 'sealed'

Una classe di Windows Runtime dichiarata `sealed` non può avere un distruttore privato protetto. Nei tipi sealed sono consentiti solo distruttori pubblici virtuali e privati non virtuali. Per altre informazioni, vedere [Classi e struct di riferimento](../../cppcx/ref-classes-and-structs-c-cx.md).

Per correggere l'errore, modificare l'accessibilità del distruttore.
