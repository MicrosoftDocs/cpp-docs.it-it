---
description: 'Altre informazioni su: dove definire le macro'
title: Definizione delle macro
ms.date: 11/04/2016
helpviewer_keywords:
- defining macros
- macros, NMAKE
- NMAKE program, defining macros
ms.assetid: 0fc59ec5-5f58-4644-b7da-7b021f7001af
ms.openlocfilehash: b5fc7d6e1fd8247816993929791bf734596d00e6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97259201"
---
# <a name="where-to-define-macros"></a>Definizione delle macro

Definire le macro in una riga di comando, un file di comando, un makefile o il file di Tools.ini.

In un makefile o nel file di Tools.ini, ogni definizione di macro deve essere visualizzata in una riga separata e non può iniziare con uno spazio o una scheda. Gli spazi o le tabulazioni intorno al segno di uguale vengono ignorati. Tutti i [caratteri stringa](defining-an-nmake-macro.md) sono valori letterali, incluse le virgolette circostanti e gli spazi incorporati.

In una riga di comando o un file di comando, spazi e tabulazioni delimitano gli argomenti e non possono racchiudere il segno di uguale. Se `string` contiene spazi o schede incorporate, racchiudere la stringa stessa o l'intera macro racchiusa tra virgolette doppie ("").

## <a name="see-also"></a>Vedi anche

[Definizione di una macro di NMAKE](defining-an-nmake-macro.md)
