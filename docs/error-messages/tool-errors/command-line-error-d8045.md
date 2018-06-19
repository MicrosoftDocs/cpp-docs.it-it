---
title: Errore della riga di comando D8045 | Documenti Microsoft
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
ms.openlocfilehash: 4cf1248c072374cbe65d74136dfd1a8680e483b0
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33297089"
---
# <a name="command-line-error-d8045"></a>Errore della riga di comando D8045
Impossibile compilare il file C 'file' con l'opzione /clr  
  
 Solo file di codice sorgente C++ possono essere passati a una compilazione che utilizza **/clr**.  Utilizzare **/TP** per compilare un file c come file con estensione cpp; vedere [/Tc, /Tp, /TC, /TP (specifica del tipo File di origine)](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md) per ulteriori informazioni.  
  
 Per altre informazioni, vedere [/clr (Compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
 D8045 può verificarsi anche se si compila un'applicazione ATL con Visual C++. Vedere [procedura: migrare a /clr](../../dotnet/how-to-migrate-to-clr.md) per ulteriori informazioni.