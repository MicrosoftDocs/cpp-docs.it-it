---
description: 'Altre informazioni su: errore degli strumenti del linker LNK2017'
title: Errore degli strumenti del linker LNK2017
ms.date: 11/04/2016
f1_keywords:
- LNK2017
helpviewer_keywords:
- LNK2017
ms.assetid: f7c21733-b0fb-4888-a295-9b453ba6ee77
ms.openlocfilehash: e4215d7c1730f85f43c2440163fa03ad97c741e5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97338446"
---
# <a name="linker-tools-error-lnk2017"></a>Errore degli strumenti del linker LNK2017

la rilocazione ' symbol ' in ' segment ' non è valida senza/LARGEADDRESSAWARE: NO

Si sta provando a compilare un'immagine a 64 bit con indirizzi a 32 bit. A tale scopo, è necessario:

- Usare un indirizzo di carico fisso.

- Limitare l'immagine a 3 GB.

- Specificare [/LARGEADDRESSAWARE: No](../../build/reference/largeaddressaware-handle-large-addresses.md).
