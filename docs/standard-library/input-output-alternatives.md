---
title: Alternative di input/output
ms.date: 05/07/2019
helpviewer_keywords:
- I/O [C++], alternatives
ms.assetid: 9f8401c7-d90d-4285-8918-63573df74a80
ms.openlocfilehash: b46ff242fc263be5069eb691dd0ea9e8fb00b0f9
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68455295"
---
# <a name="inputoutput-alternatives"></a>Alternative di input/output

Il compilatore C++ Microsoft offre diverse alternative per la programmazione di i/O:

- I/O senza buffer diretto della libreria di runtime C

- I/O di flusso della libreria di runtime C ANSI

- I/O diretto su console e porta

- Libreria Microsoft Foundation Class (MFC)

- Libreria standard Microsoft C++

Le classi iostream sono utili per l'I/O del testo formattato nel buffer. Sono utili anche per l'I/O senza buffer o binario se si ha necessità di un'interfaccia di programmazione C++ e si decide di non usare la libreria Microsoft Foundation Class (MFC). Le classi iostream rappresentano un I/O orientato agli oggetti alternativo alle funzioni di runtime C.

È possibile usare le classi iostream con il sistema operativo Microsoft Windows. I flussi di stringhe e file funzionano senza limitazioni, ma gli oggetti di flusso in modalità carattere `cin`, `cout`, `cerr` e `clog` non sono coerenti con l'interfaccia utente grafica di Windows. È anche possibile derivare classi di flusso personalizzate in grado di interagire direttamente con l'ambiente Windows.

## <a name="see-also"></a>Vedere anche

[Definizione di flusso](../standard-library/what-a-stream-is.md)
