---
title: Errore irreversibile C1382
ms.date: 11/04/2016
f1_keywords:
- C1382
helpviewer_keywords:
- C1382
ms.assetid: 7a100f8c-3179-4927-a2f1-98de4c753850
ms.openlocfilehash: 2b7f6fd878f0d0ba6cde19a3a316a01c390e954a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62228564"
---
# <a name="fatal-error-c1382"></a>Errore irreversibile C1382

il file PCH 'file' è stato generato 'obj' è stato ricompilato. Ricompilare l'oggetto

Quando si usa [/LTCG](../../build/reference/ltcg-link-time-code-generation.md), il compilatore ha rilevato un file con estensione pch più recente di un file obj CIL che punta ad esso. Le informazioni nel file con estensione obj elenco CIL non sono aggiornate. Ricompilare l'oggetto.

C1382 può verificarsi anche se si esegue la compilazione con **/Yc**, ma anche passare più origini per i file di codice al compilatore.  Per risolvere, non utilizzare **/Yc** quando si passano più origini, i file di codice al compilatore.  Per altre informazioni, vedere [/Yc (Crea precompilati o meno File di intestazione)](../../build/reference/yc-create-precompiled-header-file.md).