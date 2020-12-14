---
description: 'Altre informazioni su: errore degli strumenti del linker LNK1000'
title: Errore degli strumenti del linker LNK1000
ms.date: 06/18/2018
f1_keywords:
- LNK1000
helpviewer_keywords:
- LNK1000
ms.assetid: 86421b9a-460a-4285-8dce-9b8257d78122
ms.openlocfilehash: 54692b635b83756a26490779c0205ccc5f20d3bf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97261606"
---
# <a name="linker-tools-error-lnk1000"></a>Errore degli strumenti del linker LNK1000

> errore sconosciuto; consultare la documentazione per le opzioni di supporto tecnico

Prendere nota delle circostanze dell'errore, quindi provare a isolare il problema e creare un test case riproducibile. Per informazioni su come analizzare e segnalare questi errori, vedere [come segnalare un problema con il set di strumenti Visual C++ o la documentazione](../../overview/how-to-report-a-problem-with-the-visual-cpp-toolset.md).

Questo errore può verificarsi se si combinano i file di intestazione standard (ad esempio, Windows. h) e i propri file. Includere un'intestazione precompilata, se presente, prima, quindi le intestazioni standard, seguite dai file di intestazione personali.
