---
description: "Altre informazioni su: vantaggi dell'assembly inline"
title: Vantaggi dell'assembly inline
ms.date: 08/30/2018
helpviewer_keywords:
- assembler [C++], advantages
- inline assembly [C++], about inline assembly
- inline assembly [C++], using
ms.assetid: 94364d97-faa7-4bdf-8473-570956986c51
ms.openlocfilehash: 066824a4ad63641f33712219dd8364b0edf7259b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97118069"
---
# <a name="advantages-of-inline-assembly"></a>Vantaggi dell'assembly inline

**Specifico di Microsoft**

Poiché l'assembler inline non richiede un assembly separato e operazioni di collegamento, è più conveniente di un assembly separato. Il codice assembly inline può utilizzare qualsiasi variabile C o nome di funzione inclusa nell'ambito, quindi può essere facilmente integrato con il codice C del programma. Dato che il codice assembly può essere combinato inline con istruzioni C++ o C, lo stesso può effettuare attività complesse o impossibili in C o C++.

Gli utilizzi di assembly inline includono:

- Scrittura di funzioni in linguaggio assembly.

- Ottimizzazione spot delle sezioni di codice con velocità critica.

- Creazione di accesso diretto all'hardware per i driver di dispositivo.

- Scrittura di codice di prologo ed epilogo per chiamate "naked".

L'assembly inline è uno strumento per scopi specifici. Se si desidera trasferire un'applicazione in computer diversi, è opportuno inserire il codice specifico per il computer in un modulo separato. Poiché l'assembler inline non supporta tutte le direttive dati e macro Microsoft Macro Assembler (MASM), può essere utile utilizzare MASM per tali moduli.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Assembler inline](../../assembler/inline/inline-assembler.md)<br/>
