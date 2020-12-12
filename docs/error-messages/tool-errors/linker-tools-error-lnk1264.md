---
description: 'Altre informazioni su: errore degli strumenti del linker LNK1264'
title: Errore degli strumenti del linker LNK1264
ms.date: 11/04/2016
f1_keywords:
- LNK1264
helpviewer_keywords:
- LNK1264
ms.assetid: 23b1aad7-d382-42c1-bae8-db68575c57a8
ms.openlocfilehash: 122186482800597780405ae89e8e01c008794756
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97193786"
---
# <a name="linker-tools-error-lnk1264"></a>Errore degli strumenti del linker LNK1264

/LTCG: PGINSTRUMENT specificato ma non è richiesta la generazione di codice. strumentazione non riuscita

**/LTCG: PGINSTRUMENT** è stato specificato, ma non sono stati trovati file obj compilati con [/GL](../../build/reference/gl-whole-program-optimization.md). Non è possibile eseguire la strumentazione e il collegamento non è riuscito. Nella riga di comando deve essere presente almeno un file con estensione obj compilato con **/GL** in modo che la strumentazione possa essere eseguita.

L'ottimizzazione PGO (PGO) è disponibile solo nei compilatori a 64 bit.
