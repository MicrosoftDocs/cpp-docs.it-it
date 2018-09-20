---
title: C.1 notazione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: a23b2631-8096-4bf3-ac23-ba4f4bd7a52a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4bbb3190dd5aa32315cd8f402f92fd94893b4b27
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46411872"
---
# <a name="c1-notation"></a>C.1 Notazione

Le regole di grammatica costituito dal nome di un non terminale, seguita da due punti, seguiti da alternative di sostituzione in righe separate.

Il termine espressione sintattica<sub>opt</sub> indica che il termine è facoltativo all'interno della sostituzione.

L'espressione sintattica *termine*<sub>optseq</sub> equivale a *termine-seq*<sub>opt</sub> con le regole aggiuntive seguenti:

*termine-seq* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Termine*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*termine-seq* *termine*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*termine-seq* **,** *termine*