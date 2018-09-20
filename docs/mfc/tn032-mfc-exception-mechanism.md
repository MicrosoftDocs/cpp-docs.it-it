---
title: 'TN032: Meccanismo di eccezioni MFC | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.mfc.exceptions
dev_langs:
- C++
helpviewer_keywords:
- TN032
- MFC, exceptions
- CException class [MFC], using
ms.assetid: 0271f0aa-82cb-47a2-b7ea-e88126fc7e43
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: aee8ce02af874e1c3c30243a35e8f36acfce63f0
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46414758"
---
# <a name="tn032-mfc-exception-mechanism"></a>TN032: meccanismo di eccezioni MFC

Le versioni precedenti di Visual C++ non supportavano il meccanismo delle eccezioni C++ standard e MFC forniva macro **TRY/CATCH/THROW** che sono stati usati invece. Questa versione di Visual C++ supporta pienamente le eccezioni C++. In questa nota venivano trattati alcuni dettagli di implementazione avanzata delle precedenti macro, incluso come pulire automaticamente gli oggetti basati su stack. Dal momento che le eccezioni C++ supportano la rimozione dello stack per impostazione predefinita, questa nota tecnica non è più necessaria.

Fare riferimento a [eccezioni: utilizzo delle macro MFC ed eccezioni C++](../mfc/exceptions-using-mfc-macros-and-cpp-exceptions.md) per altre informazioni sulle differenze tra le macro MFC e le nuove parole chiave C++.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)

