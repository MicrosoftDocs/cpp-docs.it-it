---
title: Errore irreversibile C1210
ms.date: 11/04/2016
f1_keywords:
- C1210
helpviewer_keywords:
- C1210
ms.assetid: e2208309-c284-425c-a7e8-48e96e66f35b
ms.openlocfilehash: a90ca3e3b55642f1a6cd847997b83e4b7db46818
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62385849"
---
# <a name="fatal-error-c1210"></a>Errore irreversibile C1210

> /clr:pure e /clr:safe non supportate dalla versione del runtime installata

Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono state deprecate in Visual Studio 2015 e non sono supportate in Visual Studio 2017.

L'errore C1210 si verifica quando è presente un compilatore per la versione corrente, ma un Common Language Runtime di una versione precedente.

Alcune funzionalità del compilatore potrebbero non funzionare in una versione precedente del runtime.

Per risolvere l'errore C1210, installare la versione di Common Language Runtime che deve essere usata con il compilatore.