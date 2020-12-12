---
description: 'Altre informazioni su: avviso NMAKE U4010'
title: 'Avviso U4010 di NMAKE '
ms.date: 11/04/2016
f1_keywords:
- U4010
helpviewer_keywords:
- U4010
ms.assetid: 99d8eb9a-ae31-40d1-b8c5-8c66732127d3
ms.openlocfilehash: d0c72044576ebf3441fdec7980c933edec671097
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97334789"
---
# <a name="nmake-warning-u4010"></a>Avviso U4010 di NMAKE 

' destinazione ': compilazione non riuscita. /K specificato, continuando...

Un comando nel blocco Commands per la destinazione specificata ha restituito un codice di uscita diverso da zero. L'opzione/K ha indicato a NMAKE di continuare l'elaborazione di parti non correlate della compilazione e di emettere un codice di uscita 1 al termine della sessione di NMAKE.

Se la destinazione specificata è, a sua volta dipendente da un'altra destinazione, NMAKE genera un avviso [U4011](../../error-messages/tool-errors/nmake-warning-u4011.md) dopo questo avviso.
