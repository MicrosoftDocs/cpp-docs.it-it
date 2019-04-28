---
title: Errore degli strumenti del linker LNK2017
ms.date: 11/04/2016
f1_keywords:
- LNK2017
helpviewer_keywords:
- LNK2017
ms.assetid: f7c21733-b0fb-4888-a295-9b453ba6ee77
ms.openlocfilehash: ce5332c2812740ef0b8c7d8e9c64a095d20a4e2b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62299055"
---
# <a name="linker-tools-error-lnk2017"></a>Errore degli strumenti del linker LNK2017

rilocazione di 'symbol' in 'segment' non valida senza /LARGEADDRESSAWARE: No

Si sta provando a creare un'immagine a 64 bit con gli indirizzi a 32 bit. A tale scopo, è necessario:

- Usare un indirizzo di caricamento predefinito.

- Limitare l'immagine a 3 GB.

- Specificare [/LARGEADDRESSAWARE: No](../../build/reference/largeaddressaware-handle-large-addresses.md).