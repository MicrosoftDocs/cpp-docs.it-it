---
title: Avviso U4010 di NMAKE
ms.date: 11/04/2016
f1_keywords:
- U4010
helpviewer_keywords:
- U4010
ms.assetid: 99d8eb9a-ae31-40d1-b8c5-8c66732127d3
ms.openlocfilehash: f68da1893eec6325ccccfd0e2e2dd0e612f28eb9
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80193134"
---
# <a name="nmake-warning-u4010"></a>Avviso U4010 di NMAKE

' destinazione ': compilazione non riuscita. /K specificato, continuando...

Un comando nel blocco Commands per la destinazione specificata ha restituito un codice di uscita diverso da zero. L'opzione/K ha indicato a NMAKE di continuare l'elaborazione di parti non correlate della compilazione e di emettere un codice di uscita 1 al termine della sessione di NMAKE.

Se la destinazione specificata è, a sua volta dipendente da un'altra destinazione, NMAKE genera un avviso [U4011](../../error-messages/tool-errors/nmake-warning-u4011.md) dopo questo avviso.
