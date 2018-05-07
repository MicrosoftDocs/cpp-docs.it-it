---
title: Strumenti del linker LNK1264 errore | Documenti Microsoft
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
ms.openlocfilehash: 7ed21327028fc9849f6e0694bb82ae34c6084842
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="linker-tools-error-lnk1264"></a>Errore degli strumenti del linker LNK1264
/LTCG: PGINSTRUMENT specificato ma non richiesta; la generazione di codice strumentazione non riuscita  
  
 **/LTCG: PGINSTRUMENT** è stato specificato ma non sono stati trovati file file obj che sono stati compilati con [/GL](../../build/reference/gl-whole-program-optimization.md). Strumentazione non è possibile eseguire sul posto e il collegamento non è riuscita. Deve esistere almeno un file con estensione obj nella riga di comando che viene compilato con **/GL** in modo che la strumentazione.  
  
 Ottimizzazione PGO (PGO) è disponibile solo per i compilatori a 64 bit.