---
title: Errore irreversibile C1905 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1905
dev_langs:
- C++
helpviewer_keywords:
- C1905
ms.assetid: fefc6769-477f-45a2-9878-6f0a5f42472c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 263bf0ff63d71f381e68ea33b294abd423f59bf4
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46058445"
---
# <a name="fatal-error-c1905"></a>Errore irreversibile C1905

Front end e back end non compatibili (il processore di destinazione deve essere lo stesso)

Questo errore si verifica quando un file con estensione obj viene generato da un front-end del compilatore (C1.dll) destinato a un processore, ad esempio x86, ARM o x64, ma viene letto da un back-end (C2.dll) destinato a un processore diverso.

Per risolvere il problema, assicurarsi di usare un front end e un back end corrispondenti. Questa è la condizione predefinita per progetti creati in Visual Studio. Questo errore può verificarsi se è stato modificato il file di progetto e si sono usati percorsi diversi per gli strumenti del compilatore. Se il percorso per gli strumenti del compilatore non è stato impostato in modo specifico, questo errore può verificarsi se l'installazione di Visual Studio è danneggiata. Ad esempio, è possibile che i file DLL del compilatore siano stati copiati da un percorso a un altro. Uso **programmi e funzionalità** nel Pannello di controllo di Windows per ripristinare o reinstallare Visual Studio.