---
title: Errore irreversibile C1126
ms.date: 11/04/2016
f1_keywords:
- C1126
helpviewer_keywords:
- C1126
ms.assetid: f22b26a6-8ad7-47cf-a237-196c8ea60aca
ms.openlocfilehash: 3f4d152163d3b21ddf99644c34e63f35ca15e6e9
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62230012"
---
# <a name="fatal-error-c1126"></a>Errore irreversibile C1126

'identifier': l'allocazione automatica supera le dimensioni

Spazio allocato per le variabili locali di una funzione (più di una quantità limitata di spazio usato dal compilatore, ad esempio un byte 20 aggiuntivi per le funzioni sostituibili) supera il limite.

Per correggere questo errore, utilizzare `malloc` o `new` allocare grandi quantità di dati.