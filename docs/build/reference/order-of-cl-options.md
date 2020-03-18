---
title: Ordine delle opzioni CL (C++)-Visual Studio
ms.date: 12/14/2018
helpviewer_keywords:
- cl.exe compiler, setting options
ms.assetid: 300908ce-ae00-4b45-964b-e4e69ff6777b
ms.openlocfilehash: 6c57a68dd15d82a9d6a01bfe145374bda6eb1510
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79439195"
---
# <a name="order-of-cl-options"></a>Ordine delle opzioni CL

Le opzioni possono essere visualizzate in qualsiasi punto della riga di comando CL, ad eccezione dell'opzione/link, che deve essere eseguita per ultima. Il compilatore inizia con le opzioni specificate nella [variabile di ambiente CL](cl-environment-variables.md) , quindi legge la riga di comando da sinistra a destra, elaborando i file dei comandi nell'ordine in cui li rileva. Ogni opzione si applica a tutti i file nella riga di comando. Se CL rileva opzioni in conflitto, usa l'opzione più a destra.

## <a name="see-also"></a>Vedere anche

[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
