---
description: 'Altre informazioni su: TN032: meccanismo di eccezione MFC'
title: 'TN032: meccanismo di eccezioni MFC'
ms.date: 11/04/2016
helpviewer_keywords:
- TN032
- MFC, exceptions
- CException class [MFC], using
ms.assetid: 0271f0aa-82cb-47a2-b7ea-e88126fc7e43
ms.openlocfilehash: 847d78762aaf5e04c8a0c1eb2170e951d0b867bc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97215534"
---
# <a name="tn032-mfc-exception-mechanism"></a>TN032: meccanismo di eccezioni MFC

Le versioni precedenti di Visual C++ non supportano il meccanismo di eccezione standard di C++ e le macro fornite da MFC **try/catch/throw** utilizzate in alternativa. Questa versione di Visual C++ supporta pienamente le eccezioni C++. In questa nota venivano trattati alcuni dettagli di implementazione avanzata delle precedenti macro, incluso come pulire automaticamente gli oggetti basati su stack. Dal momento che le eccezioni C++ supportano la rimozione dello stack per impostazione predefinita, questa nota tecnica non è più necessaria.

Per ulteriori informazioni sulle differenze tra le macro MFC e le nuove parole chiave di C++, vedere [eccezioni: utilizzo delle macro MFC e delle eccezioni c++](../mfc/exceptions-using-mfc-macros-and-cpp-exceptions.md) .

## <a name="see-also"></a>Vedi anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
