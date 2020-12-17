---
description: Altre informazioni sull'avviso del compilatore (livello 1) C4027
title: Avviso del compilatore (livello 1) C4027
ms.date: 12/16/2020
f1_keywords:
- C4027
helpviewer_keywords:
- C4027
ms.openlocfilehash: 1489ca32211854bcf1ef55d1a4ac806ab1611f43
ms.sourcegitcommit: 387ce22a3b0137f99cbb856a772b5a910c9eba99
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/17/2020
ms.locfileid: "97645176"
---
# <a name="compiler-warning-level-1-c4027"></a>Avviso del compilatore (livello 1) C4027

> funzione dichiarata senza elenco di parametri formali

La dichiarazione di funzione non presenta parametri formali, ma esistono parametri formali nella definizione di funzione o parametri effettivi in una chiamata.

Il compilatore accetta, ma avvisa, in una dichiarazione con avanti di tipo C precedente di un nome di funzione senza un elenco di parametri. Nelle chiamate successive a questa funzione, il compilatore presuppone che la funzione accetti parametri effettivi dei tipi individuati nella definizione di funzione o nella chiamata. Si consiglia di modificare la dichiarazione di funzione in modo che corrisponda alla firma della definizione della funzione.
