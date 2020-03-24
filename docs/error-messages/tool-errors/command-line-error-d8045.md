---
title: Errore della riga di comando D8045
ms.date: 11/04/2016
f1_keywords:
- D8045
helpviewer_keywords:
- D8045
ms.assetid: 01c8808c-bac1-4b4d-8a90-b595f95e9318
ms.openlocfilehash: 05a2d3851e58062e1e326781a223e2f4b0346620
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80196846"
---
# <a name="command-line-error-d8045"></a>Errore della riga di comando D8045

Impossibile compilare il file C'file ' con l'opzione/CLR

Solo C++ i file di codice sorgente possono essere passati a una compilazione che utilizza **/CLR**.  Usare **/TP** per compilare un file con estensione c come file cpp. Per ulteriori informazioni, vedere [/TC,/TP,/TC,/TP (specifica il tipo di file di origine)](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md) .

Per altre informazioni, vedere [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md).

D8045 può verificarsi anche se si compila un'applicazione ATL usando Visual C++. Per ulteriori informazioni [, vedere Procedura: eseguire la migrazione a/CLR](../../dotnet/how-to-migrate-to-clr.md) .
