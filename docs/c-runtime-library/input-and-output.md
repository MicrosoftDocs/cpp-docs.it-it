---
description: 'Altre informazioni su: input e output'
title: Input e output
ms.date: 11/04/2016
f1_keywords:
- c.io
helpviewer_keywords:
- input routines
- I/O [CRT]
- I/O routines
- I/O [CRT], routines
- output routines
ms.assetid: 1c177301-e341-4ca0-aedc-0a87fe1c75ae
ms.openlocfilehash: 0edd66765f1633dc0adf12b311faf81d3a030512
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97334290"
---
# <a name="input-and-output"></a>Input e output

Le funzioni di I/O leggono e scrivono dati in e da file e dispositivi. Le operazioni di I/O per i file si svolgono in modalità testo o modalità binaria. La libreria di runtime di Microsoft include tre tipi di funzioni I/O:

- Le funzioni [I/O di flusso](../c-runtime-library/stream-i-o.md) elaborano i dati come un flusso di caratteri singoli.

- Le funzioni [I/O di basso livello](../c-runtime-library/low-level-i-o.md) chiamano direttamente il sistema operativo per operazioni di livello inferiore rispetto a quelle specificate dal flusso di I/O.

- Le funzioni di [I/O su console e porta](../c-runtime-library/console-and-port-i-o.md) leggono o scrivono direttamente su una console (tastiera e schermo) o su una porta di I/O (ad esempio una porta per stampante).

   > [!NOTE]
   > Dato che le funzioni di flusso vengono memorizzate nel buffer e le funzioni di basso livello non vengono memorizzate, questi due tipi di funzione sono incompatibili a livello generale. Per elaborare un file specifico usare solo funzioni di flusso o solo funzioni di basso livello.

## <a name="see-also"></a>Vedi anche

[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)<br/>
