---
title: Strumenti del linker LNK1000 errore | Documenti Microsoft
ms.custom: ''
ms.date: 06/18/2018
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1000
dev_langs:
- C++
helpviewer_keywords:
- LNK1000
ms.assetid: 86421b9a-460a-4285-8dce-9b8257d78122
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7a01db36200995813ec4b6862e9ddd04c6f069ba
ms.sourcegitcommit: d06966efce25c0e66286c8047726ffe743ea6be0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/19/2018
ms.locfileid: "36238682"
---
# <a name="linker-tools-error-lnk1000"></a>Errore degli strumenti del linker LNK1000

> Errore sconosciuto. consultare la documentazione per le opzioni di supporto tecnico

Prendere nota delle circostanze dell'errore, quindi provare a isolare il problema e creare un test case riproducibile. Per informazioni su come individuare e segnalare questi errori, vedere [come segnalare un problema con la documentazione o set di strumenti di Visual C++](../../how-to-report-a-problem-with-the-visual-cpp-toolset.md).

Questo errore può verificarsi se si combinano i propri file e file di intestazione standard (ad esempio, Windows. h). Se qualsiasi, prima e quindi le intestazioni standard, seguito dal proprio file di intestazione, includere un'intestazione precompilata.