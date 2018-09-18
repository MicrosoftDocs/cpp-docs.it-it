---
title: Errore irreversibile C1382 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1382
dev_langs:
- C++
helpviewer_keywords:
- C1382
ms.assetid: 7a100f8c-3179-4927-a2f1-98de4c753850
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3a5a6ce312c5ef886ef25e8de46e6d3376eded2e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46030653"
---
# <a name="fatal-error-c1382"></a>Errore irreversibile C1382

il file PCH 'file' è stato generato 'obj' è stato ricompilato. Ricompilare l'oggetto

Quando si usa [/LTCG](../../build/reference/ltcg-link-time-code-generation.md), il compilatore ha rilevato un file con estensione pch più recente di un file obj CIL che punta ad esso. Le informazioni nel file con estensione obj elenco CIL non sono aggiornate. Ricompilare l'oggetto.

C1382 può verificarsi anche se si esegue la compilazione con **/Yc**, ma anche passare più origini per i file di codice al compilatore.  Per risolvere, non utilizzare **/Yc** quando si passano più origini, i file di codice al compilatore.  Per altre informazioni, vedere [/Yc (Crea precompilati o meno File di intestazione)](../../build/reference/yc-create-precompiled-header-file.md).