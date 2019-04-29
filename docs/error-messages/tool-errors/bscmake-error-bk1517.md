---
title: Errore BK1517 di BSCMAKE
ms.date: 11/04/2016
f1_keywords:
- BK1517
helpviewer_keywords:
- BK1517
ms.assetid: 24391f42-0a3e-40a9-9991-c8b9a6a7b1c7
ms.openlocfilehash: 455e028a72cce132c49e0d0d778628ee21bf3a0f
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62380526"
---
# <a name="bscmake-error-bk1517"></a>Errore BK1517 di BSCMAKE

file di origine per "sbrfile" compilato con /Yc e /Yu

Il file SBR fa riferimento a se stesso. Probabilmente è stato ricompilato con /Yu dopo aver compilato con /Yc. Reimpostare l'opzione del compilatore per il file di origine /Yc, quindi selezionare **ricompilare** per generare nuovi file SBR. Non esegue la ricompilazione del codice sorgente con /Yu.