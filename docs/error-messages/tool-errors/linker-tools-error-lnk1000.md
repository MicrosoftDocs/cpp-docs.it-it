---
title: Errore degli strumenti del linker LNK1000
ms.date: 06/18/2018
f1_keywords:
- LNK1000
helpviewer_keywords:
- LNK1000
ms.assetid: 86421b9a-460a-4285-8dce-9b8257d78122
ms.openlocfilehash: b0e6eb3ba44216e9300506eb84adb61a6529903d
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "58781497"
---
# <a name="linker-tools-error-lnk1000"></a>Errore degli strumenti del linker LNK1000

> Errore sconosciuto. consultare la documentazione per le opzioni di supporto tecnico

Prendere nota delle circostanze dell'errore, quindi provare a isolare il problema e creare un test case riproducibile. Per informazioni su come analizzare e segnalare questi errori, vedere [come segnalare un problema con il set di strumenti Visual C++ o documentazione](../../overview/how-to-report-a-problem-with-the-visual-cpp-toolset.md).

Questo errore può verificarsi se si combinano file di intestazione standard (ad esempio, Windows. h) e i proprio file. Includere un'intestazione precompilata, se uno qualsiasi, primo, quindi le intestazioni standard, seguito dai proprio file di intestazione.