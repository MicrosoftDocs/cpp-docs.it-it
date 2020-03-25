---
title: Errore irreversibile C1210
ms.date: 11/04/2016
f1_keywords:
- C1210
helpviewer_keywords:
- C1210
ms.assetid: e2208309-c284-425c-a7e8-48e96e66f35b
ms.openlocfilehash: 50bafa522c931c909b5ce163a78305ffc028765a
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80203385"
---
# <a name="fatal-error-c1210"></a>Errore irreversibile C1210

> /clr:pure e /clr:safe non supportate dalla versione del runtime installata

Le opzioni del compilatore **/CLR: pure** e **/CLR: safe** sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

L'errore C1210 si verifica quando è presente un compilatore per la versione corrente, ma un Common Language Runtime di una versione precedente.

Alcune funzionalità del compilatore potrebbero non funzionare in una versione precedente del runtime.

Per risolvere l'errore C1210, installare la versione di Common Language Runtime che deve essere usata con il compilatore.
