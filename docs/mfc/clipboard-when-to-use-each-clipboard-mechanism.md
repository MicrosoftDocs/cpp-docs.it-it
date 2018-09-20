---
title: 'Appunti: Quando usare ogni meccanismo di Appunti | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- applications [OLE], Clipboard
- OLE Clipboard, guidelines
- Clipboard [MFC], mechanisms
- OLE Clipboard, formats
- formats [MFC], Clipboard for OLE
- Clipboard [MFC], formats
ms.assetid: fd071996-ef8c-488b-81bd-89057095a201
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 18b8a772dd58cf9623d4076665e7859d191bb27e
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46379814"
---
# <a name="clipboard-when-to-use-each-clipboard-mechanism"></a>Appunti: quando utilizzare ogni meccanismo di appunti

Seguire queste linee guida usando gli Appunti:

- Usare ora il meccanismo degli Appunti OLE per abilitare nuove funzionalità in futuro. Mentre verranno mantenute le API degli Appunti standard, il meccanismo OLE è il futuro di trasferimento dei dati.

- Se si sta scrivendo un'applicazione OLE o vuole che tutte le funzionalità OLE, ad esempio trascinamento della selezione, usare il meccanismo degli Appunti OLE.

- Se si fornisce formati OLE, utilizzare il meccanismo degli Appunti OLE.

## <a name="what-do-you-want-to-do"></a>Ciò che si desidera eseguire

- [Uso del meccanismo degli Appunti OLE](../mfc/clipboard-using-the-ole-clipboard-mechanism.md)

- [Utilizzare il meccanismo di Appunti di Windows](../mfc/clipboard-using-the-windows-clipboard.md)

## <a name="see-also"></a>Vedere anche

[Appunti](../mfc/clipboard.md)

