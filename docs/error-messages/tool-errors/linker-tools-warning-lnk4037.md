---
title: Avviso degli strumenti del linker LNK4037
ms.date: 10/04/2017
f1_keywords:
- LNK4037
helpviewer_keywords:
- LNK4037
ms.assetid: 9ba02fd3-b04f-4679-bab9-26fa82cf09bb
ms.openlocfilehash: 9a8121617e622fc12efe5bd26aac23faf2530f24
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62410304"
---
# <a name="linker-tools-warning-lnk4037"></a>Avviso degli strumenti del linker LNK4037

>«*simbolo*' non esiste; verrà ignorato

Il nome decorato *simbolo* potrebbe non essere ordinati tramite il [/ORDER](../../build/reference/order-put-functions-in-order.md) opzione perché non è stata trovata nel programma. Verificare la specifica del *simbolo* nel file di risposta ordine. Per altre informazioni, vedere la [/ORDER (inserisce le funzioni in ordine)](../../build/reference/order-put-functions-in-order.md) l'opzione del linker.

> [!NOTE]
> COLLEGAMENTO non è possibile ordinare le funzioni statiche poiché i nomi delle funzioni statiche non sono i nomi dei simboli pubblici. Quando **/ORDER** è specificato, viene generato questo avviso del linker per ogni simbolo nel file di risposta dell'ordine che sono statici o non trovato.