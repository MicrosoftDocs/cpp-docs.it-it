---
title: Avviso U4004 di NMAKE
ms.date: 11/04/2016
f1_keywords:
- U4004
helpviewer_keywords:
- U4004
ms.assetid: 5086bbcb-42d7-4677-a877-1a02202a86a2
ms.openlocfilehash: d59b5656d76025fa56bfc76bad800659f25acf53
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80193199"
---
# <a name="nmake-warning-u4004"></a>Avviso U4004 di NMAKE

troppe regole per la destinazione ' TargetName '

È stato specificato più di un blocco Description per la destinazione specificata usando i singoli due punti ( **:** ) come separatori. NMAKE ha eseguito i comandi nel primo blocco di descrizione e i blocchi successivi sono stati ignorati.

Per specificare la stessa destinazione in più dipendenze, usare i due punti (`::`) come separatore in ogni linea di dipendenza.
