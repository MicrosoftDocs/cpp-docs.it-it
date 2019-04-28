---
title: 'Avviso U4004 di NMAKE '
ms.date: 11/04/2016
f1_keywords:
- U4004
helpviewer_keywords:
- U4004
ms.assetid: 5086bbcb-42d7-4677-a877-1a02202a86a2
ms.openlocfilehash: 882f6c98b31d23d283f5e8b32b46a46c543b1a76
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62298152"
---
# <a name="nmake-warning-u4004"></a>Avviso U4004 di NMAKE 

troppe regole per la destinazione 'targetname'

È stato specificato più di un blocco di descrizione per la destinazione specificata usando solo due punti (**:**) come separatori. NMAKE eseguito i comandi nel primo blocco di descrizione e ignorati i blocchi successivi.

Per specificare la stessa destinazione in più dipendenze, usare doppi due punti (`::`) come separatore di riga ogni dipendenza.