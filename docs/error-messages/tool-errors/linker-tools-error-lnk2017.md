---
title: Errore degli strumenti del linker LNK2017
ms.date: 11/04/2016
f1_keywords:
- LNK2017
helpviewer_keywords:
- LNK2017
ms.assetid: f7c21733-b0fb-4888-a295-9b453ba6ee77
ms.openlocfilehash: 02e80de5c34809a331003f3b0fb28d32e138a531
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80194733"
---
# <a name="linker-tools-error-lnk2017"></a>Errore degli strumenti del linker LNK2017

la rilocazione ' symbol ' in ' segment ' non è valida senza/LARGEADDRESSAWARE: NO

Si sta provando a compilare un'immagine a 64 bit con indirizzi a 32 bit. A tale scopo, è necessario:

- Usare un indirizzo di carico fisso.

- Limitare l'immagine a 3 GB.

- Specificare [/LARGEADDRESSAWARE: No](../../build/reference/largeaddressaware-handle-large-addresses.md).
