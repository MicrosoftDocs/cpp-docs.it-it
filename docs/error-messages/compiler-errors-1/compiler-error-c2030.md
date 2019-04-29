---
title: Errore del compilatore C2030
ms.date: 11/04/2016
f1_keywords:
- C2030
helpviewer_keywords:
- C2030
ms.assetid: 5806cead-64df-4eff-92de-52c9a3f5ee62
ms.openlocfilehash: 217f97d205e1da075277b8b0bc22ff3baab13482
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62400526"
---
# <a name="compiler-error-c2030"></a>Errore del compilatore C2030

un distruttore con accessibilità 'protected private' non può essere membro di una classe dichiarata 'sealed'

Una classe di Windows Runtime dichiarata `sealed` non può avere un distruttore privato protetto. Nei tipi sealed sono consentiti solo distruttori pubblici virtuali e privati non virtuali. Per altre informazioni, vedere [le classi e struct](../../cppcx/ref-classes-and-structs-c-cx.md).

Per correggere l'errore, modificare l'accessibilità del distruttore.