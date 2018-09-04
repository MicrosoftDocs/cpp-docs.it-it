---
title: Vantaggi dell'Assembly Inline | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- assembler [C++], advantages
- inline assembly [C++], about inline assembly
- inline assembly [C++], using
ms.assetid: 94364d97-faa7-4bdf-8473-570956986c51
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 820c862b90de3fd0d91a68d5a388b77f9a30a142
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43682720"
---
# <a name="advantages-of-inline-assembly"></a>Vantaggi dell'assembly inline

**Sezione specifica Microsoft**

Poiché l'assembler inline non richiede un assembly separato e operazioni di collegamento, è più conveniente di un assembly separato. Il codice assembly inline può utilizzare qualsiasi variabile C o nome di funzione inclusa nell'ambito, quindi può essere facilmente integrato con il codice C del programma. Dato che il codice assembly può essere combinato inline con istruzioni C++ o C, lo stesso può effettuare attività complesse o impossibili in C o C++.

Gli utilizzi di assembly inline includono:

- Scrittura di funzioni in linguaggio assembly.

- Ottimizzazione spot delle sezioni di codice con velocità critica.

- Creazione di accesso diretto all'hardware per i driver di dispositivo.

- Scrittura di codice di prologo ed epilogo per chiamate "naked".

L'assembly inline è uno strumento per scopi specifici. Se si desidera trasferire un'applicazione in computer diversi, è opportuno inserire il codice specifico per il computer in un modulo separato. Poiché l'assembler inline non supporta tutte le direttive dati e macro Microsoft Macro Assembler (MASM), può essere utile utilizzare MASM per tali moduli.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Assembler inline](../../assembler/inline/inline-assembler.md)<br/>