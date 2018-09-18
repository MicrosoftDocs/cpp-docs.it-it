---
title: Strumenti del linker LNK2017 errore | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK2017
dev_langs:
- C++
helpviewer_keywords:
- LNK2017
ms.assetid: f7c21733-b0fb-4888-a295-9b453ba6ee77
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 80af2bb6475fc37b7feba5b29bfe9c1292740286
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46022450"
---
# <a name="linker-tools-error-lnk2017"></a>Errore degli strumenti del linker LNK2017

rilocazione di 'symbol' in 'segment' non valida senza /LARGEADDRESSAWARE: No

Si sta provando a creare un'immagine a 64 bit con gli indirizzi a 32 bit. A tale scopo, è necessario:

- Usare un indirizzo di caricamento predefinito.

- Limitare l'immagine a 3 GB.

- Specificare [/LARGEADDRESSAWARE: No](../../build/reference/largeaddressaware-handle-large-addresses.md).