---
title: Strumenti del linker LNK4010 avviso | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4010
dev_langs:
- C++
helpviewer_keywords:
- LNK4010
ms.assetid: 2824cf99-4174-4b60-a6e2-c01e9f1ee52d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e214f603c31c72533d81a140023363880532191c
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46068071"
---
# <a name="linker-tools-warning-lnk4010"></a>Avviso degli strumenti del linker LNK4010

il numero di versione del sottosistema non è valido; verrà usata la versione predefinita del sottosistema

È possibile specificare una versione per il sottosistema dell'immagine ([/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md)). Ogni sottosistema è un requisito di versione minima. Se la versione specificata è inferiore a quello minimo, verrà generato questo avviso e il linker userà solo il sottosistema predefinito.