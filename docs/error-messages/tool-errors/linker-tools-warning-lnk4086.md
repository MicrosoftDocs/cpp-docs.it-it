---
title: Avviso degli strumenti del linker LNK4086
ms.date: 11/04/2016
f1_keywords:
- LNK4086
helpviewer_keywords:
- LNK4086
ms.assetid: ea1eecbb-ba2c-41bb-9a4f-fa0808a4b92d
ms.openlocfilehash: c6a5a0714e070e6cf3aee8efcdfbdfa07fa9ee69
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50427859"
---
# <a name="linker-tools-warning-lnk4086"></a>Avviso degli strumenti del linker LNK4086

punto di ingresso 'function' non è stdcall con 'numero' byte di argomenti; immagine non venga eseguita

Deve essere il punto di ingresso per una DLL `__stdcall`. Ricompilare la funzione con il [/Gz](../../build/reference/gd-gr-gv-gz-calling-convention.md) oppure specificare `__stdcall` o WINAPI quando si definisce la funzione.