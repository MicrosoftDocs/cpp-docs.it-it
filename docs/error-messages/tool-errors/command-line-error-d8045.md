---
title: Errore della riga di comando D8045
ms.date: 11/04/2016
f1_keywords:
- D8045
helpviewer_keywords:
- D8045
ms.assetid: 01c8808c-bac1-4b4d-8a90-b595f95e9318
ms.openlocfilehash: 7964c2539b5358d2d946e530c4ee75110857446d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50490589"
---
# <a name="command-line-error-d8045"></a>Errore della riga di comando D8045

non è possibile compilare il file C 'file' con l'opzione /clr

Solo file di codice sorgente C++ possono essere passati a una compilazione che usa **/clr**.  Uso **/TP** per compilare un file di c come file con estensione cpp; vedere [/Tc, /Tp, /TC, /TP (specifica del tipo di File di origine)](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md) per altre informazioni.

Per altre informazioni, vedere [/clr (Compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).

D8045 può verificarsi anche se si compila un'applicazione ATL con Visual C++. Visualizzare [procedura: migrare a /clr](../../dotnet/how-to-migrate-to-clr.md) per altre informazioni.