---
title: Errore matematico M6203
ms.date: 11/04/2016
f1_keywords:
- M6203
helpviewer_keywords:
- M6203
ms.assetid: bd7fdd1c-83e4-4d6a-901e-10a0308bf5be
ms.openlocfilehash: 4433a024d461ee1bc43aa5fa82344190377243b4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62400773"
---
# <a name="math-error-m6203"></a>Errore matematico M6203

'function': errore di overflow

Risultato della funzione specificato è troppo grande per essere rappresentato.

Questo errore viene chiamato il `_matherr` funzione con il nome della funzione, argomenti e il tipo di errore. È possibile riscrivere il `_matherr` funzioni per personalizzare la gestione di alcuni errori di run-time matematica a virgola mobile.