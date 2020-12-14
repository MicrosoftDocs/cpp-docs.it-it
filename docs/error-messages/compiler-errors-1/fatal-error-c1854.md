---
description: 'Altre informazioni su: errore irreversibile C1854'
title: Errore irreversibile C1854
ms.date: 11/04/2016
f1_keywords:
- C1854
helpviewer_keywords:
- C1854
ms.assetid: 8c21a9cc-1737-475c-9e57-8725cd8937c1
ms.openlocfilehash: 1c08db55089853545afa511213fc164c978bd4ff
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97276205"
---
# <a name="fatal-error-c1854"></a>Errore irreversibile C1854

> non è possibile sovrascrivere le informazioni generate durante la creazione dell'intestazione precompilata nel file oggetto:'*filename*'

È stata specificata l'opzione [/Yu (USA il file di intestazione precompilata)](../../build/reference/yu-use-precompiled-header-file.md) dopo aver specificato l'opzione [/YC (Crea file di intestazione precompilata)](../../build/reference/yc-create-precompiled-header-file.md) per lo stesso file.

Per risolvere questo problema, in generale, impostare un solo file nel progetto da compilare usando l'opzione **/YC** e impostare tutti gli altri file da compilare usando l'opzione **/Yu** . Per informazioni dettagliate sull'uso dell'opzione **/YC** e su come impostarla nell'IDE di Visual Studio, vedere [/YC (creare un file di intestazione precompilata)](../../build/reference/yc-create-precompiled-header-file.md). Per altre informazioni sull'uso di intestazioni precompilate, vedere [creazione di file di intestazione precompilata](../../build/creating-precompiled-header-files.md).
