---
title: Errore irreversibile C1210 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1210
dev_langs:
- C++
helpviewer_keywords:
- C1210
ms.assetid: e2208309-c284-425c-a7e8-48e96e66f35b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4d22a34f44fb2c97fe341cb313d7917a35506cdd
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/01/2018
ms.locfileid: "34704984"
---
# <a name="fatal-error-c1210"></a>Errore irreversibile C1210

> /clr:pure e /clr:safe non supportate dalla versione del runtime installata

Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

L'errore C1210 si verifica quando è presente un compilatore per la versione corrente, ma un Common Language Runtime di una versione precedente.

Alcune funzionalità del compilatore potrebbero non funzionare in una versione precedente del runtime.

Per risolvere l'errore C1210, installare la versione di Common Language Runtime che deve essere usata con il compilatore.