---
title: Errore irreversibile C1854 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- devlang-cpp
ms.topic: error-reference
f1_keywords:
- C1854
dev_langs:
- C++
helpviewer_keywords:
- C1854
ms.assetid: 8c21a9cc-1737-475c-9e57-8725cd8937c1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 83450169ec928bb77e46916619c84b3b9a3443a3
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46029390"
---
# <a name="fatal-error-c1854"></a>Errore irreversibile C1854

> non è possibile sovrascrivere le informazioni generate durante la creazione dell'intestazione precompilata nel file oggetto: '*filename*'

È specificato il [/Yu (Usa il File intestazione precompilata)](../../build/reference/yu-use-precompiled-header-file.md) opzione dopo aver specificato le [/Yc (Crea precompilati o meno File di intestazione)](../../build/reference/yc-create-precompiled-header-file.md) opzione per lo stesso file.

Per risolvere questo problema, in generale, impostare un solo file nel progetto da compilare tramite il **/Yc** opzione e impostare tutti gli altri file da compilare tramite il **/Yu** opzione. Per informazioni dettagliate sull'uso delle **/Yc** opzione e come impostarla in IDE di Visual Studio, vedere [/Yc (Crea precompilati o meno File di intestazione)](../../build/reference/yc-create-precompiled-header-file.md). Per altre informazioni sull'uso di intestazioni precompilate, vedere [creazione di file di intestazione precompilata](../../build/reference/creating-precompiled-header-files.md).
