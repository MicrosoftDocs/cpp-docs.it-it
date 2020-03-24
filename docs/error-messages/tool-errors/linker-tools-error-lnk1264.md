---
title: Errore degli strumenti del linker LNK1264
ms.date: 11/04/2016
f1_keywords:
- LNK1264
helpviewer_keywords:
- LNK1264
ms.assetid: 23b1aad7-d382-42c1-bae8-db68575c57a8
ms.openlocfilehash: 00041e677ac7b69df9981551ee3b6cc18f9eb33d
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80183761"
---
# <a name="linker-tools-error-lnk1264"></a>Errore degli strumenti del linker LNK1264

/LTCG: PGINSTRUMENT specificato ma non è richiesta la generazione di codice. strumentazione non riuscita

**/LTCG: PGINSTRUMENT** è stato specificato, ma non sono stati trovati file obj compilati con [/GL](../../build/reference/gl-whole-program-optimization.md). Non è possibile eseguire la strumentazione e il collegamento non è riuscito. Nella riga di comando deve essere presente almeno un file con estensione obj compilato con **/GL** in modo che la strumentazione possa essere eseguita.

L'ottimizzazione PGO (PGO) è disponibile solo nei compilatori a 64 bit.
