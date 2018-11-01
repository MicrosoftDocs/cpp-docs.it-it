---
title: 'Avviso U4004 di NMAKE '
ms.date: 11/04/2016
f1_keywords:
- U4004
helpviewer_keywords:
- U4004
ms.assetid: 5086bbcb-42d7-4677-a877-1a02202a86a2
ms.openlocfilehash: 882f6c98b31d23d283f5e8b32b46a46c543b1a76
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50436218"
---
# <a name="nmake-warning-u4004"></a>Avviso U4004 di NMAKE 

troppe regole per la destinazione 'targetname'

È stato specificato più di un blocco di descrizione per la destinazione specificata usando solo due punti (**:**) come separatori. NMAKE eseguito i comandi nel primo blocco di descrizione e ignorati i blocchi successivi.

Per specificare la stessa destinazione in più dipendenze, usare doppi due punti (`::`) come separatore di riga ogni dipendenza.