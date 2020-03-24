---
title: Errore irreversibile C1382
ms.date: 11/04/2016
f1_keywords:
- C1382
helpviewer_keywords:
- C1382
ms.assetid: 7a100f8c-3179-4927-a2f1-98de4c753850
ms.openlocfilehash: 6ed70a81c4ae2028d09b694f325f83454e99a587
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80203099"
---
# <a name="fatal-error-c1382"></a>Errore irreversibile C1382

il file PCH ' file ' è stato ricompilato dopo la generazione di ' obj '. Ricompilare l'oggetto

Quando si usa [/LTCG](../../build/reference/ltcg-link-time-code-generation.md), il compilatore ha rilevato un file PCH più recente di un CIL. obj che vi fa riferimento. Le informazioni nel file CIL. obj non sono aggiornate. Ricompilare l'oggetto.

C1382 può anche verificarsi se si esegue la compilazione con **/YC**, ma si passano anche più file di codice sorgente al compilatore.  Per risolvere il caso, non usare **/YC** quando si passano più file di codice sorgente al compilatore.  Per ulteriori informazioni, vedere [/YC (Crea file di intestazione precompilata)](../../build/reference/yc-create-precompiled-header-file.md).
