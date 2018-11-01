---
title: Errore irreversibile C1854
ms.date: 11/04/2016
f1_keywords:
- C1854
helpviewer_keywords:
- C1854
ms.assetid: 8c21a9cc-1737-475c-9e57-8725cd8937c1
ms.openlocfilehash: feb385161c9bc13d89052b4947174fbdce7a0d00
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50457382"
---
# <a name="fatal-error-c1854"></a>Errore irreversibile C1854

> non è possibile sovrascrivere le informazioni generate durante la creazione dell'intestazione precompilata nel file oggetto: '*filename*'

È specificato il [/Yu (Usa il File intestazione precompilata)](../../build/reference/yu-use-precompiled-header-file.md) opzione dopo aver specificato le [/Yc (Crea precompilati o meno File di intestazione)](../../build/reference/yc-create-precompiled-header-file.md) opzione per lo stesso file.

Per risolvere questo problema, in generale, impostare un solo file nel progetto da compilare tramite il **/Yc** opzione e impostare tutti gli altri file da compilare tramite il **/Yu** opzione. Per informazioni dettagliate sull'uso delle **/Yc** opzione e come impostarla in IDE di Visual Studio, vedere [/Yc (Crea precompilati o meno File di intestazione)](../../build/reference/yc-create-precompiled-header-file.md). Per altre informazioni sull'uso di intestazioni precompilate, vedere [creazione di file di intestazione precompilata](../../build/reference/creating-precompiled-header-files.md).
