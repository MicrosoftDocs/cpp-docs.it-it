---
title: Errore irreversibile C1854
ms.date: 11/04/2016
f1_keywords:
- C1854
helpviewer_keywords:
- C1854
ms.assetid: 8c21a9cc-1737-475c-9e57-8725cd8937c1
ms.openlocfilehash: 83eb5e01eac377b8f19a0e94dc1518e3ed557c3b
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57820026"
---
# <a name="fatal-error-c1854"></a>Errore irreversibile C1854

> non è possibile sovrascrivere le informazioni generate durante la creazione dell'intestazione precompilata nel file oggetto: '*filename*'

È specificato il [/Yu (Usa il File intestazione precompilata)](../../build/reference/yu-use-precompiled-header-file.md) opzione dopo aver specificato le [/Yc (Crea precompilati o meno File di intestazione)](../../build/reference/yc-create-precompiled-header-file.md) opzione per lo stesso file.

Per risolvere questo problema, in generale, impostare un solo file nel progetto da compilare tramite il **/Yc** opzione e impostare tutti gli altri file da compilare tramite il **/Yu** opzione. Per informazioni dettagliate sull'uso delle **/Yc** opzione e come impostarla in IDE di Visual Studio, vedere [/Yc (Crea precompilati o meno File di intestazione)](../../build/reference/yc-create-precompiled-header-file.md). Per altre informazioni sull'uso di intestazioni precompilate, vedere [creazione di file di intestazione precompilata](../../build/creating-precompiled-header-files.md).
