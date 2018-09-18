---
title: Errore della riga di comando D8045 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- D8045
dev_langs:
- C++
helpviewer_keywords:
- D8045
ms.assetid: 01c8808c-bac1-4b4d-8a90-b595f95e9318
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6838202178e8012df61d17e2434461d6f4858bf3
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46022786"
---
# <a name="command-line-error-d8045"></a>Errore della riga di comando D8045

non è possibile compilare il file C 'file' con l'opzione /clr

Solo file di codice sorgente C++ possono essere passati a una compilazione che usa **/clr**.  Uso **/TP** per compilare un file di c come file con estensione cpp; vedere [/Tc, /Tp, /TC, /TP (specifica del tipo di File di origine)](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md) per altre informazioni.

Per altre informazioni, vedere [/clr (Compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).

D8045 può verificarsi anche se si compila un'applicazione ATL con Visual C++. Visualizzare [procedura: migrare a /clr](../../dotnet/how-to-migrate-to-clr.md) per altre informazioni.