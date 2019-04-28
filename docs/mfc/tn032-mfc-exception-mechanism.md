---
title: 'TN032: Meccanismo di eccezioni MFC'
ms.date: 11/04/2016
f1_keywords:
- vc.mfc.exceptions
helpviewer_keywords:
- TN032
- MFC, exceptions
- CException class [MFC], using
ms.assetid: 0271f0aa-82cb-47a2-b7ea-e88126fc7e43
ms.openlocfilehash: 210e47e117cd602ba77edd330205385f54199ce5
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62305658"
---
# <a name="tn032-mfc-exception-mechanism"></a>TN032: Meccanismo di eccezioni MFC

Le versioni precedenti di Visual C++ non supportavano il meccanismo delle eccezioni C++ standard e MFC forniva macro **TRY/CATCH/THROW** che sono stati usati invece. Questa versione di Visual C++ supporta pienamente le eccezioni C++. In questa nota venivano trattati alcuni dettagli di implementazione avanzata delle precedenti macro, incluso come pulire automaticamente gli oggetti basati su stack. Dal momento che le eccezioni C++ supportano la rimozione dello stack per impostazione predefinita, questa nota tecnica non è più necessaria.

Fare riferimento a [alle eccezioni: Utilizzo delle macro MFC ed eccezioni C++](../mfc/exceptions-using-mfc-macros-and-cpp-exceptions.md) per altre informazioni sulle differenze tra le macro MFC e le nuove parole chiave C++.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
