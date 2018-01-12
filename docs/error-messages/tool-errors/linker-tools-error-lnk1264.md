---
title: Strumenti del linker LNK1264 errore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: LNK1264
dev_langs: C++
helpviewer_keywords: LNK1264
ms.assetid: 23b1aad7-d382-42c1-bae8-db68575c57a8
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f590de75998becb9c03c73ac3083b04445a02156
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-error-lnk1264"></a>Errore degli strumenti del linker LNK1264
/LTCG: PGINSTRUMENT specificato ma non richiesta; la generazione di codice strumentazione non riuscita  
  
 **/LTCG: PGINSTRUMENT** è stato specificato ma non sono stati trovati file. obj che sono stati compilati con [/GL](../../build/reference/gl-whole-program-optimization.md). Strumentazione non è possibile eseguire sul posto e il collegamento non è riuscita. Deve esistere almeno un file con estensione obj nella riga di comando che viene compilato con **/GL** in modo che la strumentazione.  
  
 Ottimizzazione PGO (PGO) è disponibile solo per i compilatori a 64 bit.