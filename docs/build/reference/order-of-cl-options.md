---
description: 'Altre informazioni su: ordine delle opzioni CL'
title: Ordine delle opzioni CL (C++)-Visual Studio
ms.date: 12/14/2018
helpviewer_keywords:
- cl.exe compiler, setting options
ms.assetid: 300908ce-ae00-4b45-964b-e4e69ff6777b
ms.openlocfilehash: bc0290164ff40cf45d8d0a1e9f07e683e408c251
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97226415"
---
# <a name="order-of-cl-options"></a>Ordine delle opzioni CL

Le opzioni possono essere visualizzate in qualsiasi punto della riga di comando CL, ad eccezione dell'opzione/link, che deve essere eseguita per ultima. Il compilatore inizia con le opzioni specificate nella [variabile di ambiente CL](cl-environment-variables.md) , quindi legge la riga di comando da sinistra a destra, elaborando i file dei comandi nell'ordine in cui li rileva. Ogni opzione si applica a tutti i file nella riga di comando. Se CL rileva opzioni in conflitto, usa l'opzione più a destra.

## <a name="see-also"></a>Vedi anche

[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
