---
title: Alternative di input/output | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- I/O [C++], alternatives
ms.assetid: 9f8401c7-d90d-4285-8918-63573df74a80
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 28e61dbbd7db6737cd39337acc9925c669cff61d
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="inputoutput-alternatives"></a>Alternative di input/output

Visual C++ offre diverse alternative per la programmazione I/O:

- I/O senza buffer diretto della libreria di runtime C

- I/O di flusso della libreria di runtime C ANSI

- I/O diretto su console e porta

- Libreria Microsoft Foundation Class (MFC)

- Libreria standard Microsoft C++

Le classi iostream sono utili per l'I/O del testo formattato nel buffer. Sono utili anche per l'I/O senza buffer o binario se si ha necessità di un'interfaccia di programmazione C++ e si decide di non usare la libreria Microsoft Foundation Class (MFC). Le classi iostream rappresentano un I/O orientato agli oggetti alternativo alle funzioni di runtime C.

È possibile usare le classi iostream con il sistema operativo Microsoft Windows. I flussi di stringhe e file funzionano senza limitazioni, ma gli oggetti di flusso in modalità carattere `cin`, `cout`, `cerr` e `clog` non sono coerenti con l'interfaccia utente grafica di Windows. È anche possibile derivare classi di flusso personalizzate in grado di interagire direttamente con l'ambiente Windows.

## <a name="see-also"></a>Vedere anche

[Definizione di flusso](../standard-library/what-a-stream-is.md)<br/>
