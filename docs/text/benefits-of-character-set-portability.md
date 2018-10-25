---
title: Portabilità dei Set i vantaggi del carattere | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- character sets [C++], benefits
- portability [C++], character sets
ms.assetid: bd60b925-1498-4e4f-897b-4c8ce66edcf7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d016b95ea2a2d5d94b8db47a2d6c9d5cc577083f
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50064446"
---
# <a name="benefits-of-character-set-portability"></a>Vantaggi della portabilità dei set di caratteri

È possibile trarre vantaggio dall'utilizzo delle funzionalità di portabilità di runtime C e MFC anche se non si prevede attualmente da internazionalizzare dell'applicazione:

- Scrittura di codice in modo portabile la codebase più flessibile. È in un secondo momento possibile spostarla facilmente a MBCS o Unicode.

- Utilizzo di Unicode rende più efficiente delle applicazioni per Windows. Dato che Windows Usa Unicode, le stringhe non Unicode passate da e verso il sistema operativo devono essere convertite, che comporta un sovraccarico.

## <a name="see-also"></a>Vedere anche

[Unicode e MBCS](../text/unicode-and-mbcs.md)<br/>
[Supporto per Unicode](../text/support-for-unicode.md)