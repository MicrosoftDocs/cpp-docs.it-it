---
title: Strumenti del linker LNK1264 errore | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1264
dev_langs:
- C++
helpviewer_keywords:
- LNK1264
ms.assetid: 23b1aad7-d382-42c1-bae8-db68575c57a8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8232e83774dc53755b77ad9c8b3bbb2a0bcc6ae6
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46102745"
---
# <a name="linker-tools-error-lnk1264"></a>Errore degli strumenti del linker LNK1264

/LTCG: PGINSTRUMENT specificato ma non richiesta; la generazione di codice strumentazione non è riuscita

**/LTCG: PGINSTRUMENT** è stato specificato ma non sono stati trovati file non obj compilati con [/GL](../../build/reference/gl-whole-program-optimization.md). Strumentazione non può accettare sul posto e il collegamento non è riuscita. Deve esistere almeno un file con estensione obj nella riga di comando che viene compilato con **/GL** in modo che possa essere eseguita la strumentazione.

Ottimizzazione PGO (PGO) è disponibile solo per i compilatori a 64 bit.