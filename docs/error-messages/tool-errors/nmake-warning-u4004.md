---
title: Avviso U4004 di NMAKE | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- U4004
dev_langs:
- C++
helpviewer_keywords:
- U4004
ms.assetid: 5086bbcb-42d7-4677-a877-1a02202a86a2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2a89bb8abf212c8a0ffa9fb40fe5d3ea43307a08
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46016650"
---
# <a name="nmake-warning-u4004"></a>Avviso U4004 di NMAKE 

troppe regole per la destinazione 'targetname'

È stato specificato più di un blocco di descrizione per la destinazione specificata usando solo due punti (**:**) come separatori. NMAKE eseguito i comandi nel primo blocco di descrizione e ignorati i blocchi successivi.

Per specificare la stessa destinazione in più dipendenze, usare doppi due punti (`::`) come separatore di riga ogni dipendenza.