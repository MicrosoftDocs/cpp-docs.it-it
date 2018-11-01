---
title: C.1 Notazione
ms.date: 11/04/2016
ms.assetid: a23b2631-8096-4bf3-ac23-ba4f4bd7a52a
ms.openlocfilehash: 593450b6dd7dcb30adbf8546ad96ff716c6fbc1c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50473983"
---
# <a name="c1-notation"></a>C.1 Notazione

Le regole di grammatica costituito dal nome di un non terminale, seguita da due punti, seguiti da alternative di sostituzione in righe separate.

Il termine espressione sintattica<sub>opt</sub> indica che il termine è facoltativo all'interno della sostituzione.

L'espressione sintattica *termine*<sub>optseq</sub> equivale a *termine-seq*<sub>opt</sub> con le regole aggiuntive seguenti:

*termine-seq* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Termine*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*termine-seq* *termine*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*termine-seq* **,** *termine*