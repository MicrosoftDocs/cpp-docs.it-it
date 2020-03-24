---
title: Errore degli strumenti del linker LNK1000
ms.date: 06/18/2018
f1_keywords:
- LNK1000
helpviewer_keywords:
- LNK1000
ms.assetid: 86421b9a-460a-4285-8dce-9b8257d78122
ms.openlocfilehash: 48b976f6e996d0e076849dc9b20b4cedd47dfbcd
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80195422"
---
# <a name="linker-tools-error-lnk1000"></a>Errore degli strumenti del linker LNK1000

> errore sconosciuto; consultare la documentazione per le opzioni di supporto tecnico

Prendere nota delle circostanze dell'errore, quindi provare a isolare il problema e creare un test case riproducibile. Per informazioni su come analizzare e segnalare questi errori, vedere [come segnalare un problema con il set di strumenti C++ visuale o la documentazione](../../overview/how-to-report-a-problem-with-the-visual-cpp-toolset.md).

Questo errore può verificarsi se si combinano i file di intestazione standard (ad esempio, Windows. h) e i propri file. Includere un'intestazione precompilata, se presente, prima, quindi le intestazioni standard, seguite dai file di intestazione personali.
