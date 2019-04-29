---
title: Vantaggi della portabilità dei set di caratteri
ms.date: 11/04/2016
helpviewer_keywords:
- character sets [C++], benefits
- portability [C++], character sets
ms.assetid: bd60b925-1498-4e4f-897b-4c8ce66edcf7
ms.openlocfilehash: 0ca7e46cabb2d98a64a244863f8574a3e9e2a456
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62410778"
---
# <a name="benefits-of-character-set-portability"></a>Vantaggi della portabilità dei set di caratteri

È possibile trarre vantaggio dall'utilizzo delle funzionalità di portabilità di runtime C e MFC anche se non si prevede attualmente da internazionalizzare dell'applicazione:

- Scrittura di codice in modo portabile la codebase più flessibile. È in un secondo momento possibile spostarla facilmente a MBCS o Unicode.

- Utilizzo di Unicode rende più efficiente delle applicazioni per Windows. Dato che Windows Usa Unicode, le stringhe non Unicode passate da e verso il sistema operativo devono essere convertite, che comporta un sovraccarico.

## <a name="see-also"></a>Vedere anche

[Unicode e MBCS](../text/unicode-and-mbcs.md)<br/>
[Supporto per Unicode](../text/support-for-unicode.md)
