---
title: Alternative di Input / Output
ms.date: 11/04/2016
helpviewer_keywords:
- I/O [C++], alternatives
ms.assetid: 9f8401c7-d90d-4285-8918-63573df74a80
ms.openlocfilehash: bc595b64c991ada8e958e71e13f8cb9d134adb8a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62404962"
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
